#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveData_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataBasicInfo_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21cb00c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0._GetBeatmapDataBasicInfoAsync_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0::_GetBeatmapDataBasicInfoAsync_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21cb014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0>::get(),
                            "<GetBeatmapDataBasicInfoAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0::__set_beatmapDataBasicInfo(GlobalNamespace::IBeatmapDataBasicInfo value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IBeatmapDataBasicInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IBeatmapDataBasicInfo>(value));
}
constexpr GlobalNamespace::IBeatmapDataBasicInfo GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0::__get_beatmapDataBasicInfo() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IBeatmapDataBasicInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0::__set_beatmapSaveData(BeatmapSaveDataVersion3::BeatmapSaveData value)  {
::cordl_internals::setInstanceField<BeatmapSaveDataVersion3::BeatmapSaveData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BeatmapSaveDataVersion3::BeatmapSaveData>(value));
}
constexpr BeatmapSaveDataVersion3::BeatmapSaveData GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0::__get_beatmapSaveData() const {
return ::cordl_internals::getInstanceField<BeatmapSaveDataVersion3::BeatmapSaveData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0 GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0::New_ctor()  {
GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0::_GetBeatmapDataBasicInfoAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0>::get(),
                            "<GetBeatmapDataBasicInfoAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1::MoveNext)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x21cb2e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21cb644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapDataBasicInfo>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::BeatmapDataSO", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__8__1", ty: "GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<BeatmapSaveDataVersion3::BeatmapSaveData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1::GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapDataBasicInfo> __t__builder, GlobalNamespace::BeatmapDataSO __4__this, GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0 __8__1, System::Runtime::CompilerServices::TaskAwaiter_1<BeatmapSaveDataVersion3::BeatmapSaveData> __u__1, System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__8__1 = __8__1;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapDataBasicInfo> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapDataBasicInfo>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapDataBasicInfo>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapDataBasicInfo> GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapDataBasicInfo>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1::__set___4__this(GlobalNamespace::BeatmapDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDataSO, 0x20>(this->__instance, std::forward<GlobalNamespace::BeatmapDataSO>(value));
}
constexpr GlobalNamespace::BeatmapDataSO GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDataSO, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1::__set___8__1(GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0 value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0, 0x28>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0>(value));
}
constexpr GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0 GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1::__get___8__1() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<BeatmapSaveDataVersion3::BeatmapSaveData> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<BeatmapSaveDataVersion3::BeatmapSaveData>, 0x30>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<BeatmapSaveDataVersion3::BeatmapSaveData>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<BeatmapSaveDataVersion3::BeatmapSaveData> GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<BeatmapSaveDataVersion3::BeatmapSaveData>, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1::__set___u__2(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x38>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21cb69c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0._GetBeatmapDataAsync_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0::_GetBeatmapDataAsync_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x21cb6a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0>::get(),
                            "<GetBeatmapDataAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0::__set_readonlyBeatmapData(GlobalNamespace::IReadonlyBeatmapData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IReadonlyBeatmapData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IReadonlyBeatmapData>(value));
}
constexpr GlobalNamespace::IReadonlyBeatmapData GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0::__get_readonlyBeatmapData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IReadonlyBeatmapData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0::__set_beatmapSaveData(BeatmapSaveDataVersion3::BeatmapSaveData value)  {
::cordl_internals::setInstanceField<BeatmapSaveDataVersion3::BeatmapSaveData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BeatmapSaveDataVersion3::BeatmapSaveData>(value));
}
constexpr BeatmapSaveDataVersion3::BeatmapSaveData GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0::__get_beatmapSaveData() const {
return ::cordl_internals::getInstanceField<BeatmapSaveDataVersion3::BeatmapSaveData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0::__set_beatmapDifficulty(GlobalNamespace::BeatmapDifficulty value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDifficulty, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDifficulty>(value));
}
constexpr GlobalNamespace::BeatmapDifficulty GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0::__get_beatmapDifficulty() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDifficulty, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0::__set_beatsPerMinute(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0::__get_beatsPerMinute() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0::__set_loadingForDesignatedEnvironment(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0::__get_loadingForDesignatedEnvironment() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0::__set_environmentInfo(GlobalNamespace::EnvironmentInfoSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EnvironmentInfoSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EnvironmentInfoSO>(value));
}
constexpr GlobalNamespace::EnvironmentInfoSO GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0::__get_environmentInfo() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EnvironmentInfoSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0::__set_playerSpecificSettings(GlobalNamespace::PlayerSpecificSettings value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayerSpecificSettings, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlayerSpecificSettings>(value));
}
constexpr GlobalNamespace::PlayerSpecificSettings GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0::__get_playerSpecificSettings() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayerSpecificSettings, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0 GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0::New_ctor()  {
GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0::_GetBeatmapDataAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0>::get(),
                            "<GetBeatmapDataAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2::MoveNext)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x21cb87c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21cbbf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapDifficulty", ty: "GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatsPerMinute", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "loadingForDesignatedEnvironment", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "environmentInfo", ty: "GlobalNamespace::EnvironmentInfoSO", modifiers: "", def_value: Some("csnull") }, CppParam { name: "playerSpecificSettings", ty: "GlobalNamespace::PlayerSpecificSettings", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__4__this", ty: "GlobalNamespace::BeatmapDataSO", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__8__1", ty: "GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<BeatmapSaveDataVersion3::BeatmapSaveData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData> __t__builder, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, float_t beatsPerMinute, bool loadingForDesignatedEnvironment, GlobalNamespace::EnvironmentInfoSO environmentInfo, GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, GlobalNamespace::BeatmapDataSO __4__this, GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0 __8__1, System::Runtime::CompilerServices::TaskAwaiter_1<BeatmapSaveDataVersion3::BeatmapSaveData> __u__1, System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->beatmapDifficulty = beatmapDifficulty;
this->beatsPerMinute = beatsPerMinute;
this->loadingForDesignatedEnvironment = loadingForDesignatedEnvironment;
this->environmentInfo = environmentInfo;
this->playerSpecificSettings = playerSpecificSettings;
this->__4__this = __4__this;
this->__8__1 = __8__1;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData> GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2::__set_beatmapDifficulty(GlobalNamespace::BeatmapDifficulty value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDifficulty, 0x20>(this->__instance, std::forward<GlobalNamespace::BeatmapDifficulty>(value));
}
constexpr GlobalNamespace::BeatmapDifficulty GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2::__get_beatmapDifficulty() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDifficulty, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2::__set_beatsPerMinute(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2::__get_beatsPerMinute() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2::__set_loadingForDesignatedEnvironment(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2::__get_loadingForDesignatedEnvironment() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2::__set_environmentInfo(GlobalNamespace::EnvironmentInfoSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EnvironmentInfoSO, 0x30>(this->__instance, std::forward<GlobalNamespace::EnvironmentInfoSO>(value));
}
constexpr GlobalNamespace::EnvironmentInfoSO GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2::__get_environmentInfo() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EnvironmentInfoSO, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2::__set_playerSpecificSettings(GlobalNamespace::PlayerSpecificSettings value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayerSpecificSettings, 0x38>(this->__instance, std::forward<GlobalNamespace::PlayerSpecificSettings>(value));
}
constexpr GlobalNamespace::PlayerSpecificSettings GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2::__get_playerSpecificSettings() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayerSpecificSettings, 0x38>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2::__set___4__this(GlobalNamespace::BeatmapDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDataSO, 0x40>(this->__instance, std::forward<GlobalNamespace::BeatmapDataSO>(value));
}
constexpr GlobalNamespace::BeatmapDataSO GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDataSO, 0x40>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2::__set___8__1(GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0 value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0, 0x48>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0>(value));
}
constexpr GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0 GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2::__get___8__1() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0, 0x48>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<BeatmapSaveDataVersion3::BeatmapSaveData> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<BeatmapSaveDataVersion3::BeatmapSaveData>, 0x50>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<BeatmapSaveDataVersion3::BeatmapSaveData>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<BeatmapSaveDataVersion3::BeatmapSaveData> GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<BeatmapSaveDataVersion3::BeatmapSaveData>, 0x50>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2::__set___u__2(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x58>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x58>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21cbc4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0._LoadBeatmapSaveDataAsync_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0::_LoadBeatmapSaveDataAsync_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x21cbc54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0>::get(),
                            "<LoadBeatmapSaveDataAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0::__set_beatmapSaveData(BeatmapSaveDataVersion3::BeatmapSaveData value)  {
::cordl_internals::setInstanceField<BeatmapSaveDataVersion3::BeatmapSaveData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BeatmapSaveDataVersion3::BeatmapSaveData>(value));
}
constexpr BeatmapSaveDataVersion3::BeatmapSaveData GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0::__get_beatmapSaveData() const {
return ::cordl_internals::getInstanceField<BeatmapSaveDataVersion3::BeatmapSaveData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0::__set___4__this(GlobalNamespace::BeatmapDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDataSO>(value));
}
constexpr GlobalNamespace::BeatmapDataSO GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0 GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0::New_ctor()  {
GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0::_LoadBeatmapSaveDataAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0>::get(),
                            "<LoadBeatmapSaveDataAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x21cbcc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21cbf18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BeatmapSaveDataVersion3::BeatmapSaveData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::BeatmapDataSO", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__8__1", ty: "GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5::GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BeatmapSaveDataVersion3::BeatmapSaveData> __t__builder, GlobalNamespace::BeatmapDataSO __4__this, GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0 __8__1, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__8__1 = __8__1;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BeatmapSaveDataVersion3::BeatmapSaveData> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BeatmapSaveDataVersion3::BeatmapSaveData>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BeatmapSaveDataVersion3::BeatmapSaveData>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BeatmapSaveDataVersion3::BeatmapSaveData> GlobalNamespace::GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BeatmapSaveDataVersion3::BeatmapSaveData>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5::__set___4__this(GlobalNamespace::BeatmapDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDataSO, 0x20>(this->__instance, std::forward<GlobalNamespace::BeatmapDataSO>(value));
}
constexpr GlobalNamespace::BeatmapDataSO GlobalNamespace::GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDataSO, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5::__set___8__1(GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0 value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0, 0x28>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0>(value));
}
constexpr GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0 GlobalNamespace::GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5::__get___8__1() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter GlobalNamespace::GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21cbf70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0._RunTaskAndLogException_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0::_RunTaskAndLogException_b__0)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x21cbf78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0>::get(),
                            "<RunTaskAndLogException>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0::__set_action(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0::__get_action() const {
