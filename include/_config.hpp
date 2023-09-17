#pragma once
#include <stdint.h>
#include <array>
#include <concepts>
#include <type_traits>
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-list.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-functions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"

// always inline attribute
#define CORDL_ALWAYS_INLINE __attribute__((alwaysinline))
// hidden attribute
#define CORDL_HIDDEN __attribute__((visibility("hidden")))

#define CORDL_METHOD CORDL_HIDDEN CORDL_ALWAYS_INLINE
#define CORDL_TYPE CORDL_HIDDEN
#define CORDL_FIELD CORDL_HIDDEN
#define CORDL_PROP CORDL_HIDDEN

#define csnull ::cordl_internals::NullArg()

namespace bs_hook {
struct ValueTypeWrapper {
  constexpr static bool __CORDL_IS_VALUE_TYPE = true;
};
struct EnumTypeWrapper : public ValueTypeWrapper {
  constexpr static bool __CORDL_IS_VALUE_TYPE = true;
};
} // namespace bs_hook

namespace cordl_internals {
namespace internal {
template <std::size_t sz> struct NTTPString {
  constexpr NTTPString(char const (&n)[sz]) : data{} {
    std::copy_n(n, sz, data.begin());
  }
  std::array<char, sz> data;
};
} // namespace internal

/// @brief gets an offset from a given pointer
template <std::size_t offset>
constexpr inline uint8_t* getAtOffset(void* instance) {
  return reinterpret_cast<uint8_t*>(instance) + offset;
}

template <typename T, std::size_t offset>
CORDL_HIDDEN inline T getReferenceTypeInstance(void* instance) {
  return T(*reinterpret_cast<void**>(getAtOffset<offset>(instance)));
}

template <typename T, std::size_t offset>
CORDL_HIDDEN void setReferenceTypeInstance(void* instance, T t) {
  ::il2cpp_functions::Init();
  ::il2cpp_functions::gc_wbarrier_set_field(instance, getAtOffset<offset>(),
                                            t.convert());
}

template <typename T, std::size_t offset>
CORDL_HIDDEN inline T& getValueTypeInstance(void* instance) {
  // TODO: construct into union data
  return *reinterpret_cast<T*>(getAtOffset<offset>(instance));
}

template <typename T, std::size_t offset>
CORDL_HIDDEN inline void setValueTypeInstance(void* instance, T&& t) {
  // TODO: assign using union data
  *reinterpret_cast<T*>(getAtOffset<offset>(instance)) = t;
}

template <typename T, internal::NTTPString name, auto klass_resolver>
CORDL_HIDDEN T getReferenceTypeStatic() {
  auto klass = klass_resolver();
  if (!klass)
    throw NullException(std::string("Class for static field with name: ") +
                        name.data.data() + " is null!");
  auto val = ::il2cpp_utils::GetFieldValue<T>(klass, name.data.data());
  if (!val)
    throw FieldException(std::string("Could not get static field with name: ") +
                         name.data.data());
  return *val;
}

template <typename T, internal::NTTPString name, auto klass_resolver>
CORDL_HIDDEN void setReferenceTypeStatic(T t) {
  auto klass = klass_resolver();
  if (!klass)
    throw NullException(std::string("Class for static field with name: ") +
                        name.data.data() + " is null!");
  auto val = ::il2cpp_utils::SetFieldValue(klass, name.data.data(), t);
  if (!val)
    throw FieldException(std::string("Could not set static field with name: ") +
                         name.data.data());
  return *val;
}

template <typename T, internal::NTTPString name, auto klass_resolver>
CORDL_HIDDEN T getValueTypeStatic() {
  auto klass = klass_resolver();
  if (!klass)
    throw NullException(std::string("Class for static field with name: ") +
                        name.data.data() + " is null!");
  auto val = ::il2cpp_utils::GetFieldValue<T>(klass, name.data.data());
  if (!val)
    throw FieldException(std::string("Could not get static field with name: ") +
                         name.data.data());
  return *val;
}

template <typename T, internal::NTTPString name, auto klass_resolver>
CORDL_HIDDEN void setValueTypeStatic(T&& t) {
  auto klass = klass_resolver();
  if (!klass)
    throw NullException(std::string("Class for static field with name: ") +
                        name.data.data() + " is null!");
  auto val = ::il2cpp_utils::SetFieldValue(klass, name.data.data(), t);
  if (!val)
    throw FieldException(std::string("Could not set static field with name: ") +
                         name.data.data());
  return *val;
}

template <typename T, typename U>
concept convertible_to = std::is_convertible_v<T, U>;

template <typename T>
concept il2cpp_value_type = requires(T const& t) {
  { std::is_array_v<decltype(t.__instance)> };
  T::__CORDL_IS_VALUE_TYPE == true;
  //   { T::__CORDL_IS_VALUE_TYPE } -> std::equal_to_v<true>;
};

template <typename T>
concept il2cpp_reference_type = requires(T const& t) {
  { t.convert() } -> convertible_to<void*>;

  // ensure these constructors exist
  requires std::is_constructible_v<T, void*>;
  requires std::is_constructible_v<T, std::nullptr_t>;
  // and ensure cordl value type is set to false
  {
    std::bool_constant<T::__CORDL_IS_VALUE_TYPE == false>()
  } -> std::same_as<std::true_type>;
};

// ensure bs-hook il2cpp wrapper type matches our expectations
// TODO: Do this when Il2CppWrapperType has __CORDL_IS_VALUE_TYPE == false
// static_assert(il2cpp_reference_type<::bs_hook::Il2CppWrapperType>);

template <typename IT> struct InterfaceW : IT {
  void* instance;

  // pointer type
  explicit constexpr InterfaceW(void* o) noexcept : instance(o) {}

  // reference type ctor
  template <il2cpp_reference_type U>
    requires(std::is_assignable_v<U, IT>)
  constexpr InterfaceW(U o) noexcept : instance(o.convert()) {}

  // value type convert
  template <il2cpp_value_type U>
    requires(std::is_assignable_v<U, IT>)
  InterfaceW(U&& o)
      : instance(il2cpp_utils::ToIl2CppObject(std::forward<U>(o))) {}
};

// Type tag for passing null as a parameter without setting instance to null
struct NullArg {
  template <il2cpp_reference_type T> constexpr operator T() const noexcept {
    return T(nullptr);
  }
  constexpr operator ::bs_hook::Il2CppWrapperType() const noexcept {
    return ::bs_hook::Il2CppWrapperType(nullptr);
  }

  // convert to null anyways
  // this might cause issues when we have `Foo(il2cpp_reference_type)` and
  // `Foo(void*)`, hopefully not
  constexpr operator std::nullptr_t() const noexcept {
    return nullptr;
  }
  constexpr operator ::StringW() const noexcept {
    return StringW(nullptr);
  }

  template <typename T> constexpr operator ::ArrayW<T>() const noexcept {
    return ArrayW<T>(nullptr);
  }

  template <typename T> constexpr operator InterfaceW<T>() const noexcept {
    return InterfaceW<T>(nullptr);
  }

  template <typename T, typename U>
  constexpr operator ::ListW<T, U>() const noexcept {
    return ListW<T, U>(nullptr);
  }
};
} // namespace cordl_internals
