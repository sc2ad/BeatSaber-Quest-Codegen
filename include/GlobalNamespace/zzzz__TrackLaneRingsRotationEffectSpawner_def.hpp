#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class TrackLaneRingsRotationEffect;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType;
}
namespace GlobalNamespace {
class TrackLaneRingsRotationEffectSpawner;
}
// Type: ::RotationStepType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5108))
// CS Name: TrackLaneRingsRotationEffectSpawner::RotationStepType
struct CORDL_TYPE GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType(GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType const&) = default;
                    constexpr GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType(GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType&&) = default;
                    constexpr GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType& operator=(GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType& operator=(GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType_Unwrapped : int32_t {
__Range0ToMax = 0,
__Range = 1,
__MaxOr0 = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Range0ToMax offset 0
static GlobalNamespace::GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType const Range0ToMax;

/// @brief Field Range offset 0
static GlobalNamespace::GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType const Range;

/// @brief Field MaxOr0 offset 0
static GlobalNamespace::GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType const MaxOr0;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TrackLaneRingsRotationEffectSpawner
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5109))
// CS Name: TrackLaneRingsRotationEffectSpawner
class CORDL_TYPE TrackLaneRingsRotationEffectSpawner : public UnityEngine::MonoBehaviour {
public:
// Declarations
using RotationStepType = GlobalNamespace::GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~TrackLaneRingsRotationEffectSpawner() = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackLaneRingsRotationEffectSpawner", modifiers: " const&", def_value: None }]
constexpr TrackLaneRingsRotationEffectSpawner(TrackLaneRingsRotationEffectSpawner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackLaneRingsRotationEffectSpawner", modifiers: "&&", def_value: None }]
constexpr TrackLaneRingsRotationEffectSpawner(TrackLaneRingsRotationEffectSpawner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TrackLaneRingsRotationEffectSpawner(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TrackLaneRingsRotationEffectSpawner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TrackLaneRingsRotationEffectSpawner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TrackLaneRingsRotationEffectSpawner& operator=(TrackLaneRingsRotationEffectSpawner&& o) noexcept = default;
  constexpr TrackLaneRingsRotationEffectSpawner& operator=(TrackLaneRingsRotationEffectSpawner const& o) noexcept = default;
                


// Fields

 GlobalNamespace::TrackLaneRingsRotationEffect __declspec(property(get=__get__trackLaneRingsRotationEffect, put=__set__trackLaneRingsRotationEffect))  _trackLaneRingsRotationEffect;

constexpr void __set__trackLaneRingsRotationEffect(GlobalNamespace::TrackLaneRingsRotationEffect value) ;

constexpr GlobalNamespace::TrackLaneRingsRotationEffect __get__trackLaneRingsRotationEffect() const;

 GlobalNamespace::BasicBeatmapEventType __declspec(property(get=__get__beatmapEventType, put=__set__beatmapEventType))  _beatmapEventType;

constexpr void __set__beatmapEventType(GlobalNamespace::BasicBeatmapEventType value) ;

constexpr GlobalNamespace::BasicBeatmapEventType __get__beatmapEventType() const;

 float_t __declspec(property(get=__get__rotation, put=__set__rotation))  _rotation;

constexpr void __set__rotation(float_t value) ;

constexpr float_t __get__rotation() const;

 float_t __declspec(property(get=__get__rotationStep, put=__set__rotationStep))  _rotationStep;

constexpr void __set__rotationStep(float_t value) ;

constexpr float_t __get__rotationStep() const;

 GlobalNamespace::GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType __declspec(property(get=__get__rotationStepType, put=__set__rotationStepType))  _rotationStepType;

constexpr void __set__rotationStepType(GlobalNamespace::GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType value) ;

constexpr GlobalNamespace::GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType __get__rotationStepType() const;

 int32_t __declspec(property(get=__get__rotationPropagationSpeed, put=__set__rotationPropagationSpeed))  _rotationPropagationSpeed;

constexpr void __set__rotationPropagationSpeed(int32_t value) ;

constexpr int32_t __get__rotationPropagationSpeed() const;

 float_t __declspec(property(get=__get__rotationFlexySpeed, put=__set__rotationFlexySpeed))  _rotationFlexySpeed;

constexpr void __set__rotationFlexySpeed(float_t value) ;

constexpr float_t __get__rotationFlexySpeed() const;

 GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value) ;

constexpr GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__beatmapDataCallbackWrapper, put=__set__beatmapDataCallbackWrapper))  _beatmapDataCallbackWrapper;

constexpr void __set__beatmapDataCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr GlobalNamespace::BeatmapDataCallbackWrapper __get__beatmapDataCallbackWrapper() const;


// Methods

/// @brief Method Start addr 0x226d7ac size 0x124 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x226d8d0 size 0x1c virtual false final false
 void OnDestroy() ;

/// @brief Method HandleBeatmapEvent addr 0x226d8ec size 0xcc virtual false final false
 void HandleBeatmapEvent(GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData) ;

static GlobalNamespace::TrackLaneRingsRotationEffectSpawner New_ctor() ;

/// @brief Method .ctor addr 0x226d9b8 size 0x24 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType, "", "TrackLaneRingsRotationEffectSpawner/RotationStepType");
NEED_NO_BOX(GlobalNamespace::TrackLaneRingsRotationEffectSpawner);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TrackLaneRingsRotationEffectSpawner, "", "TrackLaneRingsRotationEffectSpawner");
