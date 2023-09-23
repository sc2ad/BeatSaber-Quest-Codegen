#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__FontEngineError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::TextCore::LowLevel::FontEngineError::FontEngineError(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::TextCore::LowLevel::FontEngineError::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::LowLevel::FontEngineError::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Success{0};
constexpr UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_File_Path{1};
constexpr UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_File_Format{2};
constexpr UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_File_Structure{3};
constexpr UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_File{4};
constexpr UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_Table{8};
constexpr UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_Glyph_Index{16};
constexpr UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_Character_Code{17};
constexpr UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_Pixel_Size{23};
constexpr UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_Library{33};
constexpr UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_Face{35};
constexpr UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_Library_or_Face{41};
constexpr UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Atlas_Generation_Cancelled{100};
constexpr UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_SharedTextureData{101};
constexpr UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::OpenTypeLayoutLookup_Mismatch{116};
