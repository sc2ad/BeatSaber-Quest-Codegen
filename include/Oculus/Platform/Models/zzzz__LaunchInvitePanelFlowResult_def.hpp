#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class UserList;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class LaunchInvitePanelFlowResult;
}
// Type: Oculus.Platform.Models::LaunchInvitePanelFlowResult
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13424))
// CS Name: Oculus.Platform.Models.LaunchInvitePanelFlowResult
class CORDL_TYPE LaunchInvitePanelFlowResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LaunchInvitePanelFlowResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "LaunchInvitePanelFlowResult", modifiers: " const&", def_value: None }]
constexpr LaunchInvitePanelFlowResult(LaunchInvitePanelFlowResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LaunchInvitePanelFlowResult", modifiers: "&&", def_value: None }]
constexpr LaunchInvitePanelFlowResult(LaunchInvitePanelFlowResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LaunchInvitePanelFlowResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LaunchInvitePanelFlowResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LaunchInvitePanelFlowResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LaunchInvitePanelFlowResult& operator=(LaunchInvitePanelFlowResult&& o) noexcept = default;
  constexpr LaunchInvitePanelFlowResult& operator=(LaunchInvitePanelFlowResult const& o) noexcept = default;
                


// Fields

 Oculus::Platform::Models::UserList __declspec(property(get=__get_InvitedUsers, put=__set_InvitedUsers))  InvitedUsers;

constexpr void __set_InvitedUsers(Oculus::Platform::Models::UserList value) ;

constexpr Oculus::Platform::Models::UserList __get_InvitedUsers() const;


// Methods

static Oculus::Platform::Models::LaunchInvitePanelFlowResult New_ctor(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259f3d4 size 0xb0 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::LaunchInvitePanelFlowResult);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LaunchInvitePanelFlowResult, "Oculus.Platform.Models", "LaunchInvitePanelFlowResult");
