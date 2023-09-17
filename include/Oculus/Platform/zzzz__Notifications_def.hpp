#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class RoomInviteNotificationList;
}
namespace Oculus::Platform {
class Request;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
// Forward declare root types
namespace Oculus::Platform {
class Notifications;
}
// Type: Oculus.Platform::Notifications
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13335))
// CS Name: Oculus.Platform.Notifications
class CORDL_TYPE Notifications : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Notifications() = default;

// Ctor Parameters [CppParam { name: "", ty: "Notifications", modifiers: " const&", def_value: None }]
constexpr Notifications(Notifications const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Notifications", modifiers: "&&", def_value: None }]
constexpr Notifications(Notifications&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Notifications(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Notifications& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Notifications& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Notifications& operator=(Notifications&& o) noexcept = default;
  constexpr Notifications& operator=(Notifications const& o) noexcept = default;
                


// Methods

/// @brief Method GetRoomInviteNotifications addr 0x2596580 size 0x15c virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::RoomInviteNotificationList> GetRoomInviteNotifications() ;

/// @brief Method MarkAsRead addr 0x25966dc size 0x150 virtual false final false
static ::Oculus::Platform::Request MarkAsRead(uint64_t notificationID) ;

/// @brief Method GetNextRoomInviteNotificationListPage addr 0x259682c size 0x1e0 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::RoomInviteNotificationList> GetNextRoomInviteNotificationListPage(::Oculus::Platform::Models::RoomInviteNotificationList list) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Notifications);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Notifications, "Oculus.Platform", "Notifications");
