#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__GroupPresenceLeaveIntent_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class GroupPresenceLeaveIntent;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithGroupPresenceLeaveIntent;
}
// Type: Oculus.Platform::MessageWithGroupPresenceLeaveIntent
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 941 }), TypeDefinitionIndex(TypeDefinitionIndex(13415)), TypeDefinitionIndex(TypeDefinitionIndex(13203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13237))
// CS Name: Oculus.Platform.MessageWithGroupPresenceLeaveIntent
class CORDL_TYPE MessageWithGroupPresenceLeaveIntent : public Oculus::Platform::Message_1<Oculus::Platform::Models::GroupPresenceLeaveIntent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithGroupPresenceLeaveIntent() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithGroupPresenceLeaveIntent", modifiers: " const&", def_value: None }]
constexpr MessageWithGroupPresenceLeaveIntent(MessageWithGroupPresenceLeaveIntent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithGroupPresenceLeaveIntent", modifiers: "&&", def_value: None }]
constexpr MessageWithGroupPresenceLeaveIntent(MessageWithGroupPresenceLeaveIntent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithGroupPresenceLeaveIntent(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::GroupPresenceLeaveIntent>(ptr) {
}


  constexpr MessageWithGroupPresenceLeaveIntent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithGroupPresenceLeaveIntent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithGroupPresenceLeaveIntent& operator=(MessageWithGroupPresenceLeaveIntent&& o) noexcept = default;
  constexpr MessageWithGroupPresenceLeaveIntent& operator=(MessageWithGroupPresenceLeaveIntent const& o) noexcept = default;
                


// Methods

static Oculus::Platform::MessageWithGroupPresenceLeaveIntent New_ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257e6e8 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetGroupPresenceLeaveIntent addr 0x25813a8 size 0x3c virtual true final false
 Oculus::Platform::Models::GroupPresenceLeaveIntent GetGroupPresenceLeaveIntent() ;

/// @brief Method GetDataFromMessage addr 0x25813e4 size 0x9c virtual true final false
 Oculus::Platform::Models::GroupPresenceLeaveIntent GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithGroupPresenceLeaveIntent);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithGroupPresenceLeaveIntent, "Oculus.Platform", "MessageWithGroupPresenceLeaveIntent");
