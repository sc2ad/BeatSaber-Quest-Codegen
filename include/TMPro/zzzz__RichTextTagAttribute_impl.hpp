#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "TMPro/zzzz__RichTextTagAttribute_def.hpp"
#include "TMPro/zzzz__TagUnitType_def.hpp"
#include "TMPro/zzzz__TagValueType_def.hpp"
// Ctor Parameters [CppParam { name: "nameHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "valueHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "valueType", ty: "TMPro::TagValueType", modifiers: "", def_value: Some("{}") }, CppParam { name: "valueStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "valueLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unitType", ty: "TMPro::TagUnitType", modifiers: "", def_value: Some("{}") }]
constexpr TMPro::RichTextTagAttribute::RichTextTagAttribute(int32_t nameHashCode, int32_t valueHashCode, TMPro::TagValueType valueType, int32_t valueStartIndex, int32_t valueLength, TMPro::TagUnitType unitType) noexcept : ::bs_hook::ValueTypeWrapper() {this->nameHashCode = nameHashCode;
this->valueHashCode = valueHashCode;
this->valueType = valueType;
this->valueStartIndex = valueStartIndex;
this->valueLength = valueLength;
this->unitType = unitType;
}
constexpr void TMPro::RichTextTagAttribute::__set_nameHashCode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::RichTextTagAttribute::__get_nameHashCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void TMPro::RichTextTagAttribute::__set_valueHashCode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::RichTextTagAttribute::__get_valueHashCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void TMPro::RichTextTagAttribute::__set_valueType(TMPro::TagValueType value)  {
::cordl_internals::setInstanceField<TMPro::TagValueType, 0x8>(this->__instance, std::forward<TMPro::TagValueType>(value));
}
constexpr TMPro::TagValueType TMPro::RichTextTagAttribute::__get_valueType() const {
return ::cordl_internals::getInstanceField<TMPro::TagValueType, 0x8>(this->__instance);
}
constexpr void TMPro::RichTextTagAttribute::__set_valueStartIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::RichTextTagAttribute::__get_valueStartIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void TMPro::RichTextTagAttribute::__set_valueLength(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::RichTextTagAttribute::__get_valueLength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void TMPro::RichTextTagAttribute::__set_unitType(TMPro::TagUnitType value)  {
::cordl_internals::setInstanceField<TMPro::TagUnitType, 0x14>(this->__instance, std::forward<TMPro::TagUnitType>(value));
}
constexpr TMPro::TagUnitType TMPro::RichTextTagAttribute::__get_unitType() const {
return ::cordl_internals::getInstanceField<TMPro::TagUnitType, 0x14>(this->__instance);
}
