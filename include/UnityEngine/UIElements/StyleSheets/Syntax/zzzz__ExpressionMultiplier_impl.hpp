#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__ExpressionMultiplier_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__ExpressionMultiplierType_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier.get_type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType (::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier::*)()>(&::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c77b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier>::get(),
                            "get_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier.set_type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier::*)(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType)>(&::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier::set_type)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c7eac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier>::get(),
                            "set_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier::*)(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType)>(&::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c7ed34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier.SetType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier::*)(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType)>(&::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier::SetType)> {
  constexpr static std::size_t size = 0x1054;
  constexpr static std::size_t addrs = 0x2c7ed44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier>::get(),
                            "SetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_Type", ty: "::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType", modifiers: "", def_value: Some("{}") }, CppParam { name: "min", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "max", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier::ExpressionMultiplier(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType m_Type, int32_t min, int32_t max) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Type = m_Type;
this->min = min;
this->max = max;
}
constexpr void ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier::__set_m_Type(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType, 0x0>(this->__instance, std::forward<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType>(value));
}
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier::__get_m_Type() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier::__set_min(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier::__get_min() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier::__set_max(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier::__get_max() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
 ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier::get_type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier>::get(),
                            "get_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier::set_type(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier>::get(),
                            "set_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
/// @param type: ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType (default: 0)
 void ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier::_ctor(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, type);
}
 void ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier::SetType(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier>::get(),
                            "SetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
} // end anonymous namespace
