#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataAssetFileModel_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevel_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult::*)(bool, GlobalNamespace::IBeatmapLevel)>(&GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21e18d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "isError", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevel", ty: "GlobalNamespace::IBeatmapLevel", modifiers: "", def_value: Some("csnull") }]
constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult(bool isError, GlobalNamespace::IBeatmapLevel beatmapLevel) noexcept : ::bs_hook::ValueTypeWrapper() {this->isError = isError;
this->beatmapLevel = beatmapLevel;
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult::__set_isError(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult::__get_isError() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult::__set_beatmapLevel(GlobalNamespace::IBeatmapLevel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IBeatmapLevel, 0x8>(this->__instance, std::forward<GlobalNamespace::IBeatmapLevel>(value));
}
constexpr GlobalNamespace::IBeatmapLevel GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult::__get_beatmapLevel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IBeatmapLevel, 0x8>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult::_ctor(bool isError, GlobalNamespace::IBeatmapLevel beatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, isError, beatmapLevel);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x6d0;
  constexpr static std::size_t addrs = 0x21e18e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21e1fb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::BeatmapLevelLoader", modifiers: "", def_value: Some("csnull") }, CppParam { name: "previewLevel", ty: "GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_level_5__2", ty: "GlobalNamespace::IBeatmapLevel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevel>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> __t__builder, GlobalNamespace::BeatmapLevelLoader __4__this, GlobalNamespace::IPreviewBeatmapLevel previewLevel, System::Threading::CancellationToken cancellationToken, GlobalNamespace::IBeatmapLevel _level_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> __u__1, System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevel> __u__3) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->previewLevel = previewLevel;
this->cancellationToken = cancellationToken;
this->_level_5__2 = _level_5__2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4::__set___4__this(GlobalNamespace::BeatmapLevelLoader value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelLoader, 0x20>(this->__instance, std::forward<GlobalNamespace::BeatmapLevelLoader>(value));
}
constexpr GlobalNamespace::BeatmapLevelLoader GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelLoader, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4::__set_previewLevel(GlobalNamespace::IPreviewBeatmapLevel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0x28>(this->__instance, std::forward<GlobalNamespace::IPreviewBeatmapLevel>(value));
}
constexpr GlobalNamespace::IPreviewBeatmapLevel GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4::__get_previewLevel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4::__set__level_5__2(GlobalNamespace::IBeatmapLevel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IBeatmapLevel, 0x38>(this->__instance, std::forward<GlobalNamespace::IBeatmapLevel>(value));
}
constexpr GlobalNamespace::IBeatmapLevel GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4::__get__level_5__2() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IBeatmapLevel, 0x38>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>, 0x40>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>, 0x40>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4::__set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<bool> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x48>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<bool> GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x48>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4::__set___u__3(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevel> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevel>, 0x50>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevel>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevel> GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4::__get___u__3() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevel>, 0x50>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::BeatmapLevelLoader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelLoader::*)(GlobalNamespace::BeatmapLevelDataLoader, GlobalNamespace::IBeatmapDataAssetFileModel)>(&GlobalNamespace::BeatmapLevelLoader::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x21e1794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelLoader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelDataLoader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapDataAssetFileModel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelLoader.LoadBeatmapLevelAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> (GlobalNamespace::BeatmapLevelLoader::*)(GlobalNamespace::IPreviewBeatmapLevel, System::Threading::CancellationToken)>(&GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelAsync)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x21e17c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelLoader>::get(),
                            "LoadBeatmapLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BeatmapLevelLoader::__set__beatmapLevelDataLoader(GlobalNamespace::BeatmapLevelDataLoader value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelDataLoader, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapLevelDataLoader>(value));
}
constexpr GlobalNamespace::BeatmapLevelDataLoader GlobalNamespace::BeatmapLevelLoader::__get__beatmapLevelDataLoader() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelDataLoader, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapLevelLoader::__set__beatmapDataAssetFileModel(GlobalNamespace::IBeatmapDataAssetFileModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IBeatmapDataAssetFileModel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IBeatmapDataAssetFileModel>(value));
}
constexpr GlobalNamespace::IBeatmapDataAssetFileModel GlobalNamespace::BeatmapLevelLoader::__get__beatmapDataAssetFileModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IBeatmapDataAssetFileModel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "beatmapLevelDataLoader", ty: "GlobalNamespace::BeatmapLevelDataLoader", modifiers: "", def_value: None }, CppParam { name: "beatmapDataAssetFileModel", ty: "GlobalNamespace::IBeatmapDataAssetFileModel", modifiers: "", def_value: None }]
 GlobalNamespace::BeatmapLevelLoader::BeatmapLevelLoader(GlobalNamespace::BeatmapLevelDataLoader beatmapLevelDataLoader, GlobalNamespace::IBeatmapDataAssetFileModel beatmapDataAssetFileModel)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BeatmapLevelLoader>(beatmapLevelDataLoader, beatmapDataAssetFileModel))) {}
 void GlobalNamespace::BeatmapLevelLoader::_ctor(GlobalNamespace::BeatmapLevelDataLoader beatmapLevelDataLoader, GlobalNamespace::IBeatmapDataAssetFileModel beatmapDataAssetFileModel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelLoader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelDataLoader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapDataAssetFileModel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapLevelDataLoader, beatmapDataAssetFileModel);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelAsync(GlobalNamespace::IPreviewBeatmapLevel previewLevel, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelLoader>::get(),
                            "LoadBeatmapLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>, false>(const_cast<void*>(instance), ___internal_method, previewLevel, cancellationToken);
}
