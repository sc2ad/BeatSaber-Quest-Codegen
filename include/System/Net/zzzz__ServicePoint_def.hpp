#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Net {
class BindIPEndPoint;
}
namespace System {
struct DateTime;
}
namespace System::Net {
class System__Net__ServicePointManager__SPKey;
}
namespace System::Net {
class WebOperation;
}
namespace System {
class Version;
}
namespace System::Net {
class ServicePointScheduler;
}
namespace System::Net {
class IPHostEntry;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class ServicePoint;
}
// Type: System.Net::ServicePoint
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8051))
// CS Name: System.Net.ServicePoint
class CORDL_TYPE ServicePoint : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~ServicePoint() = default;

// Ctor Parameters [CppParam { name: "", ty: "ServicePoint", modifiers: " const&", def_value: None }]
constexpr ServicePoint(ServicePoint const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ServicePoint", modifiers: "&&", def_value: None }]
constexpr ServicePoint(ServicePoint&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ServicePoint(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ServicePoint& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ServicePoint& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ServicePoint& operator=(ServicePoint&& o) noexcept = default;
  constexpr ServicePoint& operator=(ServicePoint const& o) noexcept = default;
                


// Fields

 System::Uri __declspec(property(get=__get_uri, put=__set_uri))  uri;

constexpr void __set_uri(System::Uri value) ;

constexpr System::Uri __get_uri() const;

 System::DateTime __declspec(property(get=__get_lastDnsResolve, put=__set_lastDnsResolve))  lastDnsResolve;

constexpr void __set_lastDnsResolve(System::DateTime value) ;

constexpr System::DateTime __get_lastDnsResolve() const;

 System::Version __declspec(property(get=__get_protocolVersion, put=__set_protocolVersion))  protocolVersion;

constexpr void __set_protocolVersion(System::Version value) ;

constexpr System::Version __get_protocolVersion() const;

 System::Net::IPHostEntry __declspec(property(get=__get_host, put=__set_host))  host;

constexpr void __set_host(System::Net::IPHostEntry value) ;

constexpr System::Net::IPHostEntry __get_host() const;

 bool __declspec(property(get=__get_usesProxy, put=__set_usesProxy))  usesProxy;

constexpr void __set_usesProxy(bool value) ;

constexpr bool __get_usesProxy() const;

 bool __declspec(property(get=__get_sendContinue, put=__set_sendContinue))  sendContinue;

constexpr void __set_sendContinue(bool value) ;

constexpr bool __get_sendContinue() const;

 bool __declspec(property(get=__get_useConnect, put=__set_useConnect))  useConnect;

constexpr void __set_useConnect(bool value) ;

constexpr bool __get_useConnect() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_hostE, put=__set_hostE))  hostE;

constexpr void __set_hostE(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_hostE() const;

 bool __declspec(property(get=__get_useNagle, put=__set_useNagle))  useNagle;

constexpr void __set_useNagle(bool value) ;

constexpr bool __get_useNagle() const;

 System::Net::BindIPEndPoint __declspec(property(get=__get_endPointCallback, put=__set_endPointCallback))  endPointCallback;

constexpr void __set_endPointCallback(System::Net::BindIPEndPoint value) ;

constexpr System::Net::BindIPEndPoint __get_endPointCallback() const;

 bool __declspec(property(get=__get_tcp_keepalive, put=__set_tcp_keepalive))  tcp_keepalive;

constexpr void __set_tcp_keepalive(bool value) ;

constexpr bool __get_tcp_keepalive() const;

 int32_t __declspec(property(get=__get_tcp_keepalive_time, put=__set_tcp_keepalive_time))  tcp_keepalive_time;

constexpr void __set_tcp_keepalive_time(int32_t value) ;

constexpr int32_t __get_tcp_keepalive_time() const;

 int32_t __declspec(property(get=__get_tcp_keepalive_interval, put=__set_tcp_keepalive_interval))  tcp_keepalive_interval;

constexpr void __set_tcp_keepalive_interval(int32_t value) ;

constexpr int32_t __get_tcp_keepalive_interval() const;

 bool __declspec(property(get=__get_disposed, put=__set_disposed))  disposed;

constexpr void __set_disposed(bool value) ;

constexpr bool __get_disposed() const;

 int32_t __declspec(property(get=__get_connectionLeaseTimeout, put=__set_connectionLeaseTimeout))  connectionLeaseTimeout;

constexpr void __set_connectionLeaseTimeout(int32_t value) ;

constexpr int32_t __get_connectionLeaseTimeout() const;

 int32_t __declspec(property(get=__get_receiveBufferSize, put=__set_receiveBufferSize))  receiveBufferSize;

constexpr void __set_receiveBufferSize(int32_t value) ;

constexpr int32_t __get_receiveBufferSize() const;

 System::Net::System__Net__ServicePointManager__SPKey __declspec(property(get=__get__Key_k__BackingField, put=__set__Key_k__BackingField))  _Key_k__BackingField;

constexpr void __set__Key_k__BackingField(System::Net::System__Net__ServicePointManager__SPKey value) ;

constexpr System::Net::System__Net__ServicePointManager__SPKey __get__Key_k__BackingField() const;

 System::Net::ServicePointScheduler __declspec(property(get=__get__Scheduler_k__BackingField, put=__set__Scheduler_k__BackingField))  _Scheduler_k__BackingField;

constexpr void __set__Scheduler_k__BackingField(System::Net::ServicePointScheduler value) ;

constexpr System::Net::ServicePointScheduler __get__Scheduler_k__BackingField() const;

 int32_t __declspec(property(get=__get_connectionLimit, put=__set_connectionLimit))  connectionLimit;

constexpr void __set_connectionLimit(int32_t value) ;

constexpr int32_t __get_connectionLimit() const;

 int32_t __declspec(property(get=__get_maxIdleTime, put=__set_maxIdleTime))  maxIdleTime;

constexpr void __set_maxIdleTime(int32_t value) ;

constexpr int32_t __get_maxIdleTime() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_ServerCertificateOrBytes, put=__set_m_ServerCertificateOrBytes))  m_ServerCertificateOrBytes;

