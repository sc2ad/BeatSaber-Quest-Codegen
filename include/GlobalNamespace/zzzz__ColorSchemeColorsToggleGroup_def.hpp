#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class ColorSchemeColorToggleController;
}
namespace UnityEngine {
struct Color;
}
namespace System {
template<typename T>
class Action_1;
}
namespace HMUI {
class ToggleBinder;
}
namespace GlobalNamespace {
class ColorScheme;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemeColorsToggleGroup;
}
// Type: ::ColorSchemeColorsToggleGroup
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5496))
// CS Name: ColorSchemeColorsToggleGroup
class CORDL_TYPE ColorSchemeColorsToggleGroup : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~ColorSchemeColorsToggleGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemeColorsToggleGroup", modifiers: " const&", def_value: None }]
constexpr ColorSchemeColorsToggleGroup(ColorSchemeColorsToggleGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemeColorsToggleGroup", modifiers: "&&", def_value: None }]
constexpr ColorSchemeColorsToggleGroup(ColorSchemeColorsToggleGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorSchemeColorsToggleGroup(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ColorSchemeColorsToggleGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorSchemeColorsToggleGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorSchemeColorsToggleGroup& operator=(ColorSchemeColorsToggleGroup&& o) noexcept = default;
  constexpr ColorSchemeColorsToggleGroup& operator=(ColorSchemeColorsToggleGroup const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ColorSchemeColorToggleController __declspec(property(get=__get__saberAColorToggleController, put=__set__saberAColorToggleController))  _saberAColorToggleController;

constexpr void __set__saberAColorToggleController(GlobalNamespace::ColorSchemeColorToggleController value) ;

constexpr GlobalNamespace::ColorSchemeColorToggleController __get__saberAColorToggleController() const;

 GlobalNamespace::ColorSchemeColorToggleController __declspec(property(get=__get__saberBColorToggleController, put=__set__saberBColorToggleController))  _saberBColorToggleController;

constexpr void __set__saberBColorToggleController(GlobalNamespace::ColorSchemeColorToggleController value) ;

constexpr GlobalNamespace::ColorSchemeColorToggleController __get__saberBColorToggleController() const;

 GlobalNamespace::ColorSchemeColorToggleController __declspec(property(get=__get__environmentColor0ToggleController, put=__set__environmentColor0ToggleController))  _environmentColor0ToggleController;

constexpr void __set__environmentColor0ToggleController(GlobalNamespace::ColorSchemeColorToggleController value) ;

constexpr GlobalNamespace::ColorSchemeColorToggleController __get__environmentColor0ToggleController() const;

 GlobalNamespace::ColorSchemeColorToggleController __declspec(property(get=__get__environmentColor1ToggleController, put=__set__environmentColor1ToggleController))  _environmentColor1ToggleController;

constexpr void __set__environmentColor1ToggleController(GlobalNamespace::ColorSchemeColorToggleController value) ;

constexpr GlobalNamespace::ColorSchemeColorToggleController __get__environmentColor1ToggleController() const;

 GlobalNamespace::ColorSchemeColorToggleController __declspec(property(get=__get__obstaclesColorToggleController, put=__set__obstaclesColorToggleController))  _obstaclesColorToggleController;

constexpr void __set__obstaclesColorToggleController(GlobalNamespace::ColorSchemeColorToggleController value) ;

constexpr GlobalNamespace::ColorSchemeColorToggleController __get__obstaclesColorToggleController() const;

 GlobalNamespace::ColorSchemeColorToggleController __declspec(property(get=__get__environmentColor0BoostToggleController, put=__set__environmentColor0BoostToggleController))  _environmentColor0BoostToggleController;

constexpr void __set__environmentColor0BoostToggleController(GlobalNamespace::ColorSchemeColorToggleController value) ;

constexpr GlobalNamespace::ColorSchemeColorToggleController __get__environmentColor0BoostToggleController() const;

 GlobalNamespace::ColorSchemeColorToggleController __declspec(property(get=__get__environmentColor1BoostToggleController, put=__set__environmentColor1BoostToggleController))  _environmentColor1BoostToggleController;

constexpr void __set__environmentColor1BoostToggleController(GlobalNamespace::ColorSchemeColorToggleController value) ;

constexpr GlobalNamespace::ColorSchemeColorToggleController __get__environmentColor1BoostToggleController() const;

 System::Action_1<UnityEngine::Color> __declspec(property(get=__get_selectedColorDidChangeEvent, put=__set_selectedColorDidChangeEvent))  selectedColorDidChangeEvent;

constexpr void __set_selectedColorDidChangeEvent(System::Action_1<UnityEngine::Color> value) ;

constexpr System::Action_1<UnityEngine::Color> __get_selectedColorDidChangeEvent() const;

 HMUI::ToggleBinder __declspec(property(get=__get__toggleBinder, put=__set__toggleBinder))  _toggleBinder;

constexpr void __set__toggleBinder(HMUI::ToggleBinder value) ;

constexpr HMUI::ToggleBinder __get__toggleBinder() const;

 GlobalNamespace::ColorSchemeColorToggleController __declspec(property(get=__get__selectedColorToggleController, put=__set__selectedColorToggleController))  _selectedColorToggleController;

constexpr void __set__selectedColorToggleController(GlobalNamespace::ColorSchemeColorToggleController value) ;

constexpr GlobalNamespace::ColorSchemeColorToggleController __get__selectedColorToggleController() const;

 GlobalNamespace::ColorScheme __declspec(property(get=__get__colorScheme, put=__set__colorScheme))  _colorScheme;

constexpr void __set__colorScheme(GlobalNamespace::ColorScheme value) ;

constexpr GlobalNamespace::ColorScheme __get__colorScheme() const;


// Properties

 UnityEngine::Color __declspec(property(get=get_color, put=set_color))  color;


// Methods

/// @brief Method add_selectedColorDidChangeEvent addr 0x211d2e8 size 0xb0 virtual false final false
 void add_selectedColorDidChangeEvent(System::Action_1<UnityEngine::Color> value) ;

/// @brief Method remove_selectedColorDidChangeEvent addr 0x211d398 size 0xb0 virtual false final false
 void remove_selectedColorDidChangeEvent(System::Action_1<UnityEngine::Color> value) ;

/// @brief Method get_color addr 0x211d448 size 0x18 virtual false final false
 UnityEngine::Color get_color() ;

/// @brief Method set_color addr 0x211d498 size 0x18 virtual false final false
 void set_color(UnityEngine::Color value) ;

/// @brief Method SetColorScheme addr 0x211d548 size 0xe0 virtual false final false
 void SetColorScheme(GlobalNamespace::ColorScheme colorScheme) ;

/// @brief Method Awake addr 0x211d628 size 0x314 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x211d93c size 0x1c virtual false final false
 void OnDestroy() ;

/// @brief Method HandleToggleWasSelected addr 0x211d958 size 0x40 virtual false final false
 void HandleToggleWasSelected(GlobalNamespace::ColorSchemeColorToggleController toggleController, bool isOn) ;

/// @brief Method CreateColorSchemeFromEditedColors addr 0x211d998 size 0x1d0 virtual false final false
 GlobalNamespace::ColorScheme CreateColorSchemeFromEditedColors() ;

// Ctor Parameters []
explicit ColorSchemeColorsToggleGroup() ;

/// @brief Method .ctor addr 0x211db68 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Awake>b__17_0 addr 0x211db70 size 0x10 virtual false final false
 void _Awake_b__17_0(bool isOn) ;

/// @brief Method <Awake>b__17_1 addr 0x211db80 size 0x10 virtual false final false
 void _Awake_b__17_1(bool isOn) ;

/// @brief Method <Awake>b__17_2 addr 0x211db90 size 0x10 virtual false final false
 void _Awake_b__17_2(bool isOn) ;

/// @brief Method <Awake>b__17_3 addr 0x211dba0 size 0x10 virtual false final false
 void _Awake_b__17_3(bool isOn) ;

/// @brief Method <Awake>b__17_4 addr 0x211dbb0 size 0x10 virtual false final false
 void _Awake_b__17_4(bool isOn) ;

/// @brief Method <Awake>b__17_5 addr 0x211dbc0 size 0x10 virtual false final false
 void _Awake_b__17_5(bool isOn) ;

/// @brief Method <Awake>b__17_6 addr 0x211dbd0 size 0x10 virtual false final false
 void _Awake_b__17_6(bool isOn) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ColorSchemeColorsToggleGroup);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSchemeColorsToggleGroup, "", "ColorSchemeColorsToggleGroup");
