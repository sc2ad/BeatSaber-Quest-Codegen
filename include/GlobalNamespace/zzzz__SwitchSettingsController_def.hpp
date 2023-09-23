#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace GlobalNamespace {
class SwitchSettingsController;
}
// Type: ::SwitchSettingsController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5691))
// CS Name: SwitchSettingsController
class CORDL_TYPE SwitchSettingsController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SwitchSettingsController() = default;

// Ctor Parameters [CppParam { name: "", ty: "SwitchSettingsController", modifiers: " const&", def_value: None }]
constexpr SwitchSettingsController(SwitchSettingsController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SwitchSettingsController", modifiers: "&&", def_value: None }]
constexpr SwitchSettingsController(SwitchSettingsController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SwitchSettingsController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SwitchSettingsController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SwitchSettingsController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SwitchSettingsController& operator=(SwitchSettingsController&& o) noexcept = default;
  constexpr SwitchSettingsController& operator=(SwitchSettingsController const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Toggle __declspec(property(get=__get__toggle, put=__set__toggle))  _toggle;

constexpr void __set__toggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__toggle() const;

 bool __declspec(property(get=__get__on, put=__set__on))  _on;

constexpr void __set__on(bool value) ;

constexpr bool __get__on() const;


// Methods

/// @brief Method GetInitValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool GetInitValue() ;

/// @brief Method ApplyValue addr 0x0 size 0xffffffffffffffff virtual true final false
 void ApplyValue(bool value) ;

/// @brief Method Awake addr 0x2153ae8 size 0xa8 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x2153b90 size 0xa8 virtual false final false
 void OnDestroy() ;

/// @brief Method OnEnable addr 0x2153c38 size 0x3c virtual false final false
 void OnEnable() ;

/// @brief Method RefreshUI addr 0x2153c74 size 0x24 virtual false final false
 void RefreshUI() ;

/// @brief Method HandleToggleValueDidChange addr 0x2153c98 size 0x10 virtual false final false
 void HandleToggleValueDidChange(bool value) ;

// Ctor Parameters []
explicit SwitchSettingsController() ;

/// @brief Method .ctor addr 0x2152460 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SwitchSettingsController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SwitchSettingsController, "", "SwitchSettingsController");
