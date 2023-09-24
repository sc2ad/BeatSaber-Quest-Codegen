#pragma once
#include "GlobalNamespace/zzzz__AdditionalContentModel_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__TestPlatformAdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__TestPlatformAdditionalContentModel_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement::*)()>(&GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b8378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement::__set_id(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement::__get_id() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement::__set_status(GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>(value));
}
constexpr GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement::__get_status() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement::New_ctor()  {
GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::*)()>(&GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x21b8380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21b85e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: Some("{}") }, CppParam { name: "token", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::TestPlatformAdditionalContentModel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __t__builder, System::Threading::CancellationToken token, GlobalNamespace::TestPlatformAdditionalContentModel __4__this, ::StringW levelId, System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->token = token;
this->__4__this = __4__this;
this->levelId = levelId;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::__set_token(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x20>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::__get_token() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::__set___4__this(GlobalNamespace::TestPlatformAdditionalContentModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::TestPlatformAdditionalContentModel, 0x28>(this->__instance, std::forward<GlobalNamespace::TestPlatformAdditionalContentModel>(value));
}
constexpr GlobalNamespace::TestPlatformAdditionalContentModel GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::TestPlatformAdditionalContentModel, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::__set_levelId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::__get_levelId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::__set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter, 0x38>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::*)()>(&GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x21b8638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21b8898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: Some("{}") }, CppParam { name: "token", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::TestPlatformAdditionalContentModel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __t__builder, System::Threading::CancellationToken token, GlobalNamespace::TestPlatformAdditionalContentModel __4__this, ::StringW levelPackId, System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->token = token;
this->__4__this = __4__this;
this->levelPackId = levelPackId;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::__set_token(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x20>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::__get_token() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::__set___4__this(GlobalNamespace::TestPlatformAdditionalContentModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::TestPlatformAdditionalContentModel, 0x28>(this->__instance, std::forward<GlobalNamespace::TestPlatformAdditionalContentModel>(value));
}
constexpr GlobalNamespace::TestPlatformAdditionalContentModel GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::TestPlatformAdditionalContentModel, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::__set_levelPackId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::__get_levelPackId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::__set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter, 0x38>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7::*)()>(&GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x21b88f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21b8ad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "token", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::TestPlatformAdditionalContentModel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7::GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> __t__builder, System::Threading::CancellationToken token, GlobalNamespace::TestPlatformAdditionalContentModel __4__this, System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->token = token;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7::__set_token(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x20>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7::__get_token() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7::__set___4__this(GlobalNamespace::TestPlatformAdditionalContentModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::TestPlatformAdditionalContentModel, 0x28>(this->__instance, std::forward<GlobalNamespace::TestPlatformAdditionalContentModel>(value));
}
constexpr GlobalNamespace::TestPlatformAdditionalContentModel GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::TestPlatformAdditionalContentModel, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7::__set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter, 0x30>(this->__instance, std::forward<System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter, 0x30>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::*)()>(&GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x21b8b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21b8d88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "token", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__4__this", ty: "GlobalNamespace::TestPlatformAdditionalContentModel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __t__builder, System::Threading::CancellationToken token, ::StringW levelId, GlobalNamespace::TestPlatformAdditionalContentModel __4__this, System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->token = token;
this->levelId = levelId;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__set_token(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x20>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__get_token() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__set_levelId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__get_levelId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__set___4__this(GlobalNamespace::TestPlatformAdditionalContentModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::TestPlatformAdditionalContentModel, 0x30>(this->__instance, std::forward<GlobalNamespace::TestPlatformAdditionalContentModel>(value));
}
constexpr GlobalNamespace::TestPlatformAdditionalContentModel GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::TestPlatformAdditionalContentModel, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter, 0x38>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10::*)()>(&GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x21b8de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21b900c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "token", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __t__builder, System::Threading::CancellationToken token, ::StringW levelPackId, System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->token = token;
this->levelPackId = levelPackId;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10::__set_token(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x20>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10::__get_token() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10::__set_levelPackId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10::__get_levelPackId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10::__set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter, 0x30>(this->__instance, std::forward<System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter, 0x30>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::TestPlatformAdditionalContentModel.InvalidateDataInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TestPlatformAdditionalContentModel::*)()>(&GlobalNamespace::TestPlatformAdditionalContentModel::InvalidateDataInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20ccbfc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::TestPlatformAdditionalContentModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TestPlatformAdditionalContentModel>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TestPlatformAdditionalContentModel.GetLevelEntitlementStatusInternalAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> (GlobalNamespace::TestPlatformAdditionalContentModel::*)(::StringW, System::Threading::CancellationToken)>(&GlobalNamespace::TestPlatformAdditionalContentModel::GetLevelEntitlementStatusInternalAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x20ccc00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::TestPlatformAdditionalContentModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TestPlatformAdditionalContentModel>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TestPlatformAdditionalContentModel.GetPackEntitlementStatusInternalAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> (GlobalNamespace::TestPlatformAdditionalContentModel::*)(::StringW, System::Threading::CancellationToken)>(&GlobalNamespace::TestPlatformAdditionalContentModel::GetPackEntitlementStatusInternalAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x20ccd04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::TestPlatformAdditionalContentModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TestPlatformAdditionalContentModel>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TestPlatformAdditionalContentModel.IsPackBetterBuyThanLevelAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> (GlobalNamespace::TestPlatformAdditionalContentModel::*)(::StringW, System::Threading::CancellationToken)>(&GlobalNamespace::TestPlatformAdditionalContentModel::IsPackBetterBuyThanLevelAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x20cce08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::TestPlatformAdditionalContentModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TestPlatformAdditionalContentModel>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TestPlatformAdditionalContentModel.OpenLevelProductStoreAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> (GlobalNamespace::TestPlatformAdditionalContentModel::*)(::StringW, System::Threading::CancellationToken)>(&GlobalNamespace::TestPlatformAdditionalContentModel::OpenLevelProductStoreAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x20ccf04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::TestPlatformAdditionalContentModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TestPlatformAdditionalContentModel>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TestPlatformAdditionalContentModel.BuyLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TestPlatformAdditionalContentModel::*)(::StringW)>(&GlobalNamespace::TestPlatformAdditionalContentModel::BuyLevel)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x20cd008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TestPlatformAdditionalContentModel>::get(),
                            "BuyLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TestPlatformAdditionalContentModel.OpenLevelPackProductStoreAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> (GlobalNamespace::TestPlatformAdditionalContentModel::*)(::StringW, System::Threading::CancellationToken)>(&GlobalNamespace::TestPlatformAdditionalContentModel::OpenLevelPackProductStoreAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x20cd1a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::TestPlatformAdditionalContentModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TestPlatformAdditionalContentModel>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TestPlatformAdditionalContentModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TestPlatformAdditionalContentModel::*)()>(&GlobalNamespace::TestPlatformAdditionalContentModel::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x20cd2a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TestPlatformAdditionalContentModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::TestPlatformAdditionalContentModel::__set__levelsEntitlements(::ArrayW<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement>>(value));
}
constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement> GlobalNamespace::TestPlatformAdditionalContentModel::__get__levelsEntitlements() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TestPlatformAdditionalContentModel::__set__levelPacksEntitlements(::ArrayW<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement>>(value));
}
constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement> GlobalNamespace::TestPlatformAdditionalContentModel::__get__levelPacksEntitlements() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TestPlatformAdditionalContentModel::__set__packBetterBuyThanLevel(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::TestPlatformAdditionalContentModel::__get__packBetterBuyThanLevel() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::TestPlatformAdditionalContentModel::InvalidateDataInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TestPlatformAdditionalContentModel>::get(),
                            "InvalidateDataInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> GlobalNamespace::TestPlatformAdditionalContentModel::GetLevelEntitlementStatusInternalAsync(::StringW levelId, System::Threading::CancellationToken token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TestPlatformAdditionalContentModel>::get(),
                            "GetLevelEntitlementStatusInternalAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, false>(const_cast<void*>(instance), ___internal_method, levelId, token);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> GlobalNamespace::TestPlatformAdditionalContentModel::GetPackEntitlementStatusInternalAsync(::StringW levelPackId, System::Threading::CancellationToken token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TestPlatformAdditionalContentModel>::get(),
                            "GetPackEntitlementStatusInternalAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, false>(const_cast<void*>(instance), ___internal_method, levelPackId, token);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> GlobalNamespace::TestPlatformAdditionalContentModel::IsPackBetterBuyThanLevelAsync(::StringW levelPackId, System::Threading::CancellationToken token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TestPlatformAdditionalContentModel>::get(),
                            "IsPackBetterBuyThanLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>, false>(const_cast<void*>(instance), ___internal_method, levelPackId, token);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> GlobalNamespace::TestPlatformAdditionalContentModel::OpenLevelProductStoreAsync(::StringW levelId, System::Threading::CancellationToken token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TestPlatformAdditionalContentModel>::get(),
                            "OpenLevelProductStoreAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, false>(const_cast<void*>(instance), ___internal_method, levelId, token);
}
 void GlobalNamespace::TestPlatformAdditionalContentModel::BuyLevel(::StringW levelId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TestPlatformAdditionalContentModel>::get(),
                            "BuyLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, levelId);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> GlobalNamespace::TestPlatformAdditionalContentModel::OpenLevelPackProductStoreAsync(::StringW levelPackId, System::Threading::CancellationToken token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TestPlatformAdditionalContentModel>::get(),
                            "OpenLevelPackProductStoreAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, false>(const_cast<void*>(instance), ___internal_method, levelPackId, token);
}
 GlobalNamespace::TestPlatformAdditionalContentModel GlobalNamespace::TestPlatformAdditionalContentModel::New_ctor()  {
GlobalNamespace::TestPlatformAdditionalContentModel o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::TestPlatformAdditionalContentModel>())};
return o;
}
 void GlobalNamespace::TestPlatformAdditionalContentModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TestPlatformAdditionalContentModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
