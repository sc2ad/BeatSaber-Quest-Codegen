#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__CustomDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataBasicInfo_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmapSet_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevel_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33::*)()>(&::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33::MoveNext)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x21e99ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21e9c0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::CustomDifficultyBeatmap", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo> __t__builder, ::GlobalNamespace::CustomDifficultyBeatmap __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo> ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33::__set___4__this(::GlobalNamespace::CustomDifficultyBeatmap value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::CustomDifficultyBeatmap, 0x20>(this->__instance, std::forward<::GlobalNamespace::CustomDifficultyBeatmap>(value));
}
constexpr ::GlobalNamespace::CustomDifficultyBeatmap ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::CustomDifficultyBeatmap, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo>, 0x28>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo> ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo>, 0x28>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0::*)()>(&::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e9c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0._GetBeatmapDataAsync_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0::*)()>(&::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0::_GetBeatmapDataAsync_b__0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x21e9c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0>::get(),
                            "<GetBeatmapDataAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0::__set_readonlyBeatmapData(::GlobalNamespace::IReadonlyBeatmapData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IReadonlyBeatmapData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IReadonlyBeatmapData>(value));
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0::__get_readonlyBeatmapData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IReadonlyBeatmapData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0::__set___4__this(::GlobalNamespace::CustomDifficultyBeatmap value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::CustomDifficultyBeatmap, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::CustomDifficultyBeatmap>(value));
}
constexpr ::GlobalNamespace::CustomDifficultyBeatmap ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::CustomDifficultyBeatmap, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0::__set_originalEnvironmentInfo(::GlobalNamespace::EnvironmentInfoSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentInfoSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::EnvironmentInfoSO>(value));
}
constexpr ::GlobalNamespace::EnvironmentInfoSO ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0::__get_originalEnvironmentInfo() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentInfoSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0::__set_environmentInfo(::GlobalNamespace::EnvironmentInfoSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentInfoSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::EnvironmentInfoSO>(value));
}
constexpr ::GlobalNamespace::EnvironmentInfoSO ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0::__get_environmentInfo() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentInfoSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0::__set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerSpecificSettings, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::PlayerSpecificSettings>(value));
}
constexpr ::GlobalNamespace::PlayerSpecificSettings ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0::__get_playerSpecificSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerSpecificSettings, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0>())) {}
 void ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0::_GetBeatmapDataAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0>::get(),
                            "<GetBeatmapDataAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::*)()>(&::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::MoveNext)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x21e9ce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21e9f84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::CustomDifficultyBeatmap", modifiers: "", def_value: Some("csnull") }, CppParam { name: "environmentInfo", ty: "::GlobalNamespace::EnvironmentInfoSO", modifiers: "", def_value: Some("csnull") }, CppParam { name: "playerSpecificSettings", ty: "::GlobalNamespace::PlayerSpecificSettings", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__8__1", ty: "::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData> __t__builder, ::GlobalNamespace::CustomDifficultyBeatmap __4__this, ::GlobalNamespace::EnvironmentInfoSO environmentInfo, ::GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0 __8__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->environmentInfo = environmentInfo;
this->playerSpecificSettings = playerSpecificSettings;
this->__8__1 = __8__1;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData> ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::__set___4__this(::GlobalNamespace::CustomDifficultyBeatmap value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::CustomDifficultyBeatmap, 0x20>(this->__instance, std::forward<::GlobalNamespace::CustomDifficultyBeatmap>(value));
}
constexpr ::GlobalNamespace::CustomDifficultyBeatmap ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::CustomDifficultyBeatmap, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::__set_environmentInfo(::GlobalNamespace::EnvironmentInfoSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentInfoSO, 0x28>(this->__instance, std::forward<::GlobalNamespace::EnvironmentInfoSO>(value));
}
constexpr ::GlobalNamespace::EnvironmentInfoSO ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::__get_environmentInfo() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentInfoSO, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::__set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerSpecificSettings, 0x30>(this->__instance, std::forward<::GlobalNamespace::PlayerSpecificSettings>(value));
}
constexpr ::GlobalNamespace::PlayerSpecificSettings ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::__get_playerSpecificSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerSpecificSettings, 0x30>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::__set___8__1(::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0 value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0, 0x38>(this->__instance, std::forward<::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0 ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::__get___8__1() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0, 0x38>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x40>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x40>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmap.get_level
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevel (::GlobalNamespace::CustomDifficultyBeatmap::*)()>(&::GlobalNamespace::CustomDifficultyBeatmap::get_level)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e9708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap>::get(),
                            "get_level",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmap.get_parentDifficultyBeatmapSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IDifficultyBeatmapSet (::GlobalNamespace::CustomDifficultyBeatmap::*)()>(&::GlobalNamespace::CustomDifficultyBeatmap::get_parentDifficultyBeatmapSet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e9710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap>::get(),
                            "get_parentDifficultyBeatmapSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmap.get_difficulty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDifficulty (::GlobalNamespace::CustomDifficultyBeatmap::*)()>(&::GlobalNamespace::CustomDifficultyBeatmap::get_difficulty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e9718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap>::get(),
                            "get_difficulty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmap.get_difficultyRank
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::CustomDifficultyBeatmap::*)()>(&::GlobalNamespace::CustomDifficultyBeatmap::get_difficultyRank)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e9720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap>::get(),
                            "get_difficultyRank",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmap.get_noteJumpMovementSpeed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::CustomDifficultyBeatmap::*)()>(&::GlobalNamespace::CustomDifficultyBeatmap::get_noteJumpMovementSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e9728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap>::get(),
                            "get_noteJumpMovementSpeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmap.get_noteJumpStartBeatOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::CustomDifficultyBeatmap::*)()>(&::GlobalNamespace::CustomDifficultyBeatmap::get_noteJumpStartBeatOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e9730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap>::get(),
                            "get_noteJumpStartBeatOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmap.get_beatmapDataBasicInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapDataBasicInfo (::GlobalNamespace::CustomDifficultyBeatmap::*)()>(&::GlobalNamespace::CustomDifficultyBeatmap::get_beatmapDataBasicInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e9738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap>::get(),
                            "get_beatmapDataBasicInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmap.get_beatmapColorSchemeIdx
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::CustomDifficultyBeatmap::*)()>(&::GlobalNamespace::CustomDifficultyBeatmap::get_beatmapColorSchemeIdx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e9740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap>::get(),
                            "get_beatmapColorSchemeIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmap.get_beatsPerMinute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::CustomDifficultyBeatmap::*)()>(&::GlobalNamespace::CustomDifficultyBeatmap::get_beatsPerMinute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e9748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap>::get(),
                            "get_beatsPerMinute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmap.get_environmentNameIdx
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::CustomDifficultyBeatmap::*)()>(&::GlobalNamespace::CustomDifficultyBeatmap::get_environmentNameIdx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e9750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap>::get(),
                            "get_environmentNameIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmap.get_beatmapSaveData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::BeatmapSaveData (::GlobalNamespace::CustomDifficultyBeatmap::*)()>(&::GlobalNamespace::CustomDifficultyBeatmap::get_beatmapSaveData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e9758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap>::get(),
                            "get_beatmapSaveData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmap.GetBeatmapDataBasicInfoAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapDataBasicInfo> (::GlobalNamespace::CustomDifficultyBeatmap::*)()>(&::GlobalNamespace::CustomDifficultyBeatmap::GetBeatmapDataBasicInfoAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x21e9760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap>::get(),
                            "GetBeatmapDataBasicInfoAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmap.GetBeatmapDataAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData> (::GlobalNamespace::CustomDifficultyBeatmap::*)(::GlobalNamespace::EnvironmentInfoSO, ::GlobalNamespace::PlayerSpecificSettings)>(&::GlobalNamespace::CustomDifficultyBeatmap::GetBeatmapDataAsync)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x21e9850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap>::get(),
                            "GetBeatmapDataAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmap._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomDifficultyBeatmap::*)(::GlobalNamespace::IBeatmapLevel, ::GlobalNamespace::IDifficultyBeatmapSet, ::GlobalNamespace::BeatmapDifficulty, int32_t, float_t, float_t, float_t, int32_t, int32_t, ::BeatmapSaveDataVersion3::BeatmapSaveData, ::GlobalNamespace::IBeatmapDataBasicInfo)>(&::GlobalNamespace::CustomDifficultyBeatmap::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x21e9958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmapSet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BeatmapSaveData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapDataBasicInfo>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IDifficultyBeatmap
constexpr  ::GlobalNamespace::CustomDifficultyBeatmap::operator ::GlobalNamespace::IDifficultyBeatmap() const noexcept {
return ::GlobalNamespace::IDifficultyBeatmap(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CustomDifficultyBeatmap::__set__level_k__BackingField(::GlobalNamespace::IBeatmapLevel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatmapLevel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IBeatmapLevel>(value));
}
constexpr ::GlobalNamespace::IBeatmapLevel ::GlobalNamespace::CustomDifficultyBeatmap::__get__level_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CustomDifficultyBeatmap::__set__parentDifficultyBeatmapSet_k__BackingField(::GlobalNamespace::IDifficultyBeatmapSet value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IDifficultyBeatmapSet, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IDifficultyBeatmapSet>(value));
}
constexpr ::GlobalNamespace::IDifficultyBeatmapSet ::GlobalNamespace::CustomDifficultyBeatmap::__get__parentDifficultyBeatmapSet_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IDifficultyBeatmapSet, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CustomDifficultyBeatmap::__set__difficulty_k__BackingField(::GlobalNamespace::BeatmapDifficulty value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapDifficulty>(value));
}
constexpr ::GlobalNamespace::BeatmapDifficulty ::GlobalNamespace::CustomDifficultyBeatmap::__get__difficulty_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CustomDifficultyBeatmap::__set__difficultyRank_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::CustomDifficultyBeatmap::__get__difficultyRank_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CustomDifficultyBeatmap::__set__noteJumpMovementSpeed_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::CustomDifficultyBeatmap::__get__noteJumpMovementSpeed_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CustomDifficultyBeatmap::__set__noteJumpStartBeatOffset_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::CustomDifficultyBeatmap::__get__noteJumpStartBeatOffset_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CustomDifficultyBeatmap::__set__beatmapDataBasicInfo_k__BackingField(::GlobalNamespace::IBeatmapDataBasicInfo value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatmapDataBasicInfo, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IBeatmapDataBasicInfo>(value));
}
constexpr ::GlobalNamespace::IBeatmapDataBasicInfo ::GlobalNamespace::CustomDifficultyBeatmap::__get__beatmapDataBasicInfo_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapDataBasicInfo, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CustomDifficultyBeatmap::__set__beatmapColorSchemeIdx_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::CustomDifficultyBeatmap::__get__beatmapColorSchemeIdx_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CustomDifficultyBeatmap::__set__beatsPerMinute_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::CustomDifficultyBeatmap::__get__beatsPerMinute_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CustomDifficultyBeatmap::__set__environmentNameIdx_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::CustomDifficultyBeatmap::__get__environmentNameIdx_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CustomDifficultyBeatmap::__set__beatmapSaveData_k__BackingField(::BeatmapSaveDataVersion3::BeatmapSaveData value)  {
::cordl_internals::setInstanceField<::BeatmapSaveDataVersion3::BeatmapSaveData, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::BeatmapSaveDataVersion3::BeatmapSaveData>(value));
}
constexpr ::BeatmapSaveDataVersion3::BeatmapSaveData ::GlobalNamespace::CustomDifficultyBeatmap::__get__beatmapSaveData_k__BackingField() const {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::BeatmapSaveData, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::GlobalNamespace::IBeatmapLevel ::GlobalNamespace::CustomDifficultyBeatmap::get_level()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap>::get(),
                            "get_level",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatmapLevel, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::IDifficultyBeatmapSet ::GlobalNamespace::CustomDifficultyBeatmap::get_parentDifficultyBeatmapSet()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap>::get(),
                            "get_parentDifficultyBeatmapSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IDifficultyBeatmapSet, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::BeatmapDifficulty ::GlobalNamespace::CustomDifficultyBeatmap::get_difficulty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap>::get(),
                            "get_difficulty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDifficulty, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::GlobalNamespace::CustomDifficultyBeatmap::get_difficultyRank()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap>::get(),
                            "get_difficultyRank",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::CustomDifficultyBeatmap::get_noteJumpMovementSpeed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap>::get(),
                            "get_noteJumpMovementSpeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::CustomDifficultyBeatmap::get_noteJumpStartBeatOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap>::get(),
                            "get_noteJumpStartBeatOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::IBeatmapDataBasicInfo ::GlobalNamespace::CustomDifficultyBeatmap::get_beatmapDataBasicInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap>::get(),
                            "get_beatmapDataBasicInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatmapDataBasicInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::GlobalNamespace::CustomDifficultyBeatmap::get_beatmapColorSchemeIdx()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap>::get(),
                            "get_beatmapColorSchemeIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::CustomDifficultyBeatmap::get_beatsPerMinute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap>::get(),
                            "get_beatsPerMinute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::GlobalNamespace::CustomDifficultyBeatmap::get_environmentNameIdx()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap>::get(),
                            "get_environmentNameIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::BeatmapSaveDataVersion3::BeatmapSaveData ::GlobalNamespace::CustomDifficultyBeatmap::get_beatmapSaveData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap>::get(),
                            "get_beatmapSaveData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::BeatmapSaveData, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapDataBasicInfo> ::GlobalNamespace::CustomDifficultyBeatmap::GetBeatmapDataBasicInfoAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap>::get(),
                            "GetBeatmapDataBasicInfoAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapDataBasicInfo>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData> ::GlobalNamespace::CustomDifficultyBeatmap::GetBeatmapDataAsync(::GlobalNamespace::EnvironmentInfoSO environmentInfo, ::GlobalNamespace::PlayerSpecificSettings playerSpecificSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap>::get(),
                            "GetBeatmapDataAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData>, false>(const_cast<void*>(instance), ___internal_method, environmentInfo, playerSpecificSettings);
}
// Ctor Parameters [CppParam { name: "level", ty: "::GlobalNamespace::IBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "parentDifficultyBeatmapSet", ty: "::GlobalNamespace::IDifficultyBeatmapSet", modifiers: "", def_value: None }, CppParam { name: "difficulty", ty: "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: None }, CppParam { name: "difficultyRank", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "noteJumpMovementSpeed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "noteJumpStartBeatOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "beatsPerMinute", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "beatmapColorSchemeIdx", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "environmentNameIdx", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "beatmapSaveData", ty: "::BeatmapSaveDataVersion3::BeatmapSaveData", modifiers: "", def_value: None }, CppParam { name: "beatmapDataBasicInfo", ty: "::GlobalNamespace::IBeatmapDataBasicInfo", modifiers: "", def_value: None }]
 ::GlobalNamespace::CustomDifficultyBeatmap::CustomDifficultyBeatmap(::GlobalNamespace::IBeatmapLevel level, ::GlobalNamespace::IDifficultyBeatmapSet parentDifficultyBeatmapSet, ::GlobalNamespace::BeatmapDifficulty difficulty, int32_t difficultyRank, float_t noteJumpMovementSpeed, float_t noteJumpStartBeatOffset, float_t beatsPerMinute, int32_t beatmapColorSchemeIdx, int32_t environmentNameIdx, ::BeatmapSaveDataVersion3::BeatmapSaveData beatmapSaveData, ::GlobalNamespace::IBeatmapDataBasicInfo beatmapDataBasicInfo)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CustomDifficultyBeatmap>(level, parentDifficultyBeatmapSet, difficulty, difficultyRank, noteJumpMovementSpeed, noteJumpStartBeatOffset, beatsPerMinute, beatmapColorSchemeIdx, environmentNameIdx, beatmapSaveData, beatmapDataBasicInfo))) {}
 void ::GlobalNamespace::CustomDifficultyBeatmap::_ctor(::GlobalNamespace::IBeatmapLevel level, ::GlobalNamespace::IDifficultyBeatmapSet parentDifficultyBeatmapSet, ::GlobalNamespace::BeatmapDifficulty difficulty, int32_t difficultyRank, float_t noteJumpMovementSpeed, float_t noteJumpStartBeatOffset, float_t beatsPerMinute, int32_t beatmapColorSchemeIdx, int32_t environmentNameIdx, ::BeatmapSaveDataVersion3::BeatmapSaveData beatmapSaveData, ::GlobalNamespace::IBeatmapDataBasicInfo beatmapDataBasicInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmapSet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BeatmapSaveData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapDataBasicInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, level, parentDifficultyBeatmapSet, difficulty, difficultyRank, noteJumpMovementSpeed, noteJumpStartBeatOffset, beatsPerMinute, beatmapColorSchemeIdx, environmentNameIdx, beatmapSaveData, beatmapDataBasicInfo);
}
} // end anonymous namespace
