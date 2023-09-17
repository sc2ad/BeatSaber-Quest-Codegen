#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace GlobalNamespace {
class FlyingObjectEffect;
}
namespace GlobalNamespace {
class IFlyingObjectEffectDidFinishEvent;
}
namespace GlobalNamespace {
class ____GlobalNamespace__FlyingSpriteEffect__Pool;
}
// Forward declare root types
namespace GlobalNamespace {
class FlyingSpriteSpawner;
}
// Type: ::FlyingSpriteSpawner
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5003))
// CS Name: FlyingSpriteSpawner
class CORDL_TYPE FlyingSpriteSpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent
constexpr operator  ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~FlyingSpriteSpawner() = default;

// Ctor Parameters [CppParam { name: "", ty: "FlyingSpriteSpawner", modifiers: " const&", def_value: None }]
constexpr FlyingSpriteSpawner(FlyingSpriteSpawner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FlyingSpriteSpawner", modifiers: "&&", def_value: None }]
constexpr FlyingSpriteSpawner(FlyingSpriteSpawner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FlyingSpriteSpawner(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FlyingSpriteSpawner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FlyingSpriteSpawner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FlyingSpriteSpawner& operator=(FlyingSpriteSpawner&& o) noexcept = default;
  constexpr FlyingSpriteSpawner& operator=(FlyingSpriteSpawner const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Sprite __declspec(property(get=__get__sprite, put=__set__sprite))  _sprite;

constexpr void __set__sprite(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get__sprite() const;

 ::UnityEngine::Material __declspec(property(get=__get__material, put=__set__material))  _material;

constexpr void __set__material(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get__material() const;

 float_t __declspec(property(get=__get__duration, put=__set__duration))  _duration;

constexpr void __set__duration(float_t value) ;

constexpr float_t __get__duration() const;

 float_t __declspec(property(get=__get__xSpread, put=__set__xSpread))  _xSpread;

constexpr void __set__xSpread(float_t value) ;

constexpr float_t __get__xSpread() const;

 float_t __declspec(property(get=__get__targetYPos, put=__set__targetYPos))  _targetYPos;

constexpr void __set__targetYPos(float_t value) ;

constexpr float_t __get__targetYPos() const;

 float_t __declspec(property(get=__get__targetZPos, put=__set__targetZPos))  _targetZPos;

constexpr void __set__targetZPos(float_t value) ;

constexpr float_t __get__targetZPos() const;

 ::UnityEngine::Color __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__color() const;

 bool __declspec(property(get=__get__shake, put=__set__shake))  _shake;

constexpr void __set__shake(bool value) ;

constexpr bool __get__shake() const;

 ::GlobalNamespace::____GlobalNamespace__FlyingSpriteEffect__Pool __declspec(property(get=__get__flyingSpriteEffectPool, put=__set__flyingSpriteEffectPool))  _flyingSpriteEffectPool;

constexpr void __set__flyingSpriteEffectPool(::GlobalNamespace::____GlobalNamespace__FlyingSpriteEffect__Pool value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__FlyingSpriteEffect__Pool __get__flyingSpriteEffectPool() const;


// Methods

/// @brief Method SpawnFlyingSprite addr 0x2257f48 size 0x1f8 virtual false final false
 void SpawnFlyingSprite(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rotation, ::UnityEngine::Quaternion inverseRotation) ;

/// @brief Method HandleFlyingObjectEffectDidFinish addr 0x2258c1c size 0x11c virtual true final true
 void HandleFlyingObjectEffectDidFinish(::GlobalNamespace::FlyingObjectEffect flyingObjectEffect) ;

// Ctor Parameters []
explicit FlyingSpriteSpawner() ;

/// @brief Method .ctor addr 0x2258d38 size 0x20 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::FlyingSpriteSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingSpriteSpawner, "", "FlyingSpriteSpawner");
