#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_AssetPresetUtility_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetPresetUtility.SaveAssetPresetToFile
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(HoudiniEngineUnity::HEU_HoudiniAsset, ::StringW)>(&HoudiniEngineUnity::HEU_AssetPresetUtility::SaveAssetPresetToFile)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x1fdb128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetPresetUtility>::get(),
                            "SaveAssetPresetToFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetPresetUtility.LoadPresetFileIntoAssetAndCook
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(HoudiniEngineUnity::HEU_HoudiniAsset, ::StringW)>(&HoudiniEngineUnity::HEU_AssetPresetUtility::LoadPresetFileIntoAssetAndCook)> {
  constexpr static std::size_t size = 0x668;
  constexpr static std::size_t addrs = 0x1fdbf54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetPresetUtility>::get(),
                            "LoadPresetFileIntoAssetAndCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 void HoudiniEngineUnity::HEU_AssetPresetUtility::__set_PRESET_IDENTIFIER(::ArrayW<char16_t> value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "PRESET_IDENTIFIER", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetPresetUtility>::get>(std::forward<::ArrayW<char16_t>>(value));
}
 ::ArrayW<char16_t> HoudiniEngineUnity::HEU_AssetPresetUtility::__get_PRESET_IDENTIFIER()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "PRESET_IDENTIFIER", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetPresetUtility>::get>();
}
 void HoudiniEngineUnity::HEU_AssetPresetUtility::__set_PRESET_VERSION(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "PRESET_VERSION", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetPresetUtility>::get>(std::forward<int32_t>(value));
}
 int32_t HoudiniEngineUnity::HEU_AssetPresetUtility::__get_PRESET_VERSION()  {
return ::cordl_internals::getStaticField<int32_t, "PRESET_VERSION", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetPresetUtility>::get>();
}
 void HoudiniEngineUnity::HEU_AssetPresetUtility::SaveAssetPresetToFile(HoudiniEngineUnity::HEU_HoudiniAsset asset, ::StringW filePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetPresetUtility>::get(),
                            "SaveAssetPresetToFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asset, filePath);
}
 void HoudiniEngineUnity::HEU_AssetPresetUtility::LoadPresetFileIntoAssetAndCook(HoudiniEngineUnity::HEU_HoudiniAsset asset, ::StringW filePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetPresetUtility>::get(),
                            "LoadPresetFileIntoAssetAndCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asset, filePath);
}
