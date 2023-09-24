#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchFriendRequestFlowResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class LaunchFriendRequestFlowResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLaunchFriendRequestFlowResult;
}
// Type: Oculus.Platform::MessageWithLaunchFriendRequestFlowResult
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13203)), TypeDefinitionIndex(TypeDefinitionIndex(13423)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4448 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13241))
// CS Name: Oculus.Platform.MessageWithLaunchFriendRequestFlowResult
class CORDL_TYPE MessageWithLaunchFriendRequestFlowResult : public Oculus::Platform::Message_1<Oculus::Platform::Models::LaunchFriendRequestFlowResult> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithLaunchFriendRequestFlowResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchFriendRequestFlowResult", modifiers: " const&", def_value: None }]
constexpr MessageWithLaunchFriendRequestFlowResult(MessageWithLaunchFriendRequestFlowResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchFriendRequestFlowResult", modifiers: "&&", def_value: None }]
constexpr MessageWithLaunchFriendRequestFlowResult(MessageWithLaunchFriendRequestFlowResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithLaunchFriendRequestFlowResult(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::LaunchFriendRequestFlowResult>(ptr) {
}


  constexpr MessageWithLaunchFriendRequestFlowResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithLaunchFriendRequestFlowResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithLaunchFriendRequestFlowResult& operator=(MessageWithLaunchFriendRequestFlowResult&& o) noexcept = default;
  constexpr MessageWithLaunchFriendRequestFlowResult& operator=(MessageWithLaunchFriendRequestFlowResult const& o) noexcept = default;
                


// Methods

static Oculus::Platform::MessageWithLaunchFriendRequestFlowResult New_ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257e7f0 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetLaunchFriendRequestFlowResult addr 0x2581760 size 0x3c virtual true final false
 Oculus::Platform::Models::LaunchFriendRequestFlowResult GetLaunchFriendRequestFlowResult() ;

/// @brief Method GetDataFromMessage addr 0x258179c size 0x9c virtual true final false
 Oculus::Platform::Models::LaunchFriendRequestFlowResult GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithLaunchFriendRequestFlowResult);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithLaunchFriendRequestFlowResult, "Oculus.Platform", "MessageWithLaunchFriendRequestFlowResult");
