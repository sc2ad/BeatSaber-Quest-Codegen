#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__RuleMatcher_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleComplexSelector_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::RuleMatcher.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::RuleMatcher::*)()>(&::UnityEngine::UIElements::RuleMatcher::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2c8bce4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::RuleMatcher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuleMatcher>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "sheet", ty: "::UnityEngine::UIElements::StyleSheet", modifiers: "", def_value: Some("csnull") }, CppParam { name: "complexSelector", ty: "::UnityEngine::UIElements::StyleComplexSelector", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::UIElements::RuleMatcher::RuleMatcher(::UnityEngine::UIElements::StyleSheet sheet, ::UnityEngine::UIElements::StyleComplexSelector complexSelector) noexcept : ::bs_hook::ValueTypeWrapper() {this->sheet = sheet;
this->complexSelector = complexSelector;
}
constexpr void ::UnityEngine::UIElements::RuleMatcher::__set_sheet(::UnityEngine::UIElements::StyleSheet value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleSheet, 0x0>(this->__instance, std::forward<::UnityEngine::UIElements::StyleSheet>(value));
}
constexpr ::UnityEngine::UIElements::StyleSheet ::UnityEngine::UIElements::RuleMatcher::__get_sheet() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleSheet, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::RuleMatcher::__set_complexSelector(::UnityEngine::UIElements::StyleComplexSelector value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleComplexSelector, 0x8>(this->__instance, std::forward<::UnityEngine::UIElements::StyleComplexSelector>(value));
}
constexpr ::UnityEngine::UIElements::StyleComplexSelector ::UnityEngine::UIElements::RuleMatcher::__get_complexSelector() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleComplexSelector, 0x8>(this->__instance);
}
 ::StringW ::UnityEngine::UIElements::RuleMatcher::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuleMatcher>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace
