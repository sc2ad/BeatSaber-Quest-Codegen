#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__UserProof_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class UserProof;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithUserProof;
}
// Type: Oculus.Platform::MessageWithUserProof
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4479 }), TypeDefinitionIndex(TypeDefinitionIndex(13487)), TypeDefinitionIndex(TypeDefinitionIndex(13203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13288))
// CS Name: Oculus.Platform.MessageWithUserProof
class CORDL_TYPE MessageWithUserProof : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithUserProof() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithUserProof", modifiers: " const&", def_value: None }]
constexpr MessageWithUserProof(MessageWithUserProof const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithUserProof", modifiers: "&&", def_value: None }]
constexpr MessageWithUserProof(MessageWithUserProof&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithUserProof(void* ptr) noexcept : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof>(ptr) {
}


  constexpr MessageWithUserProof& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithUserProof& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithUserProof& operator=(MessageWithUserProof&& o) noexcept = default;
  constexpr MessageWithUserProof& operator=(MessageWithUserProof const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithUserProof(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257f558 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetUserProof addr 0x2584230 size 0x3c virtual true final false
 ::Oculus::Platform::Models::UserProof GetUserProof() ;

/// @brief Method GetDataFromMessage addr 0x258426c size 0x9c virtual true final false
 ::Oculus::Platform::Models::UserProof GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::MessageWithUserProof);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithUserProof, "Oculus.Platform", "MessageWithUserProof");
