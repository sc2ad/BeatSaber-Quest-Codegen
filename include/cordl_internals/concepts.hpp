#pragma once

#include <concepts>
#include <type_traits>
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"

namespace {
namespace cordl_internals {
    template <typename T, typename U>
    concept convertible_to = std::is_convertible_v<T, U>;

    template<typename T>
    concept has_value_marker = requires {
        { T::__CORDL_IS_VALUE_TYPE } -> convertible_to<bool>;
    };

    template<typename T, bool check>
    constexpr bool value_marker_check_v = false;

    template<has_value_marker T, bool check>
    constexpr bool value_marker_check_v<T, check> = T::__CORDL_IS_VALUE_TYPE == check;

    template <typename T>
    concept il2cpp_value_type = requires(T const& t) {
        { std::is_array_v<decltype(t.__instance)> };
        (value_marker_check_v<T, true> || std::is_same_v<std::remove_const<T>, ::bs_hook::EnumTypeWrapper> || std::is_same_v<std::remove_const<T>, ::bs_hook::ValueTypeWrapper>) == true;
    };

    template <typename T>
    concept il2cpp_reference_type = requires(T const& t) {
        { t.convert() } -> convertible_to<void*>;

        // ensure these constructors exist
        requires std::is_constructible_v<T, void*>;
        requires std::is_constructible_v<T, std::nullptr_t>;
        // is the value type marker set, and set to false, or is it an il2cppwrappertype
        (value_marker_check_v<T, false> || std::is_same_v<std::remove_const_t<T>, ::bs_hook::Il2CppWrapperType>) == true;
    };

  static_assert(il2cpp_reference_type<::bs_hook::Il2CppWrapperType>, "Il2CppWrapperType did not match the il2cpp_reference_type concept!"); // wrappertype should match reference type always

  template <class T, class U>
  concept is_or_is_backed_by =
      std::is_same_v<T, U> || (requires {
        typename T::__CORDL_BACKING_ENUM_TYPE;
      } && std::is_same_v<typename T::__CORDL_BACKING_ENUM_TYPE, U>);

    template <typename T>
    concept il2cpp_convertible = requires(T const& t) {
        {t.convert()} -> convertible_to<void*>;
    };
}
} // end anonymous namespace