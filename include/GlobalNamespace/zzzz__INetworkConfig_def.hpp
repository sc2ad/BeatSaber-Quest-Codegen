#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct ServiceEnvironment;
}
namespace GlobalNamespace {
class DnsEndPoint;
}
// Forward declare root types
namespace GlobalNamespace {
class INetworkConfig;
}
// Type: ::INetworkConfig
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12742))
// CS Name: INetworkConfig
class CORDL_TYPE INetworkConfig : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INetworkConfig() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INetworkConfig(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


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

/// @brief Method get_maxPartySize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_maxPartySize() ;

/// @brief Method get_discoveryPort addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_discoveryPort() ;

/// @brief Method get_partyPort addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_partyPort() ;

/// @brief Method get_multiplayerPort addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_multiplayerPort() ;

/// @brief Method get_masterServerEndPoint addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::DnsEndPoint get_masterServerEndPoint() ;

/// @brief Method get_multiplayerStatusUrl addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_multiplayerStatusUrl() ;

/// @brief Method get_quickPlaySetupUrl addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_quickPlaySetupUrl() ;

/// @brief Method get_graphUrl addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_graphUrl() ;

/// @brief Method get_graphAccessToken addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_graphAccessToken() ;

/// @brief Method get_forceGameLift addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_forceGameLift() ;

/// @brief Method get_serviceEnvironment addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::ServiceEnvironment get_serviceEnvironment() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::INetworkConfig);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INetworkConfig, "", "INetworkConfig");
