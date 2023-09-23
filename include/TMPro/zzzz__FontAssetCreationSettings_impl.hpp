#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "TMPro/zzzz__FontAssetCreationSettings_def.hpp"
//  Writing Method size for method: TMPro::FontAssetCreationSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::FontAssetCreationSettings::*)(::StringW, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::StringW, int32_t)>(&TMPro::FontAssetCreationSettings::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a78898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::FontAssetCreationSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "sourceFontFileName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "sourceFontFileGUID", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "pointSizeSamplingMode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pointSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "padding", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "packingMode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "atlasWidth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "atlasHeight", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "characterSetSelectionMode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "characterSequence", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "referencedFontAssetGUID", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "referencedTextAssetGUID", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "fontStyle", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontStyleModifier", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderMode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "includeFontFeatures", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr TMPro::FontAssetCreationSettings::FontAssetCreationSettings(::StringW sourceFontFileName, ::StringW sourceFontFileGUID, int32_t pointSizeSamplingMode, int32_t pointSize, int32_t padding, int32_t packingMode, int32_t atlasWidth, int32_t atlasHeight, int32_t characterSetSelectionMode, ::StringW characterSequence, ::StringW referencedFontAssetGUID, ::StringW referencedTextAssetGUID, int32_t fontStyle, float_t fontStyleModifier, int32_t renderMode, bool includeFontFeatures) noexcept : ::bs_hook::ValueTypeWrapper() {this->sourceFontFileName = sourceFontFileName;
this->sourceFontFileGUID = sourceFontFileGUID;
this->pointSizeSamplingMode = pointSizeSamplingMode;
this->pointSize = pointSize;
this->padding = padding;
this->packingMode = packingMode;
this->atlasWidth = atlasWidth;
this->atlasHeight = atlasHeight;
this->characterSetSelectionMode = characterSetSelectionMode;
this->characterSequence = characterSequence;
this->referencedFontAssetGUID = referencedFontAssetGUID;
this->referencedTextAssetGUID = referencedTextAssetGUID;
this->fontStyle = fontStyle;
this->fontStyleModifier = fontStyleModifier;
this->renderMode = renderMode;
this->includeFontFeatures = includeFontFeatures;
}
constexpr void TMPro::FontAssetCreationSettings::__set_sourceFontFileName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW TMPro::FontAssetCreationSettings::__get_sourceFontFileName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void TMPro::FontAssetCreationSettings::__set_sourceFontFileGUID(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW TMPro::FontAssetCreationSettings::__get_sourceFontFileGUID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void TMPro::FontAssetCreationSettings::__set_pointSizeSamplingMode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::FontAssetCreationSettings::__get_pointSizeSamplingMode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void TMPro::FontAssetCreationSettings::__set_pointSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::FontAssetCreationSettings::__get_pointSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
constexpr void TMPro::FontAssetCreationSettings::__set_padding(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::FontAssetCreationSettings::__get_padding() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
constexpr void TMPro::FontAssetCreationSettings::__set_packingMode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::FontAssetCreationSettings::__get_packingMode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->__instance);
}
constexpr void TMPro::FontAssetCreationSettings::__set_atlasWidth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::FontAssetCreationSettings::__get_atlasWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->__instance);
}
constexpr void TMPro::FontAssetCreationSettings::__set_atlasHeight(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::FontAssetCreationSettings::__get_atlasHeight() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->__instance);
}
constexpr void TMPro::FontAssetCreationSettings::__set_characterSetSelectionMode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::FontAssetCreationSettings::__get_characterSetSelectionMode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->__instance);
}
constexpr void TMPro::FontAssetCreationSettings::__set_characterSequence(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW TMPro::FontAssetCreationSettings::__get_characterSequence() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->__instance);
}
constexpr void TMPro::FontAssetCreationSettings::__set_referencedFontAssetGUID(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW TMPro::FontAssetCreationSettings::__get_referencedFontAssetGUID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->__instance);
}
constexpr void TMPro::FontAssetCreationSettings::__set_referencedTextAssetGUID(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW TMPro::FontAssetCreationSettings::__get_referencedTextAssetGUID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->__instance);
}
constexpr void TMPro::FontAssetCreationSettings::__set_fontStyle(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::FontAssetCreationSettings::__get_fontStyle() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->__instance);
}
constexpr void TMPro::FontAssetCreationSettings::__set_fontStyleModifier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::FontAssetCreationSettings::__get_fontStyleModifier() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this->__instance);
}
constexpr void TMPro::FontAssetCreationSettings::__set_renderMode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::FontAssetCreationSettings::__get_renderMode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->__instance);
}
constexpr void TMPro::FontAssetCreationSettings::__set_includeFontFeatures(bool value)  {
::cordl_internals::setInstanceField<bool, 0x54>(this->__instance, std::forward<bool>(value));
}
constexpr bool TMPro::FontAssetCreationSettings::__get_includeFontFeatures() const {
return ::cordl_internals::getInstanceField<bool, 0x54>(this->__instance);
}
 void TMPro::FontAssetCreationSettings::_ctor(::StringW sourceFontFileGUID, int32_t pointSize, int32_t pointSizeSamplingMode, int32_t padding, int32_t packingMode, int32_t atlasWidth, int32_t atlasHeight, int32_t characterSelectionMode, ::StringW characterSet, int32_t renderMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::FontAssetCreationSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, sourceFontFileGUID, pointSize, pointSizeSamplingMode, padding, packingMode, atlasWidth, atlasHeight, characterSelectionMode, characterSet, renderMode);
}
