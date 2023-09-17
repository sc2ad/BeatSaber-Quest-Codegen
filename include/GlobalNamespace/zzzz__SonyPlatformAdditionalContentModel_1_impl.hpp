#pragma once
#include "GlobalNamespace/zzzz__AdditionalContentModel_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__SonyPlatformAdditionalContentModel_1_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__ISonyCommerceHelper_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "GlobalNamespace/zzzz__ISonyCommerceHelper_def.hpp"
#include "GlobalNamespace/zzzz__ISonyCommerceHelper_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5::*)()>(&::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> __t__builder, ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelId, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->levelId = levelId;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5::__set___4__this(::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>, 0x10>(this->__instance, std::forward<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>>(value));
}
constexpr ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>, 0x10>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x18>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x18>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5::__set_levelId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5::__get_levelId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x28>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x28>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6::*)()>(&::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> __t__builder, ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelPackId, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->levelPackId = levelPackId;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6::__set___4__this(::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>, 0x10>(this->__instance, std::forward<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>>(value));
}
constexpr ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>, 0x10>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x18>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x18>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6::__set_levelPackId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6::__get_levelPackId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x28>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x28>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7::*)()>(&::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __t__builder, ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __4__this, ::StringW levelId, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->levelId = levelId;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7::__set___4__this(::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>, 0x10>(this->__instance, std::forward<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>>(value));
}
constexpr ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>, 0x10>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7::__set_levelId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7::__get_levelId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x20>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult>, 0x28>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult> ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult>, 0x28>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8::*)()>(&::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __t__builder, ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __4__this, ::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->levelPackId = levelPackId;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8::__set___4__this(::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>, 0x10>(this->__instance, std::forward<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>>(value));
}
constexpr ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>, 0x10>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8::__set_levelPackId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8::__get_levelPackId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x20>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult>, 0x28>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult> ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult>, 0x28>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9::*)()>(&::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> __t__builder, ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelPackId, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->levelPackId = levelPackId;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9::__set___4__this(::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>, 0x10>(this->__instance, std::forward<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>>(value));
}
constexpr ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>, 0x10>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x18>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x18>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9::__set_levelPackId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9::__get_levelPackId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x28>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x28>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12::*)()>(&::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __4__this, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12::__set___4__this(::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>, 0x10>(this->__instance, std::forward<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>>(value));
}
constexpr ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>, 0x10>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x18>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x18>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x20>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12::__set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>, 0x28>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>, 0x28>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13::*)()>(&::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> __t__builder, ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __4__this, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13::__set___4__this(::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>, 0x10>(this->__instance, std::forward<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>>(value));
}
constexpr ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>, 0x10>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x18>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x18>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>, 0x20>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>, 0x20>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::SonyPlatformAdditionalContentModel_1.InvalidateDataInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SonyPlatformAdditionalContentModel_1::*)()>(&::GlobalNamespace::SonyPlatformAdditionalContentModel_1::InvalidateDataInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::SonyPlatformAdditionalContentModel_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyPlatformAdditionalContentModel_1.GetLevelEntitlementStatusInternalAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> (::GlobalNamespace::SonyPlatformAdditionalContentModel_1::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::SonyPlatformAdditionalContentModel_1::GetLevelEntitlementStatusInternalAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::SonyPlatformAdditionalContentModel_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyPlatformAdditionalContentModel_1.GetPackEntitlementStatusInternalAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> (::GlobalNamespace::SonyPlatformAdditionalContentModel_1::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::SonyPlatformAdditionalContentModel_1::GetPackEntitlementStatusInternalAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::SonyPlatformAdditionalContentModel_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyPlatformAdditionalContentModel_1.OpenLevelProductStoreAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> (::GlobalNamespace::SonyPlatformAdditionalContentModel_1::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::SonyPlatformAdditionalContentModel_1::OpenLevelProductStoreAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::SonyPlatformAdditionalContentModel_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyPlatformAdditionalContentModel_1.OpenLevelPackProductStoreAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> (::GlobalNamespace::SonyPlatformAdditionalContentModel_1::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::SonyPlatformAdditionalContentModel_1::OpenLevelPackProductStoreAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::SonyPlatformAdditionalContentModel_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyPlatformAdditionalContentModel_1.IsPackBetterBuyThanLevelAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> (::GlobalNamespace::SonyPlatformAdditionalContentModel_1::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::SonyPlatformAdditionalContentModel_1::IsPackBetterBuyThanLevelAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::SonyPlatformAdditionalContentModel_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyPlatformAdditionalContentModel_1.HasLevelEntitlement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SonyPlatformAdditionalContentModel_1::*)(::StringW)>(&::GlobalNamespace::SonyPlatformAdditionalContentModel_1::HasLevelEntitlement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1>::get(),
                            "HasLevelEntitlement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyPlatformAdditionalContentModel_1.HasLevelPackEntitlement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SonyPlatformAdditionalContentModel_1::*)(::StringW)>(&::GlobalNamespace::SonyPlatformAdditionalContentModel_1::HasLevelPackEntitlement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1>::get(),
                            "HasLevelPackEntitlement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyPlatformAdditionalContentModel_1.EnsureDataValidity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool> (::GlobalNamespace::SonyPlatformAdditionalContentModel_1::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::SonyPlatformAdditionalContentModel_1::EnsureDataValidity)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1>::get(),
                            "EnsureDataValidity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyPlatformAdditionalContentModel_1.UpdateEntitlementsAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> (::GlobalNamespace::SonyPlatformAdditionalContentModel_1::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::SonyPlatformAdditionalContentModel_1::UpdateEntitlementsAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1>::get(),
                            "UpdateEntitlementsAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyPlatformAdditionalContentModel_1.GetLevelProductsModel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (::GlobalNamespace::SonyPlatformAdditionalContentModel_1::*)()>(&::GlobalNamespace::SonyPlatformAdditionalContentModel_1::GetLevelProductsModel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::SonyPlatformAdditionalContentModel_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyPlatformAdditionalContentModel_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SonyPlatformAdditionalContentModel_1::*)()>(&::GlobalNamespace::SonyPlatformAdditionalContentModel_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::SonyPlatformAdditionalContentModel_1::__set__entitlementsLabels(::System::Collections::Generic::HashSet_1<::StringW> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::HashSet_1<::StringW>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::HashSet_1<::StringW>>(value));
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW> ::GlobalNamespace::SonyPlatformAdditionalContentModel_1::__get__entitlementsLabels() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::StringW>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SonyPlatformAdditionalContentModel_1::__set__semaphoreSlim(::System::Threading::SemaphoreSlim value)  {
::cordl_internals::setInstanceField<::System::Threading::SemaphoreSlim, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::SemaphoreSlim>(value));
}
constexpr ::System::Threading::SemaphoreSlim ::GlobalNamespace::SonyPlatformAdditionalContentModel_1::__get__semaphoreSlim() const {
return ::cordl_internals::getInstanceField<::System::Threading::SemaphoreSlim, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SonyPlatformAdditionalContentModel_1::__set__isDataValid(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::SonyPlatformAdditionalContentModel_1::__get__isDataValid() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SonyPlatformAdditionalContentModel_1::__set__sonyCommerceHelper(::GlobalNamespace::ISonyCommerceHelper value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ISonyCommerceHelper, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ISonyCommerceHelper>(value));
}
constexpr ::GlobalNamespace::ISonyCommerceHelper ::GlobalNamespace::SonyPlatformAdditionalContentModel_1::__get__sonyCommerceHelper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ISonyCommerceHelper, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::SonyPlatformAdditionalContentModel_1::InvalidateDataInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1>::get(),
                            "InvalidateDataInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> ::GlobalNamespace::SonyPlatformAdditionalContentModel_1::GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1>::get(),
                            "GetLevelEntitlementStatusInternalAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>, false>(const_cast<void*>(instance), ___internal_method, levelId, cancellationToken);
}
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> ::GlobalNamespace::SonyPlatformAdditionalContentModel_1::GetPackEntitlementStatusInternalAsync(::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1>::get(),
                            "GetPackEntitlementStatusInternalAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>, false>(const_cast<void*>(instance), ___internal_method, levelPackId, cancellationToken);
}
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> ::GlobalNamespace::SonyPlatformAdditionalContentModel_1::OpenLevelProductStoreAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1>::get(),
                            "OpenLevelProductStoreAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, false>(const_cast<void*>(instance), ___internal_method, levelId, cancellationToken);
}
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> ::GlobalNamespace::SonyPlatformAdditionalContentModel_1::OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1>::get(),
                            "OpenLevelPackProductStoreAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, false>(const_cast<void*>(instance), ___internal_method, levelPackId, cancellationToken);
}
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> ::GlobalNamespace::SonyPlatformAdditionalContentModel_1::IsPackBetterBuyThanLevelAsync(::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1>::get(),
                            "IsPackBetterBuyThanLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>, false>(const_cast<void*>(instance), ___internal_method, levelPackId, cancellationToken);
}
 bool ::GlobalNamespace::SonyPlatformAdditionalContentModel_1::HasLevelEntitlement(::StringW levelId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1>::get(),
                            "HasLevelEntitlement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, levelId);
}
 bool ::GlobalNamespace::SonyPlatformAdditionalContentModel_1::HasLevelPackEntitlement(::StringW levelPackId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1>::get(),
                            "HasLevelPackEntitlement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, levelPackId);
}
 ::System::Threading::Tasks::Task_1<bool> ::GlobalNamespace::SonyPlatformAdditionalContentModel_1::EnsureDataValidity(::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1>::get(),
                            "EnsureDataValidity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> ::GlobalNamespace::SonyPlatformAdditionalContentModel_1::UpdateEntitlementsAsync(::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1>::get(),
                            "UpdateEntitlementsAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 T ::GlobalNamespace::SonyPlatformAdditionalContentModel_1::GetLevelProductsModel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1>::get(),
                            "GetLevelProductsModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::SonyPlatformAdditionalContentModel_1::SonyPlatformAdditionalContentModel_1()  : ::GlobalNamespace::AdditionalContentModel(THROW_UNLESS(::il2cpp_utils::New<SonyPlatformAdditionalContentModel_1>())) {}
 void ::GlobalNamespace::SonyPlatformAdditionalContentModel_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
