#pragma once
#include "System/Net/zzzz__ServicePointManager_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Net/zzzz__ServerCertValidationCallback_def.hpp"
#include "System/Net/zzzz__ServicePoint_def.hpp"
#include "System/Net/zzzz__ServicePointManager_def.hpp"
#include "System/Net/Security/zzzz__RemoteCertificateValidationCallback_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Net/zzzz__SecurityProtocolType_def.hpp"
#include "System/Net/zzzz__ICertificatePolicy_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: System::Net::System__Net__ServicePointManager__SPKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__ServicePointManager__SPKey::*)(System::Uri, System::Uri, bool)>(&System::Net::System__Net__ServicePointManager__SPKey::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2846694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__ServicePointManager__SPKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__ServicePointManager__SPKey.get_UsesProxy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::System__Net__ServicePointManager__SPKey::*)()>(&System::Net::System__Net__ServicePointManager__SPKey::get_UsesProxy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2846b70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__ServicePointManager__SPKey>::get(),
                            "get_UsesProxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__ServicePointManager__SPKey.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::System__Net__ServicePointManager__SPKey::*)()>(&System::Net::System__Net__ServicePointManager__SPKey::GetHashCode)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2846bd0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::System__Net__ServicePointManager__SPKey),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__ServicePointManager__SPKey>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__ServicePointManager__SPKey.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::System__Net__ServicePointManager__SPKey::*)(::bs_hook::Il2CppWrapperType)>(&System::Net::System__Net__ServicePointManager__SPKey::Equals)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2846ca0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::System__Net__ServicePointManager__SPKey),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__ServicePointManager__SPKey>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
