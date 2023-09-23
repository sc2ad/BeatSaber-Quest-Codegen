#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
class SpriteRenderer;
}
namespace GlobalNamespace {
class BoolSO;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class ConditionalSpriteSwitcher;
}
// Type: ::ConditionalSpriteSwitcher
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5447))
// CS Name: ConditionalSpriteSwitcher
class CORDL_TYPE ConditionalSpriteSwitcher : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~ConditionalSpriteSwitcher() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConditionalSpriteSwitcher", modifiers: " const&", def_value: None }]
constexpr ConditionalSpriteSwitcher(ConditionalSpriteSwitcher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConditionalSpriteSwitcher", modifiers: "&&", def_value: None }]
constexpr ConditionalSpriteSwitcher(ConditionalSpriteSwitcher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConditionalSpriteSwitcher(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ConditionalSpriteSwitcher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConditionalSpriteSwitcher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConditionalSpriteSwitcher& operator=(ConditionalSpriteSwitcher&& o) noexcept = default;
  constexpr ConditionalSpriteSwitcher& operator=(ConditionalSpriteSwitcher const& o) noexcept = default;
                


// Fields

 UnityEngine::Sprite __declspec(property(get=__get__sprite0, put=__set__sprite0))  _sprite0;

constexpr void __set__sprite0(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__sprite0() const;

 UnityEngine::Material __declspec(property(get=__get__material0, put=__set__material0))  _material0;

constexpr void __set__material0(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__material0() const;

 UnityEngine::Sprite __declspec(property(get=__get__sprite1, put=__set__sprite1))  _sprite1;

constexpr void __set__sprite1(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__sprite1() const;

 UnityEngine::Material __declspec(property(get=__get__material1, put=__set__material1))  _material1;

constexpr void __set__material1(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__material1() const;

 GlobalNamespace::BoolSO __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(GlobalNamespace::BoolSO value) ;

constexpr GlobalNamespace::BoolSO __get__value() const;

 UnityEngine::SpriteRenderer __declspec(property(get=__get__spriteRenderer, put=__set__spriteRenderer))  _spriteRenderer;

constexpr void __set__spriteRenderer(UnityEngine::SpriteRenderer value) ;

constexpr UnityEngine::SpriteRenderer __get__spriteRenderer() const;


// Properties

 UnityEngine::Sprite __declspec(property(get=get_falseSprite, put=set_falseSprite))  falseSprite;

 UnityEngine::Sprite __declspec(property(get=get_trueSprite, put=set_trueSprite))  trueSprite;


// Methods

/// @brief Method get_falseSprite addr 0x211580c size 0x8 virtual false final false
 UnityEngine::Sprite get_falseSprite() ;

/// @brief Method set_falseSprite addr 0x2115814 size 0x8 virtual false final false
 void set_falseSprite(UnityEngine::Sprite value) ;

/// @brief Method get_trueSprite addr 0x211581c size 0x8 virtual false final false
 UnityEngine::Sprite get_trueSprite() ;

/// @brief Method set_trueSprite addr 0x2115824 size 0x8 virtual false final false
 void set_trueSprite(UnityEngine::Sprite value) ;

/// @brief Method Awake addr 0x211582c size 0x4 virtual false final false
 void Awake() ;

/// @brief Method Apply addr 0x2115830 size 0xa4 virtual false final false
 void Apply() ;

// Ctor Parameters []
explicit ConditionalSpriteSwitcher() ;

/// @brief Method .ctor addr 0x21158d4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ConditionalSpriteSwitcher);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConditionalSpriteSwitcher, "", "ConditionalSpriteSwitcher");
