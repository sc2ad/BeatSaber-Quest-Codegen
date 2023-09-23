#pragma once
#include "System/Net/zzzz__WebRequest_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Net/zzzz__FtpWebRequest_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Net/zzzz__ContextAwareResult_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__FtpWebResponse_def.hpp"
#include "System/Net/zzzz__TimerThread_def.hpp"
#include "System/Net/zzzz__FtpMethodInfo_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Net/zzzz__CloseExState_def.hpp"
#include "System/Net/Cache/zzzz__RequestCachePolicy_def.hpp"
#include "System/Net/zzzz__NetworkCredential_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/Net/zzzz__LazyAsyncResult_def.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
#include "System/Net/zzzz__FtpControlStream_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Net/zzzz__TimerThread_def.hpp"
#include "System/Net/zzzz__TimerThread_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/Net/Sockets/zzzz__TcpClient_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::System__Net__FtpWebRequest__RequestStage::System__Net__FtpWebRequest__RequestStage(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Net::System__Net__FtpWebRequest__RequestStage::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::System__Net__FtpWebRequest__RequestStage::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Net::System__Net__FtpWebRequest__RequestStage  System::Net::System__Net__FtpWebRequest__RequestStage::CheckForError{0};
constexpr System::Net::System__Net__FtpWebRequest__RequestStage  System::Net::System__Net__FtpWebRequest__RequestStage::RequestStarted{1};
constexpr System::Net::System__Net__FtpWebRequest__RequestStage  System::Net::System__Net__FtpWebRequest__RequestStage::WriteReady{2};
constexpr System::Net::System__Net__FtpWebRequest__RequestStage  System::Net::System__Net__FtpWebRequest__RequestStage::ReadReady{3};
constexpr System::Net::System__Net__FtpWebRequest__RequestStage  System::Net::System__Net__FtpWebRequest__RequestStage::ReleaseConnection{4};
//  Writing Method size for method: System::Net::System__Net__FtpWebRequest___CreateConnectionAsync_d__86.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__FtpWebRequest___CreateConnectionAsync_d__86::*)()>(&System::Net::System__Net__FtpWebRequest___CreateConnectionAsync_d__86::MoveNext)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x2809178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__FtpWebRequest___CreateConnectionAsync_d__86>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__FtpWebRequest___CreateConnectionAsync_d__86.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__FtpWebRequest___CreateConnectionAsync_d__86::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&System::Net::System__Net__FtpWebRequest___CreateConnectionAsync_d__86::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2809484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__FtpWebRequest___CreateConnectionAsync_d__86>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  System::Net::System__Net__FtpWebRequest___CreateConnectionAsync_d__86::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "System::Net::FtpWebRequest", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_client_5__2", ty: "System::Net::Sockets::TcpClient", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::System__Net__FtpWebRequest___CreateConnectionAsync_d__86::System__Net__FtpWebRequest___CreateConnectionAsync_d__86(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, System::Net::FtpWebRequest __4__this, System::Net::Sockets::TcpClient _client_5__2, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_client_5__2 = _client_5__2;
this->__u__1 = __u__1;
}
constexpr void System::Net::System__Net__FtpWebRequest___CreateConnectionAsync_d__86::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::System__Net__FtpWebRequest___CreateConnectionAsync_d__86::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void System::Net::System__Net__FtpWebRequest___CreateConnectionAsync_d__86::__set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder System::Net::System__Net__FtpWebRequest___CreateConnectionAsync_d__86::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void System::Net::System__Net__FtpWebRequest___CreateConnectionAsync_d__86::__set___4__this(System::Net::FtpWebRequest value)  {
::cordl_internals::setInstanceField<System::Net::FtpWebRequest, 0x28>(this->__instance, std::forward<System::Net::FtpWebRequest>(value));
}
constexpr System::Net::FtpWebRequest System::Net::System__Net__FtpWebRequest___CreateConnectionAsync_d__86::__get___4__this() const {
return ::cordl_internals::getInstanceField<System::Net::FtpWebRequest, 0x28>(this->__instance);
}
constexpr void System::Net::System__Net__FtpWebRequest___CreateConnectionAsync_d__86::__set__client_5__2(System::Net::Sockets::TcpClient value)  {
::cordl_internals::setInstanceField<System::Net::Sockets::TcpClient, 0x30>(this->__instance, std::forward<System::Net::Sockets::TcpClient>(value));
}
constexpr System::Net::Sockets::TcpClient System::Net::System__Net__FtpWebRequest___CreateConnectionAsync_d__86::__get__client_5__2() const {
return ::cordl_internals::getInstanceField<System::Net::Sockets::TcpClient, 0x30>(this->__instance);
}
constexpr void System::Net::System__Net__FtpWebRequest___CreateConnectionAsync_d__86::__set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter System::Net::System__Net__FtpWebRequest___CreateConnectionAsync_d__86::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x38>(this->__instance);
}
 void System::Net::System__Net__FtpWebRequest___CreateConnectionAsync_d__86::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__FtpWebRequest___CreateConnectionAsync_d__86>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Net::System__Net__FtpWebRequest___CreateConnectionAsync_d__86::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__FtpWebRequest___CreateConnectionAsync_d__86>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: System::Net::System__Net__FtpWebRequest____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__FtpWebRequest____c::*)()>(&System::Net::System__Net__FtpWebRequest____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28094f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__FtpWebRequest____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__FtpWebRequest____c._get_ClientCertificates_b__114_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509CertificateCollection (System::Net::System__Net__FtpWebRequest____c::*)()>(&System::Net::System__Net__FtpWebRequest____c::_get_ClientCertificates_b__114_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x28094fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__FtpWebRequest____c>::get(),
                            "<get_ClientCertificates>b__114_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Net::System__Net__FtpWebRequest____c::__set___9(System::Net::System__Net__FtpWebRequest____c value)  {
::cordl_internals::setStaticField<System::Net::System__Net__FtpWebRequest____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__FtpWebRequest____c>::get>(std::forward<System::Net::System__Net__FtpWebRequest____c>(value));
}
 System::Net::System__Net__FtpWebRequest____c System::Net::System__Net__FtpWebRequest____c::__get___9()  {
return ::cordl_internals::getStaticField<System::Net::System__Net__FtpWebRequest____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__FtpWebRequest____c>::get>();
}
 void System::Net::System__Net__FtpWebRequest____c::__set___9__114_0(System::Func_1<System::Security::Cryptography::X509Certificates::X509CertificateCollection> value)  {
::cordl_internals::setStaticField<System::Func_1<System::Security::Cryptography::X509Certificates::X509CertificateCollection>, "<>9__114_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__FtpWebRequest____c>::get>(std::forward<System::Func_1<System::Security::Cryptography::X509Certificates::X509CertificateCollection>>(value));
}
 System::Func_1<System::Security::Cryptography::X509Certificates::X509CertificateCollection> System::Net::System__Net__FtpWebRequest____c::__get___9__114_0()  {
return ::cordl_internals::getStaticField<System::Func_1<System::Security::Cryptography::X509Certificates::X509CertificateCollection>, "<>9__114_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__FtpWebRequest____c>::get>();
}
// Ctor Parameters []
 System::Net::System__Net__FtpWebRequest____c::System__Net__FtpWebRequest____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Net__FtpWebRequest____c>())) {}
 void System::Net::System__Net__FtpWebRequest____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__FtpWebRequest____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::Cryptography::X509Certificates::X509CertificateCollection System::Net::System__Net__FtpWebRequest____c::_get_ClientCertificates_b__114_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__FtpWebRequest____c>::get(),
                            "<get_ClientCertificates>b__114_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509CertificateCollection, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Net::FtpWebRequest.get_MethodInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::FtpMethodInfo (System::Net::FtpWebRequest::*)()>(&System::Net::FtpWebRequest::get_MethodInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2803848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_MethodInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.get_Method
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::FtpWebRequest::*)()>(&System::Net::FtpWebRequest::get_Method)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2803850;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FtpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.set_Method
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpWebRequest::*)(::StringW)>(&System::Net::FtpWebRequest::set_Method)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x280386c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FtpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.get_RenameTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::FtpWebRequest::*)()>(&System::Net::FtpWebRequest::get_RenameTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2803a30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_RenameTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.get_Credentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::ICredentials (System::Net::FtpWebRequest::*)()>(&System::Net::FtpWebRequest::get_Credentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2803a38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FtpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.set_Credentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpWebRequest::*)(System::Net::ICredentials)>(&System::Net::FtpWebRequest::set_Credentials)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2803a40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FtpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.get_RequestUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Uri (System::Net::FtpWebRequest::*)()>(&System::Net::FtpWebRequest::get_RequestUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2803b90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FtpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.get_Timeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::FtpWebRequest::*)()>(&System::Net::FtpWebRequest::get_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2803b98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FtpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.set_Timeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpWebRequest::*)(int32_t)>(&System::Net::FtpWebRequest::set_Timeout)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2803ba0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FtpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.get_RemainingTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::FtpWebRequest::*)()>(&System::Net::FtpWebRequest::get_RemainingTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2803c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_RemainingTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.get_ReadWriteTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::FtpWebRequest::*)()>(&System::Net::FtpWebRequest::get_ReadWriteTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2803c80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_ReadWriteTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.get_ContentOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::FtpWebRequest::*)()>(&System::Net::FtpWebRequest::get_ContentOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2803c88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_ContentOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.get_ContentLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::FtpWebRequest::*)()>(&System::Net::FtpWebRequest::get_ContentLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2803c90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FtpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.set_ContentLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpWebRequest::*)(int64_t)>(&System::Net::FtpWebRequest::set_ContentLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2803c98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FtpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.get_Proxy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IWebProxy (System::Net::FtpWebRequest::*)()>(&System::Net::FtpWebRequest::get_Proxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2803ca0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FtpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.set_Proxy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpWebRequest::*)(System::Net::IWebProxy)>(&System::Net::FtpWebRequest::set_Proxy)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2803ca8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FtpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.set_ConnectionGroupName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpWebRequest::*)(::StringW)>(&System::Net::FtpWebRequest::set_ConnectionGroupName)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2803d10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FtpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.get_Aborted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::FtpWebRequest::*)()>(&System::Net::FtpWebRequest::get_Aborted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2803d7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_Aborted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpWebRequest::*)(System::Uri)>(&System::Net::FtpWebRequest::_ctor)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x2803d84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.GetResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::WebResponse (System::Net::FtpWebRequest::*)()>(&System::Net::FtpWebRequest::GetResponse)> {
  constexpr static std::size_t size = 0x7ac;
  constexpr static std::size_t addrs = 0x2804144;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FtpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.BeginGetResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::Net::FtpWebRequest::*)(System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::Net::FtpWebRequest::BeginGetResponse)> {
  constexpr static std::size_t size = 0x6c0;
  constexpr static std::size_t addrs = 0x2805a58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FtpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.EndGetResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::WebResponse (System::Net::FtpWebRequest::*)(System::IAsyncResult)>(&System::Net::FtpWebRequest::EndGetResponse)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x2806118;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FtpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.BeginGetRequestStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::Net::FtpWebRequest::*)(System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::Net::FtpWebRequest::BeginGetRequestStream)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x2806524;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FtpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.EndGetRequestStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (System::Net::FtpWebRequest::*)(System::IAsyncResult)>(&System::Net::FtpWebRequest::EndGetRequestStream)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x2806a60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FtpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.SubmitRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpWebRequest::*)(bool)>(&System::Net::FtpWebRequest::SubmitRequest)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x2804d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "SubmitRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.TranslateConnectException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception (System::Net::FtpWebRequest::*)(System::Exception)>(&System::Net::FtpWebRequest::TranslateConnectException)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x28077c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "TranslateConnectException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.CreateConnectionAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpWebRequest::*)()>(&System::Net::FtpWebRequest::CreateConnectionAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2806ed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "CreateConnectionAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.CreateConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::FtpControlStream (System::Net::FtpWebRequest::*)()>(&System::Net::FtpWebRequest::CreateConnection)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2806f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "CreateConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.TimedSubmitRequestHelper
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (System::Net::FtpWebRequest::*)(bool)>(&System::Net::FtpWebRequest::TimedSubmitRequestHelper)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x2807118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "TimedSubmitRequestHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.TimerCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpWebRequest::*)(System::Net::System__Net__TimerThread__Timer, int32_t, ::bs_hook::Il2CppWrapperType)>(&System::Net::FtpWebRequest::TimerCallback)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2807930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "TimerCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::System__Net__TimerThread__Timer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.get_TimerQueue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::System__Net__TimerThread__Queue (System::Net::FtpWebRequest::*)()>(&System::Net::FtpWebRequest::get_TimerQueue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x28078c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_TimerQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.AttemptedRecovery
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::FtpWebRequest::*)(System::Exception)>(&System::Net::FtpWebRequest::AttemptedRecovery)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x2807540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "AttemptedRecovery",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.SetException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpWebRequest::*)(System::Exception)>(&System::Net::FtpWebRequest::SetException)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x2805714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "SetException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.CheckError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpWebRequest::*)()>(&System::Net::FtpWebRequest::CheckError)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28048f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "CheckError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.RequestCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpWebRequest::*)(::bs_hook::Il2CppWrapperType)>(&System::Net::FtpWebRequest::RequestCallback)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27fb988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "RequestCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.SyncRequestCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpWebRequest::*)(::bs_hook::Il2CppWrapperType)>(&System::Net::FtpWebRequest::SyncRequestCallback)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x280849c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "SyncRequestCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.AsyncRequestCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpWebRequest::*)(::bs_hook::Il2CppWrapperType)>(&System::Net::FtpWebRequest::AsyncRequestCallback)> {
  constexpr static std::size_t size = 0xa60;
  constexpr static std::size_t addrs = 0x2807a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "AsyncRequestCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.FinishRequestStage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::System__Net__FtpWebRequest__RequestStage (System::Net::FtpWebRequest::*)(System::Net::System__Net__FtpWebRequest__RequestStage)>(&System::Net::FtpWebRequest::FinishRequestStage)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x2804904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "FinishRequestStage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::System__Net__FtpWebRequest__RequestStage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.Abort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpWebRequest::*)()>(&System::Net::FtpWebRequest::Abort)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x280886c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FtpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.set_CachePolicy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpWebRequest::*)(System::Net::Cache::RequestCachePolicy)>(&System::Net::FtpWebRequest::set_CachePolicy)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2808cf8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FtpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.get_UseBinary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::FtpWebRequest::*)()>(&System::Net::FtpWebRequest::get_UseBinary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2808d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_UseBinary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.get_UsePassive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::FtpWebRequest::*)()>(&System::Net::FtpWebRequest::get_UsePassive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2808d68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_UsePassive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.get_ClientCertificates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509CertificateCollection (System::Net::FtpWebRequest::*)()>(&System::Net::FtpWebRequest::get_ClientCertificates)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x27fe464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_ClientCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.get_EnableSsl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::FtpWebRequest::*)()>(&System::Net::FtpWebRequest::get_EnableSsl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2808d70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_EnableSsl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.get_Headers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::WebHeaderCollection (System::Net::FtpWebRequest::*)()>(&System::Net::FtpWebRequest::get_Headers)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2808d78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FtpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.get_UseDefaultCredentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::FtpWebRequest::*)()>(&System::Net::FtpWebRequest::get_UseDefaultCredentials)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2808de4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FtpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.set_PreAuthenticate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpWebRequest::*)(bool)>(&System::Net::FtpWebRequest::set_PreAuthenticate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2808e0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FtpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.get_InUse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::FtpWebRequest::*)()>(&System::Net::FtpWebRequest::get_InUse)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2803a18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_InUse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.EnsureFtpWebResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpWebRequest::*)(System::Exception)>(&System::Net::FtpWebRequest::EnsureFtpWebResponse)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x2805224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "EnsureFtpWebResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpWebRequest.DataStreamClosed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpWebRequest::*)(System::Net::CloseExState)>(&System::Net::FtpWebRequest::DataStreamClosed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2808fe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "DataStreamClosed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::CloseExState>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::FtpWebRequest::__set__syncObject(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Net::FtpWebRequest::__get__syncObject() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__authInfo(System::Net::ICredentials value)  {
::cordl_internals::setInstanceField<System::Net::ICredentials, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::ICredentials>(value));
}
constexpr System::Net::ICredentials System::Net::FtpWebRequest::__get__authInfo() const {
return ::cordl_internals::getInstanceField<System::Net::ICredentials, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__uri(System::Uri value)  {
::cordl_internals::setInstanceField<System::Uri, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Uri>(value));
}
constexpr System::Uri System::Net::FtpWebRequest::__get__uri() const {
return ::cordl_internals::getInstanceField<System::Uri, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__methodInfo(System::Net::FtpMethodInfo value)  {
::cordl_internals::setInstanceField<System::Net::FtpMethodInfo, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::FtpMethodInfo>(value));
}
constexpr System::Net::FtpMethodInfo System::Net::FtpWebRequest::__get__methodInfo() const {
return ::cordl_internals::getInstanceField<System::Net::FtpMethodInfo, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__renameTo(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::FtpWebRequest::__get__renameTo() const {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__getRequestStreamStarted(bool value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::FtpWebRequest::__get__getRequestStreamStarted() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__getResponseStarted(bool value)  {
::cordl_internals::setInstanceField<bool, 0x61>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::FtpWebRequest::__get__getResponseStarted() const {
return ::cordl_internals::getInstanceField<bool, 0x61>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__startTime(System::DateTime value)  {
::cordl_internals::setInstanceField<System::DateTime, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::DateTime>(value));
}
constexpr System::DateTime System::Net::FtpWebRequest::__get__startTime() const {
return ::cordl_internals::getInstanceField<System::DateTime, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__timeout(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::FtpWebRequest::__get__timeout() const {
return ::cordl_internals::getInstanceField<int32_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__remainingTimeout(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x74>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::FtpWebRequest::__get__remainingTimeout() const {
return ::cordl_internals::getInstanceField<int32_t, 0x74>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__contentLength(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Net::FtpWebRequest::__get__contentLength() const {
return ::cordl_internals::getInstanceField<int64_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__contentOffset(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Net::FtpWebRequest::__get__contentOffset() const {
return ::cordl_internals::getInstanceField<int64_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__clientCertificates(System::Security::Cryptography::X509Certificates::X509CertificateCollection value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::X509Certificates::X509CertificateCollection, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::X509Certificates::X509CertificateCollection>(value));
}
constexpr System::Security::Cryptography::X509Certificates::X509CertificateCollection System::Net::FtpWebRequest::__get__clientCertificates() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::X509Certificates::X509CertificateCollection, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__passive(bool value)  {
::cordl_internals::setInstanceField<bool, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::FtpWebRequest::__get__passive() const {
return ::cordl_internals::getInstanceField<bool, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__binary(bool value)  {
::cordl_internals::setInstanceField<bool, 0x91>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::FtpWebRequest::__get__binary() const {
return ::cordl_internals::getInstanceField<bool, 0x91>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__connectionGroupName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::FtpWebRequest::__get__connectionGroupName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__async(bool value)  {
::cordl_internals::setInstanceField<bool, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::FtpWebRequest::__get__async() const {
return ::cordl_internals::getInstanceField<bool, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__aborted(bool value)  {
::cordl_internals::setInstanceField<bool, 0xa1>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::FtpWebRequest::__get__aborted() const {
return ::cordl_internals::getInstanceField<bool, 0xa1>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__timedOut(bool value)  {
::cordl_internals::setInstanceField<bool, 0xa2>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::FtpWebRequest::__get__timedOut() const {
return ::cordl_internals::getInstanceField<bool, 0xa2>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__exception(System::Exception value)  {
::cordl_internals::setInstanceField<System::Exception, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Exception>(value));
}
constexpr System::Exception System::Net::FtpWebRequest::__get__exception() const {
return ::cordl_internals::getInstanceField<System::Exception, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__timerQueue(System::Net::System__Net__TimerThread__Queue value)  {
::cordl_internals::setInstanceField<System::Net::System__Net__TimerThread__Queue, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::System__Net__TimerThread__Queue>(value));
}
constexpr System::Net::System__Net__TimerThread__Queue System::Net::FtpWebRequest::__get__timerQueue() const {
return ::cordl_internals::getInstanceField<System::Net::System__Net__TimerThread__Queue, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__timerCallback(System::Net::System__Net__TimerThread__Callback value)  {
::cordl_internals::setInstanceField<System::Net::System__Net__TimerThread__Callback, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::System__Net__TimerThread__Callback>(value));
}
constexpr System::Net::System__Net__TimerThread__Callback System::Net::FtpWebRequest::__get__timerCallback() const {
return ::cordl_internals::getInstanceField<System::Net::System__Net__TimerThread__Callback, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__enableSsl(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::FtpWebRequest::__get__enableSsl() const {
return ::cordl_internals::getInstanceField<bool, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__connection(System::Net::FtpControlStream value)  {
::cordl_internals::setInstanceField<System::Net::FtpControlStream, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::FtpControlStream>(value));
}
constexpr System::Net::FtpControlStream System::Net::FtpWebRequest::__get__connection() const {
return ::cordl_internals::getInstanceField<System::Net::FtpControlStream, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__stream(System::IO::Stream value)  {
::cordl_internals::setInstanceField<System::IO::Stream, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::Stream>(value));
}
constexpr System::IO::Stream System::Net::FtpWebRequest::__get__stream() const {
return ::cordl_internals::getInstanceField<System::IO::Stream, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__requestStage(System::Net::System__Net__FtpWebRequest__RequestStage value)  {
::cordl_internals::setInstanceField<System::Net::System__Net__FtpWebRequest__RequestStage, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::System__Net__FtpWebRequest__RequestStage>(value));
}
constexpr System::Net::System__Net__FtpWebRequest__RequestStage System::Net::FtpWebRequest::__get__requestStage() const {
return ::cordl_internals::getInstanceField<System::Net::System__Net__FtpWebRequest__RequestStage, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__onceFailed(bool value)  {
::cordl_internals::setInstanceField<bool, 0xdc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::FtpWebRequest::__get__onceFailed() const {
return ::cordl_internals::getInstanceField<bool, 0xdc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__ftpRequestHeaders(System::Net::WebHeaderCollection value)  {
::cordl_internals::setInstanceField<System::Net::WebHeaderCollection, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::WebHeaderCollection>(value));
}
constexpr System::Net::WebHeaderCollection System::Net::FtpWebRequest::__get__ftpRequestHeaders() const {
return ::cordl_internals::getInstanceField<System::Net::WebHeaderCollection, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__ftpWebResponse(System::Net::FtpWebResponse value)  {
::cordl_internals::setInstanceField<System::Net::FtpWebResponse, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::FtpWebResponse>(value));
}
constexpr System::Net::FtpWebResponse System::Net::FtpWebRequest::__get__ftpWebResponse() const {
return ::cordl_internals::getInstanceField<System::Net::FtpWebResponse, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__readWriteTimeout(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::FtpWebRequest::__get__readWriteTimeout() const {
return ::cordl_internals::getInstanceField<int32_t, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__writeAsyncResult(System::Net::ContextAwareResult value)  {
::cordl_internals::setInstanceField<System::Net::ContextAwareResult, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::ContextAwareResult>(value));
}
constexpr System::Net::ContextAwareResult System::Net::FtpWebRequest::__get__writeAsyncResult() const {
return ::cordl_internals::getInstanceField<System::Net::ContextAwareResult, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__readAsyncResult(System::Net::LazyAsyncResult value)  {
::cordl_internals::setInstanceField<System::Net::LazyAsyncResult, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::LazyAsyncResult>(value));
}
constexpr System::Net::LazyAsyncResult System::Net::FtpWebRequest::__get__readAsyncResult() const {
return ::cordl_internals::getInstanceField<System::Net::LazyAsyncResult, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpWebRequest::__set__requestCompleteAsyncResult(System::Net::LazyAsyncResult value)  {
::cordl_internals::setInstanceField<System::Net::LazyAsyncResult, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::LazyAsyncResult>(value));
}
constexpr System::Net::LazyAsyncResult System::Net::FtpWebRequest::__get__requestCompleteAsyncResult() const {
return ::cordl_internals::getInstanceField<System::Net::LazyAsyncResult, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Net::FtpWebRequest::__set_s_defaultFtpNetworkCredential(System::Net::NetworkCredential value)  {
::cordl_internals::setStaticField<System::Net::NetworkCredential, "s_defaultFtpNetworkCredential", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get>(std::forward<System::Net::NetworkCredential>(value));
}
 System::Net::NetworkCredential System::Net::FtpWebRequest::__get_s_defaultFtpNetworkCredential()  {
return ::cordl_internals::getStaticField<System::Net::NetworkCredential, "s_defaultFtpNetworkCredential", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get>();
}
 void System::Net::FtpWebRequest::__set_s_DefaultTimerQueue(System::Net::System__Net__TimerThread__Queue value)  {
::cordl_internals::setStaticField<System::Net::System__Net__TimerThread__Queue, "s_DefaultTimerQueue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get>(std::forward<System::Net::System__Net__TimerThread__Queue>(value));
}
 System::Net::System__Net__TimerThread__Queue System::Net::FtpWebRequest::__get_s_DefaultTimerQueue()  {
return ::cordl_internals::getStaticField<System::Net::System__Net__TimerThread__Queue, "s_DefaultTimerQueue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get>();
}
 System::Net::FtpMethodInfo System::Net::FtpWebRequest::get_MethodInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_MethodInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::FtpMethodInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Net::FtpWebRequest::get_Method()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_Method",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::FtpWebRequest::set_Method(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "set_Method",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW System::Net::FtpWebRequest::get_RenameTo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_RenameTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::ICredentials System::Net::FtpWebRequest::get_Credentials()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_Credentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::ICredentials, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::FtpWebRequest::set_Credentials(System::Net::ICredentials value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "set_Credentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ICredentials>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Uri System::Net::FtpWebRequest::get_RequestUri()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_RequestUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Uri, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Net::FtpWebRequest::get_Timeout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_Timeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::FtpWebRequest::set_Timeout(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "set_Timeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t System::Net::FtpWebRequest::get_RemainingTimeout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_RemainingTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Net::FtpWebRequest::get_ReadWriteTimeout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_ReadWriteTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t System::Net::FtpWebRequest::get_ContentOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_ContentOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t System::Net::FtpWebRequest::get_ContentLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_ContentLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::FtpWebRequest::set_ContentLength(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "set_ContentLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Net::IWebProxy System::Net::FtpWebRequest::get_Proxy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_Proxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::IWebProxy, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::FtpWebRequest::set_Proxy(System::Net::IWebProxy value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "set_Proxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IWebProxy>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::Net::FtpWebRequest::set_ConnectionGroupName(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "set_ConnectionGroupName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool System::Net::FtpWebRequest::get_Aborted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_Aborted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "uri", ty: "System::Uri", modifiers: "", def_value: None }]
 System::Net::FtpWebRequest::FtpWebRequest(System::Uri uri)  : System::Net::WebRequest(THROW_UNLESS(::il2cpp_utils::New<FtpWebRequest>(uri))) {}
 void System::Net::FtpWebRequest::_ctor(System::Uri uri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, uri);
}
 System::Net::WebResponse System::Net::FtpWebRequest::GetResponse()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "GetResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::WebResponse, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IAsyncResult System::Net::FtpWebRequest::BeginGetResponse(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "BeginGetResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, state);
}
 System::Net::WebResponse System::Net::FtpWebRequest::EndGetResponse(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "EndGetResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::WebResponse, false>(const_cast<void*>(instance), ___internal_method, asyncResult);
}
 System::IAsyncResult System::Net::FtpWebRequest::BeginGetRequestStream(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "BeginGetRequestStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, state);
}
 System::IO::Stream System::Net::FtpWebRequest::EndGetRequestStream(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "EndGetRequestStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method, asyncResult);
}
 void System::Net::FtpWebRequest::SubmitRequest(bool isAsync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "SubmitRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, isAsync);
}
 System::Exception System::Net::FtpWebRequest::TranslateConnectException(System::Exception e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "TranslateConnectException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Exception, false>(const_cast<void*>(instance), ___internal_method, e);
}
 void System::Net::FtpWebRequest::CreateConnectionAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "CreateConnectionAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::FtpControlStream System::Net::FtpWebRequest::CreateConnection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "CreateConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::FtpControlStream, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IO::Stream System::Net::FtpWebRequest::TimedSubmitRequestHelper(bool isAsync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "TimedSubmitRequestHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method, isAsync);
}
 void System::Net::FtpWebRequest::TimerCallback(System::Net::System__Net__TimerThread__Timer timer, int32_t timeNoticed, ::bs_hook::Il2CppWrapperType context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "TimerCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::System__Net__TimerThread__Timer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, timer, timeNoticed, context);
}
 System::Net::System__Net__TimerThread__Queue System::Net::FtpWebRequest::get_TimerQueue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_TimerQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::System__Net__TimerThread__Queue, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::FtpWebRequest::AttemptedRecovery(System::Exception e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "AttemptedRecovery",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, e);
}
 void System::Net::FtpWebRequest::SetException(System::Exception exception)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "SetException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, exception);
}
 void System::Net::FtpWebRequest::CheckError()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "CheckError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::FtpWebRequest::RequestCallback(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "RequestCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 void System::Net::FtpWebRequest::SyncRequestCallback(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "SyncRequestCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 void System::Net::FtpWebRequest::AsyncRequestCallback(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "AsyncRequestCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 System::Net::System__Net__FtpWebRequest__RequestStage System::Net::FtpWebRequest::FinishRequestStage(System::Net::System__Net__FtpWebRequest__RequestStage stage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "FinishRequestStage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::System__Net__FtpWebRequest__RequestStage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::System__Net__FtpWebRequest__RequestStage, false>(const_cast<void*>(instance), ___internal_method, stage);
}
 void System::Net::FtpWebRequest::Abort()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "Abort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::FtpWebRequest::set_CachePolicy(System::Net::Cache::RequestCachePolicy value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "set_CachePolicy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Cache::RequestCachePolicy>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool System::Net::FtpWebRequest::get_UseBinary()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_UseBinary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::FtpWebRequest::get_UsePassive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_UsePassive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::Cryptography::X509Certificates::X509CertificateCollection System::Net::FtpWebRequest::get_ClientCertificates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_ClientCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509CertificateCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::FtpWebRequest::get_EnableSsl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_EnableSsl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::WebHeaderCollection System::Net::FtpWebRequest::get_Headers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_Headers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::WebHeaderCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::FtpWebRequest::get_UseDefaultCredentials()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_UseDefaultCredentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::FtpWebRequest::set_PreAuthenticate(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "set_PreAuthenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool System::Net::FtpWebRequest::get_InUse()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "get_InUse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::FtpWebRequest::EnsureFtpWebResponse(System::Exception exception)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "EnsureFtpWebResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, exception);
}
 void System::Net::FtpWebRequest::DataStreamClosed(System::Net::CloseExState closeState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpWebRequest>::get(),
                            "DataStreamClosed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::CloseExState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, closeState);
}
