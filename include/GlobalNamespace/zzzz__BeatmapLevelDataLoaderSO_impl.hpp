#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataLoaderSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollectionSO_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__AsyncCache_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataSO_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevel_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "GlobalNamespace/zzzz__PreviewDifficultyBeatmapSet_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmapSet_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataSO_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/zzzz__AssetBundleCreateRequest_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
#include "UnityEngine/zzzz__AssetBundleRequest_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
namespace {
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo::*)(::StringW, ::StringW, GlobalNamespace::IPreviewBeatmapLevel)>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21f24cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "levelDataAssetName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "previewBeatmapLevel", ty: "GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: Some("csnull") }]
constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo::GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo(::StringW assetBundlePath, ::StringW levelDataAssetName, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel) noexcept : ::bs_hook::ValueTypeWrapper() {this->assetBundlePath = assetBundlePath;
this->levelDataAssetName = levelDataAssetName;
this->previewBeatmapLevel = previewBeatmapLevel;
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo::__set_assetBundlePath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo::__get_assetBundlePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo::__set_levelDataAssetName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo::__get_levelDataAssetName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo::__set_previewBeatmapLevel(GlobalNamespace::IPreviewBeatmapLevel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0x10>(this->__instance, std::forward<GlobalNamespace::IPreviewBeatmapLevel>(value));
}
constexpr GlobalNamespace::IPreviewBeatmapLevel GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo::__get_previewBeatmapLevel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0x10>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo::_ctor(::StringW assetBundlePath, ::StringW levelDataAssetName, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, assetBundlePath, levelDataAssetName, previewBeatmapLevel);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet.get_beatmapCharacteristic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapCharacteristicSO (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::get_beatmapCharacteristic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f33e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet>::get(),
                            "get_beatmapCharacteristic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet.get_difficultyBeatmaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap> (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::get_difficultyBeatmaps)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21f33ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet>::get(),
                            "get_difficultyBeatmaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::*)(GlobalNamespace::GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet, GlobalNamespace::BeatmapCharacteristicSO, GlobalNamespace::IBeatmapLevel)>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x21f3370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IDifficultyBeatmapSet
constexpr  GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::operator GlobalNamespace::IDifficultyBeatmapSet() const noexcept {
return GlobalNamespace::IDifficultyBeatmapSet(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::__set__beatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapCharacteristicSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapCharacteristicSO>(value));
}
constexpr GlobalNamespace::BeatmapCharacteristicSO GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::__get__beatmapCharacteristic() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapCharacteristicSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::__set__difficultyBeatmapSet(GlobalNamespace::GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet>(value));
}
constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::__get__difficultyBeatmapSet() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::BeatmapCharacteristicSO GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::get_beatmapCharacteristic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet>::get(),
                            "get_beatmapCharacteristic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BeatmapCharacteristicSO, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap> GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::get_difficultyBeatmaps()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet>::get(),
                            "get_difficultyBeatmaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "difficultyBeatmapSet", ty: "GlobalNamespace::GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet", modifiers: "", def_value: None }, CppParam { name: "beatmapCharacteristicSerializedName", ty: "GlobalNamespace::BeatmapCharacteristicSO", modifiers: "", def_value: None }, CppParam { name: "parentLevel", ty: "GlobalNamespace::IBeatmapLevel", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet(GlobalNamespace::GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet difficultyBeatmapSet, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristicSerializedName, GlobalNamespace::IBeatmapLevel parentLevel)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet>(difficultyBeatmapSet, beatmapCharacteristicSerializedName, parentLevel))) {}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::_ctor(GlobalNamespace::GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet difficultyBeatmapSet, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristicSerializedName, GlobalNamespace::IBeatmapLevel parentLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, difficultyBeatmapSet, beatmapCharacteristicSerializedName, parentLevel);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData.get_audioClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AudioClip (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData::get_audioClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f3360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData>::get(),
                            "get_audioClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData.get_difficultyBeatmapSets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmapSet> (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData::get_difficultyBeatmapSets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f3368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData>::get(),
                            "get_difficultyBeatmapSets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData::*)(GlobalNamespace::BeatmapLevelDataSO, GlobalNamespace::BeatmapCharacteristicCollectionSO, GlobalNamespace::IBeatmapLevel)>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData::_ctor)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x21f319c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicCollectionSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IBeatmapLevelData
constexpr  GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData::operator GlobalNamespace::IBeatmapLevelData() const noexcept {
return GlobalNamespace::IBeatmapLevelData(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData::__set__audioClip(UnityEngine::AudioClip value)  {
::cordl_internals::setInstanceField<UnityEngine::AudioClip, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AudioClip>(value));
}
constexpr UnityEngine::AudioClip GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData::__get__audioClip() const {
return ::cordl_internals::getInstanceField<UnityEngine::AudioClip, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData::__set__difficultyBeatmapSets(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet> GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData::__get__difficultyBeatmapSets() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::AudioClip GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData::get_audioClip()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData>::get(),
                            "get_audioClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::AudioClip, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmapSet> GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData::get_difficultyBeatmapSets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData>::get(),
                            "get_difficultyBeatmapSets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmapSet>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "beatmapLevelData", ty: "GlobalNamespace::BeatmapLevelDataSO", modifiers: "", def_value: None }, CppParam { name: "beatmapCharacteristicCollection", ty: "GlobalNamespace::BeatmapCharacteristicCollectionSO", modifiers: "", def_value: None }, CppParam { name: "parentLevel", ty: "GlobalNamespace::IBeatmapLevel", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData(GlobalNamespace::BeatmapLevelDataSO beatmapLevelData, GlobalNamespace::BeatmapCharacteristicCollectionSO beatmapCharacteristicCollection, GlobalNamespace::IBeatmapLevel parentLevel)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData>(beatmapLevelData, beatmapCharacteristicCollection, parentLevel))) {}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData::_ctor(GlobalNamespace::BeatmapLevelDataSO beatmapLevelData, GlobalNamespace::BeatmapCharacteristicCollectionSO beatmapCharacteristicCollection, GlobalNamespace::IBeatmapLevel parentLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicCollectionSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapLevelData, beatmapCharacteristicCollection, parentLevel);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37::MoveNext)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x21f3410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21f3678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite> __t__builder, GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview __4__this, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite> GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37::__set___4__this(GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview, 0x20>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>(value));
}
constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite>, 0x30>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite>, 0x30>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview.get_levelID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_levelID)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x21f24d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_levelID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview.get_songName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_songName)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21f2578;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_songName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview.get_songSubName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_songSubName)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21f261c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_songSubName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview.get_songAuthorName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_songAuthorName)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21f26c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_songAuthorName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview.get_levelAuthorName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_levelAuthorName)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21f2764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_levelAuthorName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview.get_beatsPerMinute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_beatsPerMinute)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21f2808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_beatsPerMinute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview.get_songTimeOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_songTimeOffset)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21f28ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_songTimeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview.get_songDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_songDuration)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21f2950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_songDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview.get_shuffle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_shuffle)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21f29f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_shuffle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview.get_shufflePeriod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_shufflePeriod)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21f2a98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_shufflePeriod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview.get_previewStartTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_previewStartTime)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21f2b3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_previewStartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview.get_previewDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_previewDuration)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21f2be0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_previewDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview.get_environmentInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::EnvironmentInfoSO (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_environmentInfo)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21f2c84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_environmentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview.get_allDirectionsEnvironmentInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::EnvironmentInfoSO (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_allDirectionsEnvironmentInfo)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21f2d28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_allDirectionsEnvironmentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview.get_previewDifficultyBeatmapSets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet> (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_previewDifficultyBeatmapSets)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21f2dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_previewDifficultyBeatmapSets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview.get_beatmapLevelData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IBeatmapLevelData (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_beatmapLevelData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f2e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_beatmapLevelData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview.get_songPreviewAudioClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AudioClip (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_songPreviewAudioClip)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x21f2e78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_songPreviewAudioClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview.get_songPreviewAudioClipPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_songPreviewAudioClipPath)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x21f2f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_songPreviewAudioClipPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview.GetCoverImageAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::Sprite> (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::*)(System::Threading::CancellationToken)>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::GetCoverImageAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x21f3000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "GetCoverImageAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::*)(GlobalNamespace::IPreviewBeatmapLevel)>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21f30fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview.LoadData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::*)(GlobalNamespace::BeatmapCharacteristicCollectionSO, GlobalNamespace::BeatmapLevelDataSO)>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::LoadData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x21f3124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "LoadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicCollectionSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelDataSO>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IBeatmapLevel
constexpr  GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::operator GlobalNamespace::IBeatmapLevel() const noexcept {
return GlobalNamespace::IBeatmapLevel(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPreviewBeatmapLevel
constexpr  GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::operator GlobalNamespace::IPreviewBeatmapLevel() const noexcept {
return GlobalNamespace::IPreviewBeatmapLevel(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IAssetSongPreviewAudioClipProvider
constexpr  GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::operator GlobalNamespace::IAssetSongPreviewAudioClipProvider() const noexcept {
return GlobalNamespace::IAssetSongPreviewAudioClipProvider(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IFilePathSongPreviewAudioClipProvider
constexpr  GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::operator GlobalNamespace::IFilePathSongPreviewAudioClipProvider() const noexcept {
return GlobalNamespace::IFilePathSongPreviewAudioClipProvider(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::__set__level(GlobalNamespace::IPreviewBeatmapLevel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IPreviewBeatmapLevel>(value));
}
constexpr GlobalNamespace::IPreviewBeatmapLevel GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::__get__level() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::__set__beatmapLevelData(GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::__get__beatmapLevelData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_levelID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_levelID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_songName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_songName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_songSubName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_songSubName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_songAuthorName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_songAuthorName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_levelAuthorName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_levelAuthorName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_beatsPerMinute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_beatsPerMinute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_songTimeOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_songTimeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_songDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_songDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_shuffle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_shuffle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_shufflePeriod()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_shufflePeriod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_previewStartTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_previewStartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_previewDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_previewDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::EnvironmentInfoSO GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_environmentInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_environmentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::EnvironmentInfoSO, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::EnvironmentInfoSO GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_allDirectionsEnvironmentInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_allDirectionsEnvironmentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::EnvironmentInfoSO, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet> GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_previewDifficultyBeatmapSets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_previewDifficultyBeatmapSets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::IBeatmapLevelData GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_beatmapLevelData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_beatmapLevelData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IBeatmapLevelData, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::AudioClip GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_songPreviewAudioClip()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_songPreviewAudioClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::AudioClip, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::get_songPreviewAudioClipPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "get_songPreviewAudioClipPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<UnityEngine::Sprite> GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::GetCoverImageAsync(System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "GetCoverImageAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<UnityEngine::Sprite>, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
// Ctor Parameters [CppParam { name: "previewLevel", ty: "GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview(GlobalNamespace::IPreviewBeatmapLevel previewLevel)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>(previewLevel))) {}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::_ctor(GlobalNamespace::IPreviewBeatmapLevel previewLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, previewLevel);
}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview::LoadData(GlobalNamespace::BeatmapCharacteristicCollectionSO beatmapCharacteristicCollection, GlobalNamespace::BeatmapLevelDataSO beatmapLevelData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview>::get(),
                            "LoadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicCollectionSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelDataSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapCharacteristicCollection, beatmapLevelData);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x21f36d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21f3ae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevel>", modifiers: "", def_value: Some("{}") }, CppParam { name: "previewBeatmapLevel", ty: "GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__4__this", ty: "GlobalNamespace::BeatmapLevelDataLoaderSO", modifiers: "", def_value: Some("csnull") }, CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "levelDataAssetName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_levelID_5__2", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevel>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevel> __t__builder, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::BeatmapLevelDataLoaderSO __4__this, ::StringW assetBundlePath, ::StringW levelDataAssetName, System::Threading::CancellationToken cancellationToken, ::StringW _levelID_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevel> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->previewBeatmapLevel = previewBeatmapLevel;
this->__4__this = __4__this;
this->assetBundlePath = assetBundlePath;
this->levelDataAssetName = levelDataAssetName;
this->cancellationToken = cancellationToken;
this->_levelID_5__2 = _levelID_5__2;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevel> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevel>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevel>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevel> GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevel>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4::__set_previewBeatmapLevel(GlobalNamespace::IPreviewBeatmapLevel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0x20>(this->__instance, std::forward<GlobalNamespace::IPreviewBeatmapLevel>(value));
}
constexpr GlobalNamespace::IPreviewBeatmapLevel GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4::__get_previewBeatmapLevel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4::__set___4__this(GlobalNamespace::BeatmapLevelDataLoaderSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelDataLoaderSO, 0x28>(this->__instance, std::forward<GlobalNamespace::BeatmapLevelDataLoaderSO>(value));
}
constexpr GlobalNamespace::BeatmapLevelDataLoaderSO GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelDataLoaderSO, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4::__set_assetBundlePath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4::__get_assetBundlePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4::__set_levelDataAssetName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4::__get_levelDataAssetName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x40>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x40>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4::__set__levelID_5__2(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4::__get__levelID_5__2() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevel> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevel>, 0x50>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevel>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevel> GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevel>, 0x50>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x21f3b40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21f3ecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevel>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::BeatmapLevelDataLoaderSO", modifiers: "", def_value: Some("csnull") }, CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelDataSO>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevel> __t__builder, GlobalNamespace::BeatmapLevelDataLoaderSO __4__this, ::StringW levelID, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelDataSO> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->levelID = levelID;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevel> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevel>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevel>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevel> GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevel>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5::__set___4__this(GlobalNamespace::BeatmapLevelDataLoaderSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelDataLoaderSO, 0x20>(this->__instance, std::forward<GlobalNamespace::BeatmapLevelDataLoaderSO>(value));
}
constexpr GlobalNamespace::BeatmapLevelDataLoaderSO GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelDataLoaderSO, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5::__set_levelID(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5::__get_levelID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelDataSO> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelDataSO>, 0x30>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelDataSO>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelDataSO> GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelDataSO>, 0x30>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f3f24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0._LoadBeatmapLevelDataAsync_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0::*)(UnityEngine::AsyncOperation)>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0::_LoadBeatmapLevelDataAsync_b__0)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x21f3f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0>::get(),
                            "<LoadBeatmapLevelDataAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AsyncOperation>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0::__set_assetBundleCreateRequest(UnityEngine::AssetBundleCreateRequest value)  {
::cordl_internals::setInstanceField<UnityEngine::AssetBundleCreateRequest, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AssetBundleCreateRequest>(value));
}
constexpr UnityEngine::AssetBundleCreateRequest GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0::__get_assetBundleCreateRequest() const {
return ::cordl_internals::getInstanceField<UnityEngine::AssetBundleCreateRequest, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0::__set_levelDataAssetName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0::__get_levelDataAssetName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0::__set_taskSource(System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::BeatmapLevelDataSO> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::BeatmapLevelDataSO>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::BeatmapLevelDataSO>>(value));
}
constexpr System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::BeatmapLevelDataSO> GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0::__get_taskSource() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::BeatmapLevelDataSO>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0>())) {}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0::_LoadBeatmapLevelDataAsync_b__0(UnityEngine::AsyncOperation asyncOperation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0>::get(),
                            "<LoadBeatmapLevelDataAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AsyncOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asyncOperation);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f40e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1._LoadBeatmapLevelDataAsync_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1::*)(UnityEngine::AsyncOperation)>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1::_LoadBeatmapLevelDataAsync_b__1)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x21f40ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1>::get(),
                            "<LoadBeatmapLevelDataAsync>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AsyncOperation>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1::__set_assetBundle(UnityEngine::AssetBundle value)  {
::cordl_internals::setInstanceField<UnityEngine::AssetBundle, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AssetBundle>(value));
}
constexpr UnityEngine::AssetBundle GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1::__get_assetBundle() const {
return ::cordl_internals::getInstanceField<UnityEngine::AssetBundle, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1::__set_assetBundleRequest(UnityEngine::AssetBundleRequest value)  {
::cordl_internals::setInstanceField<UnityEngine::AssetBundleRequest, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AssetBundleRequest>(value));
}
constexpr UnityEngine::AssetBundleRequest GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1::__get_assetBundleRequest() const {
return ::cordl_internals::getInstanceField<UnityEngine::AssetBundleRequest, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1::__set_CS$__8__locals1(GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0 value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0>(value));
}
constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0 GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1::__get_CS$__8__locals1() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1>())) {}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1::_LoadBeatmapLevelDataAsync_b__1(UnityEngine::AsyncOperation asyncOperation2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1>::get(),
                            "<LoadBeatmapLevelDataAsync>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AsyncOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asyncOperation2);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x21f4220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21f4520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::BeatmapLevelDataSO>", modifiers: "", def_value: Some("{}") }, CppParam { name: "levelDataAssetName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelDataSO>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::BeatmapLevelDataSO> __t__builder, ::StringW levelDataAssetName, ::StringW assetBundlePath, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelDataSO> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->levelDataAssetName = levelDataAssetName;
this->assetBundlePath = assetBundlePath;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::BeatmapLevelDataSO> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::BeatmapLevelDataSO>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::BeatmapLevelDataSO>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::BeatmapLevelDataSO> GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::BeatmapLevelDataSO>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6::__set_levelDataAssetName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6::__get_levelDataAssetName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6::__set_assetBundlePath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6::__get_assetBundlePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelDataSO> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelDataSO>, 0x30>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelDataSO>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelDataSO> GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelDataSO>, 0x30>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::BeatmapLevelDataLoaderSO.LoadBeatmapLevelFormAssetBundleAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapLevel> (GlobalNamespace::BeatmapLevelDataLoaderSO::*)(GlobalNamespace::IPreviewBeatmapLevel, ::StringW, ::StringW, System::Threading::CancellationToken)>(&GlobalNamespace::BeatmapLevelDataLoaderSO::LoadBeatmapLevelFormAssetBundleAsync)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x21f2138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelDataLoaderSO>::get(),
                            "LoadBeatmapLevelFormAssetBundleAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelDataLoaderSO.LoadBeatmapLevelAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapLevel> (GlobalNamespace::BeatmapLevelDataLoaderSO::*)(::StringW)>(&GlobalNamespace::BeatmapLevelDataLoaderSO::LoadBeatmapLevelAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x21f2258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelDataLoaderSO>::get(),
                            "LoadBeatmapLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelDataLoaderSO.LoadBeatmapLevelDataAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::BeatmapLevelDataSO> (GlobalNamespace::BeatmapLevelDataLoaderSO::*)(::StringW, ::StringW)>(&GlobalNamespace::BeatmapLevelDataLoaderSO::LoadBeatmapLevelDataAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x21f2354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelDataLoaderSO>::get(),
                            "LoadBeatmapLevelDataAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelDataLoaderSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelDataLoaderSO::*)()>(&GlobalNamespace::BeatmapLevelDataLoaderSO::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x21f2450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelDataLoaderSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BeatmapLevelDataLoaderSO::__set__allBeatmapCharacteristicCollection(GlobalNamespace::BeatmapCharacteristicCollectionSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapCharacteristicCollectionSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapCharacteristicCollectionSO>(value));
}
constexpr GlobalNamespace::BeatmapCharacteristicCollectionSO GlobalNamespace::BeatmapLevelDataLoaderSO::__get__allBeatmapCharacteristicCollection() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapCharacteristicCollectionSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapLevelDataLoaderSO::__set__beatmapLevelsAsyncCache(GlobalNamespace::AsyncCache_2<::StringW,GlobalNamespace::IBeatmapLevel> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AsyncCache_2<::StringW,GlobalNamespace::IBeatmapLevel>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AsyncCache_2<::StringW,GlobalNamespace::IBeatmapLevel>>(value));
}
constexpr GlobalNamespace::AsyncCache_2<::StringW,GlobalNamespace::IBeatmapLevel> GlobalNamespace::BeatmapLevelDataLoaderSO::__get__beatmapLevelsAsyncCache() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AsyncCache_2<::StringW,GlobalNamespace::IBeatmapLevel>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapLevelDataLoaderSO::__set__bundleLevelInfos(System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo> GlobalNamespace::BeatmapLevelDataLoaderSO::__get__bundleLevelInfos() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapLevel> GlobalNamespace::BeatmapLevelDataLoaderSO::LoadBeatmapLevelFormAssetBundleAsync(GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, ::StringW assetBundlePath, ::StringW levelDataAssetName, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelDataLoaderSO>::get(),
                            "LoadBeatmapLevelFormAssetBundleAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapLevel>, false>(const_cast<void*>(instance), ___internal_method, previewBeatmapLevel, assetBundlePath, levelDataAssetName, cancellationToken);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapLevel> GlobalNamespace::BeatmapLevelDataLoaderSO::LoadBeatmapLevelAsync(::StringW levelID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelDataLoaderSO>::get(),
                            "LoadBeatmapLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapLevel>, false>(const_cast<void*>(instance), ___internal_method, levelID);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::BeatmapLevelDataSO> GlobalNamespace::BeatmapLevelDataLoaderSO::LoadBeatmapLevelDataAsync(::StringW assetBundlePath, ::StringW levelDataAssetName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelDataLoaderSO>::get(),
                            "LoadBeatmapLevelDataAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::BeatmapLevelDataSO>, false>(const_cast<void*>(instance), ___internal_method, assetBundlePath, levelDataAssetName);
}
// Ctor Parameters []
 GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelDataLoaderSO()  : GlobalNamespace::PersistentScriptableObject(THROW_UNLESS(::il2cpp_utils::New<BeatmapLevelDataLoaderSO>())) {}
 void GlobalNamespace::BeatmapLevelDataLoaderSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelDataLoaderSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
