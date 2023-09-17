#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__PlatformAuthenticationTokenProvider_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
#include "GlobalNamespace/zzzz__IPlatformUserModel_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "GlobalNamespace/zzzz__IAuthenticationTokenProvider_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "GlobalNamespace/zzzz__PlatformUserAuthTokenData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16::*)()>(&::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x2210cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x221109c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::PlatformAuthenticationTokenProvider", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken> __t__builder, ::GlobalNamespace::PlatformAuthenticationTokenProvider __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken> ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16::__set___4__this(::GlobalNamespace::PlatformAuthenticationTokenProvider value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlatformAuthenticationTokenProvider, 0x20>(this->__instance, std::forward<::GlobalNamespace::PlatformAuthenticationTokenProvider>(value));
}
constexpr ::GlobalNamespace::PlatformAuthenticationTokenProvider ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlatformAuthenticationTokenProvider, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData>, 0x28>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData> ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData>, 0x28>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18::*)()>(&::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x22110f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2211384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "skipCache", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::PlatformAuthenticationTokenProvider", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData> __t__builder, bool skipCache, ::GlobalNamespace::PlatformAuthenticationTokenProvider __4__this, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->skipCache = skipCache;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData> ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18::__set_skipCache(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18::__get_skipCache() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18::__set___4__this(::GlobalNamespace::PlatformAuthenticationTokenProvider value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlatformAuthenticationTokenProvider, 0x28>(this->__instance, std::forward<::GlobalNamespace::PlatformAuthenticationTokenProvider>(value));
}
constexpr ::GlobalNamespace::PlatformAuthenticationTokenProvider ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlatformAuthenticationTokenProvider, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x30>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData>, 0x38>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData> ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData>, 0x38>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19::*)()>(&::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x22113dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2211700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::PlatformAuthenticationTokenProvider", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19::____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData> __t__builder, ::GlobalNamespace::PlatformAuthenticationTokenProvider __4__this, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData> ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19::__set___4__this(::GlobalNamespace::PlatformAuthenticationTokenProvider value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlatformAuthenticationTokenProvider, 0x20>(this->__instance, std::forward<::GlobalNamespace::PlatformAuthenticationTokenProvider>(value));
}
constexpr ::GlobalNamespace::PlatformAuthenticationTokenProvider ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlatformAuthenticationTokenProvider, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData>, 0x30>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData> ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData>, 0x30>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::PlatformAuthenticationTokenProvider.get_hashedUserId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PlatformAuthenticationTokenProvider::*)()>(&::GlobalNamespace::PlatformAuthenticationTokenProvider::get_hashedUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22108d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider>::get(),
                            "get_hashedUserId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformAuthenticationTokenProvider.get_userName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PlatformAuthenticationTokenProvider::*)()>(&::GlobalNamespace::PlatformAuthenticationTokenProvider::get_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22108d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformAuthenticationTokenProvider.get_platform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__AuthenticationToken__Platform (::GlobalNamespace::PlatformAuthenticationTokenProvider::*)()>(&::GlobalNamespace::PlatformAuthenticationTokenProvider::get_platform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22108e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider>::get(),
                            "get_platform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformAuthenticationTokenProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformAuthenticationTokenProvider::*)(::GlobalNamespace::IPlatformUserModel, ::GlobalNamespace::UserInfo)>(&::GlobalNamespace::PlatformAuthenticationTokenProvider::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x22108e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPlatformUserModel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::UserInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformAuthenticationTokenProvider.GetAuthenticationToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken> (::GlobalNamespace::PlatformAuthenticationTokenProvider::*)()>(&::GlobalNamespace::PlatformAuthenticationTokenProvider::GetAuthenticationToken)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2210994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider>::get(),
                            "GetAuthenticationToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformAuthenticationTokenProvider.GetTokenPlatform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__AuthenticationToken__Platform (::GlobalNamespace::PlatformAuthenticationTokenProvider::*)(::GlobalNamespace::PlatformEnvironment)>(&::GlobalNamespace::PlatformAuthenticationTokenProvider::GetTokenPlatform)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2210a8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider>::get(),
                            "GetTokenPlatform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformEnvironment>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformAuthenticationTokenProvider.GetXPlatformAccessToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData> (::GlobalNamespace::PlatformAuthenticationTokenProvider::*)(::System::Threading::CancellationToken, bool)>(&::GlobalNamespace::PlatformAuthenticationTokenProvider::GetXPlatformAccessToken)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2210aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider>::get(),
                            "GetXPlatformAccessToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformAuthenticationTokenProvider.RequestXPlatformAccessToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData> (::GlobalNamespace::PlatformAuthenticationTokenProvider::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::PlatformAuthenticationTokenProvider::RequestXPlatformAccessToken)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2210bf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider>::get(),
                            "RequestXPlatformAccessToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IAuthenticationTokenProvider
constexpr  ::GlobalNamespace::PlatformAuthenticationTokenProvider::operator ::GlobalNamespace::IAuthenticationTokenProvider() const noexcept {
return ::GlobalNamespace::IAuthenticationTokenProvider(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PlatformAuthenticationTokenProvider::__set__platformUserModel(::GlobalNamespace::IPlatformUserModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPlatformUserModel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IPlatformUserModel>(value));
}
constexpr ::GlobalNamespace::IPlatformUserModel ::GlobalNamespace::PlatformAuthenticationTokenProvider::__get__platformUserModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPlatformUserModel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PlatformAuthenticationTokenProvider::__set__userId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::PlatformAuthenticationTokenProvider::__get__userId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PlatformAuthenticationTokenProvider::__set__userName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::PlatformAuthenticationTokenProvider::__get__userName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PlatformAuthenticationTokenProvider::__set__hashedUserId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::PlatformAuthenticationTokenProvider::__get__hashedUserId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PlatformAuthenticationTokenProvider::__set__platform(::GlobalNamespace::____GlobalNamespace__AuthenticationToken__Platform value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__AuthenticationToken__Platform, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__AuthenticationToken__Platform>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__AuthenticationToken__Platform ::GlobalNamespace::PlatformAuthenticationTokenProvider::__get__platform() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__AuthenticationToken__Platform, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PlatformAuthenticationTokenProvider::__set__cachedXPlatformAccessToken(::GlobalNamespace::XPlatformAccessTokenData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::XPlatformAccessTokenData, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::XPlatformAccessTokenData>(value));
}
constexpr ::GlobalNamespace::XPlatformAccessTokenData ::GlobalNamespace::PlatformAuthenticationTokenProvider::__get__cachedXPlatformAccessToken() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::XPlatformAccessTokenData, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PlatformAuthenticationTokenProvider::__set__xPlatformAccessTokenTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData> value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>>(value));
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData> ::GlobalNamespace::PlatformAuthenticationTokenProvider::__get__xPlatformAccessTokenTask() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PlatformAuthenticationTokenProvider::__set__xPlatformTokenRetryDelayExpiration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::PlatformAuthenticationTokenProvider::__get__xPlatformTokenRetryDelayExpiration() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW ::GlobalNamespace::PlatformAuthenticationTokenProvider::get_hashedUserId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider>::get(),
                            "get_hashedUserId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::GlobalNamespace::PlatformAuthenticationTokenProvider::get_userName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::____GlobalNamespace__AuthenticationToken__Platform ::GlobalNamespace::PlatformAuthenticationTokenProvider::get_platform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider>::get(),
                            "get_platform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__AuthenticationToken__Platform, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "platformUserModel", ty: "::GlobalNamespace::IPlatformUserModel", modifiers: "", def_value: None }, CppParam { name: "userInfo", ty: "::GlobalNamespace::UserInfo", modifiers: "", def_value: None }]
 ::GlobalNamespace::PlatformAuthenticationTokenProvider::PlatformAuthenticationTokenProvider(::GlobalNamespace::IPlatformUserModel platformUserModel, ::GlobalNamespace::UserInfo userInfo)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PlatformAuthenticationTokenProvider>(platformUserModel, userInfo))) {}
 void ::GlobalNamespace::PlatformAuthenticationTokenProvider::_ctor(::GlobalNamespace::IPlatformUserModel platformUserModel, ::GlobalNamespace::UserInfo userInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPlatformUserModel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::UserInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, platformUserModel, userInfo);
}
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken> ::GlobalNamespace::PlatformAuthenticationTokenProvider::GetAuthenticationToken()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider>::get(),
                            "GetAuthenticationToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::____GlobalNamespace__AuthenticationToken__Platform ::GlobalNamespace::PlatformAuthenticationTokenProvider::GetTokenPlatform(::GlobalNamespace::PlatformEnvironment tokenPlatformEnvironment)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider>::get(),
                            "GetTokenPlatform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformEnvironment>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__AuthenticationToken__Platform, false>(const_cast<void*>(instance), ___internal_method, tokenPlatformEnvironment);
}
/// @param skipCache: bool (default: false)
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData> ::GlobalNamespace::PlatformAuthenticationTokenProvider::GetXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken, bool skipCache)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider>::get(),
                            "GetXPlatformAccessToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>, false>(const_cast<void*>(instance), ___internal_method, cancellationToken, skipCache);
}
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData> ::GlobalNamespace::PlatformAuthenticationTokenProvider::RequestXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider>::get(),
                            "RequestXPlatformAccessToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
} // end anonymous namespace
