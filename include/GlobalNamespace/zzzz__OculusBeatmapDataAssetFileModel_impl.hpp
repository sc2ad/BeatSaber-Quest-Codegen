#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__OculusBeatmapDataAssetFileModel_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDeleteResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetailsList_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetails_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadUpdate_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataAssetFileModel_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__OculusLevelProductsModelSO_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "GlobalNamespace/zzzz__LevelDataAssetDownloadUpdate_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData::*)(::StringW, ::StringW)>(&GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2216a54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData::__set_levelId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData::__get_levelId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData::__set_assetBundlePath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData::__get_assetBundlePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData::__set_downloadAssetBundleFileTCS(System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult>>(value));
}
constexpr System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult> GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData::__get_downloadAssetBundleFileTCS() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData::GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData(::StringW levelId, ::StringW assetBundlePath)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData>(levelId, assetBundlePath))) {}
 void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData::_ctor(::StringW levelId, ::StringW assetBundlePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, levelId, assetBundlePath);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::*)()>(&GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2216f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0._TryDeleteAssetBundleFileForPreviewLevelAsync_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::*)(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDeleteResult>)>(&GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::_TryDeleteAssetBundleFileForPreviewLevelAsync_b__0)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2216f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0>::get(),
                            "<TryDeleteAssetBundleFileForPreviewLevelAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDeleteResult>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__set___4__this(GlobalNamespace::OculusBeatmapDataAssetFileModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OculusBeatmapDataAssetFileModel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OculusBeatmapDataAssetFileModel>(value));
}
constexpr GlobalNamespace::OculusBeatmapDataAssetFileModel GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OculusBeatmapDataAssetFileModel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__set_levelId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__get_levelId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__set_taskSource(System::Threading::Tasks::TaskCompletionSource_1<bool> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCompletionSource_1<bool>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCompletionSource_1<bool>>(value));
}
constexpr System::Threading::Tasks::TaskCompletionSource_1<bool> GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__get_taskSource() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCompletionSource_1<bool>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0>())) {}
 void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::_TryDeleteAssetBundleFileForPreviewLevelAsync_b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDeleteResult> msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0>::get(),
                            "<TryDeleteAssetBundleFileForPreviewLevelAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDeleteResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msg);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::*)()>(&GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x22170b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22176a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::OculusBeatmapDataAssetFileModel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "previewBeatmapLevel", ty: "GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__8__1", ty: "GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_deleted_5__2", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, GlobalNamespace::OculusBeatmapDataAssetFileModel __4__this, System::Threading::CancellationToken cancellationToken, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0 __8__1, bool _deleted_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->previewBeatmapLevel = previewBeatmapLevel;
