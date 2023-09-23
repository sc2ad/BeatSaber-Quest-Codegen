#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace GlobalNamespace {
class DnsEndPoint;
}
namespace GlobalNamespace {
class INetworkConfig;
}
namespace GlobalNamespace {
struct ServiceEnvironment;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomNetworkConfig;
}
// Type: ::CustomNetworkConfig
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12652))
// CS Name: CustomNetworkConfig
class CORDL_TYPE CustomNetworkConfig : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::INetworkConfig
constexpr operator  GlobalNamespace::INetworkConfig() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~CustomNetworkConfig() = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomNetworkConfig", modifiers: " const&", def_value: None }]
constexpr CustomNetworkConfig(CustomNetworkConfig const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomNetworkConfig", modifiers: "&&", def_value: None }]
constexpr CustomNetworkConfig(CustomNetworkConfig&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CustomNetworkConfig(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CustomNetworkConfig& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CustomNetworkConfig& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CustomNetworkConfig& operator=(CustomNetworkConfig&& o) noexcept = default;
  constexpr CustomNetworkConfig& operator=(CustomNetworkConfig const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__maxPartySize_k__BackingField, put=__set__maxPartySize_k__BackingField))  _maxPartySize_k__BackingField;

constexpr void __set__maxPartySize_k__BackingField(int32_t value) ;

constexpr int32_t __get__maxPartySize_k__BackingField() const;

 int32_t __declspec(property(get=__get__discoveryPort_k__BackingField, put=__set__discoveryPort_k__BackingField))  _discoveryPort_k__BackingField;

constexpr void __set__discoveryPort_k__BackingField(int32_t value) ;

constexpr int32_t __get__discoveryPort_k__BackingField() const;

 int32_t __declspec(property(get=__get__partyPort_k__BackingField, put=__set__partyPort_k__BackingField))  _partyPort_k__BackingField;

constexpr void __set__partyPort_k__BackingField(int32_t value) ;

constexpr int32_t __get__partyPort_k__BackingField() const;

 int32_t __declspec(property(get=__get__multiplayerPort_k__BackingField, put=__set__multiplayerPort_k__BackingField))  _multiplayerPort_k__BackingField;

constexpr void __set__multiplayerPort_k__BackingField(int32_t value) ;

constexpr int32_t __get__multiplayerPort_k__BackingField() const;

 GlobalNamespace::DnsEndPoint __declspec(property(get=__get__masterServerEndPoint_k__BackingField, put=__set__masterServerEndPoint_k__BackingField))  _masterServerEndPoint_k__BackingField;

constexpr void __set__masterServerEndPoint_k__BackingField(GlobalNamespace::DnsEndPoint value) ;

constexpr GlobalNamespace::DnsEndPoint __get__masterServerEndPoint_k__BackingField() const;

 ::StringW __declspec(property(get=__get__multiplayerStatusUrl_k__BackingField, put=__set__multiplayerStatusUrl_k__BackingField))  _multiplayerStatusUrl_k__BackingField;

constexpr void __set__multiplayerStatusUrl_k__BackingField(::StringW value) ;

constexpr ::StringW __get__multiplayerStatusUrl_k__BackingField() const;

 ::StringW __declspec(property(get=__get__graphUrl_k__BackingField, put=__set__graphUrl_k__BackingField))  _graphUrl_k__BackingField;

constexpr void __set__graphUrl_k__BackingField(::StringW value) ;

constexpr ::StringW __get__graphUrl_k__BackingField() const;

 ::StringW __declspec(property(get=__get__graphAccessToken_k__BackingField, put=__set__graphAccessToken_k__BackingField))  _graphAccessToken_k__BackingField;

constexpr void __set__graphAccessToken_k__BackingField(::StringW value) ;

constexpr ::StringW __get__graphAccessToken_k__BackingField() const;

 bool __declspec(property(get=__get__forceGameLift_k__BackingField, put=__set__forceGameLift_k__BackingField))  _forceGameLift_k__BackingField;

constexpr void __set__forceGameLift_k__BackingField(bool value) ;

constexpr bool __get__forceGameLift_k__BackingField() const;

 GlobalNamespace::ServiceEnvironment __declspec(property(get=__get__serviceEnvironment_k__BackingField, put=__set__serviceEnvironment_k__BackingField))  _serviceEnvironment_k__BackingField;

constexpr void __set__serviceEnvironment_k__BackingField(GlobalNamespace::ServiceEnvironment value) ;

constexpr GlobalNamespace::ServiceEnvironment __get__serviceEnvironment_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_maxPartySize))  maxPartySize;

 int32_t __declspec(property(get=get_discoveryPort))  discoveryPort;

 int32_t __declspec(property(get=get_partyPort))  partyPort;

 int32_t __declspec(property(get=get_multiplayerPort))  multiplayerPort;

 GlobalNamespace::DnsEndPoint __declspec(property(get=get_masterServerEndPoint))  masterServerEndPoint;

 ::StringW __declspec(property(get=get_multiplayerStatusUrl))  multiplayerStatusUrl;

 ::StringW __declspec(property(get=get_quickPlaySetupUrl))  quickPlaySetupUrl;

 ::StringW __declspec(property(get=get_graphUrl))  graphUrl;

 ::StringW __declspec(property(get=get_graphAccessToken))  graphAccessToken;

 bool __declspec(property(get=get_forceGameLift))  forceGameLift;

 GlobalNamespace::ServiceEnvironment __declspec(property(get=get_serviceEnvironment))  serviceEnvironment;


