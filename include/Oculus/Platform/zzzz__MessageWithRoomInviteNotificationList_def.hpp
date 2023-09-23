#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__RoomInviteNotificationList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class RoomInviteNotificationList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithRoomInviteNotificationList;
}
// Type: Oculus.Platform::MessageWithRoomInviteNotificationList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13471)), TypeDefinitionIndex(TypeDefinitionIndex(13203)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4472 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13277))
// CS Name: Oculus.Platform.MessageWithRoomInviteNotificationList
class CORDL_TYPE MessageWithRoomInviteNotificationList : public Oculus::Platform::Message_1<Oculus::Platform::Models::RoomInviteNotificationList> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithRoomInviteNotificationList() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithRoomInviteNotificationList", modifiers: " const&", def_value: None }]
constexpr MessageWithRoomInviteNotificationList(MessageWithRoomInviteNotificationList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithRoomInviteNotificationList", modifiers: "&&", def_value: None }]
constexpr MessageWithRoomInviteNotificationList(MessageWithRoomInviteNotificationList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithRoomInviteNotificationList(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::RoomInviteNotificationList>(ptr) {
}


  constexpr MessageWithRoomInviteNotificationList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithRoomInviteNotificationList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithRoomInviteNotificationList& operator=(MessageWithRoomInviteNotificationList&& o) noexcept = default;
  constexpr MessageWithRoomInviteNotificationList& operator=(MessageWithRoomInviteNotificationList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithRoomInviteNotificationList(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257f190 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetRoomInviteNotificationList addr 0x2583930 size 0x3c virtual true final false
 Oculus::Platform::Models::RoomInviteNotificationList GetRoomInviteNotificationList() ;

/// @brief Method GetDataFromMessage addr 0x258396c size 0x9c virtual true final false
 Oculus::Platform::Models::RoomInviteNotificationList GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithRoomInviteNotificationList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithRoomInviteNotificationList, "Oculus.Platform", "MessageWithRoomInviteNotificationList");
