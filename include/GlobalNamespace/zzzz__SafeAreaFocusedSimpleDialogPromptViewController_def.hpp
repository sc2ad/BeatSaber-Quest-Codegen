#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SimpleDialogPromptViewController_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class SafeAreaFocusedSimpleDialogPromptViewController;
}
// Type: ::SafeAreaFocusedSimpleDialogPromptViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5850))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5841))
// CS Name: SafeAreaFocusedSimpleDialogPromptViewController
class CORDL_TYPE SafeAreaFocusedSimpleDialogPromptViewController : public GlobalNamespace::SimpleDialogPromptViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~SafeAreaFocusedSimpleDialogPromptViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeAreaFocusedSimpleDialogPromptViewController", modifiers: " const&", def_value: None }]
constexpr SafeAreaFocusedSimpleDialogPromptViewController(SafeAreaFocusedSimpleDialogPromptViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeAreaFocusedSimpleDialogPromptViewController", modifiers: "&&", def_value: None }]
constexpr SafeAreaFocusedSimpleDialogPromptViewController(SafeAreaFocusedSimpleDialogPromptViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SafeAreaFocusedSimpleDialogPromptViewController(void* ptr) noexcept : GlobalNamespace::SimpleDialogPromptViewController(ptr) {
}


  constexpr SafeAreaFocusedSimpleDialogPromptViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SafeAreaFocusedSimpleDialogPromptViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SafeAreaFocusedSimpleDialogPromptViewController& operator=(SafeAreaFocusedSimpleDialogPromptViewController&& o) noexcept = default;
  constexpr SafeAreaFocusedSimpleDialogPromptViewController& operator=(SafeAreaFocusedSimpleDialogPromptViewController const& o) noexcept = default;
                


// Methods

static GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController New_ctor() ;

/// @brief Method .ctor addr 0x2180d34 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController, "", "SafeAreaFocusedSimpleDialogPromptViewController");
