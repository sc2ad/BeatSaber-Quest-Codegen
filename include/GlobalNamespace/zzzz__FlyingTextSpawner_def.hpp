#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class IFlyingObjectEffectDidFinishEvent;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
class FlyingObjectEffect;
}
namespace GlobalNamespace {
class ____GlobalNamespace__FlyingTextEffect__Pool;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class FlyingTextSpawner;
}
// Type: ::FlyingTextSpawner
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5004))
// CS Name: FlyingTextSpawner
class CORDL_TYPE FlyingTextSpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent
constexpr operator  ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~FlyingTextSpawner() = default;

// Ctor Parameters [CppParam { name: "", ty: "FlyingTextSpawner", modifiers: " const&", def_value: None }]
constexpr FlyingTextSpawner(FlyingTextSpawner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FlyingTextSpawner", modifiers: "&&", def_value: None }]
constexpr FlyingTextSpawner(FlyingTextSpawner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FlyingTextSpawner(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FlyingTextSpawner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FlyingTextSpawner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FlyingTextSpawner& operator=(FlyingTextSpawner&& o) noexcept = default;
  constexpr FlyingTextSpawner& operator=(FlyingTextSpawner const& o) noexcept = default;
                


// Fields

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

 float_t __declspec(property(get=__get__fontSize, put=__set__fontSize))  _fontSize;

constexpr void __set__fontSize(float_t value) ;

constexpr float_t __get__fontSize() const;

 bool __declspec(property(get=__get__shake, put=__set__shake))  _shake;

constexpr void __set__shake(bool value) ;

constexpr bool __get__shake() const;

 ::GlobalNamespace::____GlobalNamespace__FlyingTextEffect__Pool __declspec(property(get=__get__flyingTextEffectPool, put=__set__flyingTextEffectPool))  _flyingTextEffectPool;

constexpr void __set__flyingTextEffectPool(::GlobalNamespace::____GlobalNamespace__FlyingTextEffect__Pool value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__FlyingTextEffect__Pool __get__flyingTextEffectPool() const;


// Methods

/// @brief Method SpawnText addr 0x2258d58 size 0x1e0 virtual false final false
 void SpawnText(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rotation, ::UnityEngine::Quaternion inverseRotation, ::StringW text) ;

/// @brief Method HandleFlyingObjectEffectDidFinish addr 0x2258f38 size 0x11c virtual true final true
 void HandleFlyingObjectEffectDidFinish(::GlobalNamespace::FlyingObjectEffect flyingObjectEffect) ;

// Ctor Parameters []
explicit FlyingTextSpawner() ;

/// @brief Method .ctor addr 0x2259054 size 0x28 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::FlyingTextSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingTextSpawner, "", "FlyingTextSpawner");
