#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__MediaAsyncLoader_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "GlobalNamespace/zzzz__MediaAsyncLoader_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "GlobalNamespace/zzzz__IMediaAsyncLoader_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0::*)()>(&GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0::MoveNext)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x21a21bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21a25f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "uri", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_www_5__2", ty: "UnityEngine::Networking::UnityWebRequest", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_request_5__3", ty: "UnityEngine::AsyncOperation", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0::GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, ::StringW uri, System::Threading::CancellationToken cancellationToken, UnityEngine::Networking::UnityWebRequest _www_5__2, UnityEngine::AsyncOperation _request_5__3, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->uri = uri;
this->cancellationToken = cancellationToken;
this->_www_5__2 = _www_5__2;
this->_request_5__3 = _request_5__3;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0::__set_uri(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0::__get_uri() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0::__set__www_5__2(UnityEngine::Networking::UnityWebRequest value)  {
::cordl_internals::setInstanceField<UnityEngine::Networking::UnityWebRequest, 0x30>(this->__instance, std::forward<UnityEngine::Networking::UnityWebRequest>(value));
}
constexpr UnityEngine::Networking::UnityWebRequest GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0::__get__www_5__2() const {
return ::cordl_internals::getInstanceField<UnityEngine::Networking::UnityWebRequest, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0::__set__request_5__3(UnityEngine::AsyncOperation value)  {
::cordl_internals::setInstanceField<UnityEngine::AsyncOperation, 0x38>(this->__instance, std::forward<UnityEngine::AsyncOperation>(value));
}
constexpr UnityEngine::AsyncOperation GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0::__get__request_5__3() const {
return ::cordl_internals::getInstanceField<UnityEngine::AsyncOperation, 0x38>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x40>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x40>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1::*)()>(&GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1::MoveNext)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x21a2650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21a2ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::AudioClip>", modifiers: "", def_value: Some("{}") }, CppParam { name: "filePath", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_www_5__2", ty: "UnityEngine::Networking::UnityWebRequest", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_request_5__3", ty: "UnityEngine::AsyncOperation", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1::GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::AudioClip> __t__builder, ::StringW filePath, UnityEngine::Networking::UnityWebRequest _www_5__2, UnityEngine::AsyncOperation _request_5__3, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->filePath = filePath;
this->_www_5__2 = _www_5__2;
this->_request_5__3 = _request_5__3;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::AudioClip> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::AudioClip>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::AudioClip>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::AudioClip> GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::AudioClip>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1::__set_filePath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1::__get_filePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1::__set__www_5__2(UnityEngine::Networking::UnityWebRequest value)  {
::cordl_internals::setInstanceField<UnityEngine::Networking::UnityWebRequest, 0x28>(this->__instance, std::forward<UnityEngine::Networking::UnityWebRequest>(value));
}
constexpr UnityEngine::Networking::UnityWebRequest GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1::__get__www_5__2() const {
return ::cordl_internals::getInstanceField<UnityEngine::Networking::UnityWebRequest, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1::__set__request_5__3(UnityEngine::AsyncOperation value)  {
::cordl_internals::setInstanceField<UnityEngine::AsyncOperation, 0x30>(this->__instance, std::forward<UnityEngine::AsyncOperation>(value));
}
constexpr UnityEngine::AsyncOperation GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1::__get__request_5__3() const {
return ::cordl_internals::getInstanceField<UnityEngine::AsyncOperation, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x38>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2::*)()>(&GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2::MoveNext)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x21a2b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21a2f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Texture2D>", modifiers: "", def_value: Some("{}") }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_www_5__2", ty: "UnityEngine::Networking::UnityWebRequest", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_request_5__3", ty: "UnityEngine::AsyncOperation", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2::GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Texture2D> __t__builder, ::StringW path, System::Threading::CancellationToken cancellationToken, UnityEngine::Networking::UnityWebRequest _www_5__2, UnityEngine::AsyncOperation _request_5__3, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->path = path;
this->cancellationToken = cancellationToken;
this->_www_5__2 = _www_5__2;
this->_request_5__3 = _request_5__3;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Texture2D> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Texture2D>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Texture2D>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Texture2D> GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Texture2D>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2::__set_path(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2::__get_path() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2::__set__www_5__2(UnityEngine::Networking::UnityWebRequest value)  {
::cordl_internals::setInstanceField<UnityEngine::Networking::UnityWebRequest, 0x30>(this->__instance, std::forward<UnityEngine::Networking::UnityWebRequest>(value));
}
constexpr UnityEngine::Networking::UnityWebRequest GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2::__get__www_5__2() const {
return ::cordl_internals::getInstanceField<UnityEngine::Networking::UnityWebRequest, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2::__set__request_5__3(UnityEngine::AsyncOperation value)  {
::cordl_internals::setInstanceField<UnityEngine::AsyncOperation, 0x38>(this->__instance, std::forward<UnityEngine::AsyncOperation>(value));
}
constexpr UnityEngine::AsyncOperation GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2::__get__request_5__3() const {
return ::cordl_internals::getInstanceField<UnityEngine::AsyncOperation, 0x38>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x40>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x40>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3::*)()>(&GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x5ec;
  constexpr static std::size_t addrs = 0x21a2fac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21a3598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite>", modifiers: "", def_value: Some("{}") }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_www_5__2", ty: "UnityEngine::Networking::UnityWebRequest", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_request_5__3", ty: "UnityEngine::AsyncOperation", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3::GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite> __t__builder, ::StringW path, System::Threading::CancellationToken cancellationToken, UnityEngine::Networking::UnityWebRequest _www_5__2, UnityEngine::AsyncOperation _request_5__3, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->path = path;
this->cancellationToken = cancellationToken;
this->_www_5__2 = _www_5__2;
this->_request_5__3 = _request_5__3;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite> GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3::__set_path(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3::__get_path() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3::__set__www_5__2(UnityEngine::Networking::UnityWebRequest value)  {
::cordl_internals::setInstanceField<UnityEngine::Networking::UnityWebRequest, 0x30>(this->__instance, std::forward<UnityEngine::Networking::UnityWebRequest>(value));
}
constexpr UnityEngine::Networking::UnityWebRequest GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3::__get__www_5__2() const {
return ::cordl_internals::getInstanceField<UnityEngine::Networking::UnityWebRequest, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3::__set__request_5__3(UnityEngine::AsyncOperation value)  {
::cordl_internals::setInstanceField<UnityEngine::AsyncOperation, 0x38>(this->__instance, std::forward<UnityEngine::AsyncOperation>(value));
}
constexpr UnityEngine::AsyncOperation GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3::__get__request_5__3() const {
return ::cordl_internals::getInstanceField<UnityEngine::AsyncOperation, 0x38>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x40>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x40>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::MediaAsyncLoader.LoadWebpage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<::StringW> (*)(::StringW, System::Threading::CancellationToken)>(&GlobalNamespace::MediaAsyncLoader::LoadWebpage)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x21a1d78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MediaAsyncLoader>::get(),
                            "LoadWebpage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MediaAsyncLoader.LoadAudioClipFromFilePathAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::AudioClip> (GlobalNamespace::MediaAsyncLoader::*)(::StringW)>(&GlobalNamespace::MediaAsyncLoader::LoadAudioClipFromFilePathAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x21a1e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MediaAsyncLoader>::get(),
                            "LoadAudioClipFromFilePathAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MediaAsyncLoader.LoadTextureAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::Texture2D> (*)(::StringW, System::Threading::CancellationToken)>(&GlobalNamespace::MediaAsyncLoader::LoadTextureAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x21a1f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MediaAsyncLoader>::get(),
                            "LoadTextureAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MediaAsyncLoader.LoadSpriteAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::Sprite> (*)(::StringW, System::Threading::CancellationToken)>(&GlobalNamespace::MediaAsyncLoader::LoadSpriteAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x21a2060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MediaAsyncLoader>::get(),
                            "LoadSpriteAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MediaAsyncLoader.Log
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&GlobalNamespace::MediaAsyncLoader::Log)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21a215c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MediaAsyncLoader>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MediaAsyncLoader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MediaAsyncLoader::*)()>(&GlobalNamespace::MediaAsyncLoader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a21b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MediaAsyncLoader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IMediaAsyncLoader
constexpr  GlobalNamespace::MediaAsyncLoader::operator GlobalNamespace::IMediaAsyncLoader() const noexcept {
return GlobalNamespace::IMediaAsyncLoader(::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::Task_1<::StringW> GlobalNamespace::MediaAsyncLoader::LoadWebpage(::StringW uri, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MediaAsyncLoader>::get(),
                            "LoadWebpage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<::StringW>, false>(nullptr, ___internal_method, uri, cancellationToken);
}
 System::Threading::Tasks::Task_1<UnityEngine::AudioClip> GlobalNamespace::MediaAsyncLoader::LoadAudioClipFromFilePathAsync(::StringW filePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MediaAsyncLoader>::get(),
                            "LoadAudioClipFromFilePathAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<UnityEngine::AudioClip>, false>(const_cast<void*>(instance), ___internal_method, filePath);
}
 System::Threading::Tasks::Task_1<UnityEngine::Texture2D> GlobalNamespace::MediaAsyncLoader::LoadTextureAsync(::StringW path, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MediaAsyncLoader>::get(),
                            "LoadTextureAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<UnityEngine::Texture2D>, false>(nullptr, ___internal_method, path, cancellationToken);
}
 System::Threading::Tasks::Task_1<UnityEngine::Sprite> GlobalNamespace::MediaAsyncLoader::LoadSpriteAsync(::StringW path, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MediaAsyncLoader>::get(),
                            "LoadSpriteAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<UnityEngine::Sprite>, false>(nullptr, ___internal_method, path, cancellationToken);
}
 void GlobalNamespace::MediaAsyncLoader::Log(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MediaAsyncLoader>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
 GlobalNamespace::MediaAsyncLoader GlobalNamespace::MediaAsyncLoader::New_ctor()  {
GlobalNamespace::MediaAsyncLoader o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::MediaAsyncLoader>())};
return o;
}
 void GlobalNamespace::MediaAsyncLoader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MediaAsyncLoader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