this->__8__1 = __8__1;
this->_deleted_5__2 = _deleted_5__2;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__set___4__this(GlobalNamespace::OculusBeatmapDataAssetFileModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OculusBeatmapDataAssetFileModel, 0x20>(this->__instance, std::forward<GlobalNamespace::OculusBeatmapDataAssetFileModel>(value));
}
constexpr GlobalNamespace::OculusBeatmapDataAssetFileModel GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OculusBeatmapDataAssetFileModel, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__set_previewBeatmapLevel(GlobalNamespace::IPreviewBeatmapLevel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0x30>(this->__instance, std::forward<GlobalNamespace::IPreviewBeatmapLevel>(value));
}
constexpr GlobalNamespace::IPreviewBeatmapLevel GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__get_previewBeatmapLevel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__set___8__1(GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0 value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0, 0x38>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0 GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__get___8__1() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0, 0x38>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__set__deleted_5__2(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__get__deleted_5__2() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<bool> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x48>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<bool> GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x48>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::*)()>(&GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::MoveNext)> {
  constexpr static std::size_t size = 0xa1c;
  constexpr static std::size_t addrs = 0x22176fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2218118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "previewBeatmapLevel", ty: "GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__4__this", ty: "GlobalNamespace::OculusBeatmapDataAssetFileModel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_levelId_5__2", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_assetFile_5__3", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult> __t__builder, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::OculusBeatmapDataAssetFileModel __4__this, System::Threading::CancellationToken cancellationToken, ::StringW _levelId_5__2, ::StringW _assetFile_5__3, System::Runtime::CompilerServices::TaskAwaiter __u__1, System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> __u__3) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->previewBeatmapLevel = previewBeatmapLevel;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->_levelId_5__2 = _levelId_5__2;
this->_assetFile_5__3 = _assetFile_5__3;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult> GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__set_previewBeatmapLevel(GlobalNamespace::IPreviewBeatmapLevel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0x20>(this->__instance, std::forward<GlobalNamespace::IPreviewBeatmapLevel>(value));
}
constexpr GlobalNamespace::IPreviewBeatmapLevel GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__get_previewBeatmapLevel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__set___4__this(GlobalNamespace::OculusBeatmapDataAssetFileModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OculusBeatmapDataAssetFileModel, 0x28>(this->__instance, std::forward<GlobalNamespace::OculusBeatmapDataAssetFileModel>(value));
}
constexpr GlobalNamespace::OculusBeatmapDataAssetFileModel GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OculusBeatmapDataAssetFileModel, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__set__levelId_5__2(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__get__levelId_5__2() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__set__assetFile_5__3(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__get__assetFile_5__3() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x48>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x48>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<bool> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x50>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<bool> GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x50>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__set___u__3(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>, 0x58>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__get___u__3() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>, 0x58>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::*)()>(&GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2218170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0._ReloadAssetDetailsForAllLevelsAsync_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::*)(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetDetailsList>)>(&GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::_ReloadAssetDetailsForAllLevelsAsync_b__0)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x2218178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0>::get(),
                            "<ReloadAssetDetailsForAllLevelsAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message_1<Oculus::Platform::Models::AssetDetailsList>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::__set_taskSource(System::Threading::Tasks::TaskCompletionSource_1<bool> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCompletionSource_1<bool>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCompletionSource_1<bool>>(value));
}
constexpr System::Threading::Tasks::TaskCompletionSource_1<bool> GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::__get_taskSource() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCompletionSource_1<bool>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::__set___4__this(GlobalNamespace::OculusBeatmapDataAssetFileModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OculusBeatmapDataAssetFileModel, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OculusBeatmapDataAssetFileModel>(value));
}
constexpr GlobalNamespace::OculusBeatmapDataAssetFileModel GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OculusBeatmapDataAssetFileModel, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0>())) {}
 void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::_ReloadAssetDetailsForAllLevelsAsync_b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetDetailsList> getListMsg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0>::get(),
                            "<ReloadAssetDetailsForAllLevelsAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message_1<Oculus::Platform::Models::AssetDetailsList>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, getListMsg);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::*)()>(&GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x2218574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x221888c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::OculusBeatmapDataAssetFileModel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, System::Threading::CancellationToken cancellationToken, GlobalNamespace::OculusBeatmapDataAssetFileModel __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->cancellationToken = cancellationToken;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x20>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::__set___4__this(GlobalNamespace::OculusBeatmapDataAssetFileModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OculusBeatmapDataAssetFileModel, 0x28>(this->__instance, std::forward<GlobalNamespace::OculusBeatmapDataAssetFileModel>(value));
}
constexpr GlobalNamespace::OculusBeatmapDataAssetFileModel GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OculusBeatmapDataAssetFileModel, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<bool> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x30>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<bool> GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x30>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::*)()>(&GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22188e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0._GetDownloadAssetBundleFileAsync_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::*)(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadResult>)>(&GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::_GetDownloadAssetBundleFileAsync_b__0)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x22188ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0>::get(),
                            "<GetDownloadAssetBundleFileAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadResult>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::__set_taskSource(System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult>>(value));
}
constexpr System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult> GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::__get_taskSource() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::__set___4__this(GlobalNamespace::OculusBeatmapDataAssetFileModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OculusBeatmapDataAssetFileModel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OculusBeatmapDataAssetFileModel>(value));
}
constexpr GlobalNamespace::OculusBeatmapDataAssetFileModel GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OculusBeatmapDataAssetFileModel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::__set_assetDetails(Oculus::Platform::Models::AssetDetails value)  {
::cordl_internals::setInstanceField<Oculus::Platform::Models::AssetDetails, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::Models::AssetDetails>(value));
}
constexpr Oculus::Platform::Models::AssetDetails GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::__get_assetDetails() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::Models::AssetDetails, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0>())) {}
 void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::_GetDownloadAssetBundleFileAsync_b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadResult> msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0>::get(),
                            "<GetDownloadAssetBundleFileAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msg);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::*)()>(&GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x760;
  constexpr static std::size_t addrs = 0x22189b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2219118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::OculusBeatmapDataAssetFileModel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "assetDetails", ty: "Oculus::Platform::Models::AssetDetails", modifiers: "", def_value: Some("csnull") }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult> __t__builder, GlobalNamespace::OculusBeatmapDataAssetFileModel __4__this, Oculus::Platform::Models::AssetDetails assetDetails, ::StringW levelId, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->assetDetails = assetDetails;
