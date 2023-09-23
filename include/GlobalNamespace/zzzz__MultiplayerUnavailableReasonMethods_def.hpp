#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
struct MultiplayerUnavailableReason;
}
namespace Polyglot {
struct Language;
}
namespace GlobalNamespace {
class MultiplayerStatusData;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerUnavailableReasonMethods;
}
// Type: ::MultiplayerUnavailableReasonMethods
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4525))
// CS Name: MultiplayerUnavailableReasonMethods
class CORDL_TYPE MultiplayerUnavailableReasonMethods : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MultiplayerUnavailableReasonMethods() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerUnavailableReasonMethods", modifiers: " const&", def_value: None }]
constexpr MultiplayerUnavailableReasonMethods(MultiplayerUnavailableReasonMethods const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerUnavailableReasonMethods", modifiers: "&&", def_value: None }]
constexpr MultiplayerUnavailableReasonMethods(MultiplayerUnavailableReasonMethods&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerUnavailableReasonMethods(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MultiplayerUnavailableReasonMethods& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerUnavailableReasonMethods& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerUnavailableReasonMethods& operator=(MultiplayerUnavailableReasonMethods&& o) noexcept = default;
  constexpr MultiplayerUnavailableReasonMethods& operator=(MultiplayerUnavailableReasonMethods const& o) noexcept = default;
                


// Fields

/// @brief Field kMultiplayerUnavailableServerOffline offset 0
static constexpr ::ConstString  kMultiplayerUnavailableServerOffline{u"MULTIPLAYER_UNAVAILABLE_SERVER_OFFLINE"};

/// @brief Field kMultiplayerUnavailableUpdateRequired offset 0
static constexpr ::ConstString  kMultiplayerUnavailableUpdateRequired{u"MULTIPLAYER_UNAVAILABLE_UPDATE_REQUIRED"};

/// @brief Field kMultiplayerUnavailableMaintenanceMode offset 0
static constexpr ::ConstString  kMultiplayerUnavailableMaintenanceMode{u"MULTIPLAYER_UNAVAILABLE_MAINTENANCE_MODE"};

/// @brief Field kMultiplayerUnavailableTryAgain offset 0
static constexpr ::ConstString  kMultiplayerUnavailableTryAgain{u"MULTIPLAYER_UNAVAILABLE_TRY_AGAIN"};


// Methods

/// @brief Method LocalizedKey addr 0x22002cc size 0x84 virtual false final false
static ::StringW LocalizedKey(GlobalNamespace::MultiplayerUnavailableReason multiplayerUnavailableReason) ;

/// @brief Method ErrorCode addr 0x2200350 size 0x80 virtual false final false
static ::StringW ErrorCode(GlobalNamespace::MultiplayerUnavailableReason multiplayerUnavailableReason) ;

/// @brief Method TryGetMultiplayerUnavailableReason addr 0x22003d0 size 0x108 virtual false final false
static bool TryGetMultiplayerUnavailableReason(GlobalNamespace::MultiplayerStatusData data, ByRef<GlobalNamespace::MultiplayerUnavailableReason> reason) ;

/// @brief Method GetLocalizedMessage addr 0x22006e0 size 0xb0 virtual false final false
static ::StringW GetLocalizedMessage(GlobalNamespace::MultiplayerStatusData data, Polyglot::Language language) ;

/// @brief Method VersionLessThan addr 0x22004d8 size 0x208 virtual false final false
static bool VersionLessThan(::StringW currentVersion, ::StringW minVersion) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerUnavailableReasonMethods);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerUnavailableReasonMethods, "", "MultiplayerUnavailableReasonMethods");
