#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPackCollectionSO_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPackCollection_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelLoader_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPackCollectionContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataAssetFileModel_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__HMCache_2_def.hpp"
#include "GlobalNamespace/zzzz__LevelDataAssetDownloadUpdate_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__InitData::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21e6c30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__InitData::__set_maxCachedBeatmapLevels(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__InitData::__get_maxCachedBeatmapLevels() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__InitData GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__InitData::New_ctor(int32_t maxCachedBeatmapLevels)  {
GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__InitData o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__InitData>(maxCachedBeatmapLevels))};
return o;
}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__InitData::_ctor(int32_t maxCachedBeatmapLevels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, maxCachedBeatmapLevels);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult::*)(bool, GlobalNamespace::IBeatmapLevel)>(&GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21e6c58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "isError", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevel", ty: "GlobalNamespace::IBeatmapLevel", modifiers: "", def_value: Some("csnull") }]
constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult(bool isError, GlobalNamespace::IBeatmapLevel beatmapLevel) noexcept : ::bs_hook::ValueTypeWrapper() {this->isError = isError;
this->beatmapLevel = beatmapLevel;
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult::__set_isError(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult::__get_isError() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult::__set_beatmapLevel(GlobalNamespace::IBeatmapLevel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IBeatmapLevel, 0x8>(this->__instance, std::forward<GlobalNamespace::IBeatmapLevel>(value));
}
constexpr GlobalNamespace::IBeatmapLevel GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult::__get_beatmapLevel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IBeatmapLevel, 0x8>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult::_ctor(bool isError, GlobalNamespace::IBeatmapLevel beatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, isError, beatmapLevel);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState  GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState::PreparingToDownload{0};
constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState  GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState::Downloading{1};
constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState  GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState::Completed{2};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate::*)(::StringW, uint32_t, uint32_t, GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState)>(&GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21e6a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "bytesTotal", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bytesTransferred", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "downloadingState", ty: "GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate(::StringW levelID, uint32_t bytesTotal, uint32_t bytesTransferred, GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState downloadingState) noexcept : ::bs_hook::ValueTypeWrapper() {this->levelID = levelID;
this->bytesTotal = bytesTotal;
this->bytesTransferred = bytesTransferred;
this->downloadingState = downloadingState;
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate::__set_levelID(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate::__get_levelID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate::__set_bytesTotal(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate::__get_bytesTotal() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate::__set_bytesTransferred(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0xc>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate::__get_bytesTransferred() const {
return ::cordl_internals::getInstanceField<uint32_t, 0xc>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate::__set_downloadingState(GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState, 0x10>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState>(value));
}
constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate::__get_downloadingState() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState, 0x10>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate::_ctor(::StringW levelID, uint32_t bytesTotal, uint32_t bytesTransferred, GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState downloadingState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, levelID, bytesTotal, bytesTransferred, downloadingState);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::MoveNext)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x21e6c68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21e6e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelPackCollection>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelPackCollection>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelPackCollection> __t__builder, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelPackCollection> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelPackCollection> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelPackCollection>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelPackCollection>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelPackCollection> GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelPackCollection>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelPackCollection> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelPackCollection>, 0x20>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelPackCollection>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelPackCollection> GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelPackCollection>, 0x20>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e66b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0._GetLevelPreviewForLevelId_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0::*)(GlobalNamespace::IPreviewBeatmapLevel)>(&GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0::_GetLevelPreviewForLevelId_b__1)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x21e6ecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0>::get(),
                            "<GetLevelPreviewForLevelId>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0::__set_levelId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0::__get_levelId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0 GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0::New_ctor()  {
GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0::_GetLevelPreviewForLevelId_b__1(GlobalNamespace::IPreviewBeatmapLevel beatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0>::get(),
                            "<GetLevelPreviewForLevelId>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, beatmapLevel);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e6fdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c._GetLevelPreviewForLevelId_b__36_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::IPreviewBeatmapLevel> (GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c::*)(GlobalNamespace::IBeatmapLevelPack)>(&GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c::_GetLevelPreviewForLevelId_b__36_0)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x21e6fe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c>::get(),
                            "<GetLevelPreviewForLevelId>b__36_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevelPack>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c::__set___9(GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c value)  {
::cordl_internals::setStaticField<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c>::get>(std::forward<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c>(value));
}
 GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c::__get___9()  {
return ::cordl_internals::getStaticField<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c>::get>();
}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c::__set___9__36_0(System::Func_2<GlobalNamespace::IBeatmapLevelPack,System::Collections::Generic::IEnumerable_1<GlobalNamespace::IPreviewBeatmapLevel>> value)  {
::cordl_internals::setStaticField<System::Func_2<GlobalNamespace::IBeatmapLevelPack,System::Collections::Generic::IEnumerable_1<GlobalNamespace::IPreviewBeatmapLevel>>, "<>9__36_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c>::get>(std::forward<System::Func_2<GlobalNamespace::IBeatmapLevelPack,System::Collections::Generic::IEnumerable_1<GlobalNamespace::IPreviewBeatmapLevel>>>(value));
}
 System::Func_2<GlobalNamespace::IBeatmapLevelPack,System::Collections::Generic::IEnumerable_1<GlobalNamespace::IPreviewBeatmapLevel>> GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c::__get___9__36_0()  {
return ::cordl_internals::getStaticField<System::Func_2<GlobalNamespace::IBeatmapLevelPack,System::Collections::Generic::IEnumerable_1<GlobalNamespace::IPreviewBeatmapLevel>>, "<>9__36_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c>::get>();
}
 GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c::New_ctor()  {
GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::IPreviewBeatmapLevel> GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c::_GetLevelPreviewForLevelId_b__36_0(GlobalNamespace::IBeatmapLevelPack beatmapLevelPack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c>::get(),
                            "<GetLevelPreviewForLevelId>b__36_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevelPack>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<GlobalNamespace::IPreviewBeatmapLevel>, false>(const_cast<void*>(instance), ___internal_method, beatmapLevelPack);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::MoveNext)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x21e70f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21e77a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::BeatmapLevelsModel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_beatmapLevel_5__2", ty: "GlobalNamespace::IBeatmapLevel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_loadLevelResult_5__3", ty: "GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> __t__builder, GlobalNamespace::BeatmapLevelsModel __4__this, ::StringW levelID, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __u__1, GlobalNamespace::IBeatmapLevel _beatmapLevel_5__2, GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult _loadLevelResult_5__3, System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> __u__2, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> __u__3) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->levelID = levelID;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
this->_beatmapLevel_5__2 = _beatmapLevel_5__2;
this->_loadLevelResult_5__3 = _loadLevelResult_5__3;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__set___4__this(GlobalNamespace::BeatmapLevelsModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelsModel, 0x20>(this->__instance, std::forward<GlobalNamespace::BeatmapLevelsModel>(value));
}
constexpr GlobalNamespace::BeatmapLevelsModel GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelsModel, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__set_levelID(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__get_levelID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x38>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__set__beatmapLevel_5__2(GlobalNamespace::IBeatmapLevel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IBeatmapLevel, 0x40>(this->__instance, std::forward<GlobalNamespace::IBeatmapLevel>(value));
}
constexpr GlobalNamespace::IBeatmapLevel GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__get__beatmapLevel_5__2() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IBeatmapLevel, 0x40>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__set__loadLevelResult_5__3(GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult, 0x48>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>(value));
}
constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__get__loadLevelResult_5__3() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult, 0x48>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip>, 0x58>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip>, 0x58>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__set___u__3(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>, 0x60>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__get___u__3() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>, 0x60>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::BeatmapLevelsModel.add_levelDownloadingUpdateEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelsModel::*)(System::Action_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate>)>(&GlobalNamespace::BeatmapLevelsModel::add_levelDownloadingUpdateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21e5418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "add_levelDownloadingUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelsModel.remove_levelDownloadingUpdateEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelsModel::*)(System::Action_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate>)>(&GlobalNamespace::BeatmapLevelsModel::remove_levelDownloadingUpdateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21e54c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "remove_levelDownloadingUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelsModel.get_ostAndExtrasPackCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapLevelPackCollectionSO (GlobalNamespace::BeatmapLevelsModel::*)()>(&GlobalNamespace::BeatmapLevelsModel::get_ostAndExtrasPackCollection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e5578;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "get_ostAndExtrasPackCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelsModel.get_dlcBeatmapLevelPackCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IBeatmapLevelPackCollection (GlobalNamespace::BeatmapLevelsModel::*)()>(&GlobalNamespace::BeatmapLevelsModel::get_dlcBeatmapLevelPackCollection)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21e5580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "get_dlcBeatmapLevelPackCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelsModel.get_allLoadedBeatmapLevelPackCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IBeatmapLevelPackCollection (GlobalNamespace::BeatmapLevelsModel::*)()>(&GlobalNamespace::BeatmapLevelsModel::get_allLoadedBeatmapLevelPackCollection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e559c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "get_allLoadedBeatmapLevelPackCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelsModel.get_allLoadedBeatmapLevelWithoutCustomLevelPackCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IBeatmapLevelPackCollection (GlobalNamespace::BeatmapLevelsModel::*)()>(&GlobalNamespace::BeatmapLevelsModel::get_allLoadedBeatmapLevelWithoutCustomLevelPackCollection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e55a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "get_allLoadedBeatmapLevelWithoutCustomLevelPackCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelsModel.get_customLevelPackCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IBeatmapLevelPackCollection (GlobalNamespace::BeatmapLevelsModel::*)()>(&GlobalNamespace::BeatmapLevelsModel::get_customLevelPackCollection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e55ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "get_customLevelPackCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelsModel.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelsModel::*)(GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__InitData)>(&GlobalNamespace::BeatmapLevelsModel::Init)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x21e55b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__InitData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelsModel.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelsModel::*)()>(&GlobalNamespace::BeatmapLevelsModel::Start)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x21e5c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelsModel.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelsModel::*)()>(&GlobalNamespace::BeatmapLevelsModel::OnDestroy)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x21e5d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelsModel.ClearLoadedBeatmapLevelsCaches
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelsModel::*)()>(&GlobalNamespace::BeatmapLevelsModel::ClearLoadedBeatmapLevelsCaches)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x21e5eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "ClearLoadedBeatmapLevelsCaches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelsModel.ReloadCustomLevelPackCollectionAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapLevelPackCollection> (GlobalNamespace::BeatmapLevelsModel::*)(System::Threading::CancellationToken)>(&GlobalNamespace::BeatmapLevelsModel::ReloadCustomLevelPackCollectionAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x21e5f08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "ReloadCustomLevelPackCollectionAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelsModel.GetLevelPackForLevelId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IBeatmapLevelPack (GlobalNamespace::BeatmapLevelsModel::*)(::StringW)>(&GlobalNamespace::BeatmapLevelsModel::GetLevelPackForLevelId)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x21e5fec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "GetLevelPackForLevelId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelsModel.GetLevelPack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IBeatmapLevelPack (GlobalNamespace::BeatmapLevelsModel::*)(::StringW)>(&GlobalNamespace::BeatmapLevelsModel::GetLevelPack)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x21e6540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "GetLevelPack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelsModel.GetLevelPreviewForLevelId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IPreviewBeatmapLevel (GlobalNamespace::BeatmapLevelsModel::*)(::StringW)>(&GlobalNamespace::BeatmapLevelsModel::GetLevelPreviewForLevelId)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x21e278c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "GetLevelPreviewForLevelId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelsModel.IsBeatmapLevelLoaded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatmapLevelsModel::*)(::StringW)>(&GlobalNamespace::BeatmapLevelsModel::IsBeatmapLevelLoaded)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x21e66bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "IsBeatmapLevelLoaded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelsModel.GetBeatmapLevelIfLoaded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IBeatmapLevel (GlobalNamespace::BeatmapLevelsModel::*)(::StringW)>(&GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelIfLoaded)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x21e6798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "GetBeatmapLevelIfLoaded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelsModel.GetBeatmapLevelAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> (GlobalNamespace::BeatmapLevelsModel::*)(::StringW, System::Threading::CancellationToken)>(&GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelAsync)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x21e68a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "GetBeatmapLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelsModel.HandleLevelDataAssetDownloadUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelsModel::*)(GlobalNamespace::LevelDataAssetDownloadUpdate)>(&GlobalNamespace::BeatmapLevelsModel::HandleLevelDataAssetDownloadUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x21e69bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "HandleLevelDataAssetDownloadUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LevelDataAssetDownloadUpdate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelsModel.HandleItemWillBeRemovedFromCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelsModel::*)(GlobalNamespace::IBeatmapLevel)>(&GlobalNamespace::BeatmapLevelsModel::HandleItemWillBeRemovedFromCache)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21e6a1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "HandleItemWillBeRemovedFromCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelsModel.UpdateLoadedPreviewLevels
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelsModel::*)()>(&GlobalNamespace::BeatmapLevelsModel::UpdateLoadedPreviewLevels)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x21e56fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "UpdateLoadedPreviewLevels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelsModel.UpdateAllLoadedBeatmapLevelPacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelsModel::*)()>(&GlobalNamespace::BeatmapLevelsModel::UpdateAllLoadedBeatmapLevelPacks)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x21e6a38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "UpdateAllLoadedBeatmapLevelPacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelsModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelsModel::*)()>(&GlobalNamespace::BeatmapLevelsModel::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x21e6bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BeatmapLevelsModel::__set__dlcLevelPackCollectionContainer(GlobalNamespace::BeatmapLevelPackCollectionContainerSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelPackCollectionContainerSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapLevelPackCollectionContainerSO>(value));
}
constexpr GlobalNamespace::BeatmapLevelPackCollectionContainerSO GlobalNamespace::BeatmapLevelsModel::__get__dlcLevelPackCollectionContainer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelPackCollectionContainerSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__set__ostAndExtrasPackCollection(GlobalNamespace::BeatmapLevelPackCollectionSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelPackCollectionSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapLevelPackCollectionSO>(value));
}
constexpr GlobalNamespace::BeatmapLevelPackCollectionSO GlobalNamespace::BeatmapLevelsModel::__get__ostAndExtrasPackCollection() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelPackCollectionSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__set__maxCachedBeatmapLevels(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::BeatmapLevelsModel::__get__maxCachedBeatmapLevels() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__set__additionalContentModel(GlobalNamespace::AdditionalContentModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AdditionalContentModel, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AdditionalContentModel>(value));
}
constexpr GlobalNamespace::AdditionalContentModel GlobalNamespace::BeatmapLevelsModel::__get__additionalContentModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AdditionalContentModel, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__set__beatmapDataAssetFileModel(GlobalNamespace::IBeatmapDataAssetFileModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IBeatmapDataAssetFileModel, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IBeatmapDataAssetFileModel>(value));
}
constexpr GlobalNamespace::IBeatmapDataAssetFileModel GlobalNamespace::BeatmapLevelsModel::__get__beatmapDataAssetFileModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IBeatmapDataAssetFileModel, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__set__audioClipAsyncLoader(GlobalNamespace::AudioClipAsyncLoader value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AudioClipAsyncLoader, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AudioClipAsyncLoader>(value));
}
constexpr GlobalNamespace::AudioClipAsyncLoader GlobalNamespace::BeatmapLevelsModel::__get__audioClipAsyncLoader() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AudioClipAsyncLoader, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__set__beatmapLevelDataLoader(GlobalNamespace::BeatmapLevelDataLoader value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelDataLoader, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapLevelDataLoader>(value));
}
constexpr GlobalNamespace::BeatmapLevelDataLoader GlobalNamespace::BeatmapLevelsModel::__get__beatmapLevelDataLoader() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelDataLoader, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__set_levelDownloadingUpdateEvent(System::Action_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate>>(value));
}
constexpr System::Action_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate> GlobalNamespace::BeatmapLevelsModel::__get_levelDownloadingUpdateEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__set__allLoadedBeatmapLevelPackCollection(GlobalNamespace::IBeatmapLevelPackCollection value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IBeatmapLevelPackCollection, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IBeatmapLevelPackCollection>(value));
}
constexpr GlobalNamespace::IBeatmapLevelPackCollection GlobalNamespace::BeatmapLevelsModel::__get__allLoadedBeatmapLevelPackCollection() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IBeatmapLevelPackCollection, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__set__allLoadedBeatmapLevelWithoutCustomLevelPackCollection(GlobalNamespace::IBeatmapLevelPackCollection value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IBeatmapLevelPackCollection, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IBeatmapLevelPackCollection>(value));
}
constexpr GlobalNamespace::IBeatmapLevelPackCollection GlobalNamespace::BeatmapLevelsModel::__get__allLoadedBeatmapLevelWithoutCustomLevelPackCollection() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IBeatmapLevelPackCollection, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__set__customLevelPackCollection(GlobalNamespace::IBeatmapLevelPackCollection value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IBeatmapLevelPackCollection, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IBeatmapLevelPackCollection>(value));
}
constexpr GlobalNamespace::IBeatmapLevelPackCollection GlobalNamespace::BeatmapLevelsModel::__get__customLevelPackCollection() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IBeatmapLevelPackCollection, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__set__loadedBeatmapLevels(GlobalNamespace::HMCache_2<::StringW,GlobalNamespace::IBeatmapLevel> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::HMCache_2<::StringW,GlobalNamespace::IBeatmapLevel>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::HMCache_2<::StringW,GlobalNamespace::IBeatmapLevel>>(value));
}
constexpr GlobalNamespace::HMCache_2<::StringW,GlobalNamespace::IBeatmapLevel> GlobalNamespace::BeatmapLevelsModel::__get__loadedBeatmapLevels() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::HMCache_2<::StringW,GlobalNamespace::IBeatmapLevel>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__set__loadedPreviewBeatmapLevels(System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::IPreviewBeatmapLevel> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::IPreviewBeatmapLevel>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::IPreviewBeatmapLevel>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::IPreviewBeatmapLevel> GlobalNamespace::BeatmapLevelsModel::__get__loadedPreviewBeatmapLevels() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::IPreviewBeatmapLevel>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__set__beatmapLevelLoader(GlobalNamespace::BeatmapLevelLoader value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelLoader, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapLevelLoader>(value));
}
constexpr GlobalNamespace::BeatmapLevelLoader GlobalNamespace::BeatmapLevelsModel::__get__beatmapLevelLoader() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelLoader, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::BeatmapLevelsModel::add_levelDownloadingUpdateEvent(System::Action_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "add_levelDownloadingUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapLevelsModel::remove_levelDownloadingUpdateEvent(System::Action_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "remove_levelDownloadingUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::BeatmapLevelPackCollectionSO GlobalNamespace::BeatmapLevelsModel::get_ostAndExtrasPackCollection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "get_ostAndExtrasPackCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BeatmapLevelPackCollectionSO, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::IBeatmapLevelPackCollection GlobalNamespace::BeatmapLevelsModel::get_dlcBeatmapLevelPackCollection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "get_dlcBeatmapLevelPackCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IBeatmapLevelPackCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::IBeatmapLevelPackCollection GlobalNamespace::BeatmapLevelsModel::get_allLoadedBeatmapLevelPackCollection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "get_allLoadedBeatmapLevelPackCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IBeatmapLevelPackCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::IBeatmapLevelPackCollection GlobalNamespace::BeatmapLevelsModel::get_allLoadedBeatmapLevelWithoutCustomLevelPackCollection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "get_allLoadedBeatmapLevelWithoutCustomLevelPackCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IBeatmapLevelPackCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::IBeatmapLevelPackCollection GlobalNamespace::BeatmapLevelsModel::get_customLevelPackCollection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "get_customLevelPackCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IBeatmapLevelPackCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BeatmapLevelsModel::Init(GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__InitData initData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__InitData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, initData);
}
 void GlobalNamespace::BeatmapLevelsModel::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BeatmapLevelsModel::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BeatmapLevelsModel::ClearLoadedBeatmapLevelsCaches()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "ClearLoadedBeatmapLevelsCaches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapLevelPackCollection> GlobalNamespace::BeatmapLevelsModel::ReloadCustomLevelPackCollectionAsync(System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "ReloadCustomLevelPackCollectionAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapLevelPackCollection>, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 GlobalNamespace::IBeatmapLevelPack GlobalNamespace::BeatmapLevelsModel::GetLevelPackForLevelId(::StringW levelId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "GetLevelPackForLevelId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IBeatmapLevelPack, false>(const_cast<void*>(instance), ___internal_method, levelId);
}
 GlobalNamespace::IBeatmapLevelPack GlobalNamespace::BeatmapLevelsModel::GetLevelPack(::StringW levePacklId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "GetLevelPack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IBeatmapLevelPack, false>(const_cast<void*>(instance), ___internal_method, levePacklId);
}
 GlobalNamespace::IPreviewBeatmapLevel GlobalNamespace::BeatmapLevelsModel::GetLevelPreviewForLevelId(::StringW levelId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "GetLevelPreviewForLevelId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IPreviewBeatmapLevel, false>(const_cast<void*>(instance), ___internal_method, levelId);
}
 bool GlobalNamespace::BeatmapLevelsModel::IsBeatmapLevelLoaded(::StringW levelId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "IsBeatmapLevelLoaded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, levelId);
}
 GlobalNamespace::IBeatmapLevel GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelIfLoaded(::StringW levelId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "GetBeatmapLevelIfLoaded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IBeatmapLevel, false>(const_cast<void*>(instance), ___internal_method, levelId);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelAsync(::StringW levelID, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "GetBeatmapLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>, false>(const_cast<void*>(instance), ___internal_method, levelID, cancellationToken);
}
 void GlobalNamespace::BeatmapLevelsModel::HandleLevelDataAssetDownloadUpdate(GlobalNamespace::LevelDataAssetDownloadUpdate update)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "HandleLevelDataAssetDownloadUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LevelDataAssetDownloadUpdate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, update);
}
 void GlobalNamespace::BeatmapLevelsModel::HandleItemWillBeRemovedFromCache(GlobalNamespace::IBeatmapLevel beatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "HandleItemWillBeRemovedFromCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapLevel);
}
 void GlobalNamespace::BeatmapLevelsModel::UpdateLoadedPreviewLevels()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "UpdateLoadedPreviewLevels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BeatmapLevelsModel::UpdateAllLoadedBeatmapLevelPacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            "UpdateAllLoadedBeatmapLevelPacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::BeatmapLevelsModel GlobalNamespace::BeatmapLevelsModel::New_ctor()  {
GlobalNamespace::BeatmapLevelsModel o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::BeatmapLevelsModel>())};
return o;
}
 void GlobalNamespace::BeatmapLevelsModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelsModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
