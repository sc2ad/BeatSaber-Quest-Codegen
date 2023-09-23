#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__AlwaysOwnedContentContainerSO_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus::GlobalNamespace__AdditionalContentModel__EntitlementStatus(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus  GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus::Failed{0};
constexpr GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus  GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus::Owned{1};
constexpr GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus  GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus::NotOwned{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult  GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult::OK{0};
constexpr GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult  GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult::Failed{1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult  GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult::OK{0};
constexpr GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult  GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult::Failed{1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult  GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult::PackIsBetter{0};
constexpr GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult  GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult::LevelIsBetter{1};
constexpr GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult  GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult::Failed{2};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10::*)()>(&GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x20c76d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x20c794c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::AdditionalContentModel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "token", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10::GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __t__builder, GlobalNamespace::AdditionalContentModel __4__this, ::StringW levelId, System::Threading::CancellationToken token, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->levelId = levelId;
this->token = token;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10::__set___4__this(GlobalNamespace::AdditionalContentModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AdditionalContentModel, 0x20>(this->__instance, std::forward<GlobalNamespace::AdditionalContentModel>(value));
}
constexpr GlobalNamespace::AdditionalContentModel GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AdditionalContentModel, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10::__set_levelId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10::__get_levelId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10::__set_token(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10::__get_token() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x38>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11::*)()>(&GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x20c79a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x20c7c20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::AdditionalContentModel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "token", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11::GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __t__builder, GlobalNamespace::AdditionalContentModel __4__this, ::StringW levelPackId, System::Threading::CancellationToken token, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->levelPackId = levelPackId;
this->token = token;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11::__set___4__this(GlobalNamespace::AdditionalContentModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AdditionalContentModel, 0x20>(this->__instance, std::forward<GlobalNamespace::AdditionalContentModel>(value));
}
constexpr GlobalNamespace::AdditionalContentModel GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AdditionalContentModel, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11::__set_levelPackId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11::__get_levelPackId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11::__set_token(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11::__get_token() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x38>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::AdditionalContentModel.add_didInvalidateDataEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AdditionalContentModel::*)(System::Action)>(&GlobalNamespace::AdditionalContentModel::add_didInvalidateDataEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20c7314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AdditionalContentModel>::get(),
                            "add_didInvalidateDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AdditionalContentModel.remove_didInvalidateDataEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AdditionalContentModel::*)(System::Action)>(&GlobalNamespace::AdditionalContentModel::remove_didInvalidateDataEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20c73b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AdditionalContentModel>::get(),
                            "remove_didInvalidateDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AdditionalContentModel.OnApplicationFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AdditionalContentModel::*)(bool)>(&GlobalNamespace::AdditionalContentModel::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x20c744c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AdditionalContentModel>::get(),
                            "OnApplicationFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AdditionalContentModel.InvalidateData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AdditionalContentModel::*)()>(&GlobalNamespace::AdditionalContentModel::InvalidateData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x20c7488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AdditionalContentModel>::get(),
                            "InvalidateData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AdditionalContentModel.GetLevelEntitlementStatusAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> (GlobalNamespace::AdditionalContentModel::*)(::StringW, System::Threading::CancellationToken)>(&GlobalNamespace::AdditionalContentModel::GetLevelEntitlementStatusAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x20c74c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AdditionalContentModel>::get(),
                            "GetLevelEntitlementStatusAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AdditionalContentModel.GetPackEntitlementStatusAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> (GlobalNamespace::AdditionalContentModel::*)(::StringW, System::Threading::CancellationToken)>(&GlobalNamespace::AdditionalContentModel::GetPackEntitlementStatusAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x20c75c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AdditionalContentModel>::get(),
                            "GetPackEntitlementStatusAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AdditionalContentModel.InvalidateDataInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AdditionalContentModel::*)()>(&GlobalNamespace::AdditionalContentModel::InvalidateDataInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::AdditionalContentModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AdditionalContentModel>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AdditionalContentModel.GetLevelEntitlementStatusInternalAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> (GlobalNamespace::AdditionalContentModel::*)(::StringW, System::Threading::CancellationToken)>(&GlobalNamespace::AdditionalContentModel::GetLevelEntitlementStatusInternalAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::AdditionalContentModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AdditionalContentModel>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AdditionalContentModel.GetPackEntitlementStatusInternalAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> (GlobalNamespace::AdditionalContentModel::*)(::StringW, System::Threading::CancellationToken)>(&GlobalNamespace::AdditionalContentModel::GetPackEntitlementStatusInternalAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::AdditionalContentModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AdditionalContentModel>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AdditionalContentModel.IsPackBetterBuyThanLevelAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> (GlobalNamespace::AdditionalContentModel::*)(::StringW, System::Threading::CancellationToken)>(&GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::AdditionalContentModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AdditionalContentModel>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AdditionalContentModel.OpenLevelProductStoreAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> (GlobalNamespace::AdditionalContentModel::*)(::StringW, System::Threading::CancellationToken)>(&GlobalNamespace::AdditionalContentModel::OpenLevelProductStoreAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::AdditionalContentModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AdditionalContentModel>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AdditionalContentModel.OpenLevelPackProductStoreAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> (GlobalNamespace::AdditionalContentModel::*)(::StringW, System::Threading::CancellationToken)>(&GlobalNamespace::AdditionalContentModel::OpenLevelPackProductStoreAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::AdditionalContentModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AdditionalContentModel>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AdditionalContentModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AdditionalContentModel::*)()>(&GlobalNamespace::AdditionalContentModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20c76c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AdditionalContentModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::AdditionalContentModel::__set__alwaysOwnedContentContainer(GlobalNamespace::AlwaysOwnedContentContainerSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AlwaysOwnedContentContainerSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AlwaysOwnedContentContainerSO>(value));
}
constexpr GlobalNamespace::AlwaysOwnedContentContainerSO GlobalNamespace::AdditionalContentModel::__get__alwaysOwnedContentContainer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AlwaysOwnedContentContainerSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AdditionalContentModel::__set_didInvalidateDataEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::AdditionalContentModel::__get_didInvalidateDataEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::AdditionalContentModel::add_didInvalidateDataEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AdditionalContentModel>::get(),
                            "add_didInvalidateDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::AdditionalContentModel::remove_didInvalidateDataEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AdditionalContentModel>::get(),
                            "remove_didInvalidateDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::AdditionalContentModel::OnApplicationFocus(bool hasFocus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AdditionalContentModel>::get(),
                            "OnApplicationFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hasFocus);
}
 void GlobalNamespace::AdditionalContentModel::InvalidateData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AdditionalContentModel>::get(),
                            "InvalidateData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> GlobalNamespace::AdditionalContentModel::GetLevelEntitlementStatusAsync(::StringW levelId, System::Threading::CancellationToken token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AdditionalContentModel>::get(),
                            "GetLevelEntitlementStatusAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, false>(const_cast<void*>(instance), ___internal_method, levelId, token);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> GlobalNamespace::AdditionalContentModel::GetPackEntitlementStatusAsync(::StringW levelPackId, System::Threading::CancellationToken token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AdditionalContentModel>::get(),
                            "GetPackEntitlementStatusAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, false>(const_cast<void*>(instance), ___internal_method, levelPackId, token);
}
 void GlobalNamespace::AdditionalContentModel::InvalidateDataInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AdditionalContentModel>::get(),
                            "InvalidateDataInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> GlobalNamespace::AdditionalContentModel::GetLevelEntitlementStatusInternalAsync(::StringW levelId, System::Threading::CancellationToken token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AdditionalContentModel>::get(),
                            "GetLevelEntitlementStatusInternalAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, false>(const_cast<void*>(instance), ___internal_method, levelId, token);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> GlobalNamespace::AdditionalContentModel::GetPackEntitlementStatusInternalAsync(::StringW levelPackId, System::Threading::CancellationToken token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AdditionalContentModel>::get(),
                            "GetPackEntitlementStatusInternalAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, false>(const_cast<void*>(instance), ___internal_method, levelPackId, token);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelAsync(::StringW levelPackId, System::Threading::CancellationToken token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AdditionalContentModel>::get(),
                            "IsPackBetterBuyThanLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>, false>(const_cast<void*>(instance), ___internal_method, levelPackId, token);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> GlobalNamespace::AdditionalContentModel::OpenLevelProductStoreAsync(::StringW levelId, System::Threading::CancellationToken token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AdditionalContentModel>::get(),
                            "OpenLevelProductStoreAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, false>(const_cast<void*>(instance), ___internal_method, levelId, token);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> GlobalNamespace::AdditionalContentModel::OpenLevelPackProductStoreAsync(::StringW levelPackId, System::Threading::CancellationToken token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AdditionalContentModel>::get(),
                            "OpenLevelPackProductStoreAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, false>(const_cast<void*>(instance), ___internal_method, levelPackId, token);
}
// Ctor Parameters []
 GlobalNamespace::AdditionalContentModel::AdditionalContentModel()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<AdditionalContentModel>())) {}
 void GlobalNamespace::AdditionalContentModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AdditionalContentModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
