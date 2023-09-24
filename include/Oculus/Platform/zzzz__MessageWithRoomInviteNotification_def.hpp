#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__RoomInviteNotification_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class RoomInviteNotification;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithRoomInviteNotification;
}
// Type: Oculus.Platform::MessageWithRoomInviteNotification
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13203)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 953 }), TypeDefinitionIndex(TypeDefinitionIndex(13470))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13276))
// CS Name: Oculus.Platform.MessageWithRoomInviteNotification
class CORDL_TYPE MessageWithRoomInviteNotification : public Oculus::Platform::Message_1<Oculus::Platform::Models::RoomInviteNotification> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithRoomInviteNotification() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithRoomInviteNotification", modifiers: " const&", def_value: None }]
constexpr MessageWithRoomInviteNotification(MessageWithRoomInviteNotification const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithRoomInviteNotification", modifiers: "&&", def_value: None }]
constexpr MessageWithRoomInviteNotification(MessageWithRoomInviteNotification&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithRoomInviteNotification(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::RoomInviteNotification>(ptr) {
}


  constexpr MessageWithRoomInviteNotification& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithRoomInviteNotification& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithRoomInviteNotification& operator=(MessageWithRoomInviteNotification&& o) noexcept = default;
  constexpr MessageWithRoomInviteNotification& operator=(MessageWithRoomInviteNotification const& o) noexcept = default;
                


// Methods

static Oculus::Platform::MessageWithRoomInviteNotification New_ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257f138 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetRoomInviteNotification addr 0x2583858 size 0x3c virtual true final false
 Oculus::Platform::Models::RoomInviteNotification GetRoomInviteNotification() ;

/// @brief Method GetDataFromMessage addr 0x2583894 size 0x9c virtual true final false
 Oculus::Platform::Models::RoomInviteNotification GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithRoomInviteNotification);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithRoomInviteNotification, "Oculus.Platform", "MessageWithRoomInviteNotification");
