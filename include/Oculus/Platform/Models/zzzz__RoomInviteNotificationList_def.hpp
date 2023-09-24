#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__RoomInviteNotification_def.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class RoomInviteNotificationList;
}
// Type: Oculus.Platform.Models::RoomInviteNotificationList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13470)), TypeDefinitionIndex(TypeDefinitionIndex(13410)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13410), inst: 953 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13471))
// CS Name: Oculus.Platform.Models.RoomInviteNotificationList
class CORDL_TYPE RoomInviteNotificationList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::RoomInviteNotification> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~RoomInviteNotificationList() = default;

// Ctor Parameters [CppParam { name: "", ty: "RoomInviteNotificationList", modifiers: " const&", def_value: None }]
constexpr RoomInviteNotificationList(RoomInviteNotificationList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RoomInviteNotificationList", modifiers: "&&", def_value: None }]
constexpr RoomInviteNotificationList(RoomInviteNotificationList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RoomInviteNotificationList(void* ptr) noexcept : Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::RoomInviteNotification>(ptr) {
}


  constexpr RoomInviteNotificationList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RoomInviteNotificationList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RoomInviteNotificationList& operator=(RoomInviteNotificationList&& o) noexcept = default;
  constexpr RoomInviteNotificationList& operator=(RoomInviteNotificationList const& o) noexcept = default;
                


// Methods

static Oculus::Platform::Models::RoomInviteNotificationList New_ctor(::cordl_internals::intptr_t a) ;

/// @brief Method .ctor addr 0x25a2d90 size 0x25c virtual false final false
 void _ctor(::cordl_internals::intptr_t a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::RoomInviteNotificationList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::RoomInviteNotificationList, "Oculus.Platform.Models", "RoomInviteNotificationList");
