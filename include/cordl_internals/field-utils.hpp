#pragma once

#include "config.hpp"
#include "concepts.hpp"
#include "internal.hpp"
#include "exceptions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include <bit>
#include <cstddef>

namespace {
namespace cordl_internals {
  /// @brief method to find a field info in a klass
  /// @tparam name field name
  /// @tparam klass_resolver method to get the Il2CppClass* on which to get the klass
  template<internal::NTTPString name, auto klass_resolver>
  CORDL_HIDDEN FieldInfo* FindField() {
    static auto* klass = klass_resolver();
    if (!klass)
      throw NullException(std::string("Class for static field with name: ") +
                          name.data.data() + " is null!");
    static auto* field = ::il2cpp_utils::FindField(klass, name);
    if (!field)
      throw FieldException(std::string("Could not set static field with name: ") +
                          name.data.data());
    return field;
  }
#pragma region field setters
  /// @brief template for field setter method on ref types
  /// @tparam T field type
  /// @tparam offset field offset
  template<typename T, std::size_t offset>
  CORDL_HIDDEN void setInstanceField(void*, T&&);

  /// @brief template for field setter method on value types
  /// @tparam T field type
  /// @tparam offset field offset
  template<typename T, std::size_t offset, std::size_t sz>
  CORDL_HIDDEN constexpr void setInstanceField(std::array<std::byte, sz>&, T&&);

  /// @brief set reference type value @ offset on instance
  template<il2cpp_reference_type T, std::size_t offset>
  CORDL_HIDDEN void setInstanceField(void* instance, T&& v) {
    ::il2cpp_functions::Init();
    ::il2cpp_functions::gc_wbarrier_set_field(reinterpret_cast<Il2CppObject*>(instance), getAtOffset<offset>(instance), v.convert());
  }

  /// @brief set reference type value @ offset on instance of size sz
  template<il2cpp_reference_type T, std::size_t offset, std::size_t sz>
  CORDL_HIDDEN void setInstanceField(std::array<std::byte, sz>& instance, T&& v) {
    // TODO: should assigning a ref type field on a value type instance also require wbarrier?
    static_assert(offset <= sz - sizeof(void*), "offset is too large for the size of the instance to be assigned comfortably!");
    std::copy_n(std::bit_cast<std::array<std::byte, sizeof(void*)>>(v.convert()), sizeof(void*), std::next(instance.begin(), offset));
  }

  /// @brief set value type value @ offset on instance
  template<il2cpp_value_type T, std::size_t offset>
  CORDL_HIDDEN void setInstanceField(void* instance, T&& v) {
    std::memcpy(getAtOffset<offset>(instance), v.__instance.data(), T::__CORDL_VALUE_TYPE_SIZE);
  }

  /// @brief set value type value @ offset on instance of size sz
  template<il2cpp_value_type T, std::size_t offset, std::size_t sz>
  CORDL_HIDDEN constexpr void setInstanceField(std::array<std::byte, sz>& instance, T&& v) {
    static_assert(offset <= sz - T::__CORDL_VALUE_TYPE_SIZE, "offset is too large for the size of the instance to be assigned comfortably!");
    std::copy_n(v.__instance.begin(), T::__CORDL_VALUE_TYPE_SIZE, std::next(instance, offset));
  }

  /// @brief set trivial value @ offset on instance
  template<typename T, std::size_t offset>
  CORDL_HIDDEN void setInstanceField(void* instance, T&& v) {
    std::memcpy(getAtOffset<offset>(instance), &v, sizeof(T));
  }

  /// @brief set trivial value @ offset on instance of size sz
  template<typename T, std::size_t offset, std::size_t sz>
  CORDL_HIDDEN constexpr void setInstanceField(std::array<std::byte, sz>& instance, T&& v) {
    static_assert(offset <= sz - sizeof(T), "offset is too large for the size of the instance to be assigned comfortably!");
    std::copy_n(std::bit_cast<std::array<std::byte, sizeof(T)>>(v).begin(), sizeof(T), std::next(instance.begin(), offset));
  }

  /// @brief template for setting a static field on a class
  /// @tparam T field type
  /// @tparam name field name
  /// @tparam klass_resolver method to get the Il2CppClass* on which the field resides
  template<typename T, internal::NTTPString name, auto klass_resolver>
  CORDL_HIDDEN void setStaticField(T&& v);

  /// @brief method to set a field that's a reference type
  template<il2cpp_reference_type T, internal::NTTPString name, auto klass_resolver>
  CORDL_HIDDEN void setStaticField(T&& v) {
    static auto* field = FindField<name, klass_resolver>();
    ::il2cpp_functions::field_static_set_value(field, static_cast<void*>(v.convert()));
  }

  /// @brief method to set a field that's a value type
  template<il2cpp_value_type T, internal::NTTPString name, auto klass_resolver>
  CORDL_HIDDEN void setStaticField(T&& v) {
    static auto* field = FindField<name, klass_resolver>();
    ::il2cpp_functions::field_static_set_value(field, static_cast<void*>(v.__instance.data()));
  }

