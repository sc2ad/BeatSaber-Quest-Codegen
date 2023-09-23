#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class MovementHistoryRecorder;
}
namespace GlobalNamespace {
class Saber;
}
namespace GlobalNamespace {
class AveragingValueRecorder;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberActivityCounter;
}
// Type: ::SaberActivityCounter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5383))
// CS Name: SaberActivityCounter
class CORDL_TYPE SaberActivityCounter : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~SaberActivityCounter() = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberActivityCounter", modifiers: " const&", def_value: None }]
constexpr SaberActivityCounter(SaberActivityCounter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberActivityCounter", modifiers: "&&", def_value: None }]
constexpr SaberActivityCounter(SaberActivityCounter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SaberActivityCounter(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SaberActivityCounter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SaberActivityCounter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SaberActivityCounter& operator=(SaberActivityCounter&& o) noexcept = default;
  constexpr SaberActivityCounter& operator=(SaberActivityCounter const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__averageWindowDuration, put=__set__averageWindowDuration))  _averageWindowDuration;

constexpr void __set__averageWindowDuration(float_t value) ;

constexpr float_t __get__averageWindowDuration() const;

 float_t __declspec(property(get=__get__valuesPerSecond, put=__set__valuesPerSecond))  _valuesPerSecond;

constexpr void __set__valuesPerSecond(float_t value) ;

constexpr float_t __get__valuesPerSecond() const;

 float_t __declspec(property(get=__get__increaseSpeed, put=__set__increaseSpeed))  _increaseSpeed;

constexpr void __set__increaseSpeed(float_t value) ;

constexpr float_t __get__increaseSpeed() const;

 float_t __declspec(property(get=__get__deceraseSpeed, put=__set__deceraseSpeed))  _deceraseSpeed;

constexpr void __set__deceraseSpeed(float_t value) ;

constexpr float_t __get__deceraseSpeed() const;

 float_t __declspec(property(get=__get__movementSensitivityThreshold, put=__set__movementSensitivityThreshold))  _movementSensitivityThreshold;

constexpr void __set__movementSensitivityThreshold(float_t value) ;

constexpr float_t __get__movementSensitivityThreshold() const;

 GlobalNamespace::SaberManager __declspec(property(get=__get__saberManager, put=__set__saberManager))  _saberManager;

constexpr void __set__saberManager(GlobalNamespace::SaberManager value) ;

constexpr GlobalNamespace::SaberManager __get__saberManager() const;

 System::Action_1<float_t> __declspec(property(get=__get_totalDistanceDidChangeEvent, put=__set_totalDistanceDidChangeEvent))  totalDistanceDidChangeEvent;

constexpr void __set_totalDistanceDidChangeEvent(System::Action_1<float_t> value) ;

constexpr System::Action_1<float_t> __get_totalDistanceDidChangeEvent() const;

 GlobalNamespace::Saber __declspec(property(get=__get__leftSaber, put=__set__leftSaber))  _leftSaber;

constexpr void __set__leftSaber(GlobalNamespace::Saber value) ;

constexpr GlobalNamespace::Saber __get__leftSaber() const;

 GlobalNamespace::Saber __declspec(property(get=__get__rightSaber, put=__set__rightSaber))  _rightSaber;

constexpr void __set__rightSaber(GlobalNamespace::Saber value) ;

constexpr GlobalNamespace::Saber __get__rightSaber() const;

 UnityEngine::Vector3 __declspec(property(get=__get__prevLeftSaberTipPos, put=__set__prevLeftSaberTipPos))  _prevLeftSaberTipPos;

constexpr void __set__prevLeftSaberTipPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__prevLeftSaberTipPos() const;

 UnityEngine::Vector3 __declspec(property(get=__get__prevRightSaberTipPos, put=__set__prevRightSaberTipPos))  _prevRightSaberTipPos;

constexpr void __set__prevRightSaberTipPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__prevRightSaberTipPos() const;

 UnityEngine::Vector3 __declspec(property(get=__get__prevLeftHandPos, put=__set__prevLeftHandPos))  _prevLeftHandPos;

constexpr void __set__prevLeftHandPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__prevLeftHandPos() const;

 UnityEngine::Vector3 __declspec(property(get=__get__prevRightHandPos, put=__set__prevRightHandPos))  _prevRightHandPos;

constexpr void __set__prevRightHandPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__prevRightHandPos() const;

 bool __declspec(property(get=__get__hasPrevPos, put=__set__hasPrevPos))  _hasPrevPos;

constexpr void __set__hasPrevPos(bool value) ;

constexpr bool __get__hasPrevPos() const;

 float_t __declspec(property(get=__get__leftSaberMovementDistance, put=__set__leftSaberMovementDistance))  _leftSaberMovementDistance;

constexpr void __set__leftSaberMovementDistance(float_t value) ;

constexpr float_t __get__leftSaberMovementDistance() const;

 float_t __declspec(property(get=__get__rightSaberMovementDistance, put=__set__rightSaberMovementDistance))  _rightSaberMovementDistance;

constexpr void __set__rightSaberMovementDistance(float_t value) ;

constexpr float_t __get__rightSaberMovementDistance() const;

 float_t __declspec(property(get=__get__leftHandMovementDistance, put=__set__leftHandMovementDistance))  _leftHandMovementDistance;

constexpr void __set__leftHandMovementDistance(float_t value) ;

constexpr float_t __get__leftHandMovementDistance() const;

 float_t __declspec(property(get=__get__rightHandMovementDistance, put=__set__rightHandMovementDistance))  _rightHandMovementDistance;

constexpr void __set__rightHandMovementDistance(float_t value) ;

constexpr float_t __get__rightHandMovementDistance() const;

 GlobalNamespace::MovementHistoryRecorder __declspec(property(get=__get__saberMovementHistoryRecorder, put=__set__saberMovementHistoryRecorder))  _saberMovementHistoryRecorder;

constexpr void __set__saberMovementHistoryRecorder(GlobalNamespace::MovementHistoryRecorder value) ;

constexpr GlobalNamespace::MovementHistoryRecorder __get__saberMovementHistoryRecorder() const;

 GlobalNamespace::MovementHistoryRecorder __declspec(property(get=__get__handMovementHistoryRecorder, put=__set__handMovementHistoryRecorder))  _handMovementHistoryRecorder;

constexpr void __set__handMovementHistoryRecorder(GlobalNamespace::MovementHistoryRecorder value) ;

constexpr GlobalNamespace::MovementHistoryRecorder __get__handMovementHistoryRecorder() const;


// Properties

 float_t __declspec(property(get=get_leftSaberMovementDistance))  leftSaberMovementDistance;

 float_t __declspec(property(get=get_rightSaberMovementDistance))  rightSaberMovementDistance;

 float_t __declspec(property(get=get_leftHandMovementDistance))  leftHandMovementDistance;

 float_t __declspec(property(get=get_rightHandMovementDistance))  rightHandMovementDistance;

 GlobalNamespace::AveragingValueRecorder __declspec(property(get=get_saberMovementAveragingValueRecorder))  saberMovementAveragingValueRecorder;

 GlobalNamespace::AveragingValueRecorder __declspec(property(get=get_handMovementAveragingValueRecorder))  handMovementAveragingValueRecorder;


// Methods

/// @brief Method add_totalDistanceDidChangeEvent addr 0x210b7bc size 0xb0 virtual false final false
 void add_totalDistanceDidChangeEvent(System::Action_1<float_t> value) ;

/// @brief Method remove_totalDistanceDidChangeEvent addr 0x210b86c size 0xb0 virtual false final false
 void remove_totalDistanceDidChangeEvent(System::Action_1<float_t> value) ;

/// @brief Method get_leftSaberMovementDistance addr 0x210b91c size 0x8 virtual false final false
 float_t get_leftSaberMovementDistance() ;

/// @brief Method get_rightSaberMovementDistance addr 0x210b924 size 0x8 virtual false final false
 float_t get_rightSaberMovementDistance() ;

/// @brief Method get_leftHandMovementDistance addr 0x210b92c size 0x8 virtual false final false
 float_t get_leftHandMovementDistance() ;

/// @brief Method get_rightHandMovementDistance addr 0x210b934 size 0x8 virtual false final false
 float_t get_rightHandMovementDistance() ;

/// @brief Method get_saberMovementAveragingValueRecorder addr 0x2108c80 size 0x1c virtual false final false
 GlobalNamespace::AveragingValueRecorder get_saberMovementAveragingValueRecorder() ;

/// @brief Method get_handMovementAveragingValueRecorder addr 0x2108c9c size 0x1c virtual false final false
 GlobalNamespace::AveragingValueRecorder get_handMovementAveragingValueRecorder() ;

/// @brief Method Awake addr 0x210b93c size 0xb4 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x210b9f0 size 0x20 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x210ba10 size 0x414 virtual false final false
 void Update() ;

// Ctor Parameters []
explicit SaberActivityCounter() ;

/// @brief Method .ctor addr 0x210be24 size 0x20 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SaberActivityCounter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberActivityCounter, "", "SaberActivityCounter");
