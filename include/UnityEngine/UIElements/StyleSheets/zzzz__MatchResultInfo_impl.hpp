#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/UIElements/StyleSheets/zzzz__MatchResultInfo_def.hpp"
#include "UnityEngine/UIElements/zzzz__PseudoStates_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::MatchResultInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::MatchResultInfo::*)(bool, ::UnityEngine::UIElements::PseudoStates, ::UnityEngine::UIElements::PseudoStates)>(&::UnityEngine::UIElements::StyleSheets::MatchResultInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c70d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::MatchResultInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PseudoStates>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PseudoStates>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "success", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "triggerPseudoMask", ty: "::UnityEngine::UIElements::PseudoStates", modifiers: "", def_value: Some("{}") }, CppParam { name: "dependencyPseudoMask", ty: "::UnityEngine::UIElements::PseudoStates", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSheets::MatchResultInfo::MatchResultInfo(bool success, ::UnityEngine::UIElements::PseudoStates triggerPseudoMask, ::UnityEngine::UIElements::PseudoStates dependencyPseudoMask) noexcept : ::bs_hook::ValueTypeWrapper() {this->success = success;
this->triggerPseudoMask = triggerPseudoMask;
this->dependencyPseudoMask = dependencyPseudoMask;
}
constexpr void ::UnityEngine::UIElements::StyleSheets::MatchResultInfo::__set_success(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UIElements::StyleSheets::MatchResultInfo::__get_success() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::StyleSheets::MatchResultInfo::__set_triggerPseudoMask(::UnityEngine::UIElements::PseudoStates value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::PseudoStates, 0x4>(this->__instance, std::forward<::UnityEngine::UIElements::PseudoStates>(value));
}
constexpr ::UnityEngine::UIElements::PseudoStates ::UnityEngine::UIElements::StyleSheets::MatchResultInfo::__get_triggerPseudoMask() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::PseudoStates, 0x4>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::StyleSheets::MatchResultInfo::__set_dependencyPseudoMask(::UnityEngine::UIElements::PseudoStates value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::PseudoStates, 0x8>(this->__instance, std::forward<::UnityEngine::UIElements::PseudoStates>(value));
}
constexpr ::UnityEngine::UIElements::PseudoStates ::UnityEngine::UIElements::StyleSheets::MatchResultInfo::__get_dependencyPseudoMask() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::PseudoStates, 0x8>(this->__instance);
}
 void ::UnityEngine::UIElements::StyleSheets::MatchResultInfo::_ctor(bool success, ::UnityEngine::UIElements::PseudoStates triggerPseudoMask, ::UnityEngine::UIElements::PseudoStates dependencyPseudoMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::MatchResultInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PseudoStates>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PseudoStates>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, success, triggerPseudoMask, dependencyPseudoMask);
}
} // end anonymous namespace
