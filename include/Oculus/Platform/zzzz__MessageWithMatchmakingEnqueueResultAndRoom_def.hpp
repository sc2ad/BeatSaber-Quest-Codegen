#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueueResultAndRoom_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class MatchmakingEnqueueResultAndRoom;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithMatchmakingEnqueueResultAndRoom;
}
// Type: Oculus.Platform::MessageWithMatchmakingEnqueueResultAndRoom
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13444)), TypeDefinitionIndex(TypeDefinitionIndex(13203)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4459 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13254))
// CS Name: Oculus.Platform.MessageWithMatchmakingEnqueueResultAndRoom
class CORDL_TYPE MessageWithMatchmakingEnqueueResultAndRoom : public Oculus::Platform::Message_1<Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithMatchmakingEnqueueResultAndRoom() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithMatchmakingEnqueueResultAndRoom", modifiers: " const&", def_value: None }]
constexpr MessageWithMatchmakingEnqueueResultAndRoom(MessageWithMatchmakingEnqueueResultAndRoom const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithMatchmakingEnqueueResultAndRoom", modifiers: "&&", def_value: None }]
constexpr MessageWithMatchmakingEnqueueResultAndRoom(MessageWithMatchmakingEnqueueResultAndRoom&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithMatchmakingEnqueueResultAndRoom(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom>(ptr) {
}


  constexpr MessageWithMatchmakingEnqueueResultAndRoom& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithMatchmakingEnqueueResultAndRoom& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithMatchmakingEnqueueResultAndRoom& operator=(MessageWithMatchmakingEnqueueResultAndRoom&& o) noexcept = default;
  constexpr MessageWithMatchmakingEnqueueResultAndRoom& operator=(MessageWithMatchmakingEnqueueResultAndRoom const& o) noexcept = default;
                


// Methods

static Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom New_ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257eb60 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetMatchmakingEnqueueResultAndRoom addr 0x2582410 size 0x3c virtual true final false
 Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom GetMatchmakingEnqueueResultAndRoom() ;

/// @brief Method GetDataFromMessage addr 0x258244c size 0x9c virtual true final false
 Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom, "Oculus.Platform", "MessageWithMatchmakingEnqueueResultAndRoom");
