#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__FlyingObjectEffect_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace UnityEngine {
class AnimationCurve;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
class GlobalNamespace__FlyingTextEffect__Pool;
}
// Forward declare root types
namespace GlobalNamespace {
class FlyingTextEffect;
}
namespace GlobalNamespace {
class GlobalNamespace__FlyingTextEffect__Pool;
}
// Type: ::FlyingTextEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4967))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4973))
// CS Name: FlyingTextEffect
class CORDL_TYPE FlyingTextEffect : public GlobalNamespace::FlyingObjectEffect {
public:
// Declarations
using Pool = GlobalNamespace::GlobalNamespace__FlyingTextEffect__Pool;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~FlyingTextEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "FlyingTextEffect", modifiers: " const&", def_value: None }]
constexpr FlyingTextEffect(FlyingTextEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FlyingTextEffect", modifiers: "&&", def_value: None }]
constexpr FlyingTextEffect(FlyingTextEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FlyingTextEffect(void* ptr) noexcept : GlobalNamespace::FlyingObjectEffect(ptr) {
}


  constexpr FlyingTextEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FlyingTextEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FlyingTextEffect& operator=(FlyingTextEffect&& o) noexcept = default;
  constexpr FlyingTextEffect& operator=(FlyingTextEffect const& o) noexcept = default;
                


// Fields

 TMPro::TextMeshPro __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(TMPro::TextMeshPro value) ;

constexpr TMPro::TextMeshPro __get__text() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get__fadeAnimationCurve, put=__set__fadeAnimationCurve))  _fadeAnimationCurve;

constexpr void __set__fadeAnimationCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get__fadeAnimationCurve() const;

 UnityEngine::Color __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color() const;


// Methods

/// @brief Method InitAndPresent addr 0x22514d8 size 0x78 virtual false final false
 void InitAndPresent(::StringW text, float_t duration, UnityEngine::Vector3 targetPos, UnityEngine::Quaternion rotation, UnityEngine::Color color, float_t fontSize, bool shake) ;

/// @brief Method ManualUpdate addr 0x2251550 size 0x64 virtual true final false
 void ManualUpdate(float_t t) ;

static GlobalNamespace::FlyingTextEffect New_ctor() ;

/// @brief Method .ctor addr 0x22515b4 size 0x30 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10992), inst: 2709 }), TypeDefinitionIndex(TypeDefinitionIndex(10992)), TypeDefinitionIndex(TypeDefinitionIndex(4973))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4972))
// CS Name: FlyingTextEffect::Pool
class CORDL_TYPE GlobalNamespace__FlyingTextEffect__Pool : public Zenject::MonoMemoryPool_1<GlobalNamespace::FlyingTextEffect> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__FlyingTextEffect__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__FlyingTextEffect__Pool", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__FlyingTextEffect__Pool(GlobalNamespace__FlyingTextEffect__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__FlyingTextEffect__Pool", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__FlyingTextEffect__Pool(GlobalNamespace__FlyingTextEffect__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__FlyingTextEffect__Pool(void* ptr) noexcept : Zenject::MonoMemoryPool_1<GlobalNamespace::FlyingTextEffect>(ptr) {
}


  constexpr GlobalNamespace__FlyingTextEffect__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__FlyingTextEffect__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__FlyingTextEffect__Pool& operator=(GlobalNamespace__FlyingTextEffect__Pool&& o) noexcept = default;
  constexpr GlobalNamespace__FlyingTextEffect__Pool& operator=(GlobalNamespace__FlyingTextEffect__Pool const& o) noexcept = default;
                


// Methods

static GlobalNamespace::GlobalNamespace__FlyingTextEffect__Pool New_ctor() ;

/// @brief Method .ctor addr 0x22515e4 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FlyingTextEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlyingTextEffect, "", "FlyingTextEffect");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__FlyingTextEffect__Pool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__FlyingTextEffect__Pool, "", "FlyingTextEffect/Pool");
