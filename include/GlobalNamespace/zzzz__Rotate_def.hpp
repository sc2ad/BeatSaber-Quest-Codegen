#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class Rotate;
}
// Type: ::Rotate
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13824))
// CS Name: Rotate
class CORDL_TYPE Rotate : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~Rotate() = default;

// Ctor Parameters [CppParam { name: "", ty: "Rotate", modifiers: " const&", def_value: None }]
constexpr Rotate(Rotate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Rotate", modifiers: "&&", def_value: None }]
constexpr Rotate(Rotate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Rotate(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr Rotate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Rotate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Rotate& operator=(Rotate&& o) noexcept = default;
  constexpr Rotate& operator=(Rotate const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get__rotationVector, put=__set__rotationVector))  _rotationVector;

constexpr void __set__rotationVector(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__rotationVector() const;

 float_t __declspec(property(get=__get__speed, put=__set__speed))  _speed;

constexpr void __set__speed(float_t value) ;

constexpr float_t __get__speed() const;

 bool __declspec(property(get=__get__randomize, put=__set__randomize))  _randomize;

constexpr void __set__randomize(bool value) ;

constexpr bool __get__randomize() const;

 UnityEngine::Vector3 __declspec(property(get=__get__randomMinMultiplier, put=__set__randomMinMultiplier))  _randomMinMultiplier;

constexpr void __set__randomMinMultiplier(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__randomMinMultiplier() const;

 UnityEngine::Vector3 __declspec(property(get=__get__randomMaxMultiplier, put=__set__randomMaxMultiplier))  _randomMaxMultiplier;

constexpr void __set__randomMaxMultiplier(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__randomMaxMultiplier() const;

 UnityEngine::Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__transform() const;

 UnityEngine::Vector3 __declspec(property(get=__get__startRotationAngles, put=__set__startRotationAngles))  _startRotationAngles;

constexpr void __set__startRotationAngles(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__startRotationAngles() const;

 UnityEngine::Vector3 __declspec(property(get=__get__randomizedMultiplier, put=__set__randomizedMultiplier))  _randomizedMultiplier;

constexpr void __set__randomizedMultiplier(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__randomizedMultiplier() const;


// Methods

/// @brief Method Awake addr 0x1f79fd4 size 0xc8 virtual false final false
 void Awake() ;

/// @brief Method OnBecameVisible addr 0x1f7a09c size 0x20 virtual false final false
 void OnBecameVisible() ;

/// @brief Method OnBecameInvisible addr 0x1f7a124 size 0xc virtual false final false
 void OnBecameInvisible() ;

/// @brief Method Update addr 0x1f7a130 size 0xbc virtual false final false
 void Update() ;

/// @brief Method Randomize addr 0x1f7a0bc size 0x68 virtual false final false
 void Randomize() ;

static GlobalNamespace::Rotate New_ctor() ;

/// @brief Method .ctor addr 0x1f7a1ec size 0x80 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::Rotate);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Rotate, "", "Rotate");
