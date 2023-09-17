#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__RejoinDialogResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class RejoinDialogResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithRejoinDialogResult;
}
// Type: Oculus.Platform::MessageWithRejoinDialogResult
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13467)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4471 }), TypeDefinitionIndex(TypeDefinitionIndex(13203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13271))
// CS Name: Oculus.Platform.MessageWithRejoinDialogResult
class CORDL_TYPE MessageWithRejoinDialogResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::RejoinDialogResult> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithRejoinDialogResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithRejoinDialogResult", modifiers: " const&", def_value: None }]
constexpr MessageWithRejoinDialogResult(MessageWithRejoinDialogResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithRejoinDialogResult", modifiers: "&&", def_value: None }]
constexpr MessageWithRejoinDialogResult(MessageWithRejoinDialogResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithRejoinDialogResult(void* ptr) noexcept : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::RejoinDialogResult>(ptr) {
}


  constexpr MessageWithRejoinDialogResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithRejoinDialogResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithRejoinDialogResult& operator=(MessageWithRejoinDialogResult&& o) noexcept = default;
  constexpr MessageWithRejoinDialogResult& operator=(MessageWithRejoinDialogResult const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithRejoinDialogResult(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257ef80 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetRejoinDialogResult addr 0x2583420 size 0x3c virtual true final false
 ::Oculus::Platform::Models::RejoinDialogResult GetRejoinDialogResult() ;

/// @brief Method GetDataFromMessage addr 0x258345c size 0x9c virtual true final false
 ::Oculus::Platform::Models::RejoinDialogResult GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::MessageWithRejoinDialogResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithRejoinDialogResult, "Oculus.Platform", "MessageWithRejoinDialogResult");
