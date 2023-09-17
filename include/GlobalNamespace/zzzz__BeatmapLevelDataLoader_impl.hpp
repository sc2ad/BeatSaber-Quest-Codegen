#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__BeatmapLevelDataLoader_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__AsyncCache_2_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevel_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataSO_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "GlobalNamespace/zzzz__IFilePathSongPreviewAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__PreviewDifficultyBeatmapSet_def.hpp"
#include "GlobalNamespace/zzzz__IAssetSongPreviewAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/zzzz__AssetBundleCreateRequest_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
#include "UnityEngine/zzzz__AssetBundleRequest_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmapSet_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataSO_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo::*)(::StringW, ::StringW, ::GlobalNamespace::IPreviewBeatmapLevel)>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21df6f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "levelDataAssetName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "previewBeatmapLevel", ty: "::GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: Some("csnull") }]
constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo::____GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo(::StringW assetBundlePath, ::StringW levelDataAssetName, ::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel) noexcept : ::bs_hook::ValueTypeWrapper() {this->assetBundlePath = assetBundlePath;
this->levelDataAssetName = levelDataAssetName;
this->previewBeatmapLevel = previewBeatmapLevel;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo::__set_assetBundlePath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo::__get_assetBundlePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo::__set_levelDataAssetName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo::__get_levelDataAssetName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo::__set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPreviewBeatmapLevel, 0x10>(this->__instance, std::forward<::GlobalNamespace::IPreviewBeatmapLevel>(value));
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo::__get_previewBeatmapLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel, 0x10>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo::_ctor(::StringW assetBundlePath, ::StringW levelDataAssetName, ::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, assetBundlePath, levelDataAssetName, previewBeatmapLevel);
}
//  Writing Method size for method: ::GlobalNamespace::________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet.get_beatmapCharacteristic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapCharacteristicSO (::GlobalNamespace::________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::*)()>(&::GlobalNamespace::________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::get_beatmapCharacteristic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e06ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet>::get(),
                            "get_beatmapCharacteristic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet.get_difficultyBeatmaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap> (::GlobalNamespace::________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::*)()>(&::GlobalNamespace::________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::get_difficultyBeatmaps)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21e06b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet>::get(),
                            "get_difficultyBeatmaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::*)(::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet, ::GlobalNamespace::BeatmapCharacteristicSO, ::GlobalNamespace::IBeatmapLevel)>(&::GlobalNamespace::________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x21e0638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IDifficultyBeatmapSet
constexpr  ::GlobalNamespace::________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::operator ::GlobalNamespace::IDifficultyBeatmapSet() const noexcept {
return ::GlobalNamespace::IDifficultyBeatmapSet(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::__set__beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCharacteristicSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapCharacteristicSO>(value));
}
constexpr ::GlobalNamespace::BeatmapCharacteristicSO ::GlobalNamespace::________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::__get__beatmapCharacteristic() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCharacteristicSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::__set__difficultyBeatmapSet(::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet ::GlobalNamespace::________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::__get__difficultyBeatmapSet() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::GlobalNamespace::BeatmapCharacteristicSO ::GlobalNamespace::________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::get_beatmapCharacteristic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet>::get(),
                            "get_beatmapCharacteristic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapCharacteristicSO, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap> ::GlobalNamespace::________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::get_difficultyBeatmaps()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet>::get(),
                            "get_difficultyBeatmaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "difficultyBeatmapSet", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet", modifiers: "", def_value: None }, CppParam { name: "beatmapCharacteristicSerializedName", ty: "::GlobalNamespace::BeatmapCharacteristicSO", modifiers: "", def_value: None }, CppParam { name: "parentLevel", ty: "::GlobalNamespace::IBeatmapLevel", modifiers: "", def_value: None }]
 ::GlobalNamespace::________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet(::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet difficultyBeatmapSet, ::GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristicSerializedName, ::GlobalNamespace::IBeatmapLevel parentLevel)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet>(difficultyBeatmapSet, beatmapCharacteristicSerializedName, parentLevel))) {}
 void ::GlobalNamespace::________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::_ctor(::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet difficultyBeatmapSet, ::GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristicSerializedName, ::GlobalNamespace::IBeatmapLevel parentLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, difficultyBeatmapSet, beatmapCharacteristicSerializedName, parentLevel);
}
//  Writing Method size for method: ::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData.get_audioClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip (::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::*)()>(&::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::get_audioClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e0628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData>::get(),
                            "get_audioClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData.get_difficultyBeatmapSets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet> (::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::*)()>(&::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::get_difficultyBeatmapSets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e0630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData>::get(),
                            "get_difficultyBeatmapSets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::*)(::GlobalNamespace::BeatmapLevelDataSO, ::GlobalNamespace::BeatmapCharacteristicCollection, ::GlobalNamespace::IBeatmapLevel)>(&::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::_ctor)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x21e0464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IBeatmapLevelData
