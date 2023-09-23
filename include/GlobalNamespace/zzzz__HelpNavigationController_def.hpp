#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__NavigationController_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class HelpNavigationController;
}
// Type: ::HelpNavigationController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13639))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5742))
// CS Name: HelpNavigationController
class CORDL_TYPE HelpNavigationController : public HMUI::NavigationController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~HelpNavigationController() = default;

// Ctor Parameters [CppParam { name: "", ty: "HelpNavigationController", modifiers: " const&", def_value: None }]
constexpr HelpNavigationController(HelpNavigationController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HelpNavigationController", modifiers: "&&", def_value: None }]
constexpr HelpNavigationController(HelpNavigationController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HelpNavigationController(void* ptr) noexcept : HMUI::NavigationController(ptr) {
}


  constexpr HelpNavigationController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HelpNavigationController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HelpNavigationController& operator=(HelpNavigationController&& o) noexcept = default;
  constexpr HelpNavigationController& operator=(HelpNavigationController const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit HelpNavigationController() ;

/// @brief Method .ctor addr 0x215fd38 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::HelpNavigationController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HelpNavigationController, "", "HelpNavigationController");
