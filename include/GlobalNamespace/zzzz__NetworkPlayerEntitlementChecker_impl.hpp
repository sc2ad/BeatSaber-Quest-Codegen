#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayerEntitlementChecker_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayerEntitlementChecker_def.hpp"
#include "GlobalNamespace/zzzz__IMenuRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementsStatus_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5::*)()>(&GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x22092a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2209504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::NetworkPlayerEntitlementChecker", modifiers: "", def_value: Some("csnull") }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::EntitlementsStatus>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5::GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::NetworkPlayerEntitlementChecker __4__this, ::StringW levelId, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::EntitlementsStatus> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->levelId = levelId;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5::__set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5::__set___4__this(GlobalNamespace::NetworkPlayerEntitlementChecker value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NetworkPlayerEntitlementChecker, 0x28>(this->__instance, std::forward<GlobalNamespace::NetworkPlayerEntitlementChecker>(value));
}
constexpr GlobalNamespace::NetworkPlayerEntitlementChecker GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NetworkPlayerEntitlementChecker, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5::__set_levelId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5::__get_levelId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::EntitlementsStatus> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::EntitlementsStatus>, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::EntitlementsStatus>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::EntitlementsStatus> GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::EntitlementsStatus>, 0x38>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6::*)()>(&GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x2209510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2209714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::EntitlementsStatus>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::NetworkPlayerEntitlementChecker", modifiers: "", def_value: Some("csnull") }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6::GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::EntitlementsStatus> __t__builder, GlobalNamespace::NetworkPlayerEntitlementChecker __4__this, ::StringW levelId, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->levelId = levelId;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::EntitlementsStatus> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::EntitlementsStatus>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::EntitlementsStatus>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::EntitlementsStatus> GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::EntitlementsStatus>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6::__set___4__this(GlobalNamespace::NetworkPlayerEntitlementChecker value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NetworkPlayerEntitlementChecker, 0x20>(this->__instance, std::forward<GlobalNamespace::NetworkPlayerEntitlementChecker>(value));
}
constexpr GlobalNamespace::NetworkPlayerEntitlementChecker GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NetworkPlayerEntitlementChecker, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6::__set_levelId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6::__get_levelId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x30>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x30>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::NetworkPlayerEntitlementChecker.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayerEntitlementChecker::*)()>(&GlobalNamespace::NetworkPlayerEntitlementChecker::Start)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2208dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerEntitlementChecker>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NetworkPlayerEntitlementChecker.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayerEntitlementChecker::*)()>(&GlobalNamespace::NetworkPlayerEntitlementChecker::OnDestroy)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2208ebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerEntitlementChecker>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NetworkPlayerEntitlementChecker.HandleDataInvalidated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayerEntitlementChecker::*)()>(&GlobalNamespace::NetworkPlayerEntitlementChecker::HandleDataInvalidated)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2209060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerEntitlementChecker>::get(),
                            "HandleDataInvalidated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NetworkPlayerEntitlementChecker.HandleGetIsEntitledToLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayerEntitlementChecker::*)(::StringW, ::StringW)>(&GlobalNamespace::NetworkPlayerEntitlementChecker::HandleGetIsEntitledToLevel)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2209104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerEntitlementChecker>::get(),
                            "HandleGetIsEntitledToLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NetworkPlayerEntitlementChecker.GetEntitlementStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::EntitlementsStatus> (GlobalNamespace::NetworkPlayerEntitlementChecker::*)(::StringW)>(&GlobalNamespace::NetworkPlayerEntitlementChecker::GetEntitlementStatus)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x22091a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerEntitlementChecker>::get(),
                            "GetEntitlementStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NetworkPlayerEntitlementChecker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayerEntitlementChecker::*)()>(&GlobalNamespace::NetworkPlayerEntitlementChecker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220929c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerEntitlementChecker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::NetworkPlayerEntitlementChecker::__set__rpcManager(GlobalNamespace::IMenuRpcManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IMenuRpcManager, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IMenuRpcManager>(value));
}
constexpr GlobalNamespace::IMenuRpcManager GlobalNamespace::NetworkPlayerEntitlementChecker::__get__rpcManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IMenuRpcManager, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NetworkPlayerEntitlementChecker::__set__additionalContentModel(GlobalNamespace::AdditionalContentModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AdditionalContentModel, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AdditionalContentModel>(value));
}
constexpr GlobalNamespace::AdditionalContentModel GlobalNamespace::NetworkPlayerEntitlementChecker::__get__additionalContentModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AdditionalContentModel, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::NetworkPlayerEntitlementChecker::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerEntitlementChecker>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NetworkPlayerEntitlementChecker::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerEntitlementChecker>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NetworkPlayerEntitlementChecker::HandleDataInvalidated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerEntitlementChecker>::get(),
                            "HandleDataInvalidated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NetworkPlayerEntitlementChecker::HandleGetIsEntitledToLevel(::StringW userId, ::StringW levelId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerEntitlementChecker>::get(),
                            "HandleGetIsEntitledToLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, levelId);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::EntitlementsStatus> GlobalNamespace::NetworkPlayerEntitlementChecker::GetEntitlementStatus(::StringW levelId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerEntitlementChecker>::get(),
                            "GetEntitlementStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::EntitlementsStatus>, false>(const_cast<void*>(instance), ___internal_method, levelId);
}
 GlobalNamespace::NetworkPlayerEntitlementChecker GlobalNamespace::NetworkPlayerEntitlementChecker::New_ctor()  {
GlobalNamespace::NetworkPlayerEntitlementChecker o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::NetworkPlayerEntitlementChecker>())};
return o;
}
 void GlobalNamespace::NetworkPlayerEntitlementChecker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerEntitlementChecker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