this->levelId = levelId;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult> GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__set___4__this(GlobalNamespace::OculusBeatmapDataAssetFileModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OculusBeatmapDataAssetFileModel, 0x20>(this->__instance, std::forward<GlobalNamespace::OculusBeatmapDataAssetFileModel>(value));
}
constexpr GlobalNamespace::OculusBeatmapDataAssetFileModel GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OculusBeatmapDataAssetFileModel, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__set_assetDetails(Oculus::Platform::Models::AssetDetails value)  {
::cordl_internals::setInstanceField<Oculus::Platform::Models::AssetDetails, 0x28>(this->__instance, std::forward<Oculus::Platform::Models::AssetDetails>(value));
}
constexpr Oculus::Platform::Models::AssetDetails GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__get_assetDetails() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::Models::AssetDetails, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__set_levelId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__get_levelId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>, 0x38>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::OculusBeatmapDataAssetFileModel.add_levelDataAssetDownloadUpdateEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>)>(&GlobalNamespace::OculusBeatmapDataAssetFileModel::add_levelDataAssetDownloadUpdateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22161d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusBeatmapDataAssetFileModel>::get(),
                            "add_levelDataAssetDownloadUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusBeatmapDataAssetFileModel.remove_levelDataAssetDownloadUpdateEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>)>(&GlobalNamespace::OculusBeatmapDataAssetFileModel::remove_levelDataAssetDownloadUpdateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2216280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusBeatmapDataAssetFileModel>::get(),
                            "remove_levelDataAssetDownloadUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusBeatmapDataAssetFileModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(GlobalNamespace::OculusLevelProductsModelSO)>(&GlobalNamespace::OculusBeatmapDataAssetFileModel::_ctor)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2216330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusBeatmapDataAssetFileModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OculusLevelProductsModelSO>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusBeatmapDataAssetFileModel.TryDeleteAssetBundleFileForPreviewLevelAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<bool> (GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(GlobalNamespace::IPreviewBeatmapLevel, System::Threading::CancellationToken)>(&GlobalNamespace::OculusBeatmapDataAssetFileModel::TryDeleteAssetBundleFileForPreviewLevelAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2216514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusBeatmapDataAssetFileModel>::get(),
                            "TryDeleteAssetBundleFileForPreviewLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusBeatmapDataAssetFileModel.GetAssetBundleFileForPreviewLevelAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> (GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(GlobalNamespace::IPreviewBeatmapLevel, System::Threading::CancellationToken)>(&GlobalNamespace::OculusBeatmapDataAssetFileModel::GetAssetBundleFileForPreviewLevelAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2216624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusBeatmapDataAssetFileModel>::get(),
                            "GetAssetBundleFileForPreviewLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusBeatmapDataAssetFileModel.ReloadAssetDetailsForAllLevelsAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<bool> (GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(System::Threading::CancellationToken)>(&GlobalNamespace::OculusBeatmapDataAssetFileModel::ReloadAssetDetailsForAllLevelsAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2216734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusBeatmapDataAssetFileModel>::get(),
                            "ReloadAssetDetailsForAllLevelsAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusBeatmapDataAssetFileModel.GetDownloadAssetBundleFileAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> (GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(::StringW, Oculus::Platform::Models::AssetDetails, System::Threading::CancellationToken)>(&GlobalNamespace::OculusBeatmapDataAssetFileModel::GetDownloadAssetBundleFileAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2216838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusBeatmapDataAssetFileModel>::get(),
                            "GetDownloadAssetBundleFileAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Models::AssetDetails>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusBeatmapDataAssetFileModel.GetTaskCompletionSourceForDownload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult> (GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(::StringW, Oculus::Platform::Models::AssetDetails)>(&GlobalNamespace::OculusBeatmapDataAssetFileModel::GetTaskCompletionSourceForDownload)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2216944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusBeatmapDataAssetFileModel>::get(),
                            "GetTaskCompletionSourceForDownload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Models::AssetDetails>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusBeatmapDataAssetFileModel.HandleAssetFileDownloadUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadUpdate>)>(&GlobalNamespace::OculusBeatmapDataAssetFileModel::HandleAssetFileDownloadUpdate)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x2216ae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusBeatmapDataAssetFileModel>::get(),
                            "HandleAssetFileDownloadUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadUpdate>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusBeatmapDataAssetFileModel.__ctor_b__12_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadUpdate>)>(&GlobalNamespace::OculusBeatmapDataAssetFileModel::__ctor_b__12_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2216f48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusBeatmapDataAssetFileModel>::get(),
                            "<.ctor>b__12_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadUpdate>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IBeatmapDataAssetFileModel
constexpr  GlobalNamespace::OculusBeatmapDataAssetFileModel::operator GlobalNamespace::IBeatmapDataAssetFileModel() const noexcept {
return GlobalNamespace::IBeatmapDataAssetFileModel(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel::__set_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>>(value));
}
constexpr System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate> GlobalNamespace::OculusBeatmapDataAssetFileModel::__get_levelDataAssetDownloadUpdateEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel::__set__assetIdToDownloadinData(System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData> GlobalNamespace::OculusBeatmapDataAssetFileModel::__get__assetIdToDownloadinData() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel::__set__downloadedAssetBundleFiles(System::Collections::Generic::Dictionary_2<::StringW,::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::StringW,::StringW>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<::StringW,::StringW>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::StringW,::StringW> GlobalNamespace::OculusBeatmapDataAssetFileModel::__get__downloadedAssetBundleFiles() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::StringW,::StringW>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel::__set__lastAssetFileDownloadUpdateForAssetIds(System::Collections::Generic::Dictionary_2<uint64_t,Oculus::Platform::Models::AssetFileDownloadUpdate> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<uint64_t,Oculus::Platform::Models::AssetFileDownloadUpdate>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<uint64_t,Oculus::Platform::Models::AssetFileDownloadUpdate>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<uint64_t,Oculus::Platform::Models::AssetFileDownloadUpdate> GlobalNamespace::OculusBeatmapDataAssetFileModel::__get__lastAssetFileDownloadUpdateForAssetIds() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<uint64_t,Oculus::Platform::Models::AssetFileDownloadUpdate>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel::__set__lastAssetFileDownloadUpdateTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::OculusBeatmapDataAssetFileModel::__get__lastAssetFileDownloadUpdateTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel::__set__semaphoreSlim(System::Threading::SemaphoreSlim value)  {
::cordl_internals::setInstanceField<System::Threading::SemaphoreSlim, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::SemaphoreSlim>(value));
}
constexpr System::Threading::SemaphoreSlim GlobalNamespace::OculusBeatmapDataAssetFileModel::__get__semaphoreSlim() const {
return ::cordl_internals::getInstanceField<System::Threading::SemaphoreSlim, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel::__set__assetFileToAssetDetails(System::Collections::Generic::Dictionary_2<::StringW,Oculus::Platform::Models::AssetDetails> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::StringW,Oculus::Platform::Models::AssetDetails>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<::StringW,Oculus::Platform::Models::AssetDetails>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::StringW,Oculus::Platform::Models::AssetDetails> GlobalNamespace::OculusBeatmapDataAssetFileModel::__get__assetFileToAssetDetails() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::StringW,Oculus::Platform::Models::AssetDetails>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel::__set__oculusLevelProductsModel(GlobalNamespace::OculusLevelProductsModelSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OculusLevelProductsModelSO, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OculusLevelProductsModelSO>(value));
}
constexpr GlobalNamespace::OculusLevelProductsModelSO GlobalNamespace::OculusBeatmapDataAssetFileModel::__get__oculusLevelProductsModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OculusLevelProductsModelSO, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::OculusBeatmapDataAssetFileModel::add_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusBeatmapDataAssetFileModel>::get(),
                            "add_levelDataAssetDownloadUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::OculusBeatmapDataAssetFileModel::remove_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusBeatmapDataAssetFileModel>::get(),
                            "remove_levelDataAssetDownloadUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "oculusLevelProductsModel", ty: "GlobalNamespace::OculusLevelProductsModelSO", modifiers: "", def_value: None }]
 GlobalNamespace::OculusBeatmapDataAssetFileModel::OculusBeatmapDataAssetFileModel(GlobalNamespace::OculusLevelProductsModelSO oculusLevelProductsModel)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<OculusBeatmapDataAssetFileModel>(oculusLevelProductsModel))) {}
 void GlobalNamespace::OculusBeatmapDataAssetFileModel::_ctor(GlobalNamespace::OculusLevelProductsModelSO oculusLevelProductsModel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusBeatmapDataAssetFileModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OculusLevelProductsModelSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, oculusLevelProductsModel);
}
 System::Threading::Tasks::Task_1<bool> GlobalNamespace::OculusBeatmapDataAssetFileModel::TryDeleteAssetBundleFileForPreviewLevelAsync(GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusBeatmapDataAssetFileModel>::get(),
                            "TryDeleteAssetBundleFileForPreviewLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<bool>, false>(const_cast<void*>(instance), ___internal_method, previewBeatmapLevel, cancellationToken);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> GlobalNamespace::OculusBeatmapDataAssetFileModel::GetAssetBundleFileForPreviewLevelAsync(GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusBeatmapDataAssetFileModel>::get(),
                            "GetAssetBundleFileForPreviewLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>, false>(const_cast<void*>(instance), ___internal_method, previewBeatmapLevel, cancellationToken);
}
 System::Threading::Tasks::Task_1<bool> GlobalNamespace::OculusBeatmapDataAssetFileModel::ReloadAssetDetailsForAllLevelsAsync(System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusBeatmapDataAssetFileModel>::get(),
                            "ReloadAssetDetailsForAllLevelsAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<bool>, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> GlobalNamespace::OculusBeatmapDataAssetFileModel::GetDownloadAssetBundleFileAsync(::StringW levelId, Oculus::Platform::Models::AssetDetails assetDetails, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusBeatmapDataAssetFileModel>::get(),
                            "GetDownloadAssetBundleFileAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Models::AssetDetails>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>, false>(const_cast<void*>(instance), ___internal_method, levelId, assetDetails, cancellationToken);
}
 System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult> GlobalNamespace::OculusBeatmapDataAssetFileModel::GetTaskCompletionSourceForDownload(::StringW levelId, Oculus::Platform::Models::AssetDetails assetDetail)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusBeatmapDataAssetFileModel>::get(),
                            "GetTaskCompletionSourceForDownload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Models::AssetDetails>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult>, false>(const_cast<void*>(instance), ___internal_method, levelId, assetDetail);
}
 void GlobalNamespace::OculusBeatmapDataAssetFileModel::HandleAssetFileDownloadUpdate(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadUpdate> msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusBeatmapDataAssetFileModel>::get(),
                            "HandleAssetFileDownloadUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadUpdate>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msg);
}
 void GlobalNamespace::OculusBeatmapDataAssetFileModel::__ctor_b__12_0(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadUpdate> msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusBeatmapDataAssetFileModel>::get(),
                            "<.ctor>b__12_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadUpdate>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msg);
}
