#pragma once
#include "GlobalNamespace/zzzz__AdditionalContentModel_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__OculusPlatformAdditionalContentModel_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__Purchase_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "Oculus/Platform/Models/zzzz__PurchaseList_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetailsList_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__OculusLevelProductsModelSO_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::*)()>(&GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x20c8be0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x20c8df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::OculusPlatformAdditionalContentModel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __t__builder, GlobalNamespace::OculusPlatformAdditionalContentModel __4__this, System::Threading::CancellationToken cancellationToken, ::StringW levelId, System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->levelId = levelId;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::__set___4__this(GlobalNamespace::OculusPlatformAdditionalContentModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OculusPlatformAdditionalContentModel, 0x20>(this->__instance, std::forward<GlobalNamespace::OculusPlatformAdditionalContentModel>(value));
}
constexpr GlobalNamespace::OculusPlatformAdditionalContentModel GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OculusPlatformAdditionalContentModel, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::__set_levelId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::__get_levelId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<bool> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<bool> GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::*)()>(&GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x20c8e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x20c9058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::OculusPlatformAdditionalContentModel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __t__builder, GlobalNamespace::OculusPlatformAdditionalContentModel __4__this, System::Threading::CancellationToken cancellationToken, ::StringW packId, System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->packId = packId;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::__set___4__this(GlobalNamespace::OculusPlatformAdditionalContentModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OculusPlatformAdditionalContentModel, 0x20>(this->__instance, std::forward<GlobalNamespace::OculusPlatformAdditionalContentModel>(value));
}
constexpr GlobalNamespace::OculusPlatformAdditionalContentModel GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OculusPlatformAdditionalContentModel, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::__set_packId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::__get_packId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<bool> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<bool> GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7::*)()>(&GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x20c90b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x20c9468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::OculusPlatformAdditionalContentModel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7::GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, GlobalNamespace::OculusPlatformAdditionalContentModel __4__this, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter __u__1, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7::__set___4__this(GlobalNamespace::OculusPlatformAdditionalContentModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OculusPlatformAdditionalContentModel, 0x20>(this->__instance, std::forward<GlobalNamespace::OculusPlatformAdditionalContentModel>(value));
}
constexpr GlobalNamespace::OculusPlatformAdditionalContentModel GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OculusPlatformAdditionalContentModel, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7::__set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>, 0x38>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::*)()>(&GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x20c94c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x20c9918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::OculusPlatformAdditionalContentModel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __t__builder, GlobalNamespace::OculusPlatformAdditionalContentModel __4__this, ::StringW levelId, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> __u__1, System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->levelId = levelId;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__set___4__this(GlobalNamespace::OculusPlatformAdditionalContentModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OculusPlatformAdditionalContentModel, 0x20>(this->__instance, std::forward<GlobalNamespace::OculusPlatformAdditionalContentModel>(value));
}
constexpr GlobalNamespace::OculusPlatformAdditionalContentModel GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OculusPlatformAdditionalContentModel, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__set_levelId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__get_levelId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>>, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>>, 0x38>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__set___u__2(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x40>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x40>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9::*)()>(&GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x20c9970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x20c9e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::OculusPlatformAdditionalContentModel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __t__builder, GlobalNamespace::OculusPlatformAdditionalContentModel __4__this, ::StringW levelPackId, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> __u__1, System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->levelPackId = levelPackId;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9::__set___4__this(GlobalNamespace::OculusPlatformAdditionalContentModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OculusPlatformAdditionalContentModel, 0x20>(this->__instance, std::forward<GlobalNamespace::OculusPlatformAdditionalContentModel>(value));
}
constexpr GlobalNamespace::OculusPlatformAdditionalContentModel GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OculusPlatformAdditionalContentModel, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9::__set_levelPackId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9::__get_levelPackId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>>, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>>, 0x38>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9::__set___u__2(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x40>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x40>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0::*)()>(&GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20c9e90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0._LaunchCheckoutFlow_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0::*)(Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>)>(&GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0::_LaunchCheckoutFlow_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x20c9e98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0>::get(),
                            "<LaunchCheckoutFlow>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0::__set_launchCheckoutFlowTaskSource(System::Threading::Tasks::TaskCompletionSource_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCompletionSource_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCompletionSource_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>>>(value));
}
constexpr System::Threading::Tasks::TaskCompletionSource_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0::__get_launchCheckoutFlowTaskSource() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCompletionSource_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0>())) {}
 void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0::_LaunchCheckoutFlow_b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase> msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0>::get(),
                            "<LaunchCheckoutFlow>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msg);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10::*)()>(&GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x20c9ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x20ca1fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "sku", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10::GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> __t__builder, ::StringW sku, System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->sku = sku;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10::__set_sku(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10::__get_sku() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>>, 0x28>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>>, 0x28>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11::*)()>(&GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x20ca254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x20ca460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11::GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> __t__builder, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>, 0x20>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>, 0x20>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0::*)()>(&GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20ca4b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0._CheckForNewEntitlementsAsync_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0::*)(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetDetailsList>)>(&GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0::_CheckForNewEntitlementsAsync_b__0)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x20ca4c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0>::get(),
                            "<CheckForNewEntitlementsAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message_1<Oculus::Platform::Models::AssetDetailsList>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0._CheckForNewEntitlementsAsync_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0::*)(Oculus::Platform::Message_1<Oculus::Platform::Models::PurchaseList>)>(&GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0::_CheckForNewEntitlementsAsync_b__1)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x20ca9e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0>::get(),
                            "<CheckForNewEntitlementsAsync>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message_1<Oculus::Platform::Models::PurchaseList>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0::__set_getViewerPurchasesTaskSource(System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>>(value));
}
constexpr System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0::__get_getViewerPurchasesTaskSource() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0::__set___4__this(GlobalNamespace::OculusPlatformAdditionalContentModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OculusPlatformAdditionalContentModel, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OculusPlatformAdditionalContentModel>(value));
}
constexpr GlobalNamespace::OculusPlatformAdditionalContentModel GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OculusPlatformAdditionalContentModel, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0::__set___9__1(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::PurchaseList> value)  {
::cordl_internals::setInstanceField<Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::PurchaseList>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::PurchaseList>>(value));
}
constexpr Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::PurchaseList> GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0::__get___9__1() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::PurchaseList>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0>())) {}
 void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0::_CheckForNewEntitlementsAsync_b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetDetailsList> getListMsg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0>::get(),
                            "<CheckForNewEntitlementsAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message_1<Oculus::Platform::Models::AssetDetailsList>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, getListMsg);
}
 void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0::_CheckForNewEntitlementsAsync_b__1(Oculus::Platform::Message_1<Oculus::Platform::Models::PurchaseList> getPurchasesMsg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0>::get(),
                            "<CheckForNewEntitlementsAsync>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message_1<Oculus::Platform::Models::PurchaseList>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, getPurchasesMsg);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12::*)()>(&GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x20cad74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x20cb08c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::OculusPlatformAdditionalContentModel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12::GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> __t__builder, System::Threading::CancellationToken cancellationToken, GlobalNamespace::OculusPlatformAdditionalContentModel __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->cancellationToken = cancellationToken;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x20>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12::__set___4__this(GlobalNamespace::OculusPlatformAdditionalContentModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OculusPlatformAdditionalContentModel, 0x28>(this->__instance, std::forward<GlobalNamespace::OculusPlatformAdditionalContentModel>(value));
}
constexpr GlobalNamespace::OculusPlatformAdditionalContentModel GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OculusPlatformAdditionalContentModel, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>, 0x30>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>, 0x30>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::OculusPlatformAdditionalContentModel.InvalidateDataInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusPlatformAdditionalContentModel::*)()>(&GlobalNamespace::OculusPlatformAdditionalContentModel::InvalidateDataInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20c81fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::OculusPlatformAdditionalContentModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformAdditionalContentModel>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusPlatformAdditionalContentModel.GetLevelEntitlementStatusInternalAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> (GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW, System::Threading::CancellationToken)>(&GlobalNamespace::OculusPlatformAdditionalContentModel::GetLevelEntitlementStatusInternalAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x20c8204;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::OculusPlatformAdditionalContentModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformAdditionalContentModel>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusPlatformAdditionalContentModel.GetPackEntitlementStatusInternalAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> (GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW, System::Threading::CancellationToken)>(&GlobalNamespace::OculusPlatformAdditionalContentModel::GetPackEntitlementStatusInternalAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x20c8308;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::OculusPlatformAdditionalContentModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformAdditionalContentModel>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusPlatformAdditionalContentModel.DataIsValidAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<bool> (GlobalNamespace::OculusPlatformAdditionalContentModel::*)(System::Threading::CancellationToken)>(&GlobalNamespace::OculusPlatformAdditionalContentModel::DataIsValidAsync)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x20c840c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformAdditionalContentModel>::get(),
                            "DataIsValidAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusPlatformAdditionalContentModel.OpenLevelProductStoreAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> (GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW, System::Threading::CancellationToken)>(&GlobalNamespace::OculusPlatformAdditionalContentModel::OpenLevelProductStoreAsync)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x20c850c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::OculusPlatformAdditionalContentModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformAdditionalContentModel>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusPlatformAdditionalContentModel.OpenLevelPackProductStoreAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> (GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW, System::Threading::CancellationToken)>(&GlobalNamespace::OculusPlatformAdditionalContentModel::OpenLevelPackProductStoreAsync)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x20c8614;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::OculusPlatformAdditionalContentModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformAdditionalContentModel>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusPlatformAdditionalContentModel.LaunchCheckoutFlow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> (GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW)>(&GlobalNamespace::OculusPlatformAdditionalContentModel::LaunchCheckoutFlow)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x20c871c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformAdditionalContentModel>::get(),
                            "LaunchCheckoutFlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusPlatformAdditionalContentModel.IsPackBetterBuyThanLevelAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> (GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW, System::Threading::CancellationToken)>(&GlobalNamespace::OculusPlatformAdditionalContentModel::IsPackBetterBuyThanLevelAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x20c880c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::OculusPlatformAdditionalContentModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformAdditionalContentModel>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusPlatformAdditionalContentModel.CheckForNewEntitlementsAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> (GlobalNamespace::OculusPlatformAdditionalContentModel::*)(System::Threading::CancellationToken)>(&GlobalNamespace::OculusPlatformAdditionalContentModel::CheckForNewEntitlementsAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x20c88f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformAdditionalContentModel>::get(),
                            "CheckForNewEntitlementsAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusPlatformAdditionalContentModel.HasLevelEntitlement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW)>(&GlobalNamespace::OculusPlatformAdditionalContentModel::HasLevelEntitlement)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x20c89ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformAdditionalContentModel>::get(),
                            "HasLevelEntitlement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusPlatformAdditionalContentModel.HasLevelPackEntitlement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW)>(&GlobalNamespace::OculusPlatformAdditionalContentModel::HasLevelPackEntitlement)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x20c8a60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformAdditionalContentModel>::get(),
                            "HasLevelPackEntitlement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusPlatformAdditionalContentModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusPlatformAdditionalContentModel::*)()>(&GlobalNamespace::OculusPlatformAdditionalContentModel::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x20c8b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformAdditionalContentModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OculusPlatformAdditionalContentModel::__set__oculusLevelProductsModel(GlobalNamespace::OculusLevelProductsModelSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OculusLevelProductsModelSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OculusLevelProductsModelSO>(value));
}
constexpr GlobalNamespace::OculusLevelProductsModelSO GlobalNamespace::OculusPlatformAdditionalContentModel::__get__oculusLevelProductsModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OculusLevelProductsModelSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OculusPlatformAdditionalContentModel::__set__entitlementsSKU(System::Collections::Generic::HashSet_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<::StringW>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<::StringW>>(value));
}
constexpr System::Collections::Generic::HashSet_1<::StringW> GlobalNamespace::OculusPlatformAdditionalContentModel::__get__entitlementsSKU() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<::StringW>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OculusPlatformAdditionalContentModel::__set__semaphoreSlim(System::Threading::SemaphoreSlim value)  {
::cordl_internals::setInstanceField<System::Threading::SemaphoreSlim, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::SemaphoreSlim>(value));
}
constexpr System::Threading::SemaphoreSlim GlobalNamespace::OculusPlatformAdditionalContentModel::__get__semaphoreSlim() const {
return ::cordl_internals::getInstanceField<System::Threading::SemaphoreSlim, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OculusPlatformAdditionalContentModel::__set__isDataValid(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OculusPlatformAdditionalContentModel::__get__isDataValid() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::OculusPlatformAdditionalContentModel::InvalidateDataInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformAdditionalContentModel>::get(),
                            "InvalidateDataInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> GlobalNamespace::OculusPlatformAdditionalContentModel::GetLevelEntitlementStatusInternalAsync(::StringW levelId, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformAdditionalContentModel>::get(),
                            "GetLevelEntitlementStatusInternalAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, false>(const_cast<void*>(instance), ___internal_method, levelId, cancellationToken);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> GlobalNamespace::OculusPlatformAdditionalContentModel::GetPackEntitlementStatusInternalAsync(::StringW packId, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformAdditionalContentModel>::get(),
                            "GetPackEntitlementStatusInternalAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, false>(const_cast<void*>(instance), ___internal_method, packId, cancellationToken);
}
 System::Threading::Tasks::Task_1<bool> GlobalNamespace::OculusPlatformAdditionalContentModel::DataIsValidAsync(System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformAdditionalContentModel>::get(),
                            "DataIsValidAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<bool>, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> GlobalNamespace::OculusPlatformAdditionalContentModel::OpenLevelProductStoreAsync(::StringW levelId, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformAdditionalContentModel>::get(),
                            "OpenLevelProductStoreAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, false>(const_cast<void*>(instance), ___internal_method, levelId, cancellationToken);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> GlobalNamespace::OculusPlatformAdditionalContentModel::OpenLevelPackProductStoreAsync(::StringW levelPackId, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformAdditionalContentModel>::get(),
                            "OpenLevelPackProductStoreAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, false>(const_cast<void*>(instance), ___internal_method, levelPackId, cancellationToken);
}
 System::Threading::Tasks::Task_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> GlobalNamespace::OculusPlatformAdditionalContentModel::LaunchCheckoutFlow(::StringW sku)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformAdditionalContentModel>::get(),
                            "LaunchCheckoutFlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>>, false>(const_cast<void*>(instance), ___internal_method, sku);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> GlobalNamespace::OculusPlatformAdditionalContentModel::IsPackBetterBuyThanLevelAsync(::StringW levelPackId, System::Threading::CancellationToken token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformAdditionalContentModel>::get(),
                            "IsPackBetterBuyThanLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>, false>(const_cast<void*>(instance), ___internal_method, levelPackId, token);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> GlobalNamespace::OculusPlatformAdditionalContentModel::CheckForNewEntitlementsAsync(System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformAdditionalContentModel>::get(),
                            "CheckForNewEntitlementsAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 bool GlobalNamespace::OculusPlatformAdditionalContentModel::HasLevelEntitlement(::StringW levelId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformAdditionalContentModel>::get(),
                            "HasLevelEntitlement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, levelId);
}
 bool GlobalNamespace::OculusPlatformAdditionalContentModel::HasLevelPackEntitlement(::StringW levelPackId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformAdditionalContentModel>::get(),
                            "HasLevelPackEntitlement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, levelPackId);
}
// Ctor Parameters []
 GlobalNamespace::OculusPlatformAdditionalContentModel::OculusPlatformAdditionalContentModel()  : GlobalNamespace::AdditionalContentModel(THROW_UNLESS(::il2cpp_utils::New<OculusPlatformAdditionalContentModel>())) {}
 void GlobalNamespace::OculusPlatformAdditionalContentModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformAdditionalContentModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
