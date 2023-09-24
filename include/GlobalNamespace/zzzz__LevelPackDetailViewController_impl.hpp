#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__LevelPackDetailViewController_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__LevelPackDetailViewController_def.hpp"
#include "GlobalNamespace/zzzz__KawaseBlurRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "HMUI/zzzz__ImageView_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "GlobalNamespace/zzzz__LoadingControl_def.hpp"
#include "GlobalNamespace/zzzz__EventBinder_def.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelModel_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__LevelPackDetailViewController__ContentType::GlobalNamespace__LevelPackDetailViewController__ContentType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__LevelPackDetailViewController__ContentType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__LevelPackDetailViewController__ContentType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__LevelPackDetailViewController__ContentType  GlobalNamespace::GlobalNamespace__LevelPackDetailViewController__ContentType::Loading{0};
constexpr GlobalNamespace::GlobalNamespace__LevelPackDetailViewController__ContentType  GlobalNamespace::GlobalNamespace__LevelPackDetailViewController__ContentType::Owned{1};
constexpr GlobalNamespace::GlobalNamespace__LevelPackDetailViewController__ContentType  GlobalNamespace::GlobalNamespace__LevelPackDetailViewController__ContentType::Buy{2};
constexpr GlobalNamespace::GlobalNamespace__LevelPackDetailViewController__ContentType  GlobalNamespace::GlobalNamespace__LevelPackDetailViewController__ContentType::Error{3};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0::*)()>(&GlobalNamespace::GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2169bf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0._DidActivate_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0::*)()>(&GlobalNamespace::GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0::_DidActivate_b__1)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x216a294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0>::get(),
                            "<DidActivate>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0._DidActivate_b__2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0::*)()>(&GlobalNamespace::GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0::_DidActivate_b__2)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x216a2c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0>::get(),
                            "<DidActivate>b__2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0::__set_handleDidPressRefreshButton(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0::__get_handleDidPressRefreshButton() const {
