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
class MessageWithRoom;
}
// Type: Oculus.Platform::MessageWithRoom
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 952 }), TypeDefinitionIndex(TypeDefinitionIndex(13203)), TypeDefinitionIndex(TypeDefinitionIndex(13468))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13272))
// CS Name: Oculus.Platform.MessageWithRoom
class CORDL_TYPE MessageWithRoom : public Oculus::Platform::Message_1<Oculus::Platform::Models::Room> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithRoom() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithRoom", modifiers: " const&", def_value: None }]
constexpr MessageWithRoom(MessageWithRoom const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithRoom", modifiers: "&&", def_value: None }]
constexpr MessageWithRoom(MessageWithRoom&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithRoom(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::Room>(ptr) {
}


  constexpr MessageWithRoom& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithRoom& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithRoom& operator=(MessageWithRoom&& o) noexcept = default;
  constexpr MessageWithRoom& operator=(MessageWithRoom const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithRoom(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257efd8 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetRoom addr 0x25834f8 size 0x3c virtual true final false
 Oculus::Platform::Models::Room GetRoom() ;

/// @brief Method GetDataFromMessage addr 0x2583534 size 0x9c virtual true final false
 Oculus::Platform::Models::Room GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithRoom);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithRoom, "Oculus.Platform", "MessageWithRoom");
