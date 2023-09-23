#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
// Forward declare root types
namespace BGNet::Core::GameLift {
class PlayerSessionInfo;
}
// Type: BGNet.Core.GameLift::PlayerSessionInfo
namespace BGNet::Core::GameLift {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12952))
// CS Name: BGNet.Core.GameLift.PlayerSessionInfo
class CORDL_TYPE PlayerSessionInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~PlayerSessionInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSessionInfo", modifiers: " const&", def_value: None }]
constexpr PlayerSessionInfo(PlayerSessionInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSessionInfo", modifiers: "&&", def_value: None }]
constexpr PlayerSessionInfo(PlayerSessionInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerSessionInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlayerSessionInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerSessionInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerSessionInfo& operator=(PlayerSessionInfo&& o) noexcept = default;
  constexpr PlayerSessionInfo& operator=(PlayerSessionInfo const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_playerSessionId, put=__set_playerSessionId))  playerSessionId;

constexpr void __set_playerSessionId(::StringW value) ;

constexpr ::StringW __get_playerSessionId() const;

 ::StringW __declspec(property(get=__get_gameSessionId, put=__set_gameSessionId))  gameSessionId;

constexpr void __set_gameSessionId(::StringW value) ;

constexpr ::StringW __get_gameSessionId() const;

 ::StringW __declspec(property(get=__get_dnsName, put=__set_dnsName))  dnsName;

constexpr void __set_dnsName(::StringW value) ;

constexpr ::StringW __get_dnsName() const;

 int32_t __declspec(property(get=__get_port, put=__set_port))  port;

constexpr void __set_port(int32_t value) ;

constexpr int32_t __get_port() const;

 GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=__get_beatmapLevelSelectionMask, put=__set_beatmapLevelSelectionMask))  beatmapLevelSelectionMask;

constexpr void __set_beatmapLevelSelectionMask(GlobalNamespace::BeatmapLevelSelectionMask value) ;

constexpr GlobalNamespace::BeatmapLevelSelectionMask __get_beatmapLevelSelectionMask() const;

 GlobalNamespace::GameplayServerConfiguration __declspec(property(get=__get_gameplayServerConfiguration, put=__set_gameplayServerConfiguration))  gameplayServerConfiguration;

constexpr void __set_gameplayServerConfiguration(GlobalNamespace::GameplayServerConfiguration value) ;

constexpr GlobalNamespace::GameplayServerConfiguration __get_gameplayServerConfiguration() const;

 ::StringW __declspec(property(get=__get_privateGameSecret, put=__set_privateGameSecret))  privateGameSecret;

constexpr void __set_privateGameSecret(::StringW value) ;

constexpr ::StringW __get_privateGameSecret() const;

 ::StringW __declspec(property(get=__get_privateGameCode, put=__set_privateGameCode))  privateGameCode;

constexpr void __set_privateGameCode(::StringW value) ;

constexpr ::StringW __get_privateGameCode() const;


// Methods

// Ctor Parameters []
explicit PlayerSessionInfo() ;

/// @brief Method .ctor addr 0xdd3db4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::GameLift
NEED_NO_BOX(BGNet::Core::GameLift::PlayerSessionInfo);
DEFINE_IL2CPP_ARG_TYPE(BGNet::Core::GameLift::PlayerSessionInfo, "BGNet.Core.GameLift", "PlayerSessionInfo");
