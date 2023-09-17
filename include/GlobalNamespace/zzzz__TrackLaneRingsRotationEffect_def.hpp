#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class TrackLaneRingsManager;
}
// Forward declare root types
namespace GlobalNamespace {
class TrackLaneRingsRotationEffect;
}
namespace GlobalNamespace {
class ____GlobalNamespace__TrackLaneRingsRotationEffect__RingRotationEffect;
}
// Type: ::RingRotationEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5106))
// CS Name: TrackLaneRingsRotationEffect::RingRotationEffect
class CORDL_TYPE ____GlobalNamespace__TrackLaneRingsRotationEffect__RingRotationEffect : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__TrackLaneRingsRotationEffect__RingRotationEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__TrackLaneRingsRotationEffect__RingRotationEffect", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__TrackLaneRingsRotationEffect__RingRotationEffect(____GlobalNamespace__TrackLaneRingsRotationEffect__RingRotationEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__TrackLaneRingsRotationEffect__RingRotationEffect", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__TrackLaneRingsRotationEffect__RingRotationEffect(____GlobalNamespace__TrackLaneRingsRotationEffect__RingRotationEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__TrackLaneRingsRotationEffect__RingRotationEffect(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__TrackLaneRingsRotationEffect__RingRotationEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__TrackLaneRingsRotationEffect__RingRotationEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__TrackLaneRingsRotationEffect__RingRotationEffect& operator=(____GlobalNamespace__TrackLaneRingsRotationEffect__RingRotationEffect&& o) noexcept = default;
  constexpr ____GlobalNamespace__TrackLaneRingsRotationEffect__RingRotationEffect& operator=(____GlobalNamespace__TrackLaneRingsRotationEffect__RingRotationEffect const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_rotationAngle, put=__set_rotationAngle))  rotationAngle;

constexpr void __set_rotationAngle(float_t value) ;

constexpr float_t __get_rotationAngle() const;

 float_t __declspec(property(get=__get_rotationStep, put=__set_rotationStep))  rotationStep;

constexpr void __set_rotationStep(float_t value) ;

constexpr float_t __get_rotationStep() const;

 float_t __declspec(property(get=__get_rotationFlexySpeed, put=__set_rotationFlexySpeed))  rotationFlexySpeed;

constexpr void __set_rotationFlexySpeed(float_t value) ;

constexpr float_t __get_rotationFlexySpeed() const;

 int32_t __declspec(property(get=__get_rotationPropagationSpeed, put=__set_rotationPropagationSpeed))  rotationPropagationSpeed;

constexpr void __set_rotationPropagationSpeed(int32_t value) ;

constexpr int32_t __get_rotationPropagationSpeed() const;

 int32_t __declspec(property(get=__get_progressPos, put=__set_progressPos))  progressPos;

constexpr void __set_progressPos(int32_t value) ;

constexpr int32_t __get_progressPos() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__TrackLaneRingsRotationEffect__RingRotationEffect() ;

/// @brief Method .ctor addr 0x226d2d0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TrackLaneRingsRotationEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5107))
// CS Name: TrackLaneRingsRotationEffect
class CORDL_TYPE TrackLaneRingsRotationEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RingRotationEffect = ::GlobalNamespace::____GlobalNamespace__TrackLaneRingsRotationEffect__RingRotationEffect;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~TrackLaneRingsRotationEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackLaneRingsRotationEffect", modifiers: " const&", def_value: None }]
constexpr TrackLaneRingsRotationEffect(TrackLaneRingsRotationEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackLaneRingsRotationEffect", modifiers: "&&", def_value: None }]
constexpr TrackLaneRingsRotationEffect(TrackLaneRingsRotationEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TrackLaneRingsRotationEffect(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TrackLaneRingsRotationEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TrackLaneRingsRotationEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TrackLaneRingsRotationEffect& operator=(TrackLaneRingsRotationEffect&& o) noexcept = default;
  constexpr TrackLaneRingsRotationEffect& operator=(TrackLaneRingsRotationEffect const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::TrackLaneRingsManager __declspec(property(get=__get__trackLaneRingsManager, put=__set__trackLaneRingsManager))  _trackLaneRingsManager;

constexpr void __set__trackLaneRingsManager(::GlobalNamespace::TrackLaneRingsManager value) ;

constexpr ::GlobalNamespace::TrackLaneRingsManager __get__trackLaneRingsManager() const;

 float_t __declspec(property(get=__get__startupRotationAngle, put=__set__startupRotationAngle))  _startupRotationAngle;

constexpr void __set__startupRotationAngle(float_t value) ;

constexpr float_t __get__startupRotationAngle() const;

 float_t __declspec(property(get=__get__startupRotationStep, put=__set__startupRotationStep))  _startupRotationStep;

constexpr void __set__startupRotationStep(float_t value) ;

constexpr float_t __get__startupRotationStep() const;

 int32_t __declspec(property(get=__get__startupRotationPropagationSpeed, put=__set__startupRotationPropagationSpeed))  _startupRotationPropagationSpeed;

constexpr void __set__startupRotationPropagationSpeed(int32_t value) ;

constexpr int32_t __get__startupRotationPropagationSpeed() const;

 float_t __declspec(property(get=__get__startupRotationFlexySpeed, put=__set__startupRotationFlexySpeed))  _startupRotationFlexySpeed;

constexpr void __set__startupRotationFlexySpeed(float_t value) ;

constexpr float_t __get__startupRotationFlexySpeed() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__TrackLaneRingsRotationEffect__RingRotationEffect> __declspec(property(get=__get__activeRingRotationEffects, put=__set__activeRingRotationEffects))  _activeRingRotationEffects;

constexpr void __set__activeRingRotationEffects(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__TrackLaneRingsRotationEffect__RingRotationEffect> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__TrackLaneRingsRotationEffect__RingRotationEffect> __get__activeRingRotationEffects() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__TrackLaneRingsRotationEffect__RingRotationEffect> __declspec(property(get=__get__ringRotationEffectsPool, put=__set__ringRotationEffectsPool))  _ringRotationEffectsPool;

constexpr void __set__ringRotationEffectsPool(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__TrackLaneRingsRotationEffect__RingRotationEffect> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__TrackLaneRingsRotationEffect__RingRotationEffect> __get__ringRotationEffectsPool() const;

 ::System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get_ringRotationEffectsToDelete, put=__set_ringRotationEffectsToDelete))  ringRotationEffectsToDelete;

constexpr void __set_ringRotationEffectsToDelete(::System::Collections::Generic::List_1<int32_t> value) ;

constexpr ::System::Collections::Generic::List_1<int32_t> __get_ringRotationEffectsToDelete() const;


// Methods

/// @brief Method Awake addr 0x226d150 size 0x180 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x226d2d8 size 0x10 virtual false final false
 void Start() ;

/// @brief Method FixedUpdate addr 0x226d3cc size 0x164 virtual false final false
 void FixedUpdate() ;

/// @brief Method AddRingRotationEffect addr 0x226d2e8 size 0xe4 virtual false final false
 void AddRingRotationEffect(float_t angle, float_t step, int32_t propagationSpeed, float_t flexySpeed) ;

/// @brief Method GetFirstRingRotationAngle addr 0x226d6ac size 0x38 virtual false final false
 float_t GetFirstRingRotationAngle() ;

/// @brief Method GetFirstRingDestinationRotationAngle addr 0x226d6e4 size 0x38 virtual false final false
 float_t GetFirstRingDestinationRotationAngle() ;

/// @brief Method SpawnRingRotationEffect addr 0x226d5d8 size 0xd4 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__TrackLaneRingsRotationEffect__RingRotationEffect SpawnRingRotationEffect() ;

/// @brief Method RecycleRingRotationEffect addr 0x226d530 size 0xa8 virtual false final false
 void RecycleRingRotationEffect(::GlobalNamespace::____GlobalNamespace__TrackLaneRingsRotationEffect__RingRotationEffect ringRotationEffect) ;

// Ctor Parameters []
explicit TrackLaneRingsRotationEffect() ;

/// @brief Method .ctor addr 0x226d71c size 0x90 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::TrackLaneRingsRotationEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TrackLaneRingsRotationEffect, "", "TrackLaneRingsRotationEffect");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__TrackLaneRingsRotationEffect__RingRotationEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__TrackLaneRingsRotationEffect__RingRotationEffect, "", "TrackLaneRingsRotationEffect/RingRotationEffect");
