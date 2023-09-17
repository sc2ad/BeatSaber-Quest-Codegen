#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__StyleVariable_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleVariable::*)(::StringW, ::UnityEngine::UIElements::StyleSheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle>)>(&::UnityEngine::UIElements::StyleVariable::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cf262c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::StyleValueHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariable.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::StyleVariable::*)()>(&::UnityEngine::UIElements::StyleVariable::GetHashCode)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2cf2638;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::StyleVariable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariable>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "sheet", ty: "::UnityEngine::UIElements::StyleSheet", modifiers: "", def_value: Some("csnull") }, CppParam { name: "handles", ty: "::ArrayW<::UnityEngine::UIElements::StyleValueHandle>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::UIElements::StyleVariable::StyleVariable(::StringW name, ::UnityEngine::UIElements::StyleSheet sheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle> handles) noexcept : ::bs_hook::ValueTypeWrapper() {this->name = name;
this->sheet = sheet;
this->handles = handles;
}
constexpr void ::UnityEngine::UIElements::StyleVariable::__set_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::UIElements::StyleVariable::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::StyleVariable::__set_sheet(::UnityEngine::UIElements::StyleSheet value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleSheet, 0x8>(this->__instance, std::forward<::UnityEngine::UIElements::StyleSheet>(value));
}
constexpr ::UnityEngine::UIElements::StyleSheet ::UnityEngine::UIElements::StyleVariable::__get_sheet() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleSheet, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::StyleVariable::__set_handles(::ArrayW<::UnityEngine::UIElements::StyleValueHandle> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::UIElements::StyleValueHandle>, 0x10>(this->__instance, std::forward<::ArrayW<::UnityEngine::UIElements::StyleValueHandle>>(value));
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleValueHandle> ::UnityEngine::UIElements::StyleVariable::__get_handles() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::UIElements::StyleValueHandle>, 0x10>(this->__instance);
}
 void ::UnityEngine::UIElements::StyleVariable::_ctor(::StringW name, ::UnityEngine::UIElements::StyleSheet sheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle> handles)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::StyleValueHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, name, sheet, handles);
}
 int32_t ::UnityEngine::UIElements::StyleVariable::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariable>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace
