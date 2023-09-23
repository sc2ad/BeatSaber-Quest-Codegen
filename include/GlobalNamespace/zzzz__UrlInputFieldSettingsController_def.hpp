#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__InputFieldSettingsController_def.hpp"
namespace HMUI {
class InputFieldView;
}
// Forward declare root types
namespace GlobalNamespace {
class UrlInputFieldSettingsController;
}
// Type: ::UrlInputFieldSettingsController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5685))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5692))
// CS Name: UrlInputFieldSettingsController
class CORDL_TYPE UrlInputFieldSettingsController : public GlobalNamespace::InputFieldSettingsController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~UrlInputFieldSettingsController() = default;

// Ctor Parameters [CppParam { name: "", ty: "UrlInputFieldSettingsController", modifiers: " const&", def_value: None }]
constexpr UrlInputFieldSettingsController(UrlInputFieldSettingsController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UrlInputFieldSettingsController", modifiers: "&&", def_value: None }]
constexpr UrlInputFieldSettingsController(UrlInputFieldSettingsController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UrlInputFieldSettingsController(void* ptr) noexcept : GlobalNamespace::InputFieldSettingsController(ptr) {
}


  constexpr UrlInputFieldSettingsController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UrlInputFieldSettingsController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UrlInputFieldSettingsController& operator=(UrlInputFieldSettingsController&& o) noexcept = default;
  constexpr UrlInputFieldSettingsController& operator=(UrlInputFieldSettingsController const& o) noexcept = default;
                


// Methods

/// @brief Method HandleInputFieldDidChange addr 0x2153ca8 size 0x90 virtual true final false
 void HandleInputFieldDidChange(HMUI::InputFieldView inputFieldView) ;

// Ctor Parameters []
explicit UrlInputFieldSettingsController() ;

/// @brief Method .ctor addr 0x2153d38 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::UrlInputFieldSettingsController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UrlInputFieldSettingsController, "", "UrlInputFieldSettingsController");
