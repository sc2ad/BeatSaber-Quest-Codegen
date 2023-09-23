#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__SelectorMatchRecord_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleComplexSelector_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::SelectorMatchRecord._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::*)(UnityEngine::UIElements::StyleSheet, int32_t)>(&UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2c70d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::SelectorMatchRecord.Compare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(UnityEngine::UIElements::StyleSheets::SelectorMatchRecord, UnityEngine::UIElements::StyleSheets::SelectorMatchRecord)>(&UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::Compare)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2c70d40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "sheet", ty: "UnityEngine::UIElements::StyleSheet", modifiers: "", def_value: Some("csnull") }, CppParam { name: "styleSheetIndexInStack", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "complexSelector", ty: "UnityEngine::UIElements::StyleComplexSelector", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::SelectorMatchRecord(UnityEngine::UIElements::StyleSheet sheet, int32_t styleSheetIndexInStack, UnityEngine::UIElements::StyleComplexSelector complexSelector) noexcept : ::bs_hook::ValueTypeWrapper() {this->sheet = sheet;
this->styleSheetIndexInStack = styleSheetIndexInStack;
this->complexSelector = complexSelector;
}
constexpr void UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::__set_sheet(UnityEngine::UIElements::StyleSheet value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::StyleSheet, 0x0>(this->__instance, std::forward<UnityEngine::UIElements::StyleSheet>(value));
}
constexpr UnityEngine::UIElements::StyleSheet UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::__get_sheet() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::StyleSheet, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::__set_styleSheetIndexInStack(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::__get_styleSheetIndexInStack() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::__set_complexSelector(UnityEngine::UIElements::StyleComplexSelector value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::StyleComplexSelector, 0x10>(this->__instance, std::forward<UnityEngine::UIElements::StyleComplexSelector>(value));
}
constexpr UnityEngine::UIElements::StyleComplexSelector UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::__get_complexSelector() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::StyleComplexSelector, 0x10>(this->__instance);
}
 void UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::_ctor(UnityEngine::UIElements::StyleSheet sheet, int32_t styleSheetIndexInStack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, sheet, styleSheetIndexInStack);
}
 int32_t UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::Compare(UnityEngine::UIElements::StyleSheets::SelectorMatchRecord a, UnityEngine::UIElements::StyleSheets::SelectorMatchRecord b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, a, b);
}
