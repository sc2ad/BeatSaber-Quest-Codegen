#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace OVR::OpenVR {
struct EVRNotificationStyle;
}
namespace OVR::OpenVR {
struct IVRNotifications;
}
namespace OVR::OpenVR {
struct EVRNotificationType;
}
namespace OVR::OpenVR {
struct NotificationBitmap_t;
}
namespace OVR::OpenVR {
struct EVRNotificationError;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRNotifications;
}
// Type: OVR.OpenVR::CVRNotifications
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9354))
// CS Name: OVR.OpenVR.CVRNotifications
class CORDL_TYPE CVRNotifications : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CVRNotifications() = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRNotifications", modifiers: " const&", def_value: None }]
constexpr CVRNotifications(CVRNotifications const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRNotifications", modifiers: "&&", def_value: None }]
constexpr CVRNotifications(CVRNotifications&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CVRNotifications(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CVRNotifications& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CVRNotifications& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CVRNotifications& operator=(CVRNotifications&& o) noexcept = default;
  constexpr CVRNotifications& operator=(CVRNotifications const& o) noexcept = default;
                


// Fields

 ::OVR::OpenVR::IVRNotifications __declspec(property(get=__get_FnTable, put=__set_FnTable))  FnTable;

constexpr void __set_FnTable(::OVR::OpenVR::IVRNotifications value) ;

constexpr ::OVR::OpenVR::IVRNotifications __get_FnTable() const;


// Methods

// Ctor Parameters [CppParam { name: "pInterface", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit CVRNotifications(::cordl_internals::intptr_t pInterface) ;

/// @brief Method .ctor addr 0x2667874 size 0x10c virtual false final false
 void _ctor(::cordl_internals::intptr_t pInterface) ;

/// @brief Method CreateNotification addr 0x2667980 size 0x2c virtual false final false
 ::OVR::OpenVR::EVRNotificationError CreateNotification(uint64_t ulOverlayHandle, uint64_t ulUserValue, ::OVR::OpenVR::EVRNotificationType type, ::StringW pchText, ::OVR::OpenVR::EVRNotificationStyle style, ByRef<::OVR::OpenVR::NotificationBitmap_t> pImage, ByRef<uint32_t> pNotificationId) ;

/// @brief Method RemoveNotification addr 0x26679ac size 0x24 virtual false final false
 ::OVR::OpenVR::EVRNotificationError RemoveNotification(uint32_t notificationId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
NEED_NO_BOX(::OVR::OpenVR::CVRNotifications);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRNotifications, "OVR.OpenVR", "CVRNotifications");
