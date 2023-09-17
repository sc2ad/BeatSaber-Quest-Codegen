#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform::Models {
class RejoinDialogResult;
}
// Type: Oculus.Platform.Models::RejoinDialogResult
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13467))
// CS Name: Oculus.Platform.Models.RejoinDialogResult
class CORDL_TYPE RejoinDialogResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RejoinDialogResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "RejoinDialogResult", modifiers: " const&", def_value: None }]
constexpr RejoinDialogResult(RejoinDialogResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RejoinDialogResult", modifiers: "&&", def_value: None }]
constexpr RejoinDialogResult(RejoinDialogResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RejoinDialogResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RejoinDialogResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RejoinDialogResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RejoinDialogResult& operator=(RejoinDialogResult&& o) noexcept = default;
  constexpr RejoinDialogResult& operator=(RejoinDialogResult const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_RejoinSelected, put=__set_RejoinSelected))  RejoinSelected;

constexpr void __set_RejoinSelected(bool value) ;

constexpr bool __get_RejoinSelected() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit RejoinDialogResult(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a2a30 size 0x7c virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Models::RejoinDialogResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::RejoinDialogResult, "Oculus.Platform.Models", "RejoinDialogResult");
