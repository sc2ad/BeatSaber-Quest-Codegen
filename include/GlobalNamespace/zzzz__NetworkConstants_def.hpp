#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
class NetworkConstants;
}
// Type: ::NetworkConstants
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12829))
// CS Name: NetworkConstants
class CORDL_TYPE NetworkConstants : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NetworkConstants() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkConstants", modifiers: " const&", def_value: None }]
constexpr NetworkConstants(NetworkConstants const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkConstants", modifiers: "&&", def_value: None }]
constexpr NetworkConstants(NetworkConstants&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetworkConstants(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetworkConstants& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetworkConstants& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetworkConstants& operator=(NetworkConstants&& o) noexcept = default;
  constexpr NetworkConstants& operator=(NetworkConstants const& o) noexcept = default;
                


// Fields

/// @brief Field kProtocolVersion offset 0
static constexpr uint32_t  kProtocolVersion{8u};

/// @brief Field kHandshakeMessageType offset 0
static constexpr uint32_t  kHandshakeMessageType{3192347326u};

/// @brief Field kUserMasterServerMessageType offset 0
static constexpr uint32_t  kUserMasterServerMessageType{1u};

/// @brief Field kDedicatedServerMasterServerMessageType offset 0
static constexpr uint32_t  kDedicatedServerMasterServerMessageType{2u};

/// @brief Field kGameLiftMessageType offset 0
static constexpr uint32_t  kGameLiftMessageType{3u};

/// @brief Field dedicatedServerState offset 0
static constexpr ::ConstString  dedicatedServerState{u"dedicated_server"};

/// @brief Field playerState offset 0
static constexpr ::ConstString  playerState{u"player"};

/// @brief Field spectatingState offset 0
static constexpr ::ConstString  spectatingState{u"spectating"};

/// @brief Field backgroundedState offset 0
static constexpr ::ConstString  backgroundedState{u"backgrounded"};

/// @brief Field terminatingState offset 0
static constexpr ::ConstString  terminatingState{u"terminating"};

/// @brief Field wantsToPlayNextLevel offset 0
static constexpr ::ConstString  wantsToPlayNextLevel{u"wants_to_play_next_level"};

/// @brief Field wasActiveAtLevelStart offset 0
static constexpr ::ConstString  wasActiveAtLevelStart{u"was_active_at_level_start"};

/// @brief Field isActive offset 0
static constexpr ::ConstString  isActive{u"is_active"};

/// @brief Field finishedLevel offset 0
static constexpr ::ConstString  finishedLevel{u"finished_level"};

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NetworkConstants);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetworkConstants, "", "NetworkConstants");
