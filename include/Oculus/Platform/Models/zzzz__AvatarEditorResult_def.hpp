#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class AvatarEditorResult;
}
// Type: Oculus.Platform.Models::AvatarEditorResult
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13394))
// CS Name: Oculus.Platform.Models.AvatarEditorResult
class CORDL_TYPE AvatarEditorResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AvatarEditorResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarEditorResult", modifiers: " const&", def_value: None }]
constexpr AvatarEditorResult(AvatarEditorResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarEditorResult", modifiers: "&&", def_value: None }]
constexpr AvatarEditorResult(AvatarEditorResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AvatarEditorResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AvatarEditorResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AvatarEditorResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AvatarEditorResult& operator=(AvatarEditorResult&& o) noexcept = default;
  constexpr AvatarEditorResult& operator=(AvatarEditorResult const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_RequestSent, put=__set_RequestSent))  RequestSent;

constexpr void __set_RequestSent(bool value) ;

constexpr bool __get_RequestSent() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit AvatarEditorResult(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259d078 size 0x7c virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::AvatarEditorResult);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::AvatarEditorResult, "Oculus.Platform.Models", "AvatarEditorResult");