return ::cordl_internals::getInstanceField<System::Action, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0 GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0::New_ctor()  {
GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0::_RunTaskAndLogException_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0>::get(),
                            "<RunTaskAndLogException>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x21cc038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21cc268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "action", ty: "System::Action", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6::GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, System::Action action, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->action = action;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder GlobalNamespace::GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6::__set_action(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x20>(this->__instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6::__get_action() const {
return ::cordl_internals::getInstanceField<System::Action, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x28>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter GlobalNamespace::GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x28>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::BeatmapDataSO.GetBeatmapDataBasicInfoAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapDataBasicInfo> (GlobalNamespace::BeatmapDataSO::*)()>(&GlobalNamespace::BeatmapDataSO::GetBeatmapDataBasicInfoAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x21cac1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapDataSO>::get(),
                            "GetBeatmapDataBasicInfoAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapDataSO.GetBeatmapDataAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::IReadonlyBeatmapData> (GlobalNamespace::BeatmapDataSO::*)(GlobalNamespace::BeatmapDifficulty, float_t, bool, GlobalNamespace::EnvironmentInfoSO, GlobalNamespace::PlayerSpecificSettings)>(&GlobalNamespace::BeatmapDataSO::GetBeatmapDataAsync)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x21cad0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapDataSO>::get(),
                            "GetBeatmapDataAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EnvironmentInfoSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapDataSO.SetJsonData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDataSO::*)(::StringW)>(&GlobalNamespace::BeatmapDataSO::SetJsonData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21cae40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapDataSO>::get(),
                            "SetJsonData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapDataSO.LoadBeatmapSaveDataAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<BeatmapSaveDataVersion3::BeatmapSaveData> (GlobalNamespace::BeatmapDataSO::*)()>(&GlobalNamespace::BeatmapDataSO::LoadBeatmapSaveDataAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x21cae48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapDataSO>::get(),
                            "LoadBeatmapSaveDataAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapDataSO.RunTaskAndLogException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (GlobalNamespace::BeatmapDataSO::*)(System::Action)>(&GlobalNamespace::BeatmapDataSO::RunTaskAndLogException)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x21caf3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapDataSO>::get(),
                            "RunTaskAndLogException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapDataSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDataSO::*)()>(&GlobalNamespace::BeatmapDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21cb004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapDataSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BeatmapDataSO::__set__jsonData(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::BeatmapDataSO::__get__jsonData() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapDataSO::__set__beatmapDataBasic(GlobalNamespace::IBeatmapDataBasicInfo value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IBeatmapDataBasicInfo, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IBeatmapDataBasicInfo>(value));
}
constexpr GlobalNamespace::IBeatmapDataBasicInfo GlobalNamespace::BeatmapDataSO::__get__beatmapDataBasic() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IBeatmapDataBasicInfo, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapDataBasicInfo> GlobalNamespace::BeatmapDataSO::GetBeatmapDataBasicInfoAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapDataSO>::get(),
                            "GetBeatmapDataBasicInfoAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapDataBasicInfo>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::IReadonlyBeatmapData> GlobalNamespace::BeatmapDataSO::GetBeatmapDataAsync(GlobalNamespace::BeatmapDifficulty beatmapDifficulty, float_t beatsPerMinute, bool loadingForDesignatedEnvironment, GlobalNamespace::EnvironmentInfoSO environmentInfo, GlobalNamespace::PlayerSpecificSettings playerSpecificSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapDataSO>::get(),
                            "GetBeatmapDataAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EnvironmentInfoSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::IReadonlyBeatmapData>, false>(const_cast<void*>(instance), ___internal_method, beatmapDifficulty, beatsPerMinute, loadingForDesignatedEnvironment, environmentInfo, playerSpecificSettings);
}
 void GlobalNamespace::BeatmapDataSO::SetJsonData(::StringW jsonData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapDataSO>::get(),
                            "SetJsonData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, jsonData);
}
 System::Threading::Tasks::Task_1<BeatmapSaveDataVersion3::BeatmapSaveData> GlobalNamespace::BeatmapDataSO::LoadBeatmapSaveDataAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapDataSO>::get(),
                            "LoadBeatmapSaveDataAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<BeatmapSaveDataVersion3::BeatmapSaveData>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task GlobalNamespace::BeatmapDataSO::RunTaskAndLogException(System::Action action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapDataSO>::get(),
                            "RunTaskAndLogException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, action);
}
 GlobalNamespace::BeatmapDataSO GlobalNamespace::BeatmapDataSO::New_ctor()  {
GlobalNamespace::BeatmapDataSO o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::BeatmapDataSO>())};
return o;
}
 void GlobalNamespace::BeatmapDataSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapDataSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
