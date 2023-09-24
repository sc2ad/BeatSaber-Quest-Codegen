#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
// Forward declare root types
namespace GlobalNamespace {
class SpawnLaserAnimation;
}
// Type: ::SpawnLaserAnimation
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4996))
// CS Name: SpawnLaserAnimation
class CORDL_TYPE SpawnLaserAnimation : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~SpawnLaserAnimation() = default;

// Ctor Parameters [CppParam { name: "", ty: "SpawnLaserAnimation", modifiers: " const&", def_value: None }]
constexpr SpawnLaserAnimation(SpawnLaserAnimation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SpawnLaserAnimation", modifiers: "&&", def_value: None }]
constexpr SpawnLaserAnimation(SpawnLaserAnimation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SpawnLaserAnimation(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SpawnLaserAnimation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SpawnLaserAnimation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SpawnLaserAnimation& operator=(SpawnLaserAnimation&& o) noexcept = default;
  constexpr SpawnLaserAnimation& operator=(SpawnLaserAnimation const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get__centerThresholdTransform, put=__set__centerThresholdTransform))  _centerThresholdTransform;

constexpr void __set__centerThresholdTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__centerThresholdTransform() const;

 UnityEngine::Transform __declspec(property(get=__get__horizontalLasersTransform, put=__set__horizontalLasersTransform))  _horizontalLasersTransform;

constexpr void __set__horizontalLasersTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__horizontalLasersTransform() const;

 GlobalNamespace::TubeBloomPrePassLight __declspec(property(get=__get__leftHorizontalLaser, put=__set__leftHorizontalLaser))  _leftHorizontalLaser;

constexpr void __set__leftHorizontalLaser(GlobalNamespace::TubeBloomPrePassLight value) ;

constexpr GlobalNamespace::TubeBloomPrePassLight __get__leftHorizontalLaser() const;

 GlobalNamespace::TubeBloomPrePassLight __declspec(property(get=__get__rightHorizontalLaser, put=__set__rightHorizontalLaser))  _rightHorizontalLaser;

constexpr void __set__rightHorizontalLaser(GlobalNamespace::TubeBloomPrePassLight value) ;

constexpr GlobalNamespace::TubeBloomPrePassLight __get__rightHorizontalLaser() const;

 float_t __declspec(property(get=__get__normalizedDistance, put=__set__normalizedDistance))  _normalizedDistance;

constexpr void __set__normalizedDistance(float_t value) ;

constexpr float_t __get__normalizedDistance() const;

 float_t __declspec(property(get=__get__alphaMultiplier, put=__set__alphaMultiplier))  _alphaMultiplier;

constexpr void __set__alphaMultiplier(float_t value) ;

constexpr float_t __get__alphaMultiplier() const;

 float_t __declspec(property(get=__get__laserLength, put=__set__laserLength))  _laserLength;

constexpr void __set__laserLength(float_t value) ;

constexpr float_t __get__laserLength() const;

 float_t __declspec(property(get=__get__centerDistance, put=__set__centerDistance))  _centerDistance;

constexpr void __set__centerDistance(float_t value) ;

constexpr float_t __get__centerDistance() const;

 bool __declspec(property(get=__get__initialized, put=__set__initialized))  _initialized;

constexpr void __set__initialized(bool value) ;

constexpr bool __get__initialized() const;


// Methods

/// @brief Method InitIfNeeded addr 0x2257b08 size 0xc0 virtual false final false
 void InitIfNeeded() ;

/// @brief Method LateUpdate addr 0x2257bc8 size 0x108 virtual false final false
 void LateUpdate() ;

static GlobalNamespace::SpawnLaserAnimation New_ctor() ;

/// @brief Method .ctor addr 0x2257cd0 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SpawnLaserAnimation);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SpawnLaserAnimation, "", "SpawnLaserAnimation");
