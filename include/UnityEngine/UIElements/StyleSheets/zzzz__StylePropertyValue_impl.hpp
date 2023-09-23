#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyValue_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_def.hpp"
// Ctor Parameters [CppParam { name: "sheet", ty: "UnityEngine::UIElements::StyleSheet", modifiers: "", def_value: Some("csnull") }, CppParam { name: "handle", ty: "UnityEngine::UIElements::StyleValueHandle", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::StyleSheets::StylePropertyValue::StylePropertyValue(UnityEngine::UIElements::StyleSheet sheet, UnityEngine::UIElements::StyleValueHandle handle) noexcept : ::bs_hook::ValueTypeWrapper() {this->sheet = sheet;
this->handle = handle;
}
constexpr void UnityEngine::UIElements::StyleSheets::StylePropertyValue::__set_sheet(UnityEngine::UIElements::StyleSheet value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::StyleSheet, 0x0>(this->__instance, std::forward<UnityEngine::UIElements::StyleSheet>(value));
}
constexpr UnityEngine::UIElements::StyleSheet UnityEngine::UIElements::StyleSheets::StylePropertyValue::__get_sheet() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::StyleSheet, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::StyleSheets::StylePropertyValue::__set_handle(UnityEngine::UIElements::StyleValueHandle value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::StyleValueHandle, 0x8>(this->__instance, std::forward<UnityEngine::UIElements::StyleValueHandle>(value));
}
constexpr UnityEngine::UIElements::StyleValueHandle UnityEngine::UIElements::StyleSheets::StylePropertyValue::__get_handle() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::StyleValueHandle, 0x8>(this->__instance);
}
