#pragma once
#include "GlobalNamespace/zzzz__VideoProjectionEffect_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__VideoProjectionEffect_def.hpp"
#include "GlobalNamespace/zzzz__SongTimeSyncedVideoPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VideoProjectionDataModelSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentContext_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/Video/zzzz__VideoClip_def.hpp"
#include "GlobalNamespace/zzzz__VideoProjectionDataModelSO_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__InitData::*)(::GlobalNamespace::IPreviewBeatmapLevel)>(&::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2268318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__InitData::__set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPreviewBeatmapLevel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IPreviewBeatmapLevel>(value));
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__InitData::__get_previewBeatmapLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "previewBeatmapLevel", ty: "::GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__InitData::____GlobalNamespace__VideoProjectionEffect__InitData(::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__VideoProjectionEffect__InitData>(previewBeatmapLevel))) {}
 void ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__InitData::_ctor(::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, previewBeatmapLevel);
}
//  Writing Method size for method: ::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0::*)()>(&::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22686a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0._LoadVideoFromModel_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0::*)(::GlobalNamespace::____GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId)>(&::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0::_LoadVideoFromModel_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2268744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0>::get(),
                            "<LoadVideoFromModel>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0::__set_eventValue(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0::__get_eventValue() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0>())) {}
 void ::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0::_LoadVideoFromModel_b__0(::GlobalNamespace::____GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId clipWithId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0>::get(),
                            "<LoadVideoFromModel>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, clipWithId);
}
//  Writing Method size for method: ::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::*)()>(&::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x2268768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2268a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::__set___4__this(::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior, 0x28>(this->__instance, std::forward<::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior ::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite>, 0x30>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite> ::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite>, 0x30>(this->__instance);
}
 void ::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior::*)(::GlobalNamespace::VideoProjectionDataModelSO, ::GlobalNamespace::SongTimeSyncedVideoPlayer, ::GlobalNamespace::IPreviewBeatmapLevel)>(&::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2268340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VideoProjectionDataModelSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongTimeSyncedVideoPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior::*)()>(&::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior::Dispose)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x226837c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior.LoadVideoFromModel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior::*)(int32_t)>(&::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior::LoadVideoFromModel)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x226842c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior>::get(),
                            "LoadVideoFromModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior.LoadPreviewCoverAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior::*)()>(&::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior::LoadPreviewCoverAsset)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x22686b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior>::get(),
                            "LoadPreviewCoverAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior::__set__eventValue(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior::__get__eventValue() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior::__set__videoClipHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::Video::VideoClip> value)  {