constexpr  ::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::operator ::GlobalNamespace::IBeatmapLevelData() const noexcept {
return ::GlobalNamespace::IBeatmapLevelData(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::__set__audioClip(::UnityEngine::AudioClip value)  {
::cordl_internals::setInstanceField<::UnityEngine::AudioClip, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AudioClip>(value));
}
constexpr ::UnityEngine::AudioClip ::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::__get__audioClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioClip, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::__set__difficultyBeatmapSets(::System::Collections::Generic::List_1<::GlobalNamespace::________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet>>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet> ::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::__get__difficultyBeatmapSets() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::________GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::AudioClip ::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::get_audioClip()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData>::get(),
                            "get_audioClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioClip, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet> ::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::get_difficultyBeatmapSets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData>::get(),
                            "get_difficultyBeatmapSets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "beatmapLevelData", ty: "::GlobalNamespace::BeatmapLevelDataSO", modifiers: "", def_value: None }, CppParam { name: "beatmapCharacteristicCollection", ty: "::GlobalNamespace::BeatmapCharacteristicCollection", modifiers: "", def_value: None }, CppParam { name: "parentLevel", ty: "::GlobalNamespace::IBeatmapLevel", modifiers: "", def_value: None }]
 ::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData(::GlobalNamespace::BeatmapLevelDataSO beatmapLevelData, ::GlobalNamespace::BeatmapCharacteristicCollection beatmapCharacteristicCollection, ::GlobalNamespace::IBeatmapLevel parentLevel)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData>(beatmapLevelData, beatmapCharacteristicCollection, parentLevel))) {}
 void ::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::_ctor(::GlobalNamespace::BeatmapLevelDataSO beatmapLevelData, ::GlobalNamespace::BeatmapCharacteristicCollection beatmapCharacteristicCollection, ::GlobalNamespace::IBeatmapLevel parentLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapLevelData, beatmapCharacteristicCollection, parentLevel);
}
//  Writing Method size for method: ::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__39.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__39::*)()>(&::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__39::MoveNext)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x21e06d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__39>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__39.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__39::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__39::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21e0940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__39>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__39::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__39::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__39(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite> __t__builder, ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview __4__this, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__39::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__39::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__39::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite> ::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__39::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__39::__set___4__this(::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview, 0x20>(this->__instance, std::forward<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview ::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__39::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__39::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__39::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__39::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite>, 0x30>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite> ::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__39::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite>, 0x30>(this->__instance);
}
 void ::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__39::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__39>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__39::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__39>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_levelID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_levelID)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x21df6fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_levelID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_songName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_songName)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21df79c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_songName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_songSubName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_songSubName)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21df840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_songSubName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_songAuthorName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_songAuthorName)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21df8e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_songAuthorName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_levelAuthorName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_levelAuthorName)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21df988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_levelAuthorName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_beatsPerMinute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_beatsPerMinute)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21dfa2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_beatsPerMinute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_songTimeOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_songTimeOffset)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21dfad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_songTimeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_songDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_songDuration)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21dfb74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_songDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_shuffle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_shuffle)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21dfc18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_shuffle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_shufflePeriod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_shufflePeriod)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21dfcbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_shufflePeriod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_previewStartTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_previewStartTime)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21dfd60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_previewStartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_previewDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_previewDuration)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21dfe04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_previewDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_environmentInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentInfoSO (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_environmentInfo)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21dfea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_environmentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_allDirectionsEnvironmentInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentInfoSO (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_allDirectionsEnvironmentInfo)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21dff4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_allDirectionsEnvironmentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_environmentInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::EnvironmentInfoSO> (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_environmentInfos)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21dfff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_environmentInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_previewDifficultyBeatmapSets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet> (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_previewDifficultyBeatmapSets)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21e0094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_previewDifficultyBeatmapSets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_beatmapLevelData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevelData (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_beatmapLevelData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e0138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_beatmapLevelData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_songPreviewAudioClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_songPreviewAudioClip)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x21e0140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_songPreviewAudioClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_songPreviewAudioClipPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_songPreviewAudioClipPath)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x21e01f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_songPreviewAudioClipPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview.GetCoverImageAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::Sprite> (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::GetCoverImageAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x21e02c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "GetCoverImageAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)(::GlobalNamespace::IPreviewBeatmapLevel)>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21e03c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview.LoadData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)(::GlobalNamespace::BeatmapCharacteristicCollection, ::GlobalNamespace::BeatmapLevelDataSO)>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::LoadData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x21e03ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "LoadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataSO>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IBeatmapLevel
constexpr  ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::operator ::GlobalNamespace::IBeatmapLevel() const noexcept {
return ::GlobalNamespace::IBeatmapLevel(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::GlobalNamespace::IPreviewBeatmapLevel
constexpr  ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::operator ::GlobalNamespace::IPreviewBeatmapLevel() const noexcept {
return ::GlobalNamespace::IPreviewBeatmapLevel(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::GlobalNamespace::IAssetSongPreviewAudioClipProvider
constexpr  ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::operator ::GlobalNamespace::IAssetSongPreviewAudioClipProvider() const noexcept {
return ::GlobalNamespace::IAssetSongPreviewAudioClipProvider(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::GlobalNamespace::IFilePathSongPreviewAudioClipProvider
constexpr  ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::operator ::GlobalNamespace::IFilePathSongPreviewAudioClipProvider() const noexcept {
return ::GlobalNamespace::IFilePathSongPreviewAudioClipProvider(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::__set__level(::GlobalNamespace::IPreviewBeatmapLevel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPreviewBeatmapLevel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IPreviewBeatmapLevel>(value));
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::__get__level() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::__set__beatmapLevelData(::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData>(value));
}
constexpr ::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::__get__beatmapLevelData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::______GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_levelID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_levelID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_songName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_songName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_songSubName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_songSubName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_songAuthorName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_songAuthorName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_levelAuthorName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_levelAuthorName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_beatsPerMinute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_beatsPerMinute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_songTimeOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_songTimeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_songDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_songDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_shuffle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_shuffle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_shufflePeriod()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_shufflePeriod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_previewStartTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_previewStartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_previewDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_previewDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::EnvironmentInfoSO ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_environmentInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_environmentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentInfoSO, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::EnvironmentInfoSO ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_allDirectionsEnvironmentInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_allDirectionsEnvironmentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentInfoSO, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::GlobalNamespace::EnvironmentInfoSO> ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_environmentInfos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_environmentInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::EnvironmentInfoSO>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet> ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_previewDifficultyBeatmapSets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_previewDifficultyBeatmapSets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::IBeatmapLevelData ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_beatmapLevelData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_beatmapLevelData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatmapLevelData, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::AudioClip ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_songPreviewAudioClip()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_songPreviewAudioClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioClip, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_songPreviewAudioClipPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "get_songPreviewAudioClipPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite> ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::GetCoverImageAsync(::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "GetCoverImageAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::Sprite>, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
// Ctor Parameters [CppParam { name: "previewLevel", ty: "::GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview(::GlobalNamespace::IPreviewBeatmapLevel previewLevel)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>(previewLevel))) {}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::_ctor(::GlobalNamespace::IPreviewBeatmapLevel previewLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, previewLevel);
}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview::LoadData(::GlobalNamespace::BeatmapCharacteristicCollection beatmapCharacteristicCollection, ::GlobalNamespace::BeatmapLevelDataSO beatmapLevelData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__BeatmapLevelFromPreview>::get(),
                            "LoadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapCharacteristicCollection, beatmapLevelData);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x21e0998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21e0d04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel>", modifiers: "", def_value: Some("{}") }, CppParam { name: "previewBeatmapLevel", ty: "::GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelDataLoader", modifiers: "", def_value: Some("csnull") }, CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "levelDataAssetName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_levelID_5__2", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevel>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel> __t__builder, ::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, ::GlobalNamespace::BeatmapLevelDataLoader __4__this, ::StringW assetBundlePath, ::StringW levelDataAssetName, ::System::Threading::CancellationToken cancellationToken, ::StringW _levelID_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevel> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->previewBeatmapLevel = previewBeatmapLevel;
this->__4__this = __4__this;
this->assetBundlePath = assetBundlePath;
this->levelDataAssetName = levelDataAssetName;
this->cancellationToken = cancellationToken;
this->_levelID_5__2 = _levelID_5__2;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel> ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::__set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPreviewBeatmapLevel, 0x20>(this->__instance, std::forward<::GlobalNamespace::IPreviewBeatmapLevel>(value));
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::__get_previewBeatmapLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::__set___4__this(::GlobalNamespace::BeatmapLevelDataLoader value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelDataLoader, 0x28>(this->__instance, std::forward<::GlobalNamespace::BeatmapLevelDataLoader>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelDataLoader ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelDataLoader, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::__set_assetBundlePath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::__get_assetBundlePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::__set_levelDataAssetName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::__get_levelDataAssetName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x40>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x40>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::__set__levelID_5__2(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::__get__levelID_5__2() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevel> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevel>, 0x50>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevel>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevel> ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevel>, 0x50>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x21e0d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21e10e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelDataLoader", modifiers: "", def_value: Some("csnull") }, CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataSO>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel> __t__builder, ::GlobalNamespace::BeatmapLevelDataLoader __4__this, ::StringW levelID, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataSO> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->levelID = levelID;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel> ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7::__set___4__this(::GlobalNamespace::BeatmapLevelDataLoader value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelDataLoader, 0x20>(this->__instance, std::forward<::GlobalNamespace::BeatmapLevelDataLoader>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelDataLoader ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelDataLoader, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7::__set_levelID(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7::__get_levelID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataSO> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataSO>, 0x30>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataSO>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataSO> ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataSO>, 0x30>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_0::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e1140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_0._LoadBeatmapLevelDataAsync_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_0::*)(::UnityEngine::AsyncOperation)>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_0::_LoadBeatmapLevelDataAsync_b__0)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x21e1148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_0>::get(),
                            "<LoadBeatmapLevelDataAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_0::__set_assetBundleCreateRequest(::UnityEngine::AssetBundleCreateRequest value)  {
::cordl_internals::setInstanceField<::UnityEngine::AssetBundleCreateRequest, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AssetBundleCreateRequest>(value));
}
constexpr ::UnityEngine::AssetBundleCreateRequest ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_0::__get_assetBundleCreateRequest() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AssetBundleCreateRequest, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_0::__set_levelDataAssetName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_0::__get_levelDataAssetName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_0::__set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::BeatmapLevelDataSO> value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::BeatmapLevelDataSO>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::BeatmapLevelDataSO>>(value));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::BeatmapLevelDataSO> ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_0::__get_taskSource() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::BeatmapLevelDataSO>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_0::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_0>())) {}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_0::_LoadBeatmapLevelDataAsync_b__0(::UnityEngine::AsyncOperation asyncOperation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_0>::get(),
                            "<LoadBeatmapLevelDataAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asyncOperation);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_1::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e1300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_1._LoadBeatmapLevelDataAsync_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_1::*)(::UnityEngine::AsyncOperation)>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_1::_LoadBeatmapLevelDataAsync_b__1)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x21e1308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_1>::get(),
                            "<LoadBeatmapLevelDataAsync>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_1::__set_assetBundle(::UnityEngine::AssetBundle value)  {
::cordl_internals::setInstanceField<::UnityEngine::AssetBundle, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AssetBundle>(value));
}
constexpr ::UnityEngine::AssetBundle ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_1::__get_assetBundle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AssetBundle, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_1::__set_assetBundleRequest(::UnityEngine::AssetBundleRequest value)  {
::cordl_internals::setInstanceField<::UnityEngine::AssetBundleRequest, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AssetBundleRequest>(value));
}
constexpr ::UnityEngine::AssetBundleRequest ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_1::__get_assetBundleRequest() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AssetBundleRequest, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_1::__set_CS$__8__locals1(::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_0 value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_0, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_0>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_0 ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_1::__get_CS$__8__locals1() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_0, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_1::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_1>())) {}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_1::_LoadBeatmapLevelDataAsync_b__1(::UnityEngine::AsyncOperation asyncOperation2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader____c__DisplayClass8_1>::get(),
                            "<LoadBeatmapLevelDataAsync>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asyncOperation2);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x21e143c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21e173c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataSO>", modifiers: "", def_value: Some("{}") }, CppParam { name: "levelDataAssetName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataSO>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataSO> __t__builder, ::StringW levelDataAssetName, ::StringW assetBundlePath, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataSO> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->levelDataAssetName = levelDataAssetName;
this->assetBundlePath = assetBundlePath;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataSO> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataSO>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataSO>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataSO> ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataSO>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8::__set_levelDataAssetName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8::__get_levelDataAssetName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8::__set_assetBundlePath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8::__get_assetBundlePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataSO> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataSO>, 0x30>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataSO>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataSO> ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataSO>, 0x30>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelDataLoader::*)(::GlobalNamespace::BeatmapCharacteristicCollection)>(&::GlobalNamespace::BeatmapLevelDataLoader::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x21df2ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoader.LoadBeatmapLevelFormAssetBundleAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevel> (::GlobalNamespace::BeatmapLevelDataLoader::*)(::GlobalNamespace::IPreviewBeatmapLevel, ::StringW, ::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::BeatmapLevelDataLoader::LoadBeatmapLevelFormAssetBundleAsync)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x21df3cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoader>::get(),
                            "LoadBeatmapLevelFormAssetBundleAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoader.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelDataLoader::*)()>(&::GlobalNamespace::BeatmapLevelDataLoader::Dispose)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21df4ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoader>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoader.LoadBeatmapLevelAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevel> (::GlobalNamespace::BeatmapLevelDataLoader::*)(::StringW)>(&::GlobalNamespace::BeatmapLevelDataLoader::LoadBeatmapLevelAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x21df4f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoader>::get(),
                            "LoadBeatmapLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoader.LoadBeatmapLevelDataAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataSO> (::GlobalNamespace::BeatmapLevelDataLoader::*)(::StringW, ::StringW)>(&::GlobalNamespace::BeatmapLevelDataLoader::LoadBeatmapLevelDataAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x21df5f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoader>::get(),
                            "LoadBeatmapLevelDataAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::GlobalNamespace::BeatmapLevelDataLoader::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapLevelDataLoader::__set__beatmapLevelsAsyncCache(::GlobalNamespace::AsyncCache_2<::StringW,::GlobalNamespace::IBeatmapLevel> value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AsyncCache_2<::StringW,::GlobalNamespace::IBeatmapLevel>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::AsyncCache_2<::StringW,::GlobalNamespace::IBeatmapLevel>>(value));
}
constexpr ::GlobalNamespace::AsyncCache_2<::StringW,::GlobalNamespace::IBeatmapLevel> ::GlobalNamespace::BeatmapLevelDataLoader::__get__beatmapLevelsAsyncCache() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AsyncCache_2<::StringW,::GlobalNamespace::IBeatmapLevel>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapLevelDataLoader::__set__bundleLevelInfos(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo> ::GlobalNamespace::BeatmapLevelDataLoader::__get__bundleLevelInfos() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapLevelDataLoader::__set__allBeatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCharacteristicCollection, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapCharacteristicCollection>(value));
}
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection ::GlobalNamespace::BeatmapLevelDataLoader::__get__allBeatmapCharacteristicCollection() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCharacteristicCollection, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "allBeatmapCharacteristicCollection", ty: "::GlobalNamespace::BeatmapCharacteristicCollection", modifiers: "", def_value: None }]
 ::GlobalNamespace::BeatmapLevelDataLoader::BeatmapLevelDataLoader(::GlobalNamespace::BeatmapCharacteristicCollection allBeatmapCharacteristicCollection)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BeatmapLevelDataLoader>(allBeatmapCharacteristicCollection))) {}
 void ::GlobalNamespace::BeatmapLevelDataLoader::_ctor(::GlobalNamespace::BeatmapCharacteristicCollection allBeatmapCharacteristicCollection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, allBeatmapCharacteristicCollection);
}
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevel> ::GlobalNamespace::BeatmapLevelDataLoader::LoadBeatmapLevelFormAssetBundleAsync(::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, ::StringW assetBundlePath, ::StringW levelDataAssetName, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoader>::get(),
                            "LoadBeatmapLevelFormAssetBundleAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevel>, false>(const_cast<void*>(instance), ___internal_method, previewBeatmapLevel, assetBundlePath, levelDataAssetName, cancellationToken);
}
 void ::GlobalNamespace::BeatmapLevelDataLoader::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoader>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevel> ::GlobalNamespace::BeatmapLevelDataLoader::LoadBeatmapLevelAsync(::StringW levelID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoader>::get(),
                            "LoadBeatmapLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevel>, false>(const_cast<void*>(instance), ___internal_method, levelID);
}
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataSO> ::GlobalNamespace::BeatmapLevelDataLoader::LoadBeatmapLevelDataAsync(::StringW assetBundlePath, ::StringW levelDataAssetName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoader>::get(),
                            "LoadBeatmapLevelDataAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataSO>, false>(const_cast<void*>(instance), ___internal_method, assetBundlePath, levelDataAssetName);
}
} // end anonymous namespace
