#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class ApplicationInviteList;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class SendInvitesResult;
}
// Type: Oculus.Platform.Models::SendInvitesResult
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13474))
// CS Name: Oculus.Platform.Models.SendInvitesResult
class CORDL_TYPE SendInvitesResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SendInvitesResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "SendInvitesResult", modifiers: " const&", def_value: None }]
constexpr SendInvitesResult(SendInvitesResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SendInvitesResult", modifiers: "&&", def_value: None }]
constexpr SendInvitesResult(SendInvitesResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SendInvitesResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SendInvitesResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SendInvitesResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SendInvitesResult& operator=(SendInvitesResult&& o) noexcept = default;
  constexpr SendInvitesResult& operator=(SendInvitesResult const& o) noexcept = default;
                


// Fields

 Oculus::Platform::Models::ApplicationInviteList __declspec(property(get=__get_Invites, put=__set_Invites))  Invites;

constexpr void __set_Invites(Oculus::Platform::Models::ApplicationInviteList value) ;

constexpr Oculus::Platform::Models::ApplicationInviteList __get_Invites() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit SendInvitesResult(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a32b0 size 0xb0 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::SendInvitesResult);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::SendInvitesResult, "Oculus.Platform.Models", "SendInvitesResult");
