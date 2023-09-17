#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__Challenge_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class Challenge;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithChallenge;
}
// Type: Oculus.Platform::MessageWithChallenge
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 1133 }), TypeDefinitionIndex(TypeDefinitionIndex(13203)), TypeDefinitionIndex(TypeDefinitionIndex(13401))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13225))
// CS Name: Oculus.Platform.MessageWithChallenge
class CORDL_TYPE MessageWithChallenge : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::Challenge> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithChallenge() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithChallenge", modifiers: " const&", def_value: None }]
constexpr MessageWithChallenge(MessageWithChallenge const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithChallenge", modifiers: "&&", def_value: None }]
constexpr MessageWithChallenge(MessageWithChallenge&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithChallenge(void* ptr) noexcept : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::Challenge>(ptr) {
}


  constexpr MessageWithChallenge& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithChallenge& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithChallenge& operator=(MessageWithChallenge&& o) noexcept = default;
  constexpr MessageWithChallenge& operator=(MessageWithChallenge const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithChallenge(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257e2c8 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetChallenge addr 0x2580a08 size 0x3c virtual true final false
 ::Oculus::Platform::Models::Challenge GetChallenge() ;

/// @brief Method GetDataFromMessage addr 0x2580a44 size 0x9c virtual true final false
 ::Oculus::Platform::Models::Challenge GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::MessageWithChallenge);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithChallenge, "Oculus.Platform", "MessageWithChallenge");
