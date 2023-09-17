#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SwitchSettingsController_def.hpp"
namespace {
namespace GlobalNamespace {
class BoolSO;
}
// Forward declare root types
namespace GlobalNamespace {
class BoolSettingsController;
}
// Type: ::BoolSettingsController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5691))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5678))
// CS Name: BoolSettingsController
class CORDL_TYPE BoolSettingsController : public ::GlobalNamespace::SwitchSettingsController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BoolSettingsController() = default;

// Ctor Parameters [CppParam { name: "", ty: "BoolSettingsController", modifiers: " const&", def_value: None }]
constexpr BoolSettingsController(BoolSettingsController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BoolSettingsController", modifiers: "&&", def_value: None }]
constexpr BoolSettingsController(BoolSettingsController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BoolSettingsController(void* ptr) noexcept : ::GlobalNamespace::SwitchSettingsController(ptr) {
}


  constexpr BoolSettingsController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BoolSettingsController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BoolSettingsController& operator=(BoolSettingsController&& o) noexcept = default;
  constexpr BoolSettingsController& operator=(BoolSettingsController const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::BoolSO __declspec(property(get=__get__settingsValue, put=__set__settingsValue))  _settingsValue;

constexpr void __set__settingsValue(::GlobalNamespace::BoolSO value) ;

constexpr ::GlobalNamespace::BoolSO __get__settingsValue() const;


// Methods

/// @brief Method GetInitValue addr 0x21523b8 size 0x48 virtual true final false
 bool GetInitValue() ;

/// @brief Method ApplyValue addr 0x2152400 size 0x58 virtual true final false
 void ApplyValue(bool value) ;

// Ctor Parameters []
explicit BoolSettingsController() ;

/// @brief Method .ctor addr 0x2152458 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BoolSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BoolSettingsController, "", "BoolSettingsController");
