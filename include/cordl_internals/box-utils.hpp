#pragma once

#include "config.hpp"
#include "concepts.hpp"
#include "internal.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils.hpp"

namespace {
namespace cordl_internals {
#pragma region boxing
    template<typename T>
    CORDL_HIDDEN ::bs_hook::Il2CppWrapperType Box(T);

    template<typename T>
    CORDL_HIDDEN ::bs_hook::Il2CppWrapperType Box(T*);

    template<>
    CORDL_HIDDEN constexpr ::bs_hook::Il2CppWrapperType Box<::bs_hook::Il2CppWrapperType>(::bs_hook::Il2CppWrapperType t) { return t; }

    template<il2cpp_convertible T>
    requires(!std::is_base_of_v<::bs_hook::Il2CppWrapperType, T>)
    CORDL_HIDDEN ::bs_hook::Il2CppWrapperType Box(T t) {
        return ::bs_hook::Il2CppWrapperType(il2cpp_functions::value_box(classof(T), t.convert()));
    }
    template<il2cpp_convertible T>
    requires(!std::is_base_of_v<::bs_hook::Il2CppWrapperType, T>)
    CORDL_HIDDEN ::bs_hook::Il2CppWrapperType Box(T* t) {
        return ::bs_hook::Il2CppWrapperType(il2cpp_functions::value_box(classof(T), t->convert()));
    }
#pragma endregion // boxing

#pragma region unboxing
    template<typename T>
    CORDL_HIDDEN T Unbox(::bs_hook::Il2CppWrapperType t) {
        return *reinterpret_cast<T*>(il2cpp_functions::object_unbox(t));
    }

    template<il2cpp_reference_type T>
    CORDL_HIDDEN T Unbox(::bs_hook::Il2CppWrapperType t) { return T(t.convert()); }

    template<il2cpp_value_type T>
    CORDL_HIDDEN T Unbox(::bs_hook::Il2CppWrapperType t) {
        std::array<std::byte, T::__CORDL_VALUE_TYPE_SIZE> data;
        std::memcpy(data.data(), il2cpp_functions::object_unbox(t), T::__CORDL_VALUE_TYPE_SIZE);
        return T(std::move(data));
    }
#pragma endregion // unboxing

}
} // end anonymous namespace