#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingStatus_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class LivestreamingStatus;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLivestreamingStatus;
}
// Type: Oculus.Platform::MessageWithLivestreamingStatus
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13203)), TypeDefinitionIndex(TypeDefinitionIndex(13435)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 945 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13250))
// CS Name: Oculus.Platform.MessageWithLivestreamingStatus
class CORDL_TYPE MessageWithLivestreamingStatus : public Oculus::Platform::Message_1<Oculus::Platform::Models::LivestreamingStatus> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithLivestreamingStatus() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLivestreamingStatus", modifiers: " const&", def_value: None }]
constexpr MessageWithLivestreamingStatus(MessageWithLivestreamingStatus const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLivestreamingStatus", modifiers: "&&", def_value: None }]
constexpr MessageWithLivestreamingStatus(MessageWithLivestreamingStatus&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithLivestreamingStatus(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::LivestreamingStatus>(ptr) {
}


  constexpr MessageWithLivestreamingStatus& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithLivestreamingStatus& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithLivestreamingStatus& operator=(MessageWithLivestreamingStatus&& o) noexcept = default;
  constexpr MessageWithLivestreamingStatus& operator=(MessageWithLivestreamingStatus const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithLivestreamingStatus(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257ea00 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetLivestreamingStatus addr 0x2582058 size 0x3c virtual true final false
 Oculus::Platform::Models::LivestreamingStatus GetLivestreamingStatus() ;

/// @brief Method GetDataFromMessage addr 0x2582094 size 0x9c virtual true final false
 Oculus::Platform::Models::LivestreamingStatus GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithLivestreamingStatus);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithLivestreamingStatus, "Oculus.Platform", "MessageWithLivestreamingStatus");
