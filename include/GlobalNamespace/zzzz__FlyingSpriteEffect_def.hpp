#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__FlyingObjectEffect_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class GlobalNamespace__FlyingSpriteEffect__Pool;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class FlyingSpriteEffect;
}
namespace GlobalNamespace {
class GlobalNamespace__FlyingSpriteEffect__Pool;
}
// Type: ::FlyingSpriteEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4967))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4971))
// CS Name: FlyingSpriteEffect
class CORDL_TYPE FlyingSpriteEffect : public GlobalNamespace::FlyingObjectEffect {
public:
// Declarations
using Pool = GlobalNamespace::GlobalNamespace__FlyingSpriteEffect__Pool;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~FlyingSpriteEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "FlyingSpriteEffect", modifiers: " const&", def_value: None }]
constexpr FlyingSpriteEffect(FlyingSpriteEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FlyingSpriteEffect", modifiers: "&&", def_value: None }]
constexpr FlyingSpriteEffect(FlyingSpriteEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FlyingSpriteEffect(void* ptr) noexcept : GlobalNamespace::FlyingObjectEffect(ptr) {
}


  constexpr FlyingSpriteEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FlyingSpriteEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FlyingSpriteEffect& operator=(FlyingSpriteEffect&& o) noexcept = default;
  constexpr FlyingSpriteEffect& operator=(FlyingSpriteEffect const& o) noexcept = default;
                


// Fields

 UnityEngine::SpriteRenderer __declspec(property(get=__get__spriteRenderer, put=__set__spriteRenderer))  _spriteRenderer;

constexpr void __set__spriteRenderer(UnityEngine::SpriteRenderer value) ;

constexpr UnityEngine::SpriteRenderer __get__spriteRenderer() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get__fadeAnimationCurve, put=__set__fadeAnimationCurve))  _fadeAnimationCurve;

constexpr void __set__fadeAnimationCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get__fadeAnimationCurve() const;

 UnityEngine::Color __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color() const;


// Methods

/// @brief Method InitAndPresent addr 0x225134c size 0xb8 virtual false final false
 void InitAndPresent(float_t duration, UnityEngine::Vector3 targetPos, UnityEngine::Quaternion rotation, UnityEngine::Sprite sprite, UnityEngine::Material material, UnityEngine::Color color, bool shake) ;

/// @brief Method ManualUpdate addr 0x2251404 size 0x5c virtual true final false
 void ManualUpdate(float_t t) ;

static GlobalNamespace::FlyingSpriteEffect New_ctor() ;

/// @brief Method .ctor addr 0x2251460 size 0x30 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4971)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10992), inst: 2708 }), TypeDefinitionIndex(TypeDefinitionIndex(10992))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4970))
// CS Name: FlyingSpriteEffect::Pool
class CORDL_TYPE GlobalNamespace__FlyingSpriteEffect__Pool : public Zenject::MonoMemoryPool_1<GlobalNamespace::FlyingSpriteEffect> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__FlyingSpriteEffect__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__FlyingSpriteEffect__Pool", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__FlyingSpriteEffect__Pool(GlobalNamespace__FlyingSpriteEffect__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__FlyingSpriteEffect__Pool", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__FlyingSpriteEffect__Pool(GlobalNamespace__FlyingSpriteEffect__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__FlyingSpriteEffect__Pool(void* ptr) noexcept : Zenject::MonoMemoryPool_1<GlobalNamespace::FlyingSpriteEffect>(ptr) {
}


  constexpr GlobalNamespace__FlyingSpriteEffect__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__FlyingSpriteEffect__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__FlyingSpriteEffect__Pool& operator=(GlobalNamespace__FlyingSpriteEffect__Pool&& o) noexcept = default;
  constexpr GlobalNamespace__FlyingSpriteEffect__Pool& operator=(GlobalNamespace__FlyingSpriteEffect__Pool const& o) noexcept = default;
                


// Methods

static GlobalNamespace::GlobalNamespace__FlyingSpriteEffect__Pool New_ctor() ;

/// @brief Method .ctor addr 0x2251490 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FlyingSpriteEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlyingSpriteEffect, "", "FlyingSpriteEffect");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__FlyingSpriteEffect__Pool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__FlyingSpriteEffect__Pool, "", "FlyingSpriteEffect/Pool");
