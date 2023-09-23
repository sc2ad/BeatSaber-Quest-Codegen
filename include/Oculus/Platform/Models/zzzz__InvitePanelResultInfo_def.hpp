#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class InvitePanelResultInfo;
}
// Type: Oculus.Platform.Models::InvitePanelResultInfo
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13419))
// CS Name: Oculus.Platform.Models.InvitePanelResultInfo
class CORDL_TYPE InvitePanelResultInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~InvitePanelResultInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvitePanelResultInfo", modifiers: " const&", def_value: None }]
constexpr InvitePanelResultInfo(InvitePanelResultInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvitePanelResultInfo", modifiers: "&&", def_value: None }]
constexpr InvitePanelResultInfo(InvitePanelResultInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvitePanelResultInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InvitePanelResultInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvitePanelResultInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvitePanelResultInfo& operator=(InvitePanelResultInfo&& o) noexcept = default;
  constexpr InvitePanelResultInfo& operator=(InvitePanelResultInfo const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_InvitesSent, put=__set_InvitesSent))  InvitesSent;

constexpr void __set_InvitesSent(bool value) ;

constexpr bool __get_InvitesSent() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit InvitePanelResultInfo(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259f0e8 size 0x7c virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::InvitePanelResultInfo);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::InvitePanelResultInfo, "Oculus.Platform.Models", "InvitePanelResultInfo");