  /// @brief method to set a field that's a trivial type
  template<typename T, internal::NTTPString name, auto klass_resolver>
  CORDL_HIDDEN void setStaticField(T&& v) {
    static auto* field = FindField<name, klass_resolver>();
    ::il2cpp_functions::field_static_set_value(field, static_cast<void*>(&v));
  }

#pragma endregion // field setters

#pragma region field getters
  /// @brief template for field getter method on ref types
  /// @tparam T field type
  /// @tparam offset field offset
  template <typename T, std::size_t offset>
  [[nodiscard]] CORDL_HIDDEN T getInstanceField(void const* instance);

  /// @brief template for field getter method on value types
  /// @tparam T field type
  /// @tparam offset field offset
  /// @tparam sz wrapper array size
  template <typename T, std::size_t offset, std::size_t sz>
  [[nodiscard]] CORDL_HIDDEN constexpr T
  getInstanceField(std::array<std::byte, sz> const& instance);

  /// @brief get reference type value @ offset on instance
  template <il2cpp_reference_type T, std::size_t offset>
  [[nodiscard]] CORDL_HIDDEN T getInstanceField(void const* instance) {
    return T(*const_cast<void**>(getAtOffset<offset>(instance)));
  }

  /// @brief get reference type value @ offset on instance of size sz
  template <il2cpp_reference_type T, std::size_t offset, std::size_t sz>
  [[nodiscard]] CORDL_HIDDEN constexpr T
  getInstanceField(std::array<std::byte, sz> const& instance) {
    return T(*const_cast<void**>(static_cast<void const* const*>(
        static_cast<void const*>(&std::next(instance.begin() + offset)))));
  }

  /// @brief get value type value @ offset on instance
  template <il2cpp_value_type T, std::size_t offset>
  [[nodiscard]] CORDL_HIDDEN T getInstanceField(void const* instance) {
    std::array<std::byte, T::__CORDL_VALUE_TYPE_SIZE> data;
    std::memcpy(data.data(), getAtOffset<offset>(instance), T::__CORDL_VALUE_TYPE_SIZE);
    return T(data);
  }

  /// @brief get value type value @ offset on instance of size sz
  template <il2cpp_value_type T, std::size_t offset, std::size_t sz>
  [[nodiscard]] CORDL_HIDDEN constexpr T
  getInstanceField(std::array<std::byte, sz> const& instance) {
    static_assert(offset <= sz - T::__CORDL_VALUE_TYPE_SIZE, "offset is too large for the size of the instance to be assigned comfortably!");
    std::array<std::byte, T::__CORDL_VALUE_TYPE_SIZE> data;
    std::copy_n(std::next(instance.begin(), offset), T::__CORDL_VALUE_TYPE_SIZE, data.begin());
    return T(data);
  }

  /// @brief get trivial type value @ offset on instance
  template <typename T, std::size_t offset>
  [[nodiscard]] CORDL_HIDDEN T getInstanceField(void const* instance) {
    std::array<std::byte, sizeof(T)> data;
    std::memcpy(data.data(), getAtOffset<offset>(instance), sizeof(T));
    return std::bit_cast<T>(data);
  }

  /// @brief get trivial type value @ offset on instance of size sz
  template <typename T, std::size_t offset, std::size_t sz>
  [[nodiscard]] CORDL_HIDDEN constexpr T
  getInstanceField(std::array<std::byte, sz> const& instance) {
    static_assert(offset <= sz - sizeof(T), "offset is too large for the size of the instance to be assigned comfortably!");
    std::array<std::byte, sizeof(T)> arr;
    std::copy_n(std::next(instance.begin(), offset), sizeof(T), arr.begin());
    return std::bit_cast<T>(arr);
  }

  /// @brief template for getting a static field on a class
  /// @tparam T field type
  /// @tparam name field name
  /// @tparam klass_resolver method to get the Il2CppClass* on which the field resides
  template <typename T, internal::NTTPString name, auto klass_resolver>
  [[nodiscard]] CORDL_HIDDEN T getStaticField();

  /// @brief method to set a field that's a reference type
  template <il2cpp_reference_type T, internal::NTTPString name, auto klass_resolver>
  [[nodiscard]] CORDL_HIDDEN T getStaticField() {
    static auto* field = FindField<name, klass_resolver>();
    void* val{};
    ::il2cpp_functions::field_static_get_value(field, &val);
    return T(val);
  }

  /// @brief method to set a field that's a value type
  template <il2cpp_value_type T, internal::NTTPString name, auto klass_resolver>
  [[nodiscard]] CORDL_HIDDEN T getStaticField() {
    static auto* field = FindField<name, klass_resolver>();
    std::array<std::byte, T::__CORDL_VALUE_TYPE_SIZE> data;
    ::il2cpp_functions::field_static_get_value(field, static_cast<void*>(data.data()));
    return T(data);
  }

  /// @brief method to set a field that's a trivial type
  template <typename T, internal::NTTPString name, auto klass_resolver>
  [[nodiscard]] CORDL_HIDDEN T getStaticField() {
    static auto* field = FindField<name, klass_resolver>();
    T val{};
    ::il2cpp_functions::field_static_get_value(field, static_cast<void*>(&val));
    return val;
  }
#pragma endregion // field getters
}
} // end anonymous namespace