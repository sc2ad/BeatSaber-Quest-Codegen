#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__SonyBeatmapDataAssetFileModel_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__LevelDataAssetDownloadUpdate_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataAssetFileModel_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3::*)()>(&GlobalNamespace::GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x221b738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x221b970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3::GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult> __t__builder, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult> GlobalNamespace::GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>, 0x20>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> GlobalNamespace::GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>, 0x20>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::SonyBeatmapDataAssetFileModel.add_levelDataAssetDownloadUpdateEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SonyBeatmapDataAssetFileModel::*)(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>)>(&GlobalNamespace::SonyBeatmapDataAssetFileModel::add_levelDataAssetDownloadUpdateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x221b47c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyBeatmapDataAssetFileModel>::get(),
                            "add_levelDataAssetDownloadUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SonyBeatmapDataAssetFileModel.remove_levelDataAssetDownloadUpdateEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SonyBeatmapDataAssetFileModel::*)(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>)>(&GlobalNamespace::SonyBeatmapDataAssetFileModel::remove_levelDataAssetDownloadUpdateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x221b52c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyBeatmapDataAssetFileModel>::get(),
                            "remove_levelDataAssetDownloadUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SonyBeatmapDataAssetFileModel.GetAssetBundleFileForPreviewLevelAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> (GlobalNamespace::SonyBeatmapDataAssetFileModel::*)(GlobalNamespace::IPreviewBeatmapLevel, System::Threading::CancellationToken)>(&GlobalNamespace::SonyBeatmapDataAssetFileModel::GetAssetBundleFileForPreviewLevelAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x221b5dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyBeatmapDataAssetFileModel>::get(),
                            "GetAssetBundleFileForPreviewLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SonyBeatmapDataAssetFileModel.TryDeleteAssetBundleFileForPreviewLevelAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<bool> (GlobalNamespace::SonyBeatmapDataAssetFileModel::*)(GlobalNamespace::IPreviewBeatmapLevel, System::Threading::CancellationToken)>(&GlobalNamespace::SonyBeatmapDataAssetFileModel::TryDeleteAssetBundleFileForPreviewLevelAsync)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x221b6c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyBeatmapDataAssetFileModel>::get(),
                            "TryDeleteAssetBundleFileForPreviewLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SonyBeatmapDataAssetFileModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SonyBeatmapDataAssetFileModel::*)()>(&GlobalNamespace::SonyBeatmapDataAssetFileModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221b730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyBeatmapDataAssetFileModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IBeatmapDataAssetFileModel
constexpr  GlobalNamespace::SonyBeatmapDataAssetFileModel::operator GlobalNamespace::IBeatmapDataAssetFileModel() const noexcept {
return GlobalNamespace::IBeatmapDataAssetFileModel(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SonyBeatmapDataAssetFileModel::__set_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>>(value));
}
constexpr System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate> GlobalNamespace::SonyBeatmapDataAssetFileModel::__get_levelDataAssetDownloadUpdateEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::SonyBeatmapDataAssetFileModel::add_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyBeatmapDataAssetFileModel>::get(),
                            "add_levelDataAssetDownloadUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::SonyBeatmapDataAssetFileModel::remove_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyBeatmapDataAssetFileModel>::get(),
                            "remove_levelDataAssetDownloadUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> GlobalNamespace::SonyBeatmapDataAssetFileModel::GetAssetBundleFileForPreviewLevelAsync(GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyBeatmapDataAssetFileModel>::get(),
                            "GetAssetBundleFileForPreviewLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>, false>(const_cast<void*>(instance), ___internal_method, previewBeatmapLevel, cancellationToken);
}
 System::Threading::Tasks::Task_1<bool> GlobalNamespace::SonyBeatmapDataAssetFileModel::TryDeleteAssetBundleFileForPreviewLevelAsync(GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyBeatmapDataAssetFileModel>::get(),
                            "TryDeleteAssetBundleFileForPreviewLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<bool>, false>(const_cast<void*>(instance), ___internal_method, previewBeatmapLevel, cancellationToken);
}
// Ctor Parameters []
 GlobalNamespace::SonyBeatmapDataAssetFileModel::SonyBeatmapDataAssetFileModel()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SonyBeatmapDataAssetFileModel>())) {}
 void GlobalNamespace::SonyBeatmapDataAssetFileModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyBeatmapDataAssetFileModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
