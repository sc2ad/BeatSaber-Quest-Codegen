#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingApplicationStatus_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class LivestreamingApplicationStatus;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLivestreamingApplicationStatus;
}
// Type: Oculus.Platform::MessageWithLivestreamingApplicationStatus
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13433)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4453 }), TypeDefinitionIndex(TypeDefinitionIndex(13203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13248))
// CS Name: Oculus.Platform.MessageWithLivestreamingApplicationStatus
class CORDL_TYPE MessageWithLivestreamingApplicationStatus : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LivestreamingApplicationStatus> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithLivestreamingApplicationStatus() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLivestreamingApplicationStatus", modifiers: " const&", def_value: None }]
constexpr MessageWithLivestreamingApplicationStatus(MessageWithLivestreamingApplicationStatus const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLivestreamingApplicationStatus", modifiers: "&&", def_value: None }]
constexpr MessageWithLivestreamingApplicationStatus(MessageWithLivestreamingApplicationStatus&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithLivestreamingApplicationStatus(void* ptr) noexcept : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LivestreamingApplicationStatus>(ptr) {
}


  constexpr MessageWithLivestreamingApplicationStatus& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithLivestreamingApplicationStatus& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithLivestreamingApplicationStatus& operator=(MessageWithLivestreamingApplicationStatus&& o) noexcept = default;
  constexpr MessageWithLivestreamingApplicationStatus& operator=(MessageWithLivestreamingApplicationStatus const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithLivestreamingApplicationStatus(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x2581df8 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetLivestreamingApplicationStatus addr 0x2581e50 size 0x3c virtual true final false
 ::Oculus::Platform::Models::LivestreamingApplicationStatus GetLivestreamingApplicationStatus() ;

/// @brief Method GetDataFromMessage addr 0x2581e8c size 0x9c virtual true final false
 ::Oculus::Platform::Models::LivestreamingApplicationStatus GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::MessageWithLivestreamingApplicationStatus);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLivestreamingApplicationStatus, "Oculus.Platform", "MessageWithLivestreamingApplicationStatus");
