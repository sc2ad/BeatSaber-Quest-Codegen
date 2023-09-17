#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
class DnsEndPoint;
}
namespace GlobalNamespace {
struct ServiceEnvironment;
}
namespace GlobalNamespace {
class INetworkConfig;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkConfigSO;
}
// Type: ::NetworkConfigSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4563))
// CS Name: NetworkConfigSO
class CORDL_TYPE NetworkConfigSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::INetworkConfig
constexpr operator  ::GlobalNamespace::INetworkConfig() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~NetworkConfigSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkConfigSO", modifiers: " const&", def_value: None }]
constexpr NetworkConfigSO(NetworkConfigSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkConfigSO", modifiers: "&&", def_value: None }]
constexpr NetworkConfigSO(NetworkConfigSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetworkConfigSO(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr NetworkConfigSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetworkConfigSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetworkConfigSO& operator=(NetworkConfigSO&& o) noexcept = default;
  constexpr NetworkConfigSO& operator=(NetworkConfigSO const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__maxPartySize, put=__set__maxPartySize))  _maxPartySize;

constexpr void __set__maxPartySize(int32_t value) ;

constexpr int32_t __get__maxPartySize() const;

 int32_t __declspec(property(get=__get__discoveryPort, put=__set__discoveryPort))  _discoveryPort;

constexpr void __set__discoveryPort(int32_t value) ;

constexpr int32_t __get__discoveryPort() const;

 int32_t __declspec(property(get=__get__partyPort, put=__set__partyPort))  _partyPort;

constexpr void __set__partyPort(int32_t value) ;

constexpr int32_t __get__partyPort() const;

 int32_t __declspec(property(get=__get__multiplayerPort, put=__set__multiplayerPort))  _multiplayerPort;

constexpr void __set__multiplayerPort(int32_t value) ;

constexpr int32_t __get__multiplayerPort() const;

 int32_t __declspec(property(get=__get__masterServerPort, put=__set__masterServerPort))  _masterServerPort;

constexpr void __set__masterServerPort(int32_t value) ;

constexpr int32_t __get__masterServerPort() const;

 ::StringW __declspec(property(get=__get__masterServerHostName, put=__set__masterServerHostName))  _masterServerHostName;

constexpr void __set__masterServerHostName(::StringW value) ;

constexpr ::StringW __get__masterServerHostName() const;

 ::StringW __declspec(property(get=__get__multiplayerStatusUrl, put=__set__multiplayerStatusUrl))  _multiplayerStatusUrl;

constexpr void __set__multiplayerStatusUrl(::StringW value) ;

constexpr ::StringW __get__multiplayerStatusUrl() const;

 ::StringW __declspec(property(get=__get__quickPlaySetupUrl, put=__set__quickPlaySetupUrl))  _quickPlaySetupUrl;

constexpr void __set__quickPlaySetupUrl(::StringW value) ;

constexpr ::StringW __get__quickPlaySetupUrl() const;

 ::StringW __declspec(property(get=__get__graphUrl, put=__set__graphUrl))  _graphUrl;

constexpr void __set__graphUrl(::StringW value) ;

constexpr ::StringW __get__graphUrl() const;

 ::StringW __declspec(property(get=__get__graphAppId, put=__set__graphAppId))  _graphAppId;

constexpr void __set__graphAppId(::StringW value) ;

constexpr ::StringW __get__graphAppId() const;

 bool __declspec(property(get=__get__forceGameLift, put=__set__forceGameLift))  _forceGameLift;

constexpr void __set__forceGameLift(bool value) ;

constexpr bool __get__forceGameLift() const;

 ::GlobalNamespace::ServiceEnvironment __declspec(property(get=__get__serviceEnvironment, put=__set__serviceEnvironment))  _serviceEnvironment;

constexpr void __set__serviceEnvironment(::GlobalNamespace::ServiceEnvironment value) ;

constexpr ::GlobalNamespace::ServiceEnvironment __get__serviceEnvironment() const;


// Properties

 int32_t __declspec(property(get=get_maxPartySize))  maxPartySize;

 int32_t __declspec(property(get=get_discoveryPort))  discoveryPort;

 int32_t __declspec(property(get=get_partyPort))  partyPort;

 int32_t __declspec(property(get=get_multiplayerPort))  multiplayerPort;

 ::GlobalNamespace::DnsEndPoint __declspec(property(get=get_masterServerEndPoint))  masterServerEndPoint;

 ::StringW __declspec(property(get=get_multiplayerStatusUrl))  multiplayerStatusUrl;

 ::StringW __declspec(property(get=get_quickPlaySetupUrl))  quickPlaySetupUrl;

 ::StringW __declspec(property(get=get_graphUrl))  graphUrl;

 ::StringW __declspec(property(get=get_graphAccessToken))  graphAccessToken;

 bool __declspec(property(get=get_forceGameLift))  forceGameLift;

 ::GlobalNamespace::ServiceEnvironment __declspec(property(get=get_serviceEnvironment))  serviceEnvironment;


// Methods

/// @brief Method get_maxPartySize addr 0x2208bf4 size 0x8 virtual true final true
 int32_t get_maxPartySize() ;

/// @brief Method get_discoveryPort addr 0x2208bfc size 0x8 virtual true final true
 int32_t get_discoveryPort() ;

/// @brief Method get_partyPort addr 0x2208c04 size 0x8 virtual true final true
 int32_t get_partyPort() ;

/// @brief Method get_multiplayerPort addr 0x2208c0c size 0x8 virtual true final true
 int32_t get_multiplayerPort() ;

/// @brief Method get_masterServerEndPoint addr 0x2208c14 size 0x70 virtual true final true
 ::GlobalNamespace::DnsEndPoint get_masterServerEndPoint() ;

/// @brief Method get_multiplayerStatusUrl addr 0x2208c84 size 0x8 virtual true final true
 ::StringW get_multiplayerStatusUrl() ;

/// @brief Method get_quickPlaySetupUrl addr 0x2208c8c size 0x8 virtual true final true
 ::StringW get_quickPlaySetupUrl() ;

/// @brief Method get_graphUrl addr 0x2208c94 size 0x8 virtual true final true
 ::StringW get_graphUrl() ;

/// @brief Method get_graphAccessToken addr 0x2208c9c size 0x68 virtual true final true
 ::StringW get_graphAccessToken() ;

/// @brief Method get_forceGameLift addr 0x2208d30 size 0x8 virtual true final true
 bool get_forceGameLift() ;

/// @brief Method get_serviceEnvironment addr 0x2208d38 size 0x8 virtual true final true
 ::GlobalNamespace::ServiceEnvironment get_serviceEnvironment() ;

/// @brief Method GetAppId addr 0x2208d04 size 0x2c virtual false final false
 ::StringW GetAppId() ;

// Ctor Parameters []
explicit NetworkConfigSO() ;

/// @brief Method .ctor addr 0x2208d40 size 0x8c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::NetworkConfigSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkConfigSO, "", "NetworkConfigSO");
