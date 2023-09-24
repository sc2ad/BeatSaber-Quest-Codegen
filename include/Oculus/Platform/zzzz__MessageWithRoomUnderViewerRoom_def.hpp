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
class MessageWithRoomUnderViewerRoom;
}
// Type: Oculus.Platform::MessageWithRoomUnderViewerRoom
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13203)), TypeDefinitionIndex(TypeDefinitionIndex(13468)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 952 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13274))
// CS Name: Oculus.Platform.MessageWithRoomUnderViewerRoom
class CORDL_TYPE MessageWithRoomUnderViewerRoom : public Oculus::Platform::Message_1<Oculus::Platform::Models::Room> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithRoomUnderViewerRoom() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithRoomUnderViewerRoom", modifiers: " const&", def_value: None }]
constexpr MessageWithRoomUnderViewerRoom(MessageWithRoomUnderViewerRoom const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithRoomUnderViewerRoom", modifiers: "&&", def_value: None }]
constexpr MessageWithRoomUnderViewerRoom(MessageWithRoomUnderViewerRoom&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithRoomUnderViewerRoom(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::Room>(ptr) {
}


  constexpr MessageWithRoomUnderViewerRoom& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithRoomUnderViewerRoom& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithRoomUnderViewerRoom& operator=(MessageWithRoomUnderViewerRoom&& o) noexcept = default;
  constexpr MessageWithRoomUnderViewerRoom& operator=(MessageWithRoomUnderViewerRoom const& o) noexcept = default;
                


// Methods

static Oculus::Platform::MessageWithRoomUnderViewerRoom New_ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257f088 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetRoom addr 0x25836a8 size 0x3c virtual true final false
 Oculus::Platform::Models::Room GetRoom() ;

/// @brief Method GetDataFromMessage addr 0x25836e4 size 0x9c virtual true final false
 Oculus::Platform::Models::Room GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithRoomUnderViewerRoom);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithRoomUnderViewerRoom, "Oculus.Platform", "MessageWithRoomUnderViewerRoom");
