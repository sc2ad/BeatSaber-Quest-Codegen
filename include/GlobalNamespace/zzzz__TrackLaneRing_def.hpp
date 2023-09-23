#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class TrackLaneRing;
}
// Type: ::TrackLaneRing
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5103))
// CS Name: TrackLaneRing
class CORDL_TYPE TrackLaneRing : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~TrackLaneRing() = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackLaneRing", modifiers: " const&", def_value: None }]
constexpr TrackLaneRing(TrackLaneRing const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackLaneRing", modifiers: "&&", def_value: None }]
constexpr TrackLaneRing(TrackLaneRing&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TrackLaneRing(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TrackLaneRing& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TrackLaneRing& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TrackLaneRing& operator=(TrackLaneRing&& o) noexcept = default;
  constexpr TrackLaneRing& operator=(TrackLaneRing const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__prevRotZ, put=__set__prevRotZ))  _prevRotZ;

constexpr void __set__prevRotZ(float_t value) ;

constexpr float_t __get__prevRotZ() const;

 float_t __declspec(property(get=__get__rotZ, put=__set__rotZ))  _rotZ;

constexpr void __set__rotZ(float_t value) ;

constexpr float_t __get__rotZ() const;

 float_t __declspec(property(get=__get__destRotZ, put=__set__destRotZ))  _destRotZ;

constexpr void __set__destRotZ(float_t value) ;

constexpr float_t __get__destRotZ() const;

 float_t __declspec(property(get=__get__rotationSpeed, put=__set__rotationSpeed))  _rotationSpeed;

constexpr void __set__rotationSpeed(float_t value) ;

constexpr float_t __get__rotationSpeed() const;

 float_t __declspec(property(get=__get__prevPosZ, put=__set__prevPosZ))  _prevPosZ;

constexpr void __set__prevPosZ(float_t value) ;

constexpr float_t __get__prevPosZ() const;

 float_t __declspec(property(get=__get__posZ, put=__set__posZ))  _posZ;

constexpr void __set__posZ(float_t value) ;

constexpr float_t __get__posZ() const;

 float_t __declspec(property(get=__get__destPosZ, put=__set__destPosZ))  _destPosZ;

constexpr void __set__destPosZ(float_t value) ;

constexpr float_t __get__destPosZ() const;

 float_t __declspec(property(get=__get__moveSpeed, put=__set__moveSpeed))  _moveSpeed;

constexpr void __set__moveSpeed(float_t value) ;

constexpr float_t __get__moveSpeed() const;

 UnityEngine::Vector3 __declspec(property(get=__get__positionOffset, put=__set__positionOffset))  _positionOffset;

constexpr void __set__positionOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__positionOffset() const;

 UnityEngine::Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__transform() const;


// Properties

 float_t __declspec(property(get=get_destRotZ))  destRotZ;


// Methods

/// @brief Method get_destRotZ addr 0x226c768 size 0x8 virtual false final false
 float_t get_destRotZ() ;

/// @brief Method Init addr 0x226c770 size 0x78 virtual false final false
 void Init(UnityEngine::Vector3 position, UnityEngine::Vector3 positionOffset) ;

/// @brief Method FixedUpdateRing addr 0x226c7e8 size 0x74 virtual false final false
 void FixedUpdateRing(float_t fixedDeltaTime) ;

/// @brief Method LateUpdateRing addr 0x226c85c size 0x68 virtual false final false
 void LateUpdateRing(float_t interpolationFactor) ;

/// @brief Method SetDestRotation addr 0x226c8c4 size 0x8 virtual false final false
 void SetDestRotation(float_t destRotZ, float_t rotateSpeed) ;

/// @brief Method GetRotation addr 0x226c8cc size 0x8 virtual false final false
 float_t GetRotation() ;

/// @brief Method GetDestinationRotation addr 0x226c8d4 size 0x8 virtual false final false
 float_t GetDestinationRotation() ;

/// @brief Method SetPosition addr 0x226c8dc size 0x8 virtual false final false
 void SetPosition(float_t destPosZ, float_t moveSpeed) ;

// Ctor Parameters []
explicit TrackLaneRing() ;

/// @brief Method .ctor addr 0x226c8e4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::TrackLaneRing);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TrackLaneRing, "", "TrackLaneRing");
