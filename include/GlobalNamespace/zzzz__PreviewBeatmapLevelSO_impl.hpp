#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__PreviewBeatmapLevelSO_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "GlobalNamespace/zzzz__IAssetSongPreviewAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "GlobalNamespace/zzzz__PreviewDifficultyBeatmapSet_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56::*)()>(&::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56::MoveNext)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x21eca14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21ecc44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::PreviewBeatmapLevelSO", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56::____GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip> __t__builder, ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::PreviewBeatmapLevelSO __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->cancellationToken = cancellationToken;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip> ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x20>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56::__set___4__this(::GlobalNamespace::PreviewBeatmapLevelSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PreviewBeatmapLevelSO, 0x28>(this->__instance, std::forward<::GlobalNamespace::PreviewBeatmapLevelSO>(value));
}
constexpr ::GlobalNamespace::PreviewBeatmapLevelSO ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PreviewBeatmapLevelSO, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip>, 0x30>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip> ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip>, 0x30>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57::*)()>(&::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57::MoveNext)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x21ecc9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21ececc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::PreviewBeatmapLevelSO", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57::____GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite> __t__builder, ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::PreviewBeatmapLevelSO __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->cancellationToken = cancellationToken;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite> ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x20>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57::__set___4__this(::GlobalNamespace::PreviewBeatmapLevelSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PreviewBeatmapLevelSO, 0x28>(this->__instance, std::forward<::GlobalNamespace::PreviewBeatmapLevelSO>(value));
}
constexpr ::GlobalNamespace::PreviewBeatmapLevelSO ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PreviewBeatmapLevelSO, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite>, 0x30>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite> ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite>, 0x30>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::PreviewBeatmapLevelSO.get_levelID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&::GlobalNamespace::PreviewBeatmapLevelSO::get_levelID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ec730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_levelID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewBeatmapLevelSO.get_songName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&::GlobalNamespace::PreviewBeatmapLevelSO::get_songName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ec738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_songName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewBeatmapLevelSO.get_songSubName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&::GlobalNamespace::PreviewBeatmapLevelSO::get_songSubName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ec740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_songSubName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewBeatmapLevelSO.get_songAuthorName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&::GlobalNamespace::PreviewBeatmapLevelSO::get_songAuthorName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ec748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_songAuthorName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewBeatmapLevelSO.get_levelAuthorName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&::GlobalNamespace::PreviewBeatmapLevelSO::get_levelAuthorName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ec750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_levelAuthorName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewBeatmapLevelSO.get_beatsPerMinute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&::GlobalNamespace::PreviewBeatmapLevelSO::get_beatsPerMinute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ec758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_beatsPerMinute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewBeatmapLevelSO.get_songTimeOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&::GlobalNamespace::PreviewBeatmapLevelSO::get_songTimeOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ec760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_songTimeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewBeatmapLevelSO.get_songDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&::GlobalNamespace::PreviewBeatmapLevelSO::get_songDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ec768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_songDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewBeatmapLevelSO.get_shuffle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&::GlobalNamespace::PreviewBeatmapLevelSO::get_shuffle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ec770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_shuffle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewBeatmapLevelSO.get_shufflePeriod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&::GlobalNamespace::PreviewBeatmapLevelSO::get_shufflePeriod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ec778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_shufflePeriod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewBeatmapLevelSO.get_previewStartTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&::GlobalNamespace::PreviewBeatmapLevelSO::get_previewStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ec780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_previewStartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewBeatmapLevelSO.get_previewDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&::GlobalNamespace::PreviewBeatmapLevelSO::get_previewDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ec788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_previewDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewBeatmapLevelSO.get_environmentInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentInfoSO (::GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&::GlobalNamespace::PreviewBeatmapLevelSO::get_environmentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ec790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_environmentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewBeatmapLevelSO.get_allDirectionsEnvironmentInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentInfoSO (::GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&::GlobalNamespace::PreviewBeatmapLevelSO::get_allDirectionsEnvironmentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ec798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_allDirectionsEnvironmentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewBeatmapLevelSO.get_environmentInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::EnvironmentInfoSO> (::GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&::GlobalNamespace::PreviewBeatmapLevelSO::get_environmentInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ec7a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_environmentInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewBeatmapLevelSO.get_songPreviewAudioClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip (::GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&::GlobalNamespace::PreviewBeatmapLevelSO::get_songPreviewAudioClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ec7a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_songPreviewAudioClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewBeatmapLevelSO.get_previewDifficultyBeatmapSets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet> (::GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&::GlobalNamespace::PreviewBeatmapLevelSO::get_previewDifficultyBeatmapSets)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21ec7b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_previewDifficultyBeatmapSets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewBeatmapLevelSO.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&::GlobalNamespace::PreviewBeatmapLevelSO::OnEnable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21ec7cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::PreviewBeatmapLevelSO),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewBeatmapLevelSO.InitData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&::GlobalNamespace::PreviewBeatmapLevelSO::InitData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x21ec7f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "InitData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewBeatmapLevelSO.GetPreviewAudioClipAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> (::GlobalNamespace::PreviewBeatmapLevelSO::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::PreviewBeatmapLevelSO::GetPreviewAudioClipAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x21ec814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "GetPreviewAudioClipAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewBeatmapLevelSO.GetCoverImageAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::Sprite> (::GlobalNamespace::PreviewBeatmapLevelSO::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::PreviewBeatmapLevelSO::GetCoverImageAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x21ec910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "GetCoverImageAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewBeatmapLevelSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&::GlobalNamespace::PreviewBeatmapLevelSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21eca0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IPreviewBeatmapLevel
constexpr  ::GlobalNamespace::PreviewBeatmapLevelSO::operator ::GlobalNamespace::IPreviewBeatmapLevel() const noexcept {
return ::GlobalNamespace::IPreviewBeatmapLevel(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::GlobalNamespace::IAssetSongPreviewAudioClipProvider
constexpr  ::GlobalNamespace::PreviewBeatmapLevelSO::operator ::GlobalNamespace::IAssetSongPreviewAudioClipProvider() const noexcept {
return ::GlobalNamespace::IAssetSongPreviewAudioClipProvider(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PreviewBeatmapLevelSO::__set__levelID(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::PreviewBeatmapLevelSO::__get__levelID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PreviewBeatmapLevelSO::__set__songName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::PreviewBeatmapLevelSO::__get__songName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PreviewBeatmapLevelSO::__set__songSubName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::PreviewBeatmapLevelSO::__get__songSubName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PreviewBeatmapLevelSO::__set__songAuthorName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::PreviewBeatmapLevelSO::__get__songAuthorName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PreviewBeatmapLevelSO::__set__levelAuthorName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::PreviewBeatmapLevelSO::__get__levelAuthorName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PreviewBeatmapLevelSO::__set__previewAudioClip(::UnityEngine::AudioClip value)  {
::cordl_internals::setInstanceField<::UnityEngine::AudioClip, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AudioClip>(value));
}
constexpr ::UnityEngine::AudioClip ::GlobalNamespace::PreviewBeatmapLevelSO::__get__previewAudioClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioClip, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PreviewBeatmapLevelSO::__set__beatsPerMinute(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::PreviewBeatmapLevelSO::__get__beatsPerMinute() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PreviewBeatmapLevelSO::__set__songTimeOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::PreviewBeatmapLevelSO::__get__songTimeOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PreviewBeatmapLevelSO::__set__shuffle(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::PreviewBeatmapLevelSO::__get__shuffle() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PreviewBeatmapLevelSO::__set__shufflePeriod(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::PreviewBeatmapLevelSO::__get__shufflePeriod() const {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PreviewBeatmapLevelSO::__set__previewStartTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::PreviewBeatmapLevelSO::__get__previewStartTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PreviewBeatmapLevelSO::__set__previewDuration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::PreviewBeatmapLevelSO::__get__previewDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PreviewBeatmapLevelSO::__set__songDuration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::PreviewBeatmapLevelSO::__get__songDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PreviewBeatmapLevelSO::__set__coverImage(::UnityEngine::Sprite value)  {
::cordl_internals::setInstanceField<::UnityEngine::Sprite, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Sprite>(value));
}
constexpr ::UnityEngine::Sprite ::GlobalNamespace::PreviewBeatmapLevelSO::__get__coverImage() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Sprite, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PreviewBeatmapLevelSO::__set__environmentInfo(::GlobalNamespace::EnvironmentInfoSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentInfoSO, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::EnvironmentInfoSO>(value));
}
constexpr ::GlobalNamespace::EnvironmentInfoSO ::GlobalNamespace::PreviewBeatmapLevelSO::__get__environmentInfo() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentInfoSO, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PreviewBeatmapLevelSO::__set__allDirectionsEnvironmentInfo(::GlobalNamespace::EnvironmentInfoSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentInfoSO, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::EnvironmentInfoSO>(value));
}
constexpr ::GlobalNamespace::EnvironmentInfoSO ::GlobalNamespace::PreviewBeatmapLevelSO::__get__allDirectionsEnvironmentInfo() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentInfoSO, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PreviewBeatmapLevelSO::__set__environmentInfos(::ArrayW<::GlobalNamespace::EnvironmentInfoSO> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::EnvironmentInfoSO>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::EnvironmentInfoSO>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::EnvironmentInfoSO> ::GlobalNamespace::PreviewBeatmapLevelSO::__get__environmentInfos() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::EnvironmentInfoSO>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PreviewBeatmapLevelSO::__set__previewDifficultyBeatmapSets(::ArrayW<::GlobalNamespace::PreviewDifficultyBeatmapSet> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::PreviewDifficultyBeatmapSet>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::PreviewDifficultyBeatmapSet>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::PreviewDifficultyBeatmapSet> ::GlobalNamespace::PreviewBeatmapLevelSO::__get__previewDifficultyBeatmapSets() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::PreviewDifficultyBeatmapSet>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PreviewBeatmapLevelSO::__set__ignore360MovementBeatmaps(bool value)  {
::cordl_internals::setInstanceField<bool, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::PreviewBeatmapLevelSO::__get__ignore360MovementBeatmaps() const {
return ::cordl_internals::getInstanceField<bool, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PreviewBeatmapLevelSO::__set__no360MovementPreviewDifficultyBeatmapSets(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet>>(value));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet> ::GlobalNamespace::PreviewBeatmapLevelSO::__get__no360MovementPreviewDifficultyBeatmapSets() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW ::GlobalNamespace::PreviewBeatmapLevelSO::get_levelID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_levelID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::GlobalNamespace::PreviewBeatmapLevelSO::get_songName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_songName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::GlobalNamespace::PreviewBeatmapLevelSO::get_songSubName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_songSubName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::GlobalNamespace::PreviewBeatmapLevelSO::get_songAuthorName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_songAuthorName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::GlobalNamespace::PreviewBeatmapLevelSO::get_levelAuthorName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_levelAuthorName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::PreviewBeatmapLevelSO::get_beatsPerMinute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_beatsPerMinute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::PreviewBeatmapLevelSO::get_songTimeOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_songTimeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::PreviewBeatmapLevelSO::get_songDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_songDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::PreviewBeatmapLevelSO::get_shuffle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_shuffle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::PreviewBeatmapLevelSO::get_shufflePeriod()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_shufflePeriod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::PreviewBeatmapLevelSO::get_previewStartTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_previewStartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::PreviewBeatmapLevelSO::get_previewDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_previewDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::EnvironmentInfoSO ::GlobalNamespace::PreviewBeatmapLevelSO::get_environmentInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_environmentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentInfoSO, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::EnvironmentInfoSO ::GlobalNamespace::PreviewBeatmapLevelSO::get_allDirectionsEnvironmentInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_allDirectionsEnvironmentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentInfoSO, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::GlobalNamespace::EnvironmentInfoSO> ::GlobalNamespace::PreviewBeatmapLevelSO::get_environmentInfos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_environmentInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::EnvironmentInfoSO>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::AudioClip ::GlobalNamespace::PreviewBeatmapLevelSO::get_songPreviewAudioClip()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_songPreviewAudioClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioClip, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet> ::GlobalNamespace::PreviewBeatmapLevelSO::get_previewDifficultyBeatmapSets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "get_previewDifficultyBeatmapSets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::PreviewBeatmapLevelSO::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::PreviewBeatmapLevelSO::InitData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "InitData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> ::GlobalNamespace::PreviewBeatmapLevelSO::GetPreviewAudioClipAsync(::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "GetPreviewAudioClipAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip>, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite> ::GlobalNamespace::PreviewBeatmapLevelSO::GetCoverImageAsync(::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            "GetCoverImageAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::Sprite>, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
// Ctor Parameters []
 ::GlobalNamespace::PreviewBeatmapLevelSO::PreviewBeatmapLevelSO()  : ::GlobalNamespace::PersistentScriptableObject(THROW_UNLESS(::il2cpp_utils::New<PreviewBeatmapLevelSO>())) {}
 void ::GlobalNamespace::PreviewBeatmapLevelSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
