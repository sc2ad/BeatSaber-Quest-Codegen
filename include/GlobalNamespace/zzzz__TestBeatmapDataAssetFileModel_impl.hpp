#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__TestBeatmapDataAssetFileModel_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_def.hpp"
#include "GlobalNamespace/zzzz__LevelDataAssetDownloadUpdate_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataAssetFileModel_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::*)()>(&::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x64c;
  constexpr static std::size_t addrs = 0x21edd68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21ee3b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "previewBeatmapLevel", ty: "::GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::TestBeatmapDataAssetFileModel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_path_5__2", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "_i_5__3", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> __t__builder, ::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, ::GlobalNamespace::TestBeatmapDataAssetFileModel __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW _path_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1, uint32_t _i_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->previewBeatmapLevel = previewBeatmapLevel;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->_path_5__2 = _path_5__2;
this->__u__1 = __u__1;
this->_i_5__3 = _i_5__3;
this->__u__2 = __u__2;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPreviewBeatmapLevel, 0x20>(this->__instance, std::forward<::GlobalNamespace::IPreviewBeatmapLevel>(value));
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__get_previewBeatmapLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__set___4__this(::GlobalNamespace::TestBeatmapDataAssetFileModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::TestBeatmapDataAssetFileModel, 0x28>(this->__instance, std::forward<::GlobalNamespace::TestBeatmapDataAssetFileModel>(value));
}
constexpr ::GlobalNamespace::TestBeatmapDataAssetFileModel ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::TestBeatmapDataAssetFileModel, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x30>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__set__path_5__2(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__get__path_5__2() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x40>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x40>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__set__i_5__3(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x48>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__get__i_5__3() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x48>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>, 0x50>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>, 0x50>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5::*)()>(&::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x21ee40c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21ee618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5::____GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x20>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x20>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::TestBeatmapDataAssetFileModel.add_levelDataAssetDownloadUpdateEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TestBeatmapDataAssetFileModel::*)(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>)>(&::GlobalNamespace::TestBeatmapDataAssetFileModel::add_levelDataAssetDownloadUpdateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21eda00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestBeatmapDataAssetFileModel>::get(),
                            "add_levelDataAssetDownloadUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestBeatmapDataAssetFileModel.remove_levelDataAssetDownloadUpdateEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TestBeatmapDataAssetFileModel::*)(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>)>(&::GlobalNamespace::TestBeatmapDataAssetFileModel::remove_levelDataAssetDownloadUpdateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21edab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestBeatmapDataAssetFileModel>::get(),
                            "remove_levelDataAssetDownloadUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestBeatmapDataAssetFileModel.GetAssetBundleFileForPreviewLevelAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult> (::GlobalNamespace::TestBeatmapDataAssetFileModel::*)(::GlobalNamespace::IPreviewBeatmapLevel, ::System::Threading::CancellationToken)>(&::GlobalNamespace::TestBeatmapDataAssetFileModel::GetAssetBundleFileForPreviewLevelAsync)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x21edb60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestBeatmapDataAssetFileModel>::get(),
                            "GetAssetBundleFileForPreviewLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestBeatmapDataAssetFileModel.TryDeleteAssetBundleFileForPreviewLevelAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool> (::GlobalNamespace::TestBeatmapDataAssetFileModel::*)(::GlobalNamespace::IPreviewBeatmapLevel, ::System::Threading::CancellationToken)>(&::GlobalNamespace::TestBeatmapDataAssetFileModel::TryDeleteAssetBundleFileForPreviewLevelAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x21edc74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestBeatmapDataAssetFileModel>::get(),
                            "TryDeleteAssetBundleFileForPreviewLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestBeatmapDataAssetFileModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TestBeatmapDataAssetFileModel::*)()>(&::GlobalNamespace::TestBeatmapDataAssetFileModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21edd60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestBeatmapDataAssetFileModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IBeatmapDataAssetFileModel
constexpr  ::GlobalNamespace::TestBeatmapDataAssetFileModel::operator ::GlobalNamespace::IBeatmapDataAssetFileModel() const noexcept {
return ::GlobalNamespace::IBeatmapDataAssetFileModel(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TestBeatmapDataAssetFileModel::__set_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate> ::GlobalNamespace::TestBeatmapDataAssetFileModel::__get_levelDataAssetDownloadUpdateEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::TestBeatmapDataAssetFileModel::add_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestBeatmapDataAssetFileModel>::get(),
                            "add_levelDataAssetDownloadUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::TestBeatmapDataAssetFileModel::remove_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestBeatmapDataAssetFileModel>::get(),
                            "remove_levelDataAssetDownloadUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult> ::GlobalNamespace::TestBeatmapDataAssetFileModel::GetAssetBundleFileForPreviewLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestBeatmapDataAssetFileModel>::get(),
                            "GetAssetBundleFileForPreviewLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>, false>(const_cast<void*>(instance), ___internal_method, previewBeatmapLevel, cancellationToken);
}
 ::System::Threading::Tasks::Task_1<bool> ::GlobalNamespace::TestBeatmapDataAssetFileModel::TryDeleteAssetBundleFileForPreviewLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestBeatmapDataAssetFileModel>::get(),
                            "TryDeleteAssetBundleFileForPreviewLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>, false>(const_cast<void*>(instance), ___internal_method, previewBeatmapLevel, cancellationToken);
}
// Ctor Parameters []
 ::GlobalNamespace::TestBeatmapDataAssetFileModel::TestBeatmapDataAssetFileModel()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TestBeatmapDataAssetFileModel>())) {}
 void ::GlobalNamespace::TestBeatmapDataAssetFileModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestBeatmapDataAssetFileModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
