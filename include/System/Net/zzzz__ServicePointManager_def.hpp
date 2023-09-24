#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
namespace System::Net {
class ServerCertValidationCallback;
}
namespace System::Net {
class ServicePoint;
}
namespace System::Net {
class System__Net__ServicePointManager__SPKey;
}
namespace System::Net::Security {
class RemoteCertificateValidationCallback;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Net {
struct SecurityProtocolType;
}
namespace System::Net {
class ICertificatePolicy;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class ServicePointManager;
}
namespace System::Net {
class System__Net__ServicePointManager__SPKey;
}
// Type: ::SPKey
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8052))
// CS Name: System.Net.ServicePointManager::SPKey
class CORDL_TYPE System__Net__ServicePointManager__SPKey : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~System__Net__ServicePointManager__SPKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__ServicePointManager__SPKey", modifiers: " const&", def_value: None }]
constexpr System__Net__ServicePointManager__SPKey(System__Net__ServicePointManager__SPKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__ServicePointManager__SPKey", modifiers: "&&", def_value: None }]
constexpr System__Net__ServicePointManager__SPKey(System__Net__ServicePointManager__SPKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__ServicePointManager__SPKey(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__ServicePointManager__SPKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__ServicePointManager__SPKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__ServicePointManager__SPKey& operator=(System__Net__ServicePointManager__SPKey&& o) noexcept = default;
  constexpr System__Net__ServicePointManager__SPKey& operator=(System__Net__ServicePointManager__SPKey const& o) noexcept = default;
                


// Fields

 System::Uri __declspec(property(get=__get_uri, put=__set_uri))  uri;

constexpr void __set_uri(System::Uri value) ;

constexpr System::Uri __get_uri() const;

 System::Uri __declspec(property(get=__get_proxy, put=__set_proxy))  proxy;

constexpr void __set_proxy(System::Uri value) ;

constexpr System::Uri __get_proxy() const;

 bool __declspec(property(get=__get_use_connect, put=__set_use_connect))  use_connect;

constexpr void __set_use_connect(bool value) ;

constexpr bool __get_use_connect() const;


// Properties

 bool __declspec(property(get=get_UsesProxy))  UsesProxy;


// Methods

static System::Net::System__Net__ServicePointManager__SPKey New_ctor(System::Uri uri, System::Uri proxy, bool use_connect) ;

/// @brief Method .ctor addr 0x2846694 size 0x3c virtual false final false
 void _ctor(System::Uri uri, System::Uri proxy, bool use_connect) ;

/// @brief Method get_UsesProxy addr 0x2846b70 size 0x60 virtual false final false
 bool get_UsesProxy() ;

/// @brief Method GetHashCode addr 0x2846bd0 size 0xd0 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2846ca0 size 0xf4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::ServicePointManager
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8053))
// CS Name: System.Net.ServicePointManager
class CORDL_TYPE ServicePointManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SPKey = System::Net::System__Net__ServicePointManager__SPKey;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ServicePointManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "ServicePointManager", modifiers: " const&", def_value: None }]
constexpr ServicePointManager(ServicePointManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ServicePointManager", modifiers: "&&", def_value: None }]
constexpr ServicePointManager(ServicePointManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ServicePointManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ServicePointManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ServicePointManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ServicePointManager& operator=(ServicePointManager&& o) noexcept = default;
  constexpr ServicePointManager& operator=(ServicePointManager const& o) noexcept = default;
                


// Fields

static System::Collections::Concurrent::ConcurrentDictionary_2<System::Net::System__Net__ServicePointManager__SPKey,System::Net::ServicePoint> __declspec(property(get=__get_servicePoints, put=__set_servicePoints))  servicePoints;

static void __set_servicePoints(System::Collections::Concurrent::ConcurrentDictionary_2<System::Net::System__Net__ServicePointManager__SPKey,System::Net::ServicePoint> value) ;

static System::Collections::Concurrent::ConcurrentDictionary_2<System::Net::System__Net__ServicePointManager__SPKey,System::Net::ServicePoint> __get_servicePoints() ;

static System::Net::ICertificatePolicy __declspec(property(get=__get_policy, put=__set_policy))  policy;

static void __set_policy(System::Net::ICertificatePolicy value) ;

static System::Net::ICertificatePolicy __get_policy() ;

static int32_t __declspec(property(get=__get_defaultConnectionLimit, put=__set_defaultConnectionLimit))  defaultConnectionLimit;

static void __set_defaultConnectionLimit(int32_t value) ;

static int32_t __get_defaultConnectionLimit() ;

static int32_t __declspec(property(get=__get_maxServicePointIdleTime, put=__set_maxServicePointIdleTime))  maxServicePointIdleTime;

static void __set_maxServicePointIdleTime(int32_t value) ;

static int32_t __get_maxServicePointIdleTime() ;

static int32_t __declspec(property(get=__get_maxServicePoints, put=__set_maxServicePoints))  maxServicePoints;

static void __set_maxServicePoints(int32_t value) ;

static int32_t __get_maxServicePoints() ;

static int32_t __declspec(property(get=__get_dnsRefreshTimeout, put=__set_dnsRefreshTimeout))  dnsRefreshTimeout;

static void __set_dnsRefreshTimeout(int32_t value) ;

static int32_t __get_dnsRefreshTimeout() ;

static bool __declspec(property(get=__get__checkCRL, put=__set__checkCRL))  _checkCRL;

static void __set__checkCRL(bool value) ;

static bool __get__checkCRL() ;

static System::Net::SecurityProtocolType __declspec(property(get=__get__securityProtocol, put=__set__securityProtocol))  _securityProtocol;

static void __set__securityProtocol(System::Net::SecurityProtocolType value) ;

static System::Net::SecurityProtocolType __get__securityProtocol() ;

static bool __declspec(property(get=__get_expectContinue, put=__set_expectContinue))  expectContinue;

static void __set_expectContinue(bool value) ;

static bool __get_expectContinue() ;

static bool __declspec(property(get=__get_useNagle, put=__set_useNagle))  useNagle;

static void __set_useNagle(bool value) ;

static bool __get_useNagle() ;

static System::Net::ServerCertValidationCallback __declspec(property(get=__get_server_cert_cb, put=__set_server_cert_cb))  server_cert_cb;

static void __set_server_cert_cb(System::Net::ServerCertValidationCallback value) ;

static System::Net::ServerCertValidationCallback __get_server_cert_cb() ;

static bool __declspec(property(get=__get_tcp_keepalive, put=__set_tcp_keepalive))  tcp_keepalive;

static void __set_tcp_keepalive(bool value) ;

static bool __get_tcp_keepalive() ;

static int32_t __declspec(property(get=__get_tcp_keepalive_time, put=__set_tcp_keepalive_time))  tcp_keepalive_time;

static void __set_tcp_keepalive_time(int32_t value) ;

static int32_t __get_tcp_keepalive_time() ;

static int32_t __declspec(property(get=__get_tcp_keepalive_interval, put=__set_tcp_keepalive_interval))  tcp_keepalive_interval;

static void __set_tcp_keepalive_interval(int32_t value) ;

static int32_t __get_tcp_keepalive_interval() ;


// Properties

static bool __declspec(property(get=get_CheckCertificateRevocationList))  CheckCertificateRevocationList;

static int32_t __declspec(property(get=get_DnsRefreshTimeout))  DnsRefreshTimeout;

static System::Net::SecurityProtocolType __declspec(property(get=get_SecurityProtocol))  SecurityProtocol;

static System::Net::ServerCertValidationCallback __declspec(property(get=get_ServerCertValidationCallback))  ServerCertValidationCallback;

static System::Net::Security::RemoteCertificateValidationCallback __declspec(property(get=get_ServerCertificateValidationCallback))  ServerCertificateValidationCallback;


// Methods

/// @brief Method GetLegacyCertificatePolicy addr 0x2845dec size 0x58 virtual false final false
static System::Net::ICertificatePolicy GetLegacyCertificatePolicy() ;

/// @brief Method get_CheckCertificateRevocationList addr 0x2845e44 size 0x58 virtual false final false
static bool get_CheckCertificateRevocationList() ;

/// @brief Method get_DnsRefreshTimeout addr 0x2845e9c size 0x58 virtual false final false
static int32_t get_DnsRefreshTimeout() ;

/// @brief Method get_SecurityProtocol addr 0x2845ef4 size 0x58 virtual false final false
static System::Net::SecurityProtocolType get_SecurityProtocol() ;

/// @brief Method get_ServerCertValidationCallback addr 0x2845f4c size 0x58 virtual false final false
static System::Net::ServerCertValidationCallback get_ServerCertValidationCallback() ;

/// @brief Method get_ServerCertificateValidationCallback addr 0x2845fa4 size 0x88 virtual false final false
static System::Net::Security::RemoteCertificateValidationCallback get_ServerCertificateValidationCallback() ;

/// @brief Method FindServicePoint addr 0x284602c size 0x668 virtual false final false
static System::Net::ServicePoint FindServicePoint(System::Uri address, System::Net::IWebProxy proxy) ;

/// @brief Method CloseConnectionGroup addr 0x28466d0 size 0x408 virtual false final false
static void CloseConnectionGroup(::StringW connectionGroupName) ;

/// @brief Method RemoveServicePoint addr 0x2846ad8 size 0x98 virtual false final false
static void RemoveServicePoint(System::Net::ServicePoint sp) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::ServicePointManager);
DEFINE_IL2CPP_ARG_TYPE(System::Net::ServicePointManager, "System.Net", "ServicePointManager");
NEED_NO_BOX(System::Net::System__Net__ServicePointManager__SPKey);
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__ServicePointManager__SPKey, "System.Net", "ServicePointManager/SPKey");
