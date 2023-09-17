#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/TextCore/Text/zzzz__XmlTagAttribute_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TagValueType_def.hpp"
// Ctor Parameters [CppParam { name: "nameHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "valueType", ty: "::UnityEngine::TextCore::Text::TagValueType", modifiers: "", def_value: Some("{}") }, CppParam { name: "valueStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "valueLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "valueHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::XmlTagAttribute::XmlTagAttribute(int32_t nameHashCode, ::UnityEngine::TextCore::Text::TagValueType valueType, int32_t valueStartIndex, int32_t valueLength, int32_t valueHashCode) noexcept : ::bs_hook::ValueTypeWrapper() {this->nameHashCode = nameHashCode;
this->valueType = valueType;
this->valueStartIndex = valueStartIndex;
this->valueLength = valueLength;
this->valueHashCode = valueHashCode;
}
constexpr void ::UnityEngine::TextCore::Text::XmlTagAttribute::__set_nameHashCode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::XmlTagAttribute::__get_nameHashCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::XmlTagAttribute::__set_valueType(::UnityEngine::TextCore::Text::TagValueType value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TagValueType, 0x4>(this->__instance, std::forward<::UnityEngine::TextCore::Text::TagValueType>(value));
}
constexpr ::UnityEngine::TextCore::Text::TagValueType ::UnityEngine::TextCore::Text::XmlTagAttribute::__get_valueType() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TagValueType, 0x4>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::XmlTagAttribute::__set_valueStartIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::XmlTagAttribute::__get_valueStartIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::XmlTagAttribute::__set_valueLength(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::XmlTagAttribute::__get_valueLength() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::XmlTagAttribute::__set_valueHashCode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::XmlTagAttribute::__get_valueHashCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
} // end anonymous namespace
