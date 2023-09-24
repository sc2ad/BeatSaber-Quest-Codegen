#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class GlobalNamespace__DroneHover__SineLayer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Cloth;
}
// Forward declare root types
namespace GlobalNamespace {
class DroneHover;
}
namespace GlobalNamespace {
class GlobalNamespace__DroneHover__SineLayer;
}
// Type: ::SineLayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3994))
// CS Name: DroneHover::SineLayer
class CORDL_TYPE GlobalNamespace__DroneHover__SineLayer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__DroneHover__SineLayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DroneHover__SineLayer", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__DroneHover__SineLayer(GlobalNamespace__DroneHover__SineLayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DroneHover__SineLayer", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__DroneHover__SineLayer(GlobalNamespace__DroneHover__SineLayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__DroneHover__SineLayer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__DroneHover__SineLayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__DroneHover__SineLayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__DroneHover__SineLayer& operator=(GlobalNamespace__DroneHover__SineLayer&& o) noexcept = default;
  constexpr GlobalNamespace__DroneHover__SineLayer& operator=(GlobalNamespace__DroneHover__SineLayer const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_multiplier, put=__set_multiplier))  multiplier;

constexpr void __set_multiplier(float_t value) ;

constexpr float_t __get_multiplier() const;

 float_t __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(float_t value) ;

constexpr float_t __get_offset() const;


// Methods

static GlobalNamespace::GlobalNamespace__DroneHover__SineLayer New_ctor() ;

/// @brief Method .ctor addr 0x20afc20 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DroneHover
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3995))
// CS Name: DroneHover
class CORDL_TYPE DroneHover : public UnityEngine::MonoBehaviour {
public:
// Declarations
using SineLayer = GlobalNamespace::GlobalNamespace__DroneHover__SineLayer;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~DroneHover() = default;

// Ctor Parameters [CppParam { name: "", ty: "DroneHover", modifiers: " const&", def_value: None }]
constexpr DroneHover(DroneHover const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DroneHover", modifiers: "&&", def_value: None }]
constexpr DroneHover(DroneHover&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DroneHover(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DroneHover& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DroneHover& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DroneHover& operator=(DroneHover&& o) noexcept = default;
  constexpr DroneHover& operator=(DroneHover const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get__hoverAreaPerAxis, put=__set__hoverAreaPerAxis))  _hoverAreaPerAxis;

constexpr void __set__hoverAreaPerAxis(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__hoverAreaPerAxis() const;

 float_t __declspec(property(get=__get__speed, put=__set__speed))  _speed;

constexpr void __set__speed(float_t value) ;

constexpr float_t __get__speed() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__DroneHover__SineLayer> __declspec(property(get=__get__compoundSins, put=__set__compoundSins))  _compoundSins;

constexpr void __set__compoundSins(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__DroneHover__SineLayer> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__DroneHover__SineLayer> __get__compoundSins() const;

 System::Collections::Generic::List_1<UnityEngine::Transform> __declspec(property(get=__get__tiltTransforms, put=__set__tiltTransforms))  _tiltTransforms;

constexpr void __set__tiltTransforms(System::Collections::Generic::List_1<UnityEngine::Transform> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Transform> __get__tiltTransforms() const;

 float_t __declspec(property(get=__get__maxTiltAmount, put=__set__maxTiltAmount))  _maxTiltAmount;

constexpr void __set__maxTiltAmount(float_t value) ;

constexpr float_t __get__maxTiltAmount() const;

 float_t __declspec(property(get=__get__tiltSpeed, put=__set__tiltSpeed))  _tiltSpeed;

constexpr void __set__tiltSpeed(float_t value) ;

constexpr float_t __get__tiltSpeed() const;

 float_t __declspec(property(get=__get__tiltAheadOfTime, put=__set__tiltAheadOfTime))  _tiltAheadOfTime;

constexpr void __set__tiltAheadOfTime(float_t value) ;

constexpr float_t __get__tiltAheadOfTime() const;

 bool __declspec(property(get=__get__tiltToTarget, put=__set__tiltToTarget))  _tiltToTarget;

constexpr void __set__tiltToTarget(bool value) ;

constexpr bool __get__tiltToTarget() const;

 UnityEngine::Vector3 __declspec(property(get=__get__startPos, put=__set__startPos))  _startPos;

constexpr void __set__startPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__startPos() const;

 UnityEngine::Cloth __declspec(property(get=__get__cloth, put=__set__cloth))  _cloth;

constexpr void __set__cloth(UnityEngine::Cloth value) ;

constexpr UnityEngine::Cloth __get__cloth() const;


// Methods

/// @brief Method Start addr 0x20af684 size 0x30 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x20af6b4 size 0x120 virtual false final false
 void Update() ;

/// @brief Method GetNoiseVec3 addr 0x20af7d4 size 0x7c virtual false final false
 UnityEngine::Vector3 GetNoiseVec3(float_t time) ;

/// @brief Method GetNoise addr 0x20afb10 size 0xf4 virtual false final false
 float_t GetNoise(float_t time, float_t offset) ;

/// @brief Method UpdateTiltTransform addr 0x20af850 size 0x2c0 virtual false final false
 void UpdateTiltTransform() ;

static GlobalNamespace::DroneHover New_ctor() ;

/// @brief Method .ctor addr 0x20afc04 size 0x1c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DroneHover);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DroneHover, "", "DroneHover");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__DroneHover__SineLayer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__DroneHover__SineLayer, "", "DroneHover/SineLayer");
