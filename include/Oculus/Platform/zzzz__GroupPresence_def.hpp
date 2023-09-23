#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class GroupPresenceJoinIntent;
}
namespace Oculus::Platform {
class Request;
}
namespace Oculus::Platform {
class GroupPresenceOptions;
}
namespace Oculus::Platform::Models {
class GroupPresenceLeaveIntent;
}
namespace Oculus::Platform {
class RosterOptions;
}
namespace Oculus::Platform::Models {
class InvitePanelResultInfo;
}
namespace Oculus::Platform::Models {
class ApplicationInviteList;
}
namespace Oculus::Platform::Models {
class LaunchInvitePanelFlowResult;
}
namespace Oculus::Platform {
class MultiplayerErrorOptions;
}
namespace Oculus::Platform {
template<typename T>
class Oculus__Platform__Message_1__Callback;
}
namespace Oculus::Platform::Models {
class SendInvitesResult;
}
namespace Oculus::Platform {
class InviteOptions;
}
namespace Oculus::Platform::Models {
class UserList;
}
namespace Oculus::Platform::Models {
class RejoinDialogResult;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
// Forward declare root types
namespace Oculus::Platform {
class GroupPresence;
}
// Type: Oculus.Platform::GroupPresence
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13329))
// CS Name: Oculus.Platform.GroupPresence
class CORDL_TYPE GroupPresence : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GroupPresence() = default;

// Ctor Parameters [CppParam { name: "", ty: "GroupPresence", modifiers: " const&", def_value: None }]
constexpr GroupPresence(GroupPresence const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GroupPresence", modifiers: "&&", def_value: None }]
constexpr GroupPresence(GroupPresence&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GroupPresence(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GroupPresence& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GroupPresence& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GroupPresence& operator=(GroupPresence&& o) noexcept = default;
  constexpr GroupPresence& operator=(GroupPresence const& o) noexcept = default;
                


// Methods

/// @brief Method Clear addr 0x2593de8 size 0x148 virtual false final false
static Oculus::Platform::Request Clear() ;

/// @brief Method GetInvitableUsers addr 0x2593f30 size 0x178 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::UserList> GetInvitableUsers(Oculus::Platform::InviteOptions options) ;

/// @brief Method GetSentInvites addr 0x25940a8 size 0x15c virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::ApplicationInviteList> GetSentInvites() ;

/// @brief Method LaunchInvitePanel addr 0x2594204 size 0x178 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::InvitePanelResultInfo> LaunchInvitePanel(Oculus::Platform::InviteOptions options) ;

/// @brief Method LaunchMultiplayerErrorDialog addr 0x259437c size 0x164 virtual false final false
static Oculus::Platform::Request LaunchMultiplayerErrorDialog(Oculus::Platform::MultiplayerErrorOptions options) ;

/// @brief Method LaunchRejoinDialog addr 0x25944e0 size 0x17c virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::RejoinDialogResult> LaunchRejoinDialog(::StringW lobby_session_id, ::StringW match_session_id, ::StringW destination_api_name) ;

/// @brief Method LaunchRosterPanel addr 0x259465c size 0x190 virtual false final false
static Oculus::Platform::Request LaunchRosterPanel(Oculus::Platform::RosterOptions options) ;

/// @brief Method SendInvites addr 0x2594844 size 0x178 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::SendInvitesResult> SendInvites(::ArrayW<uint64_t> userIDs) ;

/// @brief Method Set addr 0x25949bc size 0x164 virtual false final false
static Oculus::Platform::Request Set(Oculus::Platform::GroupPresenceOptions groupPresenceOptions) ;

/// @brief Method SetDeeplinkMessageOverride addr 0x2594b20 size 0x150 virtual false final false
static Oculus::Platform::Request SetDeeplinkMessageOverride(::StringW deeplink_message) ;

/// @brief Method SetDestination addr 0x2594c70 size 0x150 virtual false final false
static Oculus::Platform::Request SetDestination(::StringW api_name) ;

/// @brief Method SetIsJoinable addr 0x2594dc0 size 0x150 virtual false final false
static Oculus::Platform::Request SetIsJoinable(bool is_joinable) ;

/// @brief Method SetLobbySession addr 0x2594f10 size 0x150 virtual false final false
static Oculus::Platform::Request SetLobbySession(::StringW id) ;

/// @brief Method SetMatchSession addr 0x2595060 size 0x150 virtual false final false
static Oculus::Platform::Request SetMatchSession(::StringW id) ;

/// @brief Method SetInvitationsSentNotificationCallback addr 0x25951b0 size 0x74 virtual false final false
static void SetInvitationsSentNotificationCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::LaunchInvitePanelFlowResult> callback) ;

/// @brief Method SetJoinIntentReceivedNotificationCallback addr 0x2595224 size 0x74 virtual false final false
static void SetJoinIntentReceivedNotificationCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::GroupPresenceJoinIntent> callback) ;

/// @brief Method SetLeaveIntentReceivedNotificationCallback addr 0x2595298 size 0x74 virtual false final false
static void SetLeaveIntentReceivedNotificationCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::GroupPresenceLeaveIntent> callback) ;

/// @brief Method GetNextApplicationInviteListPage addr 0x259530c size 0x1e0 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::ApplicationInviteList> GetNextApplicationInviteListPage(Oculus::Platform::Models::ApplicationInviteList list) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::GroupPresence);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::GroupPresence, "Oculus.Platform", "GroupPresence");
