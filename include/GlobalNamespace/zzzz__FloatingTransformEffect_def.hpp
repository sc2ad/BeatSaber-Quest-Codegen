#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace Zenject {
class ITickable;
}
// Forward declare root types
namespace GlobalNamespace {
class FloatingTransformEffect;
}
// Type: ::FloatingTransformEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4965))
// CS Name: FloatingTransformEffect
class CORDL_TYPE FloatingTransformEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to Zenject::ITickable
constexpr operator  Zenject::ITickable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~FloatingTransformEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "FloatingTransformEffect", modifiers: " const&", def_value: None }]
constexpr FloatingTransformEffect(FloatingTransformEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FloatingTransformEffect", modifiers: "&&", def_value: None }]
constexpr FloatingTransformEffect(FloatingTransformEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FloatingTransformEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FloatingTransformEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FloatingTransformEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FloatingTransformEffect& operator=(FloatingTransformEffect&& o) noexcept = default;
  constexpr FloatingTransformEffect& operator=(FloatingTransformEffect const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get__positionMultiplier, put=__set__positionMultiplier))  _positionMultiplier;

constexpr void __set__positionMultiplier(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__positionMultiplier() const;

 UnityEngine::Vector3 __declspec(property(get=__get__rotationMultiplier, put=__set__rotationMultiplier))  _rotationMultiplier;

constexpr void __set__rotationMultiplier(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__rotationMultiplier() const;

 UnityEngine::Transform __declspec(property(get=__get__rotationTransform, put=__set__rotationTransform))  _rotationTransform;

constexpr void __set__rotationTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__rotationTransform() const;

 float_t __declspec(property(get=__get__maxRotationDegrees, put=__set__maxRotationDegrees))  _maxRotationDegrees;

constexpr void __set__maxRotationDegrees(float_t value) ;

constexpr float_t __get__maxRotationDegrees() const;

 UnityEngine::Vector2 __declspec(property(get=__get__xAmplitude, put=__set__xAmplitude))  _xAmplitude;

constexpr void __set__xAmplitude(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__xAmplitude() const;

 UnityEngine::Vector2 __declspec(property(get=__get__xFrequency, put=__set__xFrequency))  _xFrequency;

constexpr void __set__xFrequency(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__xFrequency() const;

 UnityEngine::Vector2 __declspec(property(get=__get__yAmplitude, put=__set__yAmplitude))  _yAmplitude;

constexpr void __set__yAmplitude(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__yAmplitude() const;

 UnityEngine::Vector2 __declspec(property(get=__get__yFrequency, put=__set__yFrequency))  _yFrequency;

constexpr void __set__yFrequency(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__yFrequency() const;

 UnityEngine::Vector2 __declspec(property(get=__get__zAmplitude, put=__set__zAmplitude))  _zAmplitude;

constexpr void __set__zAmplitude(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__zAmplitude() const;

 UnityEngine::Vector2 __declspec(property(get=__get__zFrequency, put=__set__zFrequency))  _zFrequency;

constexpr void __set__zFrequency(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__zFrequency() const;

 UnityEngine::Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__transform() const;

 UnityEngine::Vector3 __declspec(property(get=__get__origin, put=__set__origin))  _origin;

constexpr void __set__origin(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__origin() const;

 float_t __declspec(property(get=__get__offsetX, put=__set__offsetX))  _offsetX;

constexpr void __set__offsetX(float_t value) ;

constexpr float_t __get__offsetX() const;

 float_t __declspec(property(get=__get__offsetY, put=__set__offsetY))  _offsetY;

constexpr void __set__offsetY(float_t value) ;

constexpr float_t __get__offsetY() const;

 float_t __declspec(property(get=__get__offsetZ, put=__set__offsetZ))  _offsetZ;

constexpr void __set__offsetZ(float_t value) ;

constexpr float_t __get__offsetZ() const;

 float_t __declspec(property(get=__get__amplitudeX, put=__set__amplitudeX))  _amplitudeX;

constexpr void __set__amplitudeX(float_t value) ;

constexpr float_t __get__amplitudeX() const;

 float_t __declspec(property(get=__get__amplitudeY, put=__set__amplitudeY))  _amplitudeY;

constexpr void __set__amplitudeY(float_t value) ;

constexpr float_t __get__amplitudeY() const;

 float_t __declspec(property(get=__get__amplitudeZ, put=__set__amplitudeZ))  _amplitudeZ;

constexpr void __set__amplitudeZ(float_t value) ;

constexpr float_t __get__amplitudeZ() const;

 float_t __declspec(property(get=__get__frequencyX, put=__set__frequencyX))  _frequencyX;

constexpr void __set__frequencyX(float_t value) ;

constexpr float_t __get__frequencyX() const;

 float_t __declspec(property(get=__get__frequencyY, put=__set__frequencyY))  _frequencyY;

constexpr void __set__frequencyY(float_t value) ;

constexpr float_t __get__frequencyY() const;

 float_t __declspec(property(get=__get__frequencyZ, put=__set__frequencyZ))  _frequencyZ;

constexpr void __set__frequencyZ(float_t value) ;

constexpr float_t __get__frequencyZ() const;

 UnityEngine::Quaternion __declspec(property(get=__get__targetRotation, put=__set__targetRotation))  _targetRotation;

constexpr void __set__targetRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__targetRotation() const;


// Methods

/// @brief Method Start addr 0x2250200 size 0x38 virtual false final false
 void Start() ;

/// @brief Method Tick addr 0x2250310 size 0x150 virtual true final true
 void Tick() ;

/// @brief Method Refresh addr 0x2250238 size 0xd8 virtual false final false
 void Refresh() ;

/// @brief Method GetPoint addr 0x2250460 size 0x8c virtual false final false
 UnityEngine::Vector3 GetPoint(float_t time) ;

// Ctor Parameters []
explicit FloatingTransformEffect() ;

/// @brief Method .ctor addr 0x22504ec size 0xa8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FloatingTransformEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FloatingTransformEffect, "", "FloatingTransformEffect");
