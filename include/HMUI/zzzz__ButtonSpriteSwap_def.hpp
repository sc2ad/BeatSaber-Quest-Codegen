#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace UnityEngine {
class Sprite;
}
namespace HMUI {
class NoTransitionsButton;
}
namespace HMUI {
struct HMUI__NoTransitionsButton__SelectionState;
}
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace HMUI {
class ButtonSpriteSwap;
}
// Type: HMUI::ButtonSpriteSwap
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13670))
// CS Name: HMUI.ButtonSpriteSwap
class CORDL_TYPE ButtonSpriteSwap : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~ButtonSpriteSwap() = default;

// Ctor Parameters [CppParam { name: "", ty: "ButtonSpriteSwap", modifiers: " const&", def_value: None }]
constexpr ButtonSpriteSwap(ButtonSpriteSwap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ButtonSpriteSwap", modifiers: "&&", def_value: None }]
constexpr ButtonSpriteSwap(ButtonSpriteSwap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ButtonSpriteSwap(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ButtonSpriteSwap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ButtonSpriteSwap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ButtonSpriteSwap& operator=(ButtonSpriteSwap&& o) noexcept = default;
  constexpr ButtonSpriteSwap& operator=(ButtonSpriteSwap const& o) noexcept = default;
                


// Fields

 UnityEngine::Sprite __declspec(property(get=__get__normalStateSprite, put=__set__normalStateSprite))  _normalStateSprite;

constexpr void __set__normalStateSprite(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__normalStateSprite() const;

 UnityEngine::Sprite __declspec(property(get=__get__highlightStateSprite, put=__set__highlightStateSprite))  _highlightStateSprite;

constexpr void __set__highlightStateSprite(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__highlightStateSprite() const;

 UnityEngine::Sprite __declspec(property(get=__get__pressedStateSprite, put=__set__pressedStateSprite))  _pressedStateSprite;

constexpr void __set__pressedStateSprite(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__pressedStateSprite() const;

 UnityEngine::Sprite __declspec(property(get=__get__disabledStateSprite, put=__set__disabledStateSprite))  _disabledStateSprite;

constexpr void __set__disabledStateSprite(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__disabledStateSprite() const;

 HMUI::NoTransitionsButton __declspec(property(get=__get__button, put=__set__button))  _button;

constexpr void __set__button(HMUI::NoTransitionsButton value) ;

constexpr HMUI::NoTransitionsButton __get__button() const;

 ::ArrayW<UnityEngine::UI::Image> __declspec(property(get=__get__images, put=__set__images))  _images;

constexpr void __set__images(::ArrayW<UnityEngine::UI::Image> value) ;

constexpr ::ArrayW<UnityEngine::UI::Image> __get__images() const;

 bool __declspec(property(get=__get__didStart, put=__set__didStart))  _didStart;

constexpr void __set__didStart(bool value) ;

constexpr bool __get__didStart() const;


// Methods

/// @brief Method Awake addr 0x1fbca08 size 0x78 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x1fbcb34 size 0x2c virtual false final false
 void Start() ;

/// @brief Method OnEnable addr 0x1fbcb84 size 0x24 virtual true final false
 void OnEnable() ;

/// @brief Method OnDestroy addr 0x1fbcba8 size 0xc0 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleButtonSelectionStateDidChange addr 0x1fbcd1c size 0xcc virtual true final false
 void HandleButtonSelectionStateDidChange(HMUI::HMUI__NoTransitionsButton__SelectionState state) ;

/// @brief Method RefreshVisualState addr 0x1fbcb60 size 0x24 virtual false final false
 void RefreshVisualState() ;

static HMUI::ButtonSpriteSwap New_ctor() ;

/// @brief Method .ctor addr 0x1fbcde8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::ButtonSpriteSwap);
DEFINE_IL2CPP_ARG_TYPE(HMUI::ButtonSpriteSwap, "HMUI", "ButtonSpriteSwap");
