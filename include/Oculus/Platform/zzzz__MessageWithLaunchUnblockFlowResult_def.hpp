#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchUnblockFlowResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class LaunchUnblockFlowResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLaunchUnblockFlowResult;
}
// Type: Oculus.Platform::MessageWithLaunchUnblockFlowResult
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13203)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4450 }), TypeDefinitionIndex(TypeDefinitionIndex(13426))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13244))
// CS Name: Oculus.Platform.MessageWithLaunchUnblockFlowResult
class CORDL_TYPE MessageWithLaunchUnblockFlowResult : public Oculus::Platform::Message_1<Oculus::Platform::Models::LaunchUnblockFlowResult> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithLaunchUnblockFlowResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchUnblockFlowResult", modifiers: " const&", def_value: None }]
constexpr MessageWithLaunchUnblockFlowResult(MessageWithLaunchUnblockFlowResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchUnblockFlowResult", modifiers: "&&", def_value: None }]
constexpr MessageWithLaunchUnblockFlowResult(MessageWithLaunchUnblockFlowResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithLaunchUnblockFlowResult(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::LaunchUnblockFlowResult>(ptr) {
}


  constexpr MessageWithLaunchUnblockFlowResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithLaunchUnblockFlowResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithLaunchUnblockFlowResult& operator=(MessageWithLaunchUnblockFlowResult&& o) noexcept = default;
  constexpr MessageWithLaunchUnblockFlowResult& operator=(MessageWithLaunchUnblockFlowResult const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithLaunchUnblockFlowResult(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257e8a0 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetLaunchUnblockFlowResult addr 0x2581a40 size 0x3c virtual true final false
 Oculus::Platform::Models::LaunchUnblockFlowResult GetLaunchUnblockFlowResult() ;

/// @brief Method GetDataFromMessage addr 0x2581a7c size 0x9c virtual true final false
 Oculus::Platform::Models::LaunchUnblockFlowResult GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithLaunchUnblockFlowResult);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithLaunchUnblockFlowResult, "Oculus.Platform", "MessageWithLaunchUnblockFlowResult");
