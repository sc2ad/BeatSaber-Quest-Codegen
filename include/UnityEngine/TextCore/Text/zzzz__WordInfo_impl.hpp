#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__WordInfo_def.hpp"
// Ctor Parameters [CppParam { name: "firstCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "characterCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::TextCore::Text::WordInfo::WordInfo(int32_t firstCharacterIndex, int32_t lastCharacterIndex, int32_t characterCount) noexcept : ::bs_hook::ValueTypeWrapper() {this->firstCharacterIndex = firstCharacterIndex;
this->lastCharacterIndex = lastCharacterIndex;
this->characterCount = characterCount;
}
constexpr void UnityEngine::TextCore::Text::WordInfo::__set_firstCharacterIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::WordInfo::__get_firstCharacterIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordInfo::__set_lastCharacterIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::WordInfo::__get_lastCharacterIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordInfo::__set_characterCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::WordInfo::__get_characterCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
