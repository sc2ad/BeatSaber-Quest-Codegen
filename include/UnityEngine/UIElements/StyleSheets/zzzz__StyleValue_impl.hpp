#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleValue_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
// Ctor Parameters [CppParam { name: "id", ty: "UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: Some("{}") }, CppParam { name: "keyword", ty: "UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: Some("{}") }, CppParam { name: "number", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "length", ty: "UnityEngine::UIElements::Length", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "resource", ty: "System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::StyleSheets::StyleValue::StyleValue(UnityEngine::UIElements::StyleSheets::StylePropertyId id, UnityEngine::UIElements::StyleKeyword keyword, float_t number, UnityEngine::UIElements::Length length, UnityEngine::Color color, System::Runtime::InteropServices::GCHandle resource) noexcept : ::bs_hook::ValueTypeWrapper() {this->id = id;
this->keyword = keyword;
this->number = number;
this->length = length;
this->color = color;
this->resource = resource;
}
constexpr void UnityEngine::UIElements::StyleSheets::StyleValue::__set_id(UnityEngine::UIElements::StyleSheets::StylePropertyId value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::StyleSheets::StylePropertyId, 0x0>(this->__instance, std::forward<UnityEngine::UIElements::StyleSheets::StylePropertyId>(value));
}
constexpr UnityEngine::UIElements::StyleSheets::StylePropertyId UnityEngine::UIElements::StyleSheets::StyleValue::__get_id() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::StyleSheets::StylePropertyId, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::StyleSheets::StyleValue::__set_keyword(UnityEngine::UIElements::StyleKeyword value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::StyleKeyword, 0x4>(this->__instance, std::forward<UnityEngine::UIElements::StyleKeyword>(value));
}
constexpr UnityEngine::UIElements::StyleKeyword UnityEngine::UIElements::StyleSheets::StyleValue::__get_keyword() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::StyleKeyword, 0x4>(this->__instance);
}
constexpr void UnityEngine::UIElements::StyleSheets::StyleValue::__set_number(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UIElements::StyleSheets::StyleValue::__get_number() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
constexpr void UnityEngine::UIElements::StyleSheets::StyleValue::__set_length(UnityEngine::UIElements::Length value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::Length, 0x8>(this->__instance, std::forward<UnityEngine::UIElements::Length>(value));
}
constexpr UnityEngine::UIElements::Length UnityEngine::UIElements::StyleSheets::StyleValue::__get_length() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::Length, 0x8>(this->__instance);
}
constexpr void UnityEngine::UIElements::StyleSheets::StyleValue::__set_color(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x8>(this->__instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color UnityEngine::UIElements::StyleSheets::StyleValue::__get_color() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x8>(this->__instance);
}
constexpr void UnityEngine::UIElements::StyleSheets::StyleValue::__set_resource(System::Runtime::InteropServices::GCHandle value)  {
::cordl_internals::setInstanceField<System::Runtime::InteropServices::GCHandle, 0x8>(this->__instance, std::forward<System::Runtime::InteropServices::GCHandle>(value));
}
constexpr System::Runtime::InteropServices::GCHandle UnityEngine::UIElements::StyleSheets::StyleValue::__get_resource() const {
return ::cordl_internals::getInstanceField<System::Runtime::InteropServices::GCHandle, 0x8>(this->__instance);
}
