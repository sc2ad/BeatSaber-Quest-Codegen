#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
class DropdownMenuItem;
}
// Type: UnityEngine.UIElements::DropdownMenuItem
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7032))
// CS Name: UnityEngine.UIElements.DropdownMenuItem
class CORDL_TYPE DropdownMenuItem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DropdownMenuItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "DropdownMenuItem", modifiers: " const&", def_value: None }]
constexpr DropdownMenuItem(DropdownMenuItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DropdownMenuItem", modifiers: "&&", def_value: None }]
constexpr DropdownMenuItem(DropdownMenuItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DropdownMenuItem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DropdownMenuItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DropdownMenuItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DropdownMenuItem& operator=(DropdownMenuItem&& o) noexcept = default;
  constexpr DropdownMenuItem& operator=(DropdownMenuItem const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit DropdownMenuItem() ;

/// @brief Method .ctor addr 0x2c8fc58 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::DropdownMenuItem);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::DropdownMenuItem, "UnityEngine.UIElements", "DropdownMenuItem");
