#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchBlockFlowResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class LaunchBlockFlowResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLaunchBlockFlowResult;
}
// Type: Oculus.Platform::MessageWithLaunchBlockFlowResult
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13203)), TypeDefinitionIndex(TypeDefinitionIndex(13421)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4447 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13240))
// CS Name: Oculus.Platform.MessageWithLaunchBlockFlowResult
class CORDL_TYPE MessageWithLaunchBlockFlowResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchBlockFlowResult> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithLaunchBlockFlowResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchBlockFlowResult", modifiers: " const&", def_value: None }]
constexpr MessageWithLaunchBlockFlowResult(MessageWithLaunchBlockFlowResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchBlockFlowResult", modifiers: "&&", def_value: None }]
constexpr MessageWithLaunchBlockFlowResult(MessageWithLaunchBlockFlowResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithLaunchBlockFlowResult(void* ptr) noexcept : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchBlockFlowResult>(ptr) {
}


  constexpr MessageWithLaunchBlockFlowResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithLaunchBlockFlowResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithLaunchBlockFlowResult& operator=(MessageWithLaunchBlockFlowResult&& o) noexcept = default;
  constexpr MessageWithLaunchBlockFlowResult& operator=(MessageWithLaunchBlockFlowResult const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithLaunchBlockFlowResult(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257e798 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetLaunchBlockFlowResult addr 0x2581688 size 0x3c virtual true final false
 ::Oculus::Platform::Models::LaunchBlockFlowResult GetLaunchBlockFlowResult() ;

/// @brief Method GetDataFromMessage addr 0x25816c4 size 0x9c virtual true final false
 ::Oculus::Platform::Models::LaunchBlockFlowResult GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::MessageWithLaunchBlockFlowResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLaunchBlockFlowResult, "Oculus.Platform", "MessageWithLaunchBlockFlowResult");
