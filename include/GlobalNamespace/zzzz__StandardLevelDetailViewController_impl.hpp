#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__StandardLevelDetailViewController_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelBuyInfoView_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__LoadingControl_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelBuyView_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelDetailView_def.hpp"
#include "GlobalNamespace/zzzz__EventBinder_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelModel_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType::____GlobalNamespace__StandardLevelDetailViewController__ContentType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType  ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType::Loading{0};
constexpr ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType  ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType::OwnedAndReady{1};
constexpr ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType  ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType::NoAllowedDifficultyBeatmap{2};
constexpr ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType  ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType::OwnedAndDownloading{3};
constexpr ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType  ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType::Buy{4};
constexpr ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType  ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType::BuyInfo{5};
constexpr ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType  ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType::Error{6};
constexpr ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType  ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType::Inactive{7};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57::*)()>(&::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57::MoveNext)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x216e838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x216ed54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandardLevelDetailViewController", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57::____GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::StandardLevelDetailViewController __4__this, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57::__set___4__this(::GlobalNamespace::StandardLevelDetailViewController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::StandardLevelDetailViewController, 0x20>(this->__instance, std::forward<::GlobalNamespace::StandardLevelDetailViewController>(value));
}
constexpr ::GlobalNamespace::StandardLevelDetailViewController ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelDetailViewController, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>, 0x30>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>, 0x30>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57::__set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<bool> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62::*)()>(&::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62::MoveNext)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x216ed60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x216f004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandardLevelDetailViewController", modifiers: "", def_value: Some("csnull") }, CppParam { name: "action", ty: "::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62::____GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::StandardLevelDetailViewController __4__this, ::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task> action, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->action = action;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62::__set___4__this(::GlobalNamespace::StandardLevelDetailViewController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::StandardLevelDetailViewController, 0x28>(this->__instance, std::forward<::GlobalNamespace::StandardLevelDetailViewController>(value));
}
constexpr ::GlobalNamespace::StandardLevelDetailViewController ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelDetailViewController, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62::__set_action(::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task> value)  {
::cordl_internals::setInstanceField<::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task>, 0x30>(this->__instance, std::forward<::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task>>(value));
}
constexpr ::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task> ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62::__get_action() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task>, 0x30>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x38>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x38>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d::*)()>(&::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x216f010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x216f288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandardLevelDetailViewController", modifiers: "", def_value: Some("csnull") }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d::____GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::StandardLevelDetailViewController __4__this, ::System::Threading::CancellationToken token, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->token = token;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d::__set___4__this(::GlobalNamespace::StandardLevelDetailViewController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::StandardLevelDetailViewController, 0x20>(this->__instance, std::forward<::GlobalNamespace::StandardLevelDetailViewController>(value));
}
constexpr ::GlobalNamespace::StandardLevelDetailViewController ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelDetailViewController, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d::__set_token(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d::__get_token() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, 0x30>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, 0x30>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d::*)()>(&::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x216f294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x216f610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandardLevelDetailViewController", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::StandardLevelDetailViewController __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d::__set___4__this(::GlobalNamespace::StandardLevelDetailViewController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::StandardLevelDetailViewController, 0x20>(this->__instance, std::forward<::GlobalNamespace::StandardLevelDetailViewController>(value));
}
constexpr ::GlobalNamespace::StandardLevelDetailViewController ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelDetailViewController, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>, 0x28>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>, 0x28>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d::*)()>(&::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x216f61c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x216f894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandardLevelDetailViewController", modifiers: "", def_value: Some("csnull") }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::StandardLevelDetailViewController __4__this, ::System::Threading::CancellationToken token, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->token = token;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d::__set___4__this(::GlobalNamespace::StandardLevelDetailViewController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::StandardLevelDetailViewController, 0x20>(this->__instance, std::forward<::GlobalNamespace::StandardLevelDetailViewController>(value));
}
constexpr ::GlobalNamespace::StandardLevelDetailViewController ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelDetailViewController, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d::__set_token(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d::__get_token() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, 0x30>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, 0x30>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d::*)()>(&::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x216f8a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x216fc68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandardLevelDetailViewController", modifiers: "", def_value: Some("csnull") }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d::____GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::StandardLevelDetailViewController __4__this, ::System::Threading::CancellationToken token, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->token = token;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d::__set___4__this(::GlobalNamespace::StandardLevelDetailViewController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::StandardLevelDetailViewController, 0x20>(this->__instance, std::forward<::GlobalNamespace::StandardLevelDetailViewController>(value));
}
constexpr ::GlobalNamespace::StandardLevelDetailViewController ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelDetailViewController, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d::__set_token(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d::__get_token() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x30>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x30>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d::__set___u__2(::System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x38>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x38>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.add_didPressActionButtonEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController>)>(&::GlobalNamespace::StandardLevelDetailViewController::add_didPressActionButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21641d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "add_didPressActionButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.remove_didPressActionButtonEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController>)>(&::GlobalNamespace::StandardLevelDetailViewController::remove_didPressActionButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2164a90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "remove_didPressActionButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.add_didPressOpenLevelPackButtonEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IBeatmapLevelPack>)>(&::GlobalNamespace::StandardLevelDetailViewController::add_didPressOpenLevelPackButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2164498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "add_didPressOpenLevelPackButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IBeatmapLevelPack>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.remove_didPressOpenLevelPackButtonEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IBeatmapLevelPack>)>(&::GlobalNamespace::StandardLevelDetailViewController::remove_didPressOpenLevelPackButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2164d50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "remove_didPressOpenLevelPackButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IBeatmapLevelPack>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.add_levelFavoriteStatusDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,bool>)>(&::GlobalNamespace::StandardLevelDetailViewController::add_levelFavoriteStatusDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2164548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "add_levelFavoriteStatusDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.remove_levelFavoriteStatusDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,bool>)>(&::GlobalNamespace::StandardLevelDetailViewController::remove_levelFavoriteStatusDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2164e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "remove_levelFavoriteStatusDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.add_didPressPracticeButtonEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IBeatmapLevel>)>(&::GlobalNamespace::StandardLevelDetailViewController::add_didPressPracticeButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2164288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "add_didPressPracticeButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IBeatmapLevel>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.remove_didPressPracticeButtonEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IBeatmapLevel>)>(&::GlobalNamespace::StandardLevelDetailViewController::remove_didPressPracticeButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2164b40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "remove_didPressPracticeButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IBeatmapLevel>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.add_didChangeDifficultyBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IDifficultyBeatmap>)>(&::GlobalNamespace::StandardLevelDetailViewController::add_didChangeDifficultyBeatmapEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2164338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "add_didChangeDifficultyBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IDifficultyBeatmap>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.remove_didChangeDifficultyBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IDifficultyBeatmap>)>(&::GlobalNamespace::StandardLevelDetailViewController::remove_didChangeDifficultyBeatmapEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2164bf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "remove_didChangeDifficultyBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IDifficultyBeatmap>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.add_didChangeContentEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType>)>(&::GlobalNamespace::StandardLevelDetailViewController::add_didChangeContentEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21643e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "add_didChangeContentEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.remove_didChangeContentEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType>)>(&::GlobalNamespace::StandardLevelDetailViewController::remove_didChangeContentEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2164ca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "remove_didChangeContentEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.get_selectedDifficultyBeatmap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IDifficultyBeatmap (::GlobalNamespace::StandardLevelDetailViewController::*)()>(&::GlobalNamespace::StandardLevelDetailViewController::get_selectedDifficultyBeatmap)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2163588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "get_selectedDifficultyBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.get_beatmapLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IPreviewBeatmapLevel (::GlobalNamespace::StandardLevelDetailViewController::*)()>(&::GlobalNamespace::StandardLevelDetailViewController::get_beatmapLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216cbe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "get_beatmapLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.SetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::GlobalNamespace::IPreviewBeatmapLevel, bool, bool, ::StringW, ::GlobalNamespace::BeatmapDifficultyMask, ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO>)>(&::GlobalNamespace::StandardLevelDetailViewController::SetData)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2165b0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.SetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::GlobalNamespace::IBeatmapLevelPack, ::GlobalNamespace::IPreviewBeatmapLevel, bool, bool, bool, ::StringW, ::GlobalNamespace::BeatmapDifficultyMask, ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO>)>(&::GlobalNamespace::StandardLevelDetailViewController::SetData)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x2165c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(bool, bool, bool)>(&::GlobalNamespace::StandardLevelDetailViewController::DidActivate)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x216cc90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::StandardLevelDetailViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.DidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(bool, bool)>(&::GlobalNamespace::StandardLevelDetailViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x216d018;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::StandardLevelDetailViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(&::GlobalNamespace::StandardLevelDetailViewController::OnDestroy)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x216d070;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::StandardLevelDetailViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.RefreshContentLevelDetailView
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(&::GlobalNamespace::StandardLevelDetailViewController::RefreshContentLevelDetailView)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2165708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "RefreshContentLevelDetailView",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.ClearSelected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(&::GlobalNamespace::StandardLevelDetailViewController::ClearSelected)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2165748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "ClearSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.HandleDidChangeDifficultyBeatmap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::GlobalNamespace::StandardLevelDetailView, ::GlobalNamespace::IDifficultyBeatmap)>(&::GlobalNamespace::StandardLevelDetailViewController::HandleDidChangeDifficultyBeatmap)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x216d0ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "HandleDidChangeDifficultyBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.HandleDidFavoriteToggleChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::GlobalNamespace::StandardLevelDetailView, ::UnityEngine::UI::Toggle)>(&::GlobalNamespace::StandardLevelDetailViewController::HandleDidFavoriteToggleChange)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x216d298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "HandleDidFavoriteToggleChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Toggle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.HandleLevelLoadingUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate)>(&::GlobalNamespace::StandardLevelDetailViewController::HandleLevelLoadingUpdate)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x216d310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "HandleLevelLoadingUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.BuyLevelButtonWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(&::GlobalNamespace::StandardLevelDetailViewController::BuyLevelButtonWasPressed)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x216d8a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "BuyLevelButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.BuyPackButtonWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(&::GlobalNamespace::StandardLevelDetailViewController::BuyPackButtonWasPressed)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x216da34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "BuyPackButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.LoadBeatmapLevelAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::StandardLevelDetailViewController::LoadBeatmapLevelAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x216dc48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "LoadBeatmapLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.OpenLevelProductStoreOrShowBuyInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(&::GlobalNamespace::StandardLevelDetailViewController::OpenLevelProductStoreOrShowBuyInfo)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x216dd20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "OpenLevelProductStoreOrShowBuyInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.OpenLevelProductStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(&::GlobalNamespace::StandardLevelDetailViewController::OpenLevelProductStore)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x216d9b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "OpenLevelProductStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.RefreshAvailabilityIfNeeded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(&::GlobalNamespace::StandardLevelDetailViewController::RefreshAvailabilityIfNeeded)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x216cbec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "RefreshAvailabilityIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.ShowContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType, ::StringW, float_t, ::StringW)>(&::GlobalNamespace::StandardLevelDetailViewController::ShowContent)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x216d4a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "ShowContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.ShowLoadingAndDoSomething
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task>)>(&::GlobalNamespace::StandardLevelDetailViewController::ShowLoadingAndDoSomething)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x216dbac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "ShowLoadingAndDoSomething",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(&::GlobalNamespace::StandardLevelDetailViewController::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x216de7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._DidActivate_b__47_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(&::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__47_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x216df00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "<DidActivate>b__47_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._DidActivate_b__47_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(&::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__47_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x216df24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "<DidActivate>b__47_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._DidActivate_b__47_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(&::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__47_2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x216df44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "<DidActivate>b__47_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._DidActivate_b__47_3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(&::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__47_3)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x216df68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "<DidActivate>b__47_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._DidActivate_b__47_4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(&::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__47_4)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x216e0bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "<DidActivate>b__47_4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._DidActivate_b__47_5
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(&::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__47_5)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x216e284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "<DidActivate>b__47_5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._DidActivate_b__47_6
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(&::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__47_6)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x216e378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "<DidActivate>b__47_6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._BuyPackButtonWasPressed_b__56_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::StandardLevelDetailViewController::_BuyPackButtonWasPressed_b__56_0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x216e4e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "<BuyPackButtonWasPressed>b__56_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._OpenLevelProductStoreOrShowBuyInfo_b__58_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::StandardLevelDetailViewController::_OpenLevelProductStoreOrShowBuyInfo_b__58_0)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x216e5bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "<OpenLevelProductStoreOrShowBuyInfo>b__58_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._OpenLevelProductStore_b__59_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::StandardLevelDetailViewController::_OpenLevelProductStore_b__59_0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x216e684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "<OpenLevelProductStore>b__59_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._RefreshAvailabilityIfNeeded_b__60_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::StandardLevelDetailViewController::_RefreshAvailabilityIfNeeded_b__60_0)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x216e760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "<RefreshAvailabilityIfNeeded>b__60_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::StandardLevelDetailViewController::__set__standardLevelDetailView(::GlobalNamespace::StandardLevelDetailView value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::StandardLevelDetailView, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::StandardLevelDetailView>(value));
}
constexpr ::GlobalNamespace::StandardLevelDetailView ::GlobalNamespace::StandardLevelDetailViewController::__get__standardLevelDetailView() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelDetailView, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::StandardLevelDetailViewController::__set__standardLevelBuyView(::GlobalNamespace::StandardLevelBuyView value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::StandardLevelBuyView, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::StandardLevelBuyView>(value));
}
constexpr ::GlobalNamespace::StandardLevelBuyView ::GlobalNamespace::StandardLevelDetailViewController::__get__standardLevelBuyView() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelBuyView, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::StandardLevelDetailViewController::__set__standardLevelBuyInfoView(::GlobalNamespace::StandardLevelBuyInfoView value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::StandardLevelBuyInfoView, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::StandardLevelBuyInfoView>(value));
}
constexpr ::GlobalNamespace::StandardLevelBuyInfoView ::GlobalNamespace::StandardLevelDetailViewController::__get__standardLevelBuyInfoView() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelBuyInfoView, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::StandardLevelDetailViewController::__set__loadingControl(::GlobalNamespace::LoadingControl value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LoadingControl, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::LoadingControl>(value));
}
constexpr ::GlobalNamespace::LoadingControl ::GlobalNamespace::StandardLevelDetailViewController::__get__loadingControl() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LoadingControl, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::StandardLevelDetailViewController::__set__noAllowedBeatmapInfoContainer(::UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::GameObject>(value));
}
constexpr ::UnityEngine::GameObject ::GlobalNamespace::StandardLevelDetailViewController::__get__noAllowedBeatmapInfoContainer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::StandardLevelDetailViewController::__set__playerDataModel(::GlobalNamespace::PlayerDataModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerDataModel, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::PlayerDataModel>(value));
}
constexpr ::GlobalNamespace::PlayerDataModel ::GlobalNamespace::StandardLevelDetailViewController::__get__playerDataModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::StandardLevelDetailViewController::__set__additionalContentModel(::GlobalNamespace::AdditionalContentModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AdditionalContentModel, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::AdditionalContentModel>(value));
}
constexpr ::GlobalNamespace::AdditionalContentModel ::GlobalNamespace::StandardLevelDetailViewController::__get__additionalContentModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AdditionalContentModel, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::StandardLevelDetailViewController::__set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelsModel, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapLevelsModel>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelsModel ::GlobalNamespace::StandardLevelDetailViewController::__get__beatmapLevelsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelsModel, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::StandardLevelDetailViewController::__set__dlcPromoPanelModel(::GlobalNamespace::DlcPromoPanelModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::DlcPromoPanelModel, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::DlcPromoPanelModel>(value));
}
constexpr ::GlobalNamespace::DlcPromoPanelModel ::GlobalNamespace::StandardLevelDetailViewController::__get__dlcPromoPanelModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DlcPromoPanelModel, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::StandardLevelDetailViewController::__set__analyticsModel(::GlobalNamespace::IAnalyticsModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IAnalyticsModel, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IAnalyticsModel>(value));
}
constexpr ::GlobalNamespace::IAnalyticsModel ::GlobalNamespace::StandardLevelDetailViewController::__get__analyticsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAnalyticsModel, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::StandardLevelDetailViewController::__set_didPressActionButtonEvent(::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController>>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController> ::GlobalNamespace::StandardLevelDetailViewController::__get_didPressActionButtonEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::StandardLevelDetailViewController::__set_didPressOpenLevelPackButtonEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IBeatmapLevelPack> value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IBeatmapLevelPack>, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IBeatmapLevelPack>>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IBeatmapLevelPack> ::GlobalNamespace::StandardLevelDetailViewController::__get_didPressOpenLevelPackButtonEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IBeatmapLevelPack>, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::StandardLevelDetailViewController::__set_levelFavoriteStatusDidChangeEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,bool> value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,bool>, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,bool>>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,bool> ::GlobalNamespace::StandardLevelDetailViewController::__get_levelFavoriteStatusDidChangeEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,bool>, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::StandardLevelDetailViewController::__set_didPressPracticeButtonEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IBeatmapLevel> value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IBeatmapLevel>, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IBeatmapLevel>>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IBeatmapLevel> ::GlobalNamespace::StandardLevelDetailViewController::__get_didPressPracticeButtonEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IBeatmapLevel>, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::StandardLevelDetailViewController::__set_didChangeDifficultyBeatmapEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IDifficultyBeatmap> value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IDifficultyBeatmap>, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IDifficultyBeatmap>>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IDifficultyBeatmap> ::GlobalNamespace::StandardLevelDetailViewController::__get_didChangeDifficultyBeatmapEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IDifficultyBeatmap>, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::StandardLevelDetailViewController::__set_didChangeContentEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType> value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType>, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType>>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType> ::GlobalNamespace::StandardLevelDetailViewController::__get_didChangeContentEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType>, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::StandardLevelDetailViewController::__set__ownedObjectsEventBinder(::GlobalNamespace::EventBinder value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EventBinder, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::EventBinder>(value));
}
constexpr ::GlobalNamespace::EventBinder ::GlobalNamespace::StandardLevelDetailViewController::__get__ownedObjectsEventBinder() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EventBinder, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::StandardLevelDetailViewController::__set__eventBinder(::GlobalNamespace::EventBinder value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EventBinder, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::EventBinder>(value));
}
constexpr ::GlobalNamespace::EventBinder ::GlobalNamespace::StandardLevelDetailViewController::__get__eventBinder() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EventBinder, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::StandardLevelDetailViewController::__set__cancellationTokenSource(::System::Threading::CancellationTokenSource value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationTokenSource, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::CancellationTokenSource>(value));
}
constexpr ::System::Threading::CancellationTokenSource ::GlobalNamespace::StandardLevelDetailViewController::__get__cancellationTokenSource() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::StandardLevelDetailViewController::__set__previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPreviewBeatmapLevel, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IPreviewBeatmapLevel>(value));
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel ::GlobalNamespace::StandardLevelDetailViewController::__get__previewBeatmapLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::StandardLevelDetailViewController::__set__beatmapLevel(::GlobalNamespace::IBeatmapLevel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatmapLevel, 0x110>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IBeatmapLevel>(value));
}
constexpr ::GlobalNamespace::IBeatmapLevel ::GlobalNamespace::StandardLevelDetailViewController::__get__beatmapLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevel, 0x110>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::StandardLevelDetailViewController::__set__pack(::GlobalNamespace::IBeatmapLevelPack value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatmapLevelPack, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IBeatmapLevelPack>(value));
}
constexpr ::GlobalNamespace::IBeatmapLevelPack ::GlobalNamespace::StandardLevelDetailViewController::__get__pack() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevelPack, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::StandardLevelDetailViewController::__set__canBuyPack(bool value)  {
::cordl_internals::setInstanceField<bool, 0x120>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::StandardLevelDetailViewController::__get__canBuyPack() const {
return ::cordl_internals::getInstanceField<bool, 0x120>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::StandardLevelDetailViewController::__set__allowedBeatmapDifficultyMask(::GlobalNamespace::BeatmapDifficultyMask value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDifficultyMask, 0x121>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapDifficultyMask>(value));
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask ::GlobalNamespace::StandardLevelDetailViewController::__get__allowedBeatmapDifficultyMask() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficultyMask, 0x121>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::StandardLevelDetailViewController::__set__notAllowedCharacteristics(::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristicSO> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristicSO>, 0x128>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristicSO>>(value));
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristicSO> ::GlobalNamespace::StandardLevelDetailViewController::__get__notAllowedCharacteristics() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristicSO>, 0x128>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::StandardLevelDetailViewController::__set__contentIsOwnedAndReady(bool value)  {
::cordl_internals::setInstanceField<bool, 0x130>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::StandardLevelDetailViewController::__get__contentIsOwnedAndReady() const {
return ::cordl_internals::getInstanceField<bool, 0x130>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::add_didPressActionButtonEvent(::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "add_didPressActionButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::remove_didPressActionButtonEvent(::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "remove_didPressActionButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::add_didPressOpenLevelPackButtonEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IBeatmapLevelPack> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "add_didPressOpenLevelPackButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IBeatmapLevelPack>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::remove_didPressOpenLevelPackButtonEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IBeatmapLevelPack> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "remove_didPressOpenLevelPackButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IBeatmapLevelPack>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::add_levelFavoriteStatusDidChangeEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,bool> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "add_levelFavoriteStatusDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::remove_levelFavoriteStatusDidChangeEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,bool> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "remove_levelFavoriteStatusDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::add_didPressPracticeButtonEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IBeatmapLevel> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "add_didPressPracticeButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IBeatmapLevel>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::remove_didPressPracticeButtonEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IBeatmapLevel> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "remove_didPressPracticeButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IBeatmapLevel>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::add_didChangeDifficultyBeatmapEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IDifficultyBeatmap> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "add_didChangeDifficultyBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IDifficultyBeatmap>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::remove_didChangeDifficultyBeatmapEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IDifficultyBeatmap> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "remove_didChangeDifficultyBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::IDifficultyBeatmap>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::add_didChangeContentEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "add_didChangeContentEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::remove_didChangeContentEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "remove_didChangeContentEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController,::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::GlobalNamespace::IDifficultyBeatmap ::GlobalNamespace::StandardLevelDetailViewController::get_selectedDifficultyBeatmap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "get_selectedDifficultyBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IDifficultyBeatmap, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::IPreviewBeatmapLevel ::GlobalNamespace::StandardLevelDetailViewController::get_beatmapLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "get_beatmapLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IPreviewBeatmapLevel, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::SetData(::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, bool hidePracticeButton, bool hide360DegreeBeatmapCharacteristic, ::StringW playButtonText, ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask, ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO> notAllowedCharacteristics)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, previewBeatmapLevel, hidePracticeButton, hide360DegreeBeatmapCharacteristic, playButtonText, allowedBeatmapDifficultyMask, notAllowedCharacteristics);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::SetData(::GlobalNamespace::IBeatmapLevelPack pack, ::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, bool hidePracticeButton, bool hide360DegreeBeatmapCharacteristic, bool canBuyPack, ::StringW playButtonText, ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask, ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO> notAllowedCharacteristics)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pack, previewBeatmapLevel, hidePracticeButton, hide360DegreeBeatmapCharacteristic, canBuyPack, playButtonText, allowedBeatmapDifficultyMask, notAllowedCharacteristics);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "DidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::RefreshContentLevelDetailView()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "RefreshContentLevelDetailView",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::ClearSelected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "ClearSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::HandleDidChangeDifficultyBeatmap(::GlobalNamespace::StandardLevelDetailView view, ::GlobalNamespace::IDifficultyBeatmap beatmap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "HandleDidChangeDifficultyBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, view, beatmap);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::HandleDidFavoriteToggleChange(::GlobalNamespace::StandardLevelDetailView view, ::UnityEngine::UI::Toggle toggle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "HandleDidFavoriteToggleChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Toggle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, view, toggle);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::HandleLevelLoadingUpdate(::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate levelLoadingUpdate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "HandleLevelLoadingUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, levelLoadingUpdate);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::BuyLevelButtonWasPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "BuyLevelButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::BuyPackButtonWasPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "BuyPackButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task ::GlobalNamespace::StandardLevelDetailViewController::LoadBeatmapLevelAsync(::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "LoadBeatmapLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::OpenLevelProductStoreOrShowBuyInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "OpenLevelProductStoreOrShowBuyInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::OpenLevelProductStore()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "OpenLevelProductStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::RefreshAvailabilityIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "RefreshAvailabilityIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param errorText: ::StringW (default: u"")
/// @param downloadingProgress: float_t (default: 0)
/// @param downloadingText: ::StringW (default: u"")
 void ::GlobalNamespace::StandardLevelDetailViewController::ShowContent(::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType contentType, ::StringW errorText, float_t downloadingProgress, ::StringW downloadingText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "ShowContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, contentType, errorText, downloadingProgress, downloadingText);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::ShowLoadingAndDoSomething(::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task> action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "ShowLoadingAndDoSomething",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, action);
}
// Ctor Parameters []
 ::GlobalNamespace::StandardLevelDetailViewController::StandardLevelDetailViewController()  : ::HMUI::ViewController(THROW_UNLESS(::il2cpp_utils::New<StandardLevelDetailViewController>())) {}
 void ::GlobalNamespace::StandardLevelDetailViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__47_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "<DidActivate>b__47_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__47_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "<DidActivate>b__47_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__47_2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "<DidActivate>b__47_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__47_3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "<DidActivate>b__47_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__47_4()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "<DidActivate>b__47_4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__47_5()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "<DidActivate>b__47_5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__47_6()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "<DidActivate>b__47_6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task ::GlobalNamespace::StandardLevelDetailViewController::_BuyPackButtonWasPressed_b__56_0(::System::Threading::CancellationToken token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "<BuyPackButtonWasPressed>b__56_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, token);
}
 ::System::Threading::Tasks::Task ::GlobalNamespace::StandardLevelDetailViewController::_OpenLevelProductStoreOrShowBuyInfo_b__58_0(::System::Threading::CancellationToken token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "<OpenLevelProductStoreOrShowBuyInfo>b__58_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, token);
}
 ::System::Threading::Tasks::Task ::GlobalNamespace::StandardLevelDetailViewController::_OpenLevelProductStore_b__59_0(::System::Threading::CancellationToken token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "<OpenLevelProductStore>b__59_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, token);
}
 ::System::Threading::Tasks::Task ::GlobalNamespace::StandardLevelDetailViewController::_RefreshAvailabilityIfNeeded_b__60_0(::System::Threading::CancellationToken token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController>::get(),
                            "<RefreshAvailabilityIfNeeded>b__60_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, token);
}
} // end anonymous namespace