// Methods

/// @brief Method get_maxPartySize addr 0xda55c0 size 0x8 virtual true final true
 int32_t get_maxPartySize() ;

/// @brief Method get_discoveryPort addr 0xda55c8 size 0x8 virtual true final true
 int32_t get_discoveryPort() ;

/// @brief Method get_partyPort addr 0xda55d0 size 0x8 virtual true final true
 int32_t get_partyPort() ;

/// @brief Method get_multiplayerPort addr 0xda55d8 size 0x8 virtual true final true
 int32_t get_multiplayerPort() ;

/// @brief Method get_masterServerEndPoint addr 0xda55e0 size 0x8 virtual true final true
 GlobalNamespace::DnsEndPoint get_masterServerEndPoint() ;

/// @brief Method get_multiplayerStatusUrl addr 0xda55e8 size 0x8 virtual true final true
 ::StringW get_multiplayerStatusUrl() ;

/// @brief Method get_quickPlaySetupUrl addr 0xda55f0 size 0x48 virtual true final true
 ::StringW get_quickPlaySetupUrl() ;

/// @brief Method get_graphUrl addr 0xda5638 size 0x8 virtual true final true
 ::StringW get_graphUrl() ;

/// @brief Method get_graphAccessToken addr 0xda5640 size 0x8 virtual true final true
 ::StringW get_graphAccessToken() ;

/// @brief Method get_forceGameLift addr 0xda5648 size 0x8 virtual true final true
 bool get_forceGameLift() ;

/// @brief Method get_serviceEnvironment addr 0xda5650 size 0x8 virtual true final true
 GlobalNamespace::ServiceEnvironment get_serviceEnvironment() ;

// Ctor Parameters [CppParam { name: "fromNetworkConfig", ty: "GlobalNamespace::INetworkConfig", modifiers: "", def_value: None }, CppParam { name: "customServerHostName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "port", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "forceGameLift", ty: "bool", modifiers: "", def_value: None }]
explicit CustomNetworkConfig(GlobalNamespace::INetworkConfig fromNetworkConfig, ::StringW customServerHostName, int32_t port, bool forceGameLift) ;

/// @brief Method .ctor addr 0xda5658 size 0x4a0 virtual false final false
 void _ctor(GlobalNamespace::INetworkConfig fromNetworkConfig, ::StringW customServerHostName, int32_t port, bool forceGameLift) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CustomNetworkConfig);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomNetworkConfig, "", "CustomNetworkConfig");