return ::cordl_internals::getInstanceField<System::Action, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0::__set___4__this(GlobalNamespace::LevelPackDetailViewController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LevelPackDetailViewController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LevelPackDetailViewController>(value));
}
constexpr GlobalNamespace::LevelPackDetailViewController GlobalNamespace::GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LevelPackDetailViewController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0 GlobalNamespace::GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0::New_ctor()  {
GlobalNamespace::GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0::_DidActivate_b__1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0>::get(),
                            "<DidActivate>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0::_DidActivate_b__2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0>::get(),
                            "<DidActivate>b__2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19::*)()>(&GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x216a2ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x216a714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::LevelPackDetailViewController", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19::GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::LevelPackDetailViewController __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19::__set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19::__set___4__this(GlobalNamespace::LevelPackDetailViewController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LevelPackDetailViewController, 0x28>(this->__instance, std::forward<GlobalNamespace::LevelPackDetailViewController>(value));
}
constexpr GlobalNamespace::LevelPackDetailViewController GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LevelPackDetailViewController, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x30>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x30>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21::*)()>(&GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x216a720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x216aaa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::LevelPackDetailViewController", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21::GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::LevelPackDetailViewController __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21::__set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21::__set___4__this(GlobalNamespace::LevelPackDetailViewController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LevelPackDetailViewController, 0x28>(this->__instance, std::forward<GlobalNamespace::LevelPackDetailViewController>(value));
}
constexpr GlobalNamespace::LevelPackDetailViewController GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LevelPackDetailViewController, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, 0x30>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, 0x30>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::LevelPackDetailViewController.SetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelPackDetailViewController::*)(GlobalNamespace::IBeatmapLevelPack)>(&GlobalNamespace::LevelPackDetailViewController::SetData)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x2165240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelPackDetailViewController>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevelPack>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelPackDetailViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelPackDetailViewController::*)(bool, bool, bool)>(&GlobalNamespace::LevelPackDetailViewController::DidActivate)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2169a0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::LevelPackDetailViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelPackDetailViewController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelPackDetailViewController.DidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelPackDetailViewController::*)(bool, bool)>(&GlobalNamespace::LevelPackDetailViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2169c00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::LevelPackDetailViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelPackDetailViewController>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelPackDetailViewController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelPackDetailViewController::*)()>(&GlobalNamespace::LevelPackDetailViewController::OnDestroy)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2169ca8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::LevelPackDetailViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelPackDetailViewController>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelPackDetailViewController.RefreshAvailabilityAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelPackDetailViewController::*)()>(&GlobalNamespace::LevelPackDetailViewController::RefreshAvailabilityAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2169978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelPackDetailViewController>::get(),
                            "RefreshAvailabilityAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelPackDetailViewController.BuyPackButtonWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelPackDetailViewController::*)()>(&GlobalNamespace::LevelPackDetailViewController::BuyPackButtonWasPressed)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2169db0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelPackDetailViewController>::get(),
                            "BuyPackButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelPackDetailViewController.OpenLevelPackProductStoreAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelPackDetailViewController::*)()>(&GlobalNamespace::LevelPackDetailViewController::OpenLevelPackProductStoreAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2169ebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelPackDetailViewController>::get(),
                            "OpenLevelPackProductStoreAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelPackDetailViewController.ShowContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelPackDetailViewController::*)(GlobalNamespace::GlobalNamespace__LevelPackDetailViewController__ContentType, ::StringW)>(&GlobalNamespace::LevelPackDetailViewController::ShowContent)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x2169f50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelPackDetailViewController>::get(),
                            "ShowContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LevelPackDetailViewController__ContentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelPackDetailViewController.HandleAdditionalContentModelDidInvalidateData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelPackDetailViewController::*)()>(&GlobalNamespace::LevelPackDetailViewController::HandleAdditionalContentModelDidInvalidateData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x216a224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelPackDetailViewController>::get(),
                            "HandleAdditionalContentModelDidInvalidateData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelPackDetailViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelPackDetailViewController::*)()>(&GlobalNamespace::LevelPackDetailViewController::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x216a228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelPackDetailViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelPackDetailViewController._DidActivate_b__16_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelPackDetailViewController::*)()>(&GlobalNamespace::LevelPackDetailViewController::_DidActivate_b__16_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x216a290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelPackDetailViewController>::get(),
                            "<DidActivate>b__16_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LevelPackDetailViewController::__set__detailWrapper(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::LevelPackDetailViewController::__get__detailWrapper() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__set__packImage(HMUI::ImageView value)  {
::cordl_internals::setInstanceField<HMUI::ImageView, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::ImageView>(value));
}
constexpr HMUI::ImageView GlobalNamespace::LevelPackDetailViewController::__get__packImage() const {
return ::cordl_internals::getInstanceField<HMUI::ImageView, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__set__buyButton(UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Button, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Button>(value));
}
constexpr UnityEngine::UI::Button GlobalNamespace::LevelPackDetailViewController::__get__buyButton() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Button, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__set__buyContainer(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::LevelPackDetailViewController::__get__buyContainer() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__set__loadingControl(GlobalNamespace::LoadingControl value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LoadingControl, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LoadingControl>(value));
}
constexpr GlobalNamespace::LoadingControl GlobalNamespace::LevelPackDetailViewController::__get__loadingControl() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LoadingControl, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__set__requireInternetContainer(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::LevelPackDetailViewController::__get__requireInternetContainer() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__set__kawaseBlurRenderer(GlobalNamespace::KawaseBlurRendererSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::KawaseBlurRendererSO, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::KawaseBlurRendererSO>(value));
}
constexpr GlobalNamespace::KawaseBlurRendererSO GlobalNamespace::LevelPackDetailViewController::__get__kawaseBlurRenderer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::KawaseBlurRendererSO, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__set__additionalContentModel(GlobalNamespace::AdditionalContentModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AdditionalContentModel, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AdditionalContentModel>(value));
}
constexpr GlobalNamespace::AdditionalContentModel GlobalNamespace::LevelPackDetailViewController::__get__additionalContentModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AdditionalContentModel, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__set__dlcPromoPanelModel(GlobalNamespace::DlcPromoPanelModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::DlcPromoPanelModel, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::DlcPromoPanelModel>(value));
}
constexpr GlobalNamespace::DlcPromoPanelModel GlobalNamespace::LevelPackDetailViewController::__get__dlcPromoPanelModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::DlcPromoPanelModel, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__set__analyticsModel(GlobalNamespace::IAnalyticsModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IAnalyticsModel, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IAnalyticsModel>(value));
}
constexpr GlobalNamespace::IAnalyticsModel GlobalNamespace::LevelPackDetailViewController::__get__analyticsModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IAnalyticsModel, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__set__eventBinder(GlobalNamespace::EventBinder value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EventBinder, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EventBinder>(value));
}
constexpr GlobalNamespace::EventBinder GlobalNamespace::LevelPackDetailViewController::__get__eventBinder() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EventBinder, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__set__cancellationTokenSource(System::Threading::CancellationTokenSource value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationTokenSource, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationTokenSource>(value));
}
constexpr System::Threading::CancellationTokenSource GlobalNamespace::LevelPackDetailViewController::__get__cancellationTokenSource() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationTokenSource, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__set__pack(GlobalNamespace::IBeatmapLevelPack value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IBeatmapLevelPack, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IBeatmapLevelPack>(value));
}
constexpr GlobalNamespace::IBeatmapLevelPack GlobalNamespace::LevelPackDetailViewController::__get__pack() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IBeatmapLevelPack, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__set__blurredPackArtwork(UnityEngine::Sprite value)  {
::cordl_internals::setInstanceField<UnityEngine::Sprite, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Sprite>(value));
}
constexpr UnityEngine::Sprite GlobalNamespace::LevelPackDetailViewController::__get__blurredPackArtwork() const {
return ::cordl_internals::getInstanceField<UnityEngine::Sprite, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::LevelPackDetailViewController::SetData(GlobalNamespace::IBeatmapLevelPack pack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelPackDetailViewController>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevelPack>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pack);
}
 void GlobalNamespace::LevelPackDetailViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelPackDetailViewController>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
 void GlobalNamespace::LevelPackDetailViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelPackDetailViewController>::get(),
                            "DidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
 void GlobalNamespace::LevelPackDetailViewController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelPackDetailViewController>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LevelPackDetailViewController::RefreshAvailabilityAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelPackDetailViewController>::get(),
                            "RefreshAvailabilityAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LevelPackDetailViewController::BuyPackButtonWasPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelPackDetailViewController>::get(),
                            "BuyPackButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LevelPackDetailViewController::OpenLevelPackProductStoreAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelPackDetailViewController>::get(),
                            "OpenLevelPackProductStoreAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param errorText: ::StringW (default: u"")
 void GlobalNamespace::LevelPackDetailViewController::ShowContent(GlobalNamespace::GlobalNamespace__LevelPackDetailViewController__ContentType contentType, ::StringW errorText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelPackDetailViewController>::get(),
                            "ShowContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LevelPackDetailViewController__ContentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, contentType, errorText);
}
 void GlobalNamespace::LevelPackDetailViewController::HandleAdditionalContentModelDidInvalidateData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelPackDetailViewController>::get(),
                            "HandleAdditionalContentModelDidInvalidateData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::LevelPackDetailViewController GlobalNamespace::LevelPackDetailViewController::New_ctor()  {
GlobalNamespace::LevelPackDetailViewController o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::LevelPackDetailViewController>())};
return o;
}
 void GlobalNamespace::LevelPackDetailViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelPackDetailViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LevelPackDetailViewController::_DidActivate_b__16_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelPackDetailViewController>::get(),
                            "<DidActivate>b__16_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
