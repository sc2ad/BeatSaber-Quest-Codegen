#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__PartyUpdateNotification_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class PartyUpdateNotification;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithPartyUpdateNotification;
}
// Type: Oculus.Platform::MessageWithPartyUpdateNotification
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13203)), TypeDefinitionIndex(TypeDefinitionIndex(13458)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 949 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13266))
// CS Name: Oculus.Platform.MessageWithPartyUpdateNotification
class CORDL_TYPE MessageWithPartyUpdateNotification : public Oculus::Platform::Message_1<Oculus::Platform::Models::PartyUpdateNotification> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithPartyUpdateNotification() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithPartyUpdateNotification", modifiers: " const&", def_value: None }]
constexpr MessageWithPartyUpdateNotification(MessageWithPartyUpdateNotification const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithPartyUpdateNotification", modifiers: "&&", def_value: None }]
constexpr MessageWithPartyUpdateNotification(MessageWithPartyUpdateNotification&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithPartyUpdateNotification(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::PartyUpdateNotification>(ptr) {
}


  constexpr MessageWithPartyUpdateNotification& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithPartyUpdateNotification& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithPartyUpdateNotification& operator=(MessageWithPartyUpdateNotification&& o) noexcept = default;
  constexpr MessageWithPartyUpdateNotification& operator=(MessageWithPartyUpdateNotification const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithPartyUpdateNotification(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257edc8 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetPartyUpdateNotification addr 0x2582fe8 size 0x3c virtual true final false
 Oculus::Platform::Models::PartyUpdateNotification GetPartyUpdateNotification() ;

/// @brief Method GetDataFromMessage addr 0x2583024 size 0x9c virtual true final false
 Oculus::Platform::Models::PartyUpdateNotification GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithPartyUpdateNotification);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithPartyUpdateNotification, "Oculus.Platform", "MessageWithPartyUpdateNotification");
