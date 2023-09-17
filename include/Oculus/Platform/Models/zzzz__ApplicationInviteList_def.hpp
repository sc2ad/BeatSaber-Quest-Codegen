#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationInvite_def.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform::Models {
class ApplicationInviteList;
}
// Type: Oculus.Platform.Models::ApplicationInviteList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13410)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13410), inst: 1129 }), TypeDefinitionIndex(TypeDefinitionIndex(13385))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13386))
// CS Name: Oculus.Platform.Models.ApplicationInviteList
class CORDL_TYPE ApplicationInviteList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::ApplicationInvite> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ApplicationInviteList() = default;

// Ctor Parameters [CppParam { name: "", ty: "ApplicationInviteList", modifiers: " const&", def_value: None }]
constexpr ApplicationInviteList(ApplicationInviteList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ApplicationInviteList", modifiers: "&&", def_value: None }]
constexpr ApplicationInviteList(ApplicationInviteList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ApplicationInviteList(void* ptr) noexcept : ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::ApplicationInvite>(ptr) {
}


  constexpr ApplicationInviteList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ApplicationInviteList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ApplicationInviteList& operator=(ApplicationInviteList&& o) noexcept = default;
  constexpr ApplicationInviteList& operator=(ApplicationInviteList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "a", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ApplicationInviteList(::cordl_internals::intptr_t a) ;

/// @brief Method .ctor addr 0x259c69c size 0x25c virtual false final false
 void _ctor(::cordl_internals::intptr_t a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Models::ApplicationInviteList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::ApplicationInviteList, "Oculus.Platform.Models", "ApplicationInviteList");
