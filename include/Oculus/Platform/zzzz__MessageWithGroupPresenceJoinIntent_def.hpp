#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__GroupPresenceJoinIntent_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class GroupPresenceJoinIntent;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithGroupPresenceJoinIntent;
}
// Type: Oculus.Platform::MessageWithGroupPresenceJoinIntent
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13414)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 940 }), TypeDefinitionIndex(TypeDefinitionIndex(13203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13236))
// CS Name: Oculus.Platform.MessageWithGroupPresenceJoinIntent
class CORDL_TYPE MessageWithGroupPresenceJoinIntent : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithGroupPresenceJoinIntent() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithGroupPresenceJoinIntent", modifiers: " const&", def_value: None }]
constexpr MessageWithGroupPresenceJoinIntent(MessageWithGroupPresenceJoinIntent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithGroupPresenceJoinIntent", modifiers: "&&", def_value: None }]
constexpr MessageWithGroupPresenceJoinIntent(MessageWithGroupPresenceJoinIntent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithGroupPresenceJoinIntent(void* ptr) noexcept : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent>(ptr) {
}


  constexpr MessageWithGroupPresenceJoinIntent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithGroupPresenceJoinIntent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithGroupPresenceJoinIntent& operator=(MessageWithGroupPresenceJoinIntent&& o) noexcept = default;
  constexpr MessageWithGroupPresenceJoinIntent& operator=(MessageWithGroupPresenceJoinIntent const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithGroupPresenceJoinIntent(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257e690 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetGroupPresenceJoinIntent addr 0x25812d0 size 0x3c virtual true final false
 ::Oculus::Platform::Models::GroupPresenceJoinIntent GetGroupPresenceJoinIntent() ;

/// @brief Method GetDataFromMessage addr 0x258130c size 0x9c virtual true final false
 ::Oculus::Platform::Models::GroupPresenceJoinIntent GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::MessageWithGroupPresenceJoinIntent);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithGroupPresenceJoinIntent, "Oculus.Platform", "MessageWithGroupPresenceJoinIntent");
