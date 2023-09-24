#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__Room_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class Room;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithRoomUnderCurrentRoom;
}
// Type: Oculus.Platform::MessageWithRoomUnderCurrentRoom
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13203)), TypeDefinitionIndex(TypeDefinitionIndex(13468)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 952 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13273))
// CS Name: Oculus.Platform.MessageWithRoomUnderCurrentRoom
class CORDL_TYPE MessageWithRoomUnderCurrentRoom : public Oculus::Platform::Message_1<Oculus::Platform::Models::Room> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithRoomUnderCurrentRoom() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithRoomUnderCurrentRoom", modifiers: " const&", def_value: None }]
constexpr MessageWithRoomUnderCurrentRoom(MessageWithRoomUnderCurrentRoom const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithRoomUnderCurrentRoom", modifiers: "&&", def_value: None }]
constexpr MessageWithRoomUnderCurrentRoom(MessageWithRoomUnderCurrentRoom&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithRoomUnderCurrentRoom(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::Room>(ptr) {
}


  constexpr MessageWithRoomUnderCurrentRoom& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithRoomUnderCurrentRoom& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithRoomUnderCurrentRoom& operator=(MessageWithRoomUnderCurrentRoom&& o) noexcept = default;
  constexpr MessageWithRoomUnderCurrentRoom& operator=(MessageWithRoomUnderCurrentRoom const& o) noexcept = default;
                


// Methods

static Oculus::Platform::MessageWithRoomUnderCurrentRoom New_ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257f030 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetRoom addr 0x25835d0 size 0x3c virtual true final false
 Oculus::Platform::Models::Room GetRoom() ;

/// @brief Method GetDataFromMessage addr 0x258360c size 0x9c virtual true final false
 Oculus::Platform::Models::Room GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithRoomUnderCurrentRoom);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithRoomUnderCurrentRoom, "Oculus.Platform", "MessageWithRoomUnderCurrentRoom");
