#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "TMPro/SpriteAssetUtilities/zzzz__SpriteAssetImportFormats_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr TMPro::SpriteAssetUtilities::SpriteAssetImportFormats::SpriteAssetImportFormats(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void TMPro::SpriteAssetUtilities::SpriteAssetImportFormats::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::SpriteAssetUtilities::SpriteAssetImportFormats::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr TMPro::SpriteAssetUtilities::SpriteAssetImportFormats  TMPro::SpriteAssetUtilities::SpriteAssetImportFormats::None{0};
constexpr TMPro::SpriteAssetUtilities::SpriteAssetImportFormats  TMPro::SpriteAssetUtilities::SpriteAssetImportFormats::TexturePackerJsonArray{1};
