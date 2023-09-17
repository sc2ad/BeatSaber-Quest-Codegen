#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueueResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class MatchmakingEnqueueResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithMatchmakingEnqueueResult;
}
// Type: Oculus.Platform::MessageWithMatchmakingEnqueueResult
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4458 }), TypeDefinitionIndex(TypeDefinitionIndex(13443)), TypeDefinitionIndex(TypeDefinitionIndex(13203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13253))
// CS Name: Oculus.Platform.MessageWithMatchmakingEnqueueResult
class CORDL_TYPE MessageWithMatchmakingEnqueueResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::MatchmakingEnqueueResult> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithMatchmakingEnqueueResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithMatchmakingEnqueueResult", modifiers: " const&", def_value: None }]
constexpr MessageWithMatchmakingEnqueueResult(MessageWithMatchmakingEnqueueResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithMatchmakingEnqueueResult", modifiers: "&&", def_value: None }]
constexpr MessageWithMatchmakingEnqueueResult(MessageWithMatchmakingEnqueueResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithMatchmakingEnqueueResult(void* ptr) noexcept : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::MatchmakingEnqueueResult>(ptr) {
}


  constexpr MessageWithMatchmakingEnqueueResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithMatchmakingEnqueueResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithMatchmakingEnqueueResult& operator=(MessageWithMatchmakingEnqueueResult&& o) noexcept = default;
  constexpr MessageWithMatchmakingEnqueueResult& operator=(MessageWithMatchmakingEnqueueResult const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithMatchmakingEnqueueResult(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257eb08 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetMatchmakingEnqueueResult addr 0x2582338 size 0x3c virtual true final false
 ::Oculus::Platform::Models::MatchmakingEnqueueResult GetMatchmakingEnqueueResult() ;

/// @brief Method GetDataFromMessage addr 0x2582374 size 0x9c virtual true final false
 ::Oculus::Platform::Models::MatchmakingEnqueueResult GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::MessageWithMatchmakingEnqueueResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithMatchmakingEnqueueResult, "Oculus.Platform", "MessageWithMatchmakingEnqueueResult");
