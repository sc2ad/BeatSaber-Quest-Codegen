#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace GlobalNamespace {
class GameplayModifierToggle;
}
namespace GlobalNamespace {
class IRefreshable;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace HMUI {
class ToggleBinder;
}
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayModifiersPanelController;
}
namespace GlobalNamespace {
class GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0;
}
// Type: ::<>c__DisplayClass16_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5730))
// CS Name: GameplayModifiersPanelController::<>c__DisplayClass16_0
class CORDL_TYPE GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0(GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0(GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0& operator=(GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0&& o) noexcept = default;
  constexpr GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0& operator=(GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GameplayModifierToggle __declspec(property(get=__get_gameplayModifierToggle, put=__set_gameplayModifierToggle))  gameplayModifierToggle;

constexpr void __set_gameplayModifierToggle(GlobalNamespace::GameplayModifierToggle value) ;

constexpr GlobalNamespace::GameplayModifierToggle __get_gameplayModifierToggle() const;

 GlobalNamespace::GameplayModifiersPanelController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GameplayModifiersPanelController value) ;

constexpr GlobalNamespace::GameplayModifiersPanelController __get___4__this() const;


// Methods

static GlobalNamespace::GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0 New_ctor() ;

/// @brief Method .ctor addr 0x215bcd4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Awake>b__0 addr 0x215c15c size 0x208 virtual false final false
 void _Awake_b__0(bool on) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GameplayModifiersPanelController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5731))
// CS Name: GameplayModifiersPanelController
class CORDL_TYPE GameplayModifiersPanelController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass16_0 = GlobalNamespace::GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0;

/// @brief Convert operator to GlobalNamespace::IRefreshable
constexpr operator  GlobalNamespace::IRefreshable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GameplayModifiersPanelController() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersPanelController", modifiers: " const&", def_value: None }]
constexpr GameplayModifiersPanelController(GameplayModifiersPanelController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersPanelController", modifiers: "&&", def_value: None }]
constexpr GameplayModifiersPanelController(GameplayModifiersPanelController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameplayModifiersPanelController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr GameplayModifiersPanelController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameplayModifiersPanelController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameplayModifiersPanelController& operator=(GameplayModifiersPanelController&& o) noexcept = default;
  constexpr GameplayModifiersPanelController& operator=(GameplayModifiersPanelController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GameplayModifiersModelSO __declspec(property(get=__get__gameplayModifiersModel, put=__set__gameplayModifiersModel))  _gameplayModifiersModel;

constexpr void __set__gameplayModifiersModel(GlobalNamespace::GameplayModifiersModelSO value) ;

constexpr GlobalNamespace::GameplayModifiersModelSO __get__gameplayModifiersModel() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__totalMultiplierValueText, put=__set__totalMultiplierValueText))  _totalMultiplierValueText;

constexpr void __set__totalMultiplierValueText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__totalMultiplierValueText() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__maxRankValueText, put=__set__maxRankValueText))  _maxRankValueText;

constexpr void __set__maxRankValueText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__maxRankValueText() const;

 UnityEngine::Color __declspec(property(get=__get__positiveColor, put=__set__positiveColor))  _positiveColor;

constexpr void __set__positiveColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__positiveColor() const;

 UnityEngine::Color __declspec(property(get=__get__negativeColor, put=__set__negativeColor))  _negativeColor;

constexpr void __set__negativeColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__negativeColor() const;

 System::Action __declspec(property(get=__get_didChangeGameplayModifiersEvent, put=__set_didChangeGameplayModifiersEvent))  didChangeGameplayModifiersEvent;

constexpr void __set_didChangeGameplayModifiersEvent(System::Action value) ;

constexpr System::Action __get_didChangeGameplayModifiersEvent() const;

 GlobalNamespace::GameplayModifiers __declspec(property(get=__get__gameplayModifiers, put=__set__gameplayModifiers))  _gameplayModifiers;

constexpr void __set__gameplayModifiers(GlobalNamespace::GameplayModifiers value) ;

