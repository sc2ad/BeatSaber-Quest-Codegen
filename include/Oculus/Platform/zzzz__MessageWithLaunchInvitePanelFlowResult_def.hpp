#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchInvitePanelFlowResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class LaunchInvitePanelFlowResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLaunchInvitePanelFlowResult;
}
// Type: Oculus.Platform::MessageWithLaunchInvitePanelFlowResult
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13203)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 943 }), TypeDefinitionIndex(TypeDefinitionIndex(13424))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13242))
// CS Name: Oculus.Platform.MessageWithLaunchInvitePanelFlowResult
class CORDL_TYPE MessageWithLaunchInvitePanelFlowResult : public Oculus::Platform::Message_1<Oculus::Platform::Models::LaunchInvitePanelFlowResult> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithLaunchInvitePanelFlowResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchInvitePanelFlowResult", modifiers: " const&", def_value: None }]
constexpr MessageWithLaunchInvitePanelFlowResult(MessageWithLaunchInvitePanelFlowResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchInvitePanelFlowResult", modifiers: "&&", def_value: None }]
constexpr MessageWithLaunchInvitePanelFlowResult(MessageWithLaunchInvitePanelFlowResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithLaunchInvitePanelFlowResult(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::LaunchInvitePanelFlowResult>(ptr) {
}


  constexpr MessageWithLaunchInvitePanelFlowResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithLaunchInvitePanelFlowResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithLaunchInvitePanelFlowResult& operator=(MessageWithLaunchInvitePanelFlowResult&& o) noexcept = default;
  constexpr MessageWithLaunchInvitePanelFlowResult& operator=(MessageWithLaunchInvitePanelFlowResult const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithLaunchInvitePanelFlowResult(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257e848 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetLaunchInvitePanelFlowResult addr 0x2581838 size 0x3c virtual true final false
 Oculus::Platform::Models::LaunchInvitePanelFlowResult GetLaunchInvitePanelFlowResult() ;

/// @brief Method GetDataFromMessage addr 0x2581874 size 0x9c virtual true final false
 Oculus::Platform::Models::LaunchInvitePanelFlowResult GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithLaunchInvitePanelFlowResult);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithLaunchInvitePanelFlowResult, "Oculus.Platform", "MessageWithLaunchInvitePanelFlowResult");