::cordl_internals::setInstanceField<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::Video::VideoClip>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::Video::VideoClip>>(value));
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::Video::VideoClip> ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior::__get__videoClipHandle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::Video::VideoClip>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior::__set__model(::GlobalNamespace::VideoProjectionDataModelSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::VideoProjectionDataModelSO, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::VideoProjectionDataModelSO>(value));
}
constexpr ::GlobalNamespace::VideoProjectionDataModelSO ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior::__get__model() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::VideoProjectionDataModelSO, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior::__set__videoPlayer(::GlobalNamespace::SongTimeSyncedVideoPlayer value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SongTimeSyncedVideoPlayer, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::SongTimeSyncedVideoPlayer>(value));
}
constexpr ::GlobalNamespace::SongTimeSyncedVideoPlayer ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior::__get__videoPlayer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongTimeSyncedVideoPlayer, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior::__set__previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPreviewBeatmapLevel, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IPreviewBeatmapLevel>(value));
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior::__get__previewBeatmapLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "dataModel", ty: "::GlobalNamespace::VideoProjectionDataModelSO", modifiers: "", def_value: None }, CppParam { name: "videoPlayer", ty: "::GlobalNamespace::SongTimeSyncedVideoPlayer", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty: "::GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior(::GlobalNamespace::VideoProjectionDataModelSO dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer videoPlayer, ::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior>(dataModel, videoPlayer, previewBeatmapLevel))) {}
 void ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior::_ctor(::GlobalNamespace::VideoProjectionDataModelSO dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer videoPlayer, ::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VideoProjectionDataModelSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongTimeSyncedVideoPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dataModel, videoPlayer, previewBeatmapLevel);
}
 void ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior::LoadVideoFromModel(int32_t eventValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior>::get(),
                            "LoadVideoFromModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventValue);
}
 void ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior::LoadPreviewCoverAsset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior>::get(),
                            "LoadPreviewCoverAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::*)(::GlobalNamespace::IReadonlyBeatmapData, ::GlobalNamespace::VideoProjectionDataModelSO, ::GlobalNamespace::SongTimeSyncedVideoPlayer, ::GlobalNamespace::BasicBeatmapEventType, ::GlobalNamespace::BeatmapCallbacksController, ::GlobalNamespace::IPreviewBeatmapLevel)>(&::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::_ctor)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x22680cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VideoProjectionDataModelSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongTimeSyncedVideoPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::*)()>(&::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::Dispose)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2268a50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior.HandleBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::*)(::GlobalNamespace::BasicBeatmapEventData)>(&::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2268a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior>::get(),
                            "HandleBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCallbacksController, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapCallbacksController>(value));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::__set__callbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapDataCallbackWrapper>(value));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::__get__callbackWrapper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "beatmapData", ty: "::GlobalNamespace::IReadonlyBeatmapData", modifiers: "", def_value: None }, CppParam { name: "dataModel", ty: "::GlobalNamespace::VideoProjectionDataModelSO", modifiers: "", def_value: None }, CppParam { name: "videoPlayer", ty: "::GlobalNamespace::SongTimeSyncedVideoPlayer", modifiers: "", def_value: None }, CppParam { name: "videoEventType", ty: "::GlobalNamespace::BasicBeatmapEventType", modifiers: "", def_value: None }, CppParam { name: "beatmapCallbacksController", ty: "::GlobalNamespace::BeatmapCallbacksController", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty: "::GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior(::GlobalNamespace::IReadonlyBeatmapData beatmapData, ::GlobalNamespace::VideoProjectionDataModelSO dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer videoPlayer, ::GlobalNamespace::BasicBeatmapEventType videoEventType, ::GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController, ::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel)  : ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior>(beatmapData, dataModel, videoPlayer, videoEventType, beatmapCallbacksController, previewBeatmapLevel))) {}
 void ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::_ctor(::GlobalNamespace::IReadonlyBeatmapData beatmapData, ::GlobalNamespace::VideoProjectionDataModelSO dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer videoPlayer, ::GlobalNamespace::BasicBeatmapEventType videoEventType, ::GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController, ::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VideoProjectionDataModelSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongTimeSyncedVideoPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapData, dataModel, videoPlayer, videoEventType, beatmapCallbacksController, previewBeatmapLevel);
}
 void ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior>::get(),
                            "HandleBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__GameplayVideoProjectionBehavior._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__GameplayVideoProjectionBehavior::*)(::GlobalNamespace::IReadonlyBeatmapData, ::GlobalNamespace::VideoProjectionDataModelSO, ::GlobalNamespace::SongTimeSyncedVideoPlayer, ::GlobalNamespace::BasicBeatmapEventType, ::GlobalNamespace::IPreviewBeatmapLevel)>(&::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__GameplayVideoProjectionBehavior::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2267f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__GameplayVideoProjectionBehavior>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VideoProjectionDataModelSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongTimeSyncedVideoPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "beatmapData", ty: "::GlobalNamespace::IReadonlyBeatmapData", modifiers: "", def_value: None }, CppParam { name: "dataModel", ty: "::GlobalNamespace::VideoProjectionDataModelSO", modifiers: "", def_value: None }, CppParam { name: "videoPlayer", ty: "::GlobalNamespace::SongTimeSyncedVideoPlayer", modifiers: "", def_value: None }, CppParam { name: "videoEventType", ty: "::GlobalNamespace::BasicBeatmapEventType", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty: "::GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__GameplayVideoProjectionBehavior::____GlobalNamespace__VideoProjectionEffect__GameplayVideoProjectionBehavior(::GlobalNamespace::IReadonlyBeatmapData beatmapData, ::GlobalNamespace::VideoProjectionDataModelSO dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer videoPlayer, ::GlobalNamespace::BasicBeatmapEventType videoEventType, ::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel)  : ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__VideoProjectionEffect__GameplayVideoProjectionBehavior>(beatmapData, dataModel, videoPlayer, videoEventType, previewBeatmapLevel))) {}
 void ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__GameplayVideoProjectionBehavior::_ctor(::GlobalNamespace::IReadonlyBeatmapData beatmapData, ::GlobalNamespace::VideoProjectionDataModelSO dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer videoPlayer, ::GlobalNamespace::BasicBeatmapEventType videoEventType, ::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__GameplayVideoProjectionBehavior>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VideoProjectionDataModelSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongTimeSyncedVideoPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapData, dataModel, videoPlayer, videoEventType, previewBeatmapLevel);
}
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionEffect.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VideoProjectionEffect::*)()>(&::GlobalNamespace::VideoProjectionEffect::Start)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2267e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionEffect>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionEffect.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VideoProjectionEffect::*)()>(&::GlobalNamespace::VideoProjectionEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22682f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionEffect>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VideoProjectionEffect::*)()>(&::GlobalNamespace::VideoProjectionEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2268310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::VideoProjectionEffect::__set__videoProjectionDataModel(::GlobalNamespace::VideoProjectionDataModelSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::VideoProjectionDataModelSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::VideoProjectionDataModelSO>(value));
}
constexpr ::GlobalNamespace::VideoProjectionDataModelSO ::GlobalNamespace::VideoProjectionEffect::__get__videoProjectionDataModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::VideoProjectionDataModelSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::VideoProjectionEffect::__set__videoPlayer(::GlobalNamespace::SongTimeSyncedVideoPlayer value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SongTimeSyncedVideoPlayer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::SongTimeSyncedVideoPlayer>(value));
}
constexpr ::GlobalNamespace::SongTimeSyncedVideoPlayer ::GlobalNamespace::VideoProjectionEffect::__get__videoPlayer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongTimeSyncedVideoPlayer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::VideoProjectionEffect::__set__videoEventType(::GlobalNamespace::BasicBeatmapEventType value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BasicBeatmapEventType>(value));
}
constexpr ::GlobalNamespace::BasicBeatmapEventType ::GlobalNamespace::VideoProjectionEffect::__get__videoEventType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::VideoProjectionEffect::__set__initData(::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__InitData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__InitData, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__InitData>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__InitData ::GlobalNamespace::VideoProjectionEffect::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__InitData, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::VideoProjectionEffect::__set__environmentContext(::GlobalNamespace::EnvironmentContext value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentContext, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::EnvironmentContext>(value));
}
constexpr ::GlobalNamespace::EnvironmentContext ::GlobalNamespace::VideoProjectionEffect::__get__environmentContext() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentContext, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::VideoProjectionEffect::__set__beatmapData(::GlobalNamespace::IReadonlyBeatmapData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IReadonlyBeatmapData, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IReadonlyBeatmapData>(value));
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData ::GlobalNamespace::VideoProjectionEffect::__get__beatmapData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IReadonlyBeatmapData, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::VideoProjectionEffect::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCallbacksController, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapCallbacksController>(value));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController ::GlobalNamespace::VideoProjectionEffect::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::VideoProjectionEffect::__set__behavior(::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior ::GlobalNamespace::VideoProjectionEffect::__get__behavior() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::VideoProjectionEffect::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionEffect>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::VideoProjectionEffect::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionEffect>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::VideoProjectionEffect::VideoProjectionEffect()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<VideoProjectionEffect>())) {}
 void ::GlobalNamespace::VideoProjectionEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
