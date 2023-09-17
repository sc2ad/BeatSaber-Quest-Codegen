#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/TextCore/Text/zzzz__PageInfo_def.hpp"
// Ctor Parameters [CppParam { name: "firstCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ascender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "baseLine", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "descender", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::PageInfo::PageInfo(int32_t firstCharacterIndex, int32_t lastCharacterIndex, float_t ascender, float_t baseLine, float_t descender) noexcept : ::bs_hook::ValueTypeWrapper() {this->firstCharacterIndex = firstCharacterIndex;
this->lastCharacterIndex = lastCharacterIndex;
this->ascender = ascender;
this->baseLine = baseLine;
this->descender = descender;
}
constexpr void ::UnityEngine::TextCore::Text::PageInfo::__set_firstCharacterIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::PageInfo::__get_firstCharacterIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::PageInfo::__set_lastCharacterIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::PageInfo::__get_lastCharacterIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::PageInfo::__set_ascender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::PageInfo::__get_ascender() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::PageInfo::__set_baseLine(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::PageInfo::__get_baseLine() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::PageInfo::__set_descender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::PageInfo::__get_descender() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->__instance);
}
} // end anonymous namespace