constexpr void __set_m_ServerCertificateOrBytes(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_ServerCertificateOrBytes() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_ClientCertificateOrBytes, put=__set_m_ClientCertificateOrBytes))  m_ClientCertificateOrBytes;

constexpr void __set_m_ClientCertificateOrBytes(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_ClientCertificateOrBytes() const;


// Properties

 System::Net::System__Net__ServicePointManager__SPKey __declspec(property(get=get_Key))  Key;

 System::Net::ServicePointScheduler __declspec(property(get=get_Scheduler, put=set_Scheduler))  Scheduler;

 System::Uri __declspec(property(get=get_Address))  Address;

 int32_t __declspec(property(get=get_ConnectionLimit))  ConnectionLimit;

 System::Version __declspec(property(get=get_ProtocolVersion))  ProtocolVersion;

 bool __declspec(property(put=set_Expect100Continue))  Expect100Continue;

 bool __declspec(property(get=get_UseNagleAlgorithm, put=set_UseNagleAlgorithm))  UseNagleAlgorithm;

 bool __declspec(property(get=get_SendContinue, put=set_SendContinue))  SendContinue;

 bool __declspec(property(get=get_UsesProxy, put=set_UsesProxy))  UsesProxy;

 bool __declspec(property(get=get_UseConnect, put=set_UseConnect))  UseConnect;

 bool __declspec(property(get=get_HasTimedOut))  HasTimedOut;

 System::Net::IPHostEntry __declspec(property(get=get_HostEntry))  HostEntry;


// Methods

// Ctor Parameters [CppParam { name: "key", ty: "System::Net::System__Net__ServicePointManager__SPKey", modifiers: "", def_value: None }, CppParam { name: "uri", ty: "System::Uri", modifiers: "", def_value: None }, CppParam { name: "connectionLimit", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxIdleTime", ty: "int32_t", modifiers: "", def_value: None }]
explicit ServicePoint(System::Net::System__Net__ServicePointManager__SPKey key, System::Uri uri, int32_t connectionLimit, int32_t maxIdleTime) ;

/// @brief Method .ctor addr 0x2844b7c size 0xe0 virtual false final false
 void _ctor(System::Net::System__Net__ServicePointManager__SPKey key, System::Uri uri, int32_t connectionLimit, int32_t maxIdleTime) ;

/// @brief Method get_Key addr 0x2844e34 size 0x8 virtual false final false
 System::Net::System__Net__ServicePointManager__SPKey get_Key() ;

/// @brief Method get_Scheduler addr 0x2844e3c size 0x8 virtual false final false
 System::Net::ServicePointScheduler get_Scheduler() ;

/// @brief Method set_Scheduler addr 0x2844e44 size 0x8 virtual false final false
 void set_Scheduler(System::Net::ServicePointScheduler value) ;

/// @brief Method get_Address addr 0x2844e4c size 0x8 virtual false final false
 System::Uri get_Address() ;

/// @brief Method get_ConnectionLimit addr 0x2844e54 size 0x8 virtual false final false
 int32_t get_ConnectionLimit() ;

/// @brief Method get_ProtocolVersion addr 0x2844e5c size 0x8 virtual true final false
 System::Version get_ProtocolVersion() ;

/// @brief Method set_Expect100Continue addr 0x2844e64 size 0xc virtual false final false
 void set_Expect100Continue(bool value) ;

/// @brief Method get_UseNagleAlgorithm addr 0x2844e70 size 0x8 virtual false final false
 bool get_UseNagleAlgorithm() ;

/// @brief Method set_UseNagleAlgorithm addr 0x2844e78 size 0xc virtual false final false
 void set_UseNagleAlgorithm(bool value) ;

/// @brief Method get_SendContinue addr 0x2844e84 size 0x9c virtual false final false
 bool get_SendContinue() ;

/// @brief Method set_SendContinue addr 0x2844f20 size 0xc virtual false final false
 void set_SendContinue(bool value) ;

/// @brief Method SetTcpKeepAlive addr 0x2844f2c size 0xb8 virtual false final false
 void SetTcpKeepAlive(bool enabled, int32_t keepAliveTime, int32_t keepAliveInterval) ;

/// @brief Method KeepAliveSetup addr 0x2844fe4 size 0xb4 virtual false final false
 void KeepAliveSetup(System::Net::Sockets::Socket socket) ;

/// @brief Method PutBytes addr 0x2845098 size 0x144 virtual false final false
static void PutBytes(::ArrayW<uint8_t> bytes, uint32_t v, int32_t offset) ;

/// @brief Method get_UsesProxy addr 0x28451dc size 0x8 virtual false final false
 bool get_UsesProxy() ;

/// @brief Method set_UsesProxy addr 0x28451e4 size 0xc virtual false final false
 void set_UsesProxy(bool value) ;

/// @brief Method get_UseConnect addr 0x28451f0 size 0x8 virtual false final false
 bool get_UseConnect() ;

/// @brief Method set_UseConnect addr 0x28451f8 size 0xc virtual false final false
 void set_UseConnect(bool value) ;

/// @brief Method get_HasTimedOut addr 0x2845204 size 0x12c virtual false final false
 bool get_HasTimedOut() ;

/// @brief Method get_HostEntry addr 0x2845330 size 0x388 virtual false final false
 System::Net::IPHostEntry get_HostEntry() ;

/// @brief Method SetVersion addr 0x28456b8 size 0x8 virtual false final false
 void SetVersion(System::Version version) ;

/// @brief Method SendRequest addr 0x28456c0 size 0x17c virtual false final false
 void SendRequest(System::Net::WebOperation operation, ::StringW groupName) ;

/// @brief Method CloseConnectionGroup addr 0x2845924 size 0xec virtual false final false
 bool CloseConnectionGroup(::StringW connectionGroupName) ;

/// @brief Method FreeServicePoint addr 0x2845b20 size 0x10 virtual false final false
 void FreeServicePoint() ;

/// @brief Method UpdateServerCertificate addr 0x2845b30 size 0x34 virtual false final false
 void UpdateServerCertificate(System::Security::Cryptography::X509Certificates::X509Certificate certificate) ;

/// @brief Method UpdateClientCertificate addr 0x2845b64 size 0x34 virtual false final false
 void UpdateClientCertificate(System::Security::Cryptography::X509Certificates::X509Certificate certificate) ;

/// @brief Method CallEndPointDelegate addr 0x2845b98 size 0x1a4 virtual false final false
 bool CallEndPointDelegate(System::Net::Sockets::Socket sock, System::Net::IPEndPoint remote) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::ServicePoint);
DEFINE_IL2CPP_ARG_TYPE(System::Net::ServicePoint, "System.Net", "ServicePoint");
