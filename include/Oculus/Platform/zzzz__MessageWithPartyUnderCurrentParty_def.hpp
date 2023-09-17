#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__Party_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class Party;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithPartyUnderCurrentParty;
}
// Type: Oculus.Platform::MessageWithPartyUnderCurrentParty
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13203)), TypeDefinitionIndex(TypeDefinitionIndex(13456)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4466 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13264))
// CS Name: Oculus.Platform.MessageWithPartyUnderCurrentParty
class CORDL_TYPE MessageWithPartyUnderCurrentParty : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::Party> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithPartyUnderCurrentParty() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithPartyUnderCurrentParty", modifiers: " const&", def_value: None }]
constexpr MessageWithPartyUnderCurrentParty(MessageWithPartyUnderCurrentParty const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithPartyUnderCurrentParty", modifiers: "&&", def_value: None }]
constexpr MessageWithPartyUnderCurrentParty(MessageWithPartyUnderCurrentParty&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithPartyUnderCurrentParty(void* ptr) noexcept : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::Party>(ptr) {
}


  constexpr MessageWithPartyUnderCurrentParty& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithPartyUnderCurrentParty& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithPartyUnderCurrentParty& operator=(MessageWithPartyUnderCurrentParty&& o) noexcept = default;
  constexpr MessageWithPartyUnderCurrentParty& operator=(MessageWithPartyUnderCurrentParty const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithPartyUnderCurrentParty(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257ed70 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetParty addr 0x2582de0 size 0x3c virtual true final false
 ::Oculus::Platform::Models::Party GetParty() ;

/// @brief Method GetDataFromMessage addr 0x2582e1c size 0x9c virtual true final false
 ::Oculus::Platform::Models::Party GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::MessageWithPartyUnderCurrentParty);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithPartyUnderCurrentParty, "Oculus.Platform", "MessageWithPartyUnderCurrentParty");
