#pragma once
#include "System/Net/zzzz__HttpListenerContext_def.hpp"
#include "System/Security/Principal/zzzz__IPrincipal_def.hpp"
#include "System/Net/zzzz__HttpListener_def.hpp"
#include "System/Net/zzzz__AuthenticationSchemes_def.hpp"
#include "System/Net/zzzz__HttpListenerRequest_def.hpp"
#include "System/Net/zzzz__HttpConnection_def.hpp"
#include "System/Net/zzzz__HttpListenerResponse_def.hpp"
//  Writing Method size for method: System::Net::HttpListenerContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerContext::*)(System::Net::HttpConnection)>(&System::Net::HttpListenerContext::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x283294c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpConnection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListenerContext.get_ErrorStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::HttpListenerContext::*)()>(&System::Net::HttpListenerContext::get_ErrorStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x283703c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerContext>::get(),
                            "get_ErrorStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListenerContext.set_ErrorStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerContext::*)(int32_t)>(&System::Net::HttpListenerContext::set_ErrorStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2837044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerContext>::get(),
                            "set_ErrorStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListenerContext.get_ErrorMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::HttpListenerContext::*)()>(&System::Net::HttpListenerContext::get_ErrorMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x283704c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerContext>::get(),
                            "get_ErrorMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListenerContext.set_ErrorMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerContext::*)(::StringW)>(&System::Net::HttpListenerContext::set_ErrorMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2837054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerContext>::get(),
                            "set_ErrorMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListenerContext.get_HaveError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpListenerContext::*)()>(&System::Net::HttpListenerContext::get_HaveError)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28335f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerContext>::get(),
                            "get_HaveError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListenerContext.get_Connection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::HttpConnection (System::Net::HttpListenerContext::*)()>(&System::Net::HttpListenerContext::get_Connection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x283705c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerContext>::get(),
                            "get_Connection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListenerContext.get_Request
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::HttpListenerRequest (System::Net::HttpListenerContext::*)()>(&System::Net::HttpListenerContext::get_Request)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2837064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerContext>::get(),
                            "get_Request",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListenerContext.get_Response
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::HttpListenerResponse (System::Net::HttpListenerContext::*)()>(&System::Net::HttpListenerContext::get_Response)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x283706c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerContext>::get(),
                            "get_Response",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListenerContext.ParseAuthentication
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerContext::*)(System::Net::AuthenticationSchemes)>(&System::Net::HttpListenerContext::ParseAuthentication)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2836aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerContext>::get(),
                            "ParseAuthentication",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::AuthenticationSchemes>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListenerContext.ParseBasicAuthentication
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Principal::IPrincipal (System::Net::HttpListenerContext::*)(::StringW)>(&System::Net::HttpListenerContext::ParseBasicAuthentication)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x2837074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerContext>::get(),
                            "ParseBasicAuthentication",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::HttpListenerContext::__set_request(System::Net::HttpListenerRequest value)  {
::cordl_internals::setInstanceField<System::Net::HttpListenerRequest, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::HttpListenerRequest>(value));
}
constexpr System::Net::HttpListenerRequest System::Net::HttpListenerContext::__get_request() const {
return ::cordl_internals::getInstanceField<System::Net::HttpListenerRequest, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListenerContext::__set_response(System::Net::HttpListenerResponse value)  {
::cordl_internals::setInstanceField<System::Net::HttpListenerResponse, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::HttpListenerResponse>(value));
}
constexpr System::Net::HttpListenerResponse System::Net::HttpListenerContext::__get_response() const {
return ::cordl_internals::getInstanceField<System::Net::HttpListenerResponse, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListenerContext::__set_user(System::Security::Principal::IPrincipal value)  {
::cordl_internals::setInstanceField<System::Security::Principal::IPrincipal, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Principal::IPrincipal>(value));
}
constexpr System::Security::Principal::IPrincipal System::Net::HttpListenerContext::__get_user() const {
return ::cordl_internals::getInstanceField<System::Security::Principal::IPrincipal, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListenerContext::__set_cnc(System::Net::HttpConnection value)  {
::cordl_internals::setInstanceField<System::Net::HttpConnection, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::HttpConnection>(value));
}
constexpr System::Net::HttpConnection System::Net::HttpListenerContext::__get_cnc() const {
return ::cordl_internals::getInstanceField<System::Net::HttpConnection, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListenerContext::__set_error(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::HttpListenerContext::__get_error() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListenerContext::__set_err_status(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::HttpListenerContext::__get_err_status() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListenerContext::__set_Listener(System::Net::HttpListener value)  {
::cordl_internals::setInstanceField<System::Net::HttpListener, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::HttpListener>(value));
}
constexpr System::Net::HttpListener System::Net::HttpListenerContext::__get_Listener() const {
return ::cordl_internals::getInstanceField<System::Net::HttpListener, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "cnc", ty: "System::Net::HttpConnection", modifiers: "", def_value: None }]
 System::Net::HttpListenerContext::HttpListenerContext(System::Net::HttpConnection cnc)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HttpListenerContext>(cnc))) {}
 void System::Net::HttpListenerContext::_ctor(System::Net::HttpConnection cnc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpConnection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cnc);
}
 int32_t System::Net::HttpListenerContext::get_ErrorStatus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerContext>::get(),
                            "get_ErrorStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::HttpListenerContext::set_ErrorStatus(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerContext>::get(),
                            "set_ErrorStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW System::Net::HttpListenerContext::get_ErrorMessage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerContext>::get(),
                            "get_ErrorMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::HttpListenerContext::set_ErrorMessage(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerContext>::get(),
                            "set_ErrorMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool System::Net::HttpListenerContext::get_HaveError()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerContext>::get(),
                            "get_HaveError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::HttpConnection System::Net::HttpListenerContext::get_Connection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerContext>::get(),
                            "get_Connection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::HttpConnection, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::HttpListenerRequest System::Net::HttpListenerContext::get_Request()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerContext>::get(),
                            "get_Request",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::HttpListenerRequest, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::HttpListenerResponse System::Net::HttpListenerContext::get_Response()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerContext>::get(),
                            "get_Response",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::HttpListenerResponse, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::HttpListenerContext::ParseAuthentication(System::Net::AuthenticationSchemes expectedSchemes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerContext>::get(),
                            "ParseAuthentication",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::AuthenticationSchemes>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, expectedSchemes);
}
 System::Security::Principal::IPrincipal System::Net::HttpListenerContext::ParseBasicAuthentication(::StringW authData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerContext>::get(),
                            "ParseBasicAuthentication",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Principal::IPrincipal, false>(const_cast<void*>(instance), ___internal_method, authData);
}