constexpr GlobalNamespace::GameplayModifiers __get__gameplayModifiers() const;

 HMUI::ToggleBinder __declspec(property(get=__get__toggleBinder, put=__set__toggleBinder))  _toggleBinder;

constexpr void __set__toggleBinder(HMUI::ToggleBinder value) ;

constexpr HMUI::ToggleBinder __get__toggleBinder() const;

 ::ArrayW<GlobalNamespace::GameplayModifierToggle> __declspec(property(get=__get__gameplayModifierToggles, put=__set__gameplayModifierToggles))  _gameplayModifierToggles;

constexpr void __set__gameplayModifierToggles(::ArrayW<GlobalNamespace::GameplayModifierToggle> value) ;

constexpr ::ArrayW<GlobalNamespace::GameplayModifierToggle> __get__gameplayModifierToggles() const;

 bool __declspec(property(get=__get__changingGameplayModifierToggles, put=__set__changingGameplayModifierToggles))  _changingGameplayModifierToggles;

constexpr void __set__changingGameplayModifierToggles(bool value) ;

constexpr bool __get__changingGameplayModifierToggles() const;

 System::Collections::Generic::Dictionary_2<GlobalNamespace::GameplayModifierParamsSO,UnityEngine::UI::Toggle> __declspec(property(get=__get__toggleForGameplayModifierParam, put=__set__toggleForGameplayModifierParam))  _toggleForGameplayModifierParam;

constexpr void __set__toggleForGameplayModifierParam(System::Collections::Generic::Dictionary_2<GlobalNamespace::GameplayModifierParamsSO,UnityEngine::UI::Toggle> value) ;

constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::GameplayModifierParamsSO,UnityEngine::UI::Toggle> __get__toggleForGameplayModifierParam() const;


// Properties

 GlobalNamespace::GameplayModifiers __declspec(property(get=get_gameplayModifiers))  gameplayModifiers;


// Methods

/// @brief Method add_didChangeGameplayModifiersEvent addr 0x215ba08 size 0x9c virtual false final false
 void add_didChangeGameplayModifiersEvent(System::Action value) ;

/// @brief Method remove_didChangeGameplayModifiersEvent addr 0x215baa4 size 0x9c virtual false final false
 void remove_didChangeGameplayModifiersEvent(System::Action value) ;

/// @brief Method get_gameplayModifiers addr 0x215bb40 size 0x8 virtual false final false
 GlobalNamespace::GameplayModifiers get_gameplayModifiers() ;

/// @brief Method SetData addr 0x215bb48 size 0x8 virtual false final false
 void SetData(GlobalNamespace::GameplayModifiers newGameplayModifiers) ;

/// @brief Method Awake addr 0x215bb50 size 0x184 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x215bcdc size 0x14 virtual false final false
 void OnDestroy() ;

/// @brief Method SetToggleValueWithGameplayModifierParams addr 0x215bcf0 size 0x88 virtual false final false
 void SetToggleValueWithGameplayModifierParams(GlobalNamespace::GameplayModifierParamsSO gameplayModifierParams, bool value) ;

/// @brief Method GetToggleValueWithGameplayModifierParams addr 0x215bd78 size 0x8c virtual false final false
 bool GetToggleValueWithGameplayModifierParams(GlobalNamespace::GameplayModifierParamsSO gameplayModifierParams) ;

/// @brief Method RefreshTotalMultiplierAndRankUI addr 0x215be04 size 0x1d4 virtual false final false
 void RefreshTotalMultiplierAndRankUI() ;

/// @brief Method IRefreshable.Refresh addr 0x215bfd8 size 0x104 virtual true final true
 void IRefreshable_Refresh() ;

static GlobalNamespace::GameplayModifiersPanelController New_ctor() ;

/// @brief Method .ctor addr 0x215c0dc size 0x80 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GameplayModifiersPanelController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifiersPanelController, "", "GameplayModifiersPanelController");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0, "", "GameplayModifiersPanelController/<>c__DisplayClass16_0");
