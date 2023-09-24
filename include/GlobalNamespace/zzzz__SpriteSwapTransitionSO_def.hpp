#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BaseTransitionSO_def.hpp"
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class SpriteSwapTransitionSO;
}
// Type: ::SpriteSwapTransitionSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5545))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5564))
// CS Name: SpriteSwapTransitionSO
class CORDL_TYPE SpriteSwapTransitionSO : public GlobalNamespace::BaseTransitionSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~SpriteSwapTransitionSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "SpriteSwapTransitionSO", modifiers: " const&", def_value: None }]
constexpr SpriteSwapTransitionSO(SpriteSwapTransitionSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SpriteSwapTransitionSO", modifiers: "&&", def_value: None }]
constexpr SpriteSwapTransitionSO(SpriteSwapTransitionSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SpriteSwapTransitionSO(void* ptr) noexcept : GlobalNamespace::BaseTransitionSO(ptr) {
}


  constexpr SpriteSwapTransitionSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SpriteSwapTransitionSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SpriteSwapTransitionSO& operator=(SpriteSwapTransitionSO&& o) noexcept = default;
  constexpr SpriteSwapTransitionSO& operator=(SpriteSwapTransitionSO const& o) noexcept = default;
                


// Fields

 UnityEngine::Sprite __declspec(property(get=__get__normalSprite, put=__set__normalSprite))  _normalSprite;

constexpr void __set__normalSprite(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__normalSprite() const;

 UnityEngine::Sprite __declspec(property(get=__get__highlightedSprite, put=__set__highlightedSprite))  _highlightedSprite;

constexpr void __set__highlightedSprite(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__highlightedSprite() const;

 UnityEngine::Sprite __declspec(property(get=__get__pressedSprite, put=__set__pressedSprite))  _pressedSprite;

constexpr void __set__pressedSprite(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__pressedSprite() const;

 UnityEngine::Sprite __declspec(property(get=__get__disabledSprite, put=__set__disabledSprite))  _disabledSprite;

constexpr void __set__disabledSprite(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__disabledSprite() const;

 UnityEngine::Sprite __declspec(property(get=__get__selectedSprite, put=__set__selectedSprite))  _selectedSprite;

constexpr void __set__selectedSprite(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__selectedSprite() const;

 UnityEngine::Sprite __declspec(property(get=__get__selectedAndHighlightedSprite, put=__set__selectedAndHighlightedSprite))  _selectedAndHighlightedSprite;

constexpr void __set__selectedAndHighlightedSprite(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__selectedAndHighlightedSprite() const;


// Properties

 UnityEngine::Sprite __declspec(property(get=get_normalSprite))  normalSprite;

 UnityEngine::Sprite __declspec(property(get=get_highlightedSprite))  highlightedSprite;

 UnityEngine::Sprite __declspec(property(get=get_pressedSprite))  pressedSprite;

 UnityEngine::Sprite __declspec(property(get=get_disabledSprite))  disabledSprite;

 UnityEngine::Sprite __declspec(property(get=get_selectedSprite))  selectedSprite;

 UnityEngine::Sprite __declspec(property(get=get_selectedAndHighlightedSprite))  selectedAndHighlightedSprite;


// Methods

/// @brief Method get_normalSprite addr 0x212c25c size 0x8 virtual false final false
 UnityEngine::Sprite get_normalSprite() ;

/// @brief Method get_highlightedSprite addr 0x212c264 size 0x8 virtual false final false
 UnityEngine::Sprite get_highlightedSprite() ;

/// @brief Method get_pressedSprite addr 0x212c26c size 0x8 virtual false final false
 UnityEngine::Sprite get_pressedSprite() ;

/// @brief Method get_disabledSprite addr 0x212c274 size 0x8 virtual false final false
 UnityEngine::Sprite get_disabledSprite() ;

/// @brief Method get_selectedSprite addr 0x212c27c size 0x8 virtual false final false
 UnityEngine::Sprite get_selectedSprite() ;

/// @brief Method get_selectedAndHighlightedSprite addr 0x212c284 size 0x8 virtual false final false
 UnityEngine::Sprite get_selectedAndHighlightedSprite() ;

static GlobalNamespace::SpriteSwapTransitionSO New_ctor() ;

/// @brief Method .ctor addr 0x212c28c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SpriteSwapTransitionSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SpriteSwapTransitionSO, "", "SpriteSwapTransitionSO");
