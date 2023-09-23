#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CachedMediaAsyncLoader_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__ISpriteAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__AsyncCachedLoader_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3::*)()>(&GlobalNamespace::GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x21a375c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21a3a1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::CachedMediaAsyncLoader", modifiers: "", def_value: Some("csnull") }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3::GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite> __t__builder, GlobalNamespace::CachedMediaAsyncLoader __4__this, ::StringW path, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->path = path;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite> GlobalNamespace::GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3::__set___4__this(GlobalNamespace::CachedMediaAsyncLoader value)  {
::cordl_internals::setInstanceField<GlobalNamespace::CachedMediaAsyncLoader, 0x20>(this->__instance, std::forward<GlobalNamespace::CachedMediaAsyncLoader>(value));
}
constexpr GlobalNamespace::CachedMediaAsyncLoader GlobalNamespace::GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::CachedMediaAsyncLoader, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3::__set_path(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3::__get_path() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite>, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> GlobalNamespace::GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite>, 0x38>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::CachedMediaAsyncLoader.ClearCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CachedMediaAsyncLoader::*)()>(&GlobalNamespace::CachedMediaAsyncLoader::ClearCache)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21a35f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CachedMediaAsyncLoader>::get(),
                            "ClearCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CachedMediaAsyncLoader.LoadSpriteAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::Sprite> (GlobalNamespace::CachedMediaAsyncLoader::*)(::StringW, System::Threading::CancellationToken)>(&GlobalNamespace::CachedMediaAsyncLoader::LoadSpriteAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x21a3648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CachedMediaAsyncLoader>::get(),
                            "LoadSpriteAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CachedMediaAsyncLoader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CachedMediaAsyncLoader::*)()>(&GlobalNamespace::CachedMediaAsyncLoader::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21a374c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CachedMediaAsyncLoader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::ISpriteAsyncLoader
constexpr  GlobalNamespace::CachedMediaAsyncLoader::operator GlobalNamespace::ISpriteAsyncLoader() const noexcept {
return GlobalNamespace::ISpriteAsyncLoader(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CachedMediaAsyncLoader::__set__maxNumberOfSpriteCachedElements(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::CachedMediaAsyncLoader::__get__maxNumberOfSpriteCachedElements() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CachedMediaAsyncLoader::__set__spriteAsyncCachedLoader(GlobalNamespace::AsyncCachedLoader_2<::StringW,UnityEngine::Sprite> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AsyncCachedLoader_2<::StringW,UnityEngine::Sprite>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AsyncCachedLoader_2<::StringW,UnityEngine::Sprite>>(value));
}
constexpr GlobalNamespace::AsyncCachedLoader_2<::StringW,UnityEngine::Sprite> GlobalNamespace::CachedMediaAsyncLoader::__get__spriteAsyncCachedLoader() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AsyncCachedLoader_2<::StringW,UnityEngine::Sprite>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::CachedMediaAsyncLoader::ClearCache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CachedMediaAsyncLoader>::get(),
                            "ClearCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<UnityEngine::Sprite> GlobalNamespace::CachedMediaAsyncLoader::LoadSpriteAsync(::StringW path, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CachedMediaAsyncLoader>::get(),
                            "LoadSpriteAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<UnityEngine::Sprite>, false>(const_cast<void*>(instance), ___internal_method, path, cancellationToken);
}
// Ctor Parameters []
 GlobalNamespace::CachedMediaAsyncLoader::CachedMediaAsyncLoader()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<CachedMediaAsyncLoader>())) {}
 void GlobalNamespace::CachedMediaAsyncLoader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CachedMediaAsyncLoader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