constexpr void System::Net::System__Net__ServicePointManager__SPKey::__set_uri(System::Uri value)  {
::cordl_internals::setInstanceField<System::Uri, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Uri>(value));
}
constexpr System::Uri System::Net::System__Net__ServicePointManager__SPKey::__get_uri() const {
return ::cordl_internals::getInstanceField<System::Uri, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::System__Net__ServicePointManager__SPKey::__set_proxy(System::Uri value)  {
::cordl_internals::setInstanceField<System::Uri, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Uri>(value));
}
constexpr System::Uri System::Net::System__Net__ServicePointManager__SPKey::__get_proxy() const {
return ::cordl_internals::getInstanceField<System::Uri, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::System__Net__ServicePointManager__SPKey::__set_use_connect(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::System__Net__ServicePointManager__SPKey::__get_use_connect() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::System__Net__ServicePointManager__SPKey System::Net::System__Net__ServicePointManager__SPKey::New_ctor(System::Uri uri, System::Uri proxy, bool use_connect)  {
System::Net::System__Net__ServicePointManager__SPKey o{THROW_UNLESS(::il2cpp_utils::New<System::Net::System__Net__ServicePointManager__SPKey>(uri, proxy, use_connect))};
return o;
}
 void System::Net::System__Net__ServicePointManager__SPKey::_ctor(System::Uri uri, System::Uri proxy, bool use_connect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__ServicePointManager__SPKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, uri, proxy, use_connect);
}
 bool System::Net::System__Net__ServicePointManager__SPKey::get_UsesProxy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__ServicePointManager__SPKey>::get(),
                            "get_UsesProxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Net::System__Net__ServicePointManager__SPKey::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__ServicePointManager__SPKey>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::System__Net__ServicePointManager__SPKey::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__ServicePointManager__SPKey>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
//  Writing Method size for method: System::Net::ServicePointManager.GetLegacyCertificatePolicy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::ICertificatePolicy (*)()>(&System::Net::ServicePointManager::GetLegacyCertificatePolicy)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2845dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get(),
                            "GetLegacyCertificatePolicy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ServicePointManager.get_CheckCertificateRevocationList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Net::ServicePointManager::get_CheckCertificateRevocationList)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2845e44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get(),
                            "get_CheckCertificateRevocationList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ServicePointManager.get_DnsRefreshTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&System::Net::ServicePointManager::get_DnsRefreshTimeout)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2845e9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get(),
                            "get_DnsRefreshTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ServicePointManager.get_SecurityProtocol
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::SecurityProtocolType (*)()>(&System::Net::ServicePointManager::get_SecurityProtocol)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2845ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get(),
                            "get_SecurityProtocol",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ServicePointManager.get_ServerCertValidationCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::ServerCertValidationCallback (*)()>(&System::Net::ServicePointManager::get_ServerCertValidationCallback)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2845f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get(),
                            "get_ServerCertValidationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ServicePointManager.get_ServerCertificateValidationCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Security::RemoteCertificateValidationCallback (*)()>(&System::Net::ServicePointManager::get_ServerCertificateValidationCallback)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2845fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get(),
                            "get_ServerCertificateValidationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ServicePointManager.FindServicePoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::ServicePoint (*)(System::Uri, System::Net::IWebProxy)>(&System::Net::ServicePointManager::FindServicePoint)> {
  constexpr static std::size_t size = 0x668;
  constexpr static std::size_t addrs = 0x284602c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get(),
                            "FindServicePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IWebProxy>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ServicePointManager.CloseConnectionGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&System::Net::ServicePointManager::CloseConnectionGroup)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x28466d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get(),
                            "CloseConnectionGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ServicePointManager.RemoveServicePoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Net::ServicePoint)>(&System::Net::ServicePointManager::RemoveServicePoint)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2846ad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get(),
                            "RemoveServicePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ServicePoint>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Net::ServicePointManager::__set_servicePoints(System::Collections::Concurrent::ConcurrentDictionary_2<System::Net::System__Net__ServicePointManager__SPKey,System::Net::ServicePoint> value)  {
::cordl_internals::setStaticField<System::Collections::Concurrent::ConcurrentDictionary_2<System::Net::System__Net__ServicePointManager__SPKey,System::Net::ServicePoint>, "servicePoints", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get>(std::forward<System::Collections::Concurrent::ConcurrentDictionary_2<System::Net::System__Net__ServicePointManager__SPKey,System::Net::ServicePoint>>(value));
}
 System::Collections::Concurrent::ConcurrentDictionary_2<System::Net::System__Net__ServicePointManager__SPKey,System::Net::ServicePoint> System::Net::ServicePointManager::__get_servicePoints()  {
return ::cordl_internals::getStaticField<System::Collections::Concurrent::ConcurrentDictionary_2<System::Net::System__Net__ServicePointManager__SPKey,System::Net::ServicePoint>, "servicePoints", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get>();
}
 void System::Net::ServicePointManager::__set_policy(System::Net::ICertificatePolicy value)  {
::cordl_internals::setStaticField<System::Net::ICertificatePolicy, "policy", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get>(std::forward<System::Net::ICertificatePolicy>(value));
}
 System::Net::ICertificatePolicy System::Net::ServicePointManager::__get_policy()  {
return ::cordl_internals::getStaticField<System::Net::ICertificatePolicy, "policy", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get>();
}
 void System::Net::ServicePointManager::__set_defaultConnectionLimit(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "defaultConnectionLimit", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get>(std::forward<int32_t>(value));
}
 int32_t System::Net::ServicePointManager::__get_defaultConnectionLimit()  {
return ::cordl_internals::getStaticField<int32_t, "defaultConnectionLimit", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get>();
}
 void System::Net::ServicePointManager::__set_maxServicePointIdleTime(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "maxServicePointIdleTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get>(std::forward<int32_t>(value));
}
 int32_t System::Net::ServicePointManager::__get_maxServicePointIdleTime()  {
return ::cordl_internals::getStaticField<int32_t, "maxServicePointIdleTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get>();
}
 void System::Net::ServicePointManager::__set_maxServicePoints(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "maxServicePoints", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get>(std::forward<int32_t>(value));
}
 int32_t System::Net::ServicePointManager::__get_maxServicePoints()  {
return ::cordl_internals::getStaticField<int32_t, "maxServicePoints", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get>();
}
 void System::Net::ServicePointManager::__set_dnsRefreshTimeout(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "dnsRefreshTimeout", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get>(std::forward<int32_t>(value));
}
 int32_t System::Net::ServicePointManager::__get_dnsRefreshTimeout()  {
return ::cordl_internals::getStaticField<int32_t, "dnsRefreshTimeout", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get>();
}
 void System::Net::ServicePointManager::__set__checkCRL(bool value)  {
::cordl_internals::setStaticField<bool, "_checkCRL", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get>(std::forward<bool>(value));
}
 bool System::Net::ServicePointManager::__get__checkCRL()  {
return ::cordl_internals::getStaticField<bool, "_checkCRL", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get>();
}
 void System::Net::ServicePointManager::__set__securityProtocol(System::Net::SecurityProtocolType value)  {
::cordl_internals::setStaticField<System::Net::SecurityProtocolType, "_securityProtocol", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get>(std::forward<System::Net::SecurityProtocolType>(value));
}
 System::Net::SecurityProtocolType System::Net::ServicePointManager::__get__securityProtocol()  {
return ::cordl_internals::getStaticField<System::Net::SecurityProtocolType, "_securityProtocol", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get>();
}
 void System::Net::ServicePointManager::__set_expectContinue(bool value)  {
::cordl_internals::setStaticField<bool, "expectContinue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get>(std::forward<bool>(value));
}
 bool System::Net::ServicePointManager::__get_expectContinue()  {
return ::cordl_internals::getStaticField<bool, "expectContinue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get>();
}
 void System::Net::ServicePointManager::__set_useNagle(bool value)  {
::cordl_internals::setStaticField<bool, "useNagle", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get>(std::forward<bool>(value));
}
 bool System::Net::ServicePointManager::__get_useNagle()  {
return ::cordl_internals::getStaticField<bool, "useNagle", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get>();
}
 void System::Net::ServicePointManager::__set_server_cert_cb(System::Net::ServerCertValidationCallback value)  {
::cordl_internals::setStaticField<System::Net::ServerCertValidationCallback, "server_cert_cb", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get>(std::forward<System::Net::ServerCertValidationCallback>(value));
}
 System::Net::ServerCertValidationCallback System::Net::ServicePointManager::__get_server_cert_cb()  {
return ::cordl_internals::getStaticField<System::Net::ServerCertValidationCallback, "server_cert_cb", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get>();
}
 void System::Net::ServicePointManager::__set_tcp_keepalive(bool value)  {
::cordl_internals::setStaticField<bool, "tcp_keepalive", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get>(std::forward<bool>(value));
}
 bool System::Net::ServicePointManager::__get_tcp_keepalive()  {
return ::cordl_internals::getStaticField<bool, "tcp_keepalive", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get>();
}
 void System::Net::ServicePointManager::__set_tcp_keepalive_time(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "tcp_keepalive_time", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get>(std::forward<int32_t>(value));
}
 int32_t System::Net::ServicePointManager::__get_tcp_keepalive_time()  {
return ::cordl_internals::getStaticField<int32_t, "tcp_keepalive_time", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get>();
}
 void System::Net::ServicePointManager::__set_tcp_keepalive_interval(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "tcp_keepalive_interval", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get>(std::forward<int32_t>(value));
}
 int32_t System::Net::ServicePointManager::__get_tcp_keepalive_interval()  {
return ::cordl_internals::getStaticField<int32_t, "tcp_keepalive_interval", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get>();
}
 System::Net::ICertificatePolicy System::Net::ServicePointManager::GetLegacyCertificatePolicy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get(),
                            "GetLegacyCertificatePolicy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::ICertificatePolicy, false>(nullptr, ___internal_method);
}
 bool System::Net::ServicePointManager::get_CheckCertificateRevocationList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get(),
                            "get_CheckCertificateRevocationList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 int32_t System::Net::ServicePointManager::get_DnsRefreshTimeout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get(),
                            "get_DnsRefreshTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 System::Net::SecurityProtocolType System::Net::ServicePointManager::get_SecurityProtocol()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get(),
                            "get_SecurityProtocol",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::SecurityProtocolType, false>(nullptr, ___internal_method);
}
 System::Net::ServerCertValidationCallback System::Net::ServicePointManager::get_ServerCertValidationCallback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get(),
                            "get_ServerCertValidationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::ServerCertValidationCallback, false>(nullptr, ___internal_method);
}
 System::Net::Security::RemoteCertificateValidationCallback System::Net::ServicePointManager::get_ServerCertificateValidationCallback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get(),
                            "get_ServerCertificateValidationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Security::RemoteCertificateValidationCallback, false>(nullptr, ___internal_method);
}
 System::Net::ServicePoint System::Net::ServicePointManager::FindServicePoint(System::Uri address, System::Net::IWebProxy proxy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get(),
                            "FindServicePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IWebProxy>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::ServicePoint, false>(nullptr, ___internal_method, address, proxy);
}
 void System::Net::ServicePointManager::CloseConnectionGroup(::StringW connectionGroupName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get(),
                            "CloseConnectionGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, connectionGroupName);
}
 void System::Net::ServicePointManager::RemoveServicePoint(System::Net::ServicePoint sp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServicePointManager>::get(),
                            "RemoveServicePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ServicePoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sp);
}
