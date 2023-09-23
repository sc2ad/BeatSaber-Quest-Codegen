#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__SendInvitesResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class SendInvitesResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithSendInvitesResult;
}
// Type: Oculus.Platform::MessageWithSendInvitesResult
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13474)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4475 }), TypeDefinitionIndex(TypeDefinitionIndex(13203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13279))
// CS Name: Oculus.Platform.MessageWithSendInvitesResult
class CORDL_TYPE MessageWithSendInvitesResult : public Oculus::Platform::Message_1<Oculus::Platform::Models::SendInvitesResult> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithSendInvitesResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithSendInvitesResult", modifiers: " const&", def_value: None }]
constexpr MessageWithSendInvitesResult(MessageWithSendInvitesResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithSendInvitesResult", modifiers: "&&", def_value: None }]
constexpr MessageWithSendInvitesResult(MessageWithSendInvitesResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithSendInvitesResult(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::SendInvitesResult>(ptr) {
}


  constexpr MessageWithSendInvitesResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithSendInvitesResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithSendInvitesResult& operator=(MessageWithSendInvitesResult&& o) noexcept = default;
  constexpr MessageWithSendInvitesResult& operator=(MessageWithSendInvitesResult const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithSendInvitesResult(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257f240 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetSendInvitesResult addr 0x2583ae0 size 0x3c virtual true final false
 Oculus::Platform::Models::SendInvitesResult GetSendInvitesResult() ;

/// @brief Method GetDataFromMessage addr 0x2583b1c size 0x9c virtual true final false
 Oculus::Platform::Models::SendInvitesResult GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithSendInvitesResult);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithSendInvitesResult, "Oculus.Platform", "MessageWithSendInvitesResult");
