#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::AI {
class NavMeshPath;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::Demos {
struct RootMotion__Demos__Navigator__State;
}
namespace RootMotion::Demos {
class Navigator;
}
// Type: ::State
namespace RootMotion::Demos {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12446))
// CS Name: RootMotion.Demos.Navigator::State
struct CORDL_TYPE RootMotion__Demos__Navigator__State : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RootMotion__Demos__Navigator__State(int32_t value__) noexcept;


                    constexpr RootMotion__Demos__Navigator__State(RootMotion__Demos__Navigator__State const&) = default;
                    constexpr RootMotion__Demos__Navigator__State(RootMotion__Demos__Navigator__State&&) = default;
                    constexpr RootMotion__Demos__Navigator__State& operator=(RootMotion__Demos__Navigator__State const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RootMotion__Demos__Navigator__State& operator=(RootMotion__Demos__Navigator__State&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RootMotion__Demos__Navigator__State(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RootMotion__Demos__Navigator__State_Unwrapped : int32_t {
__Idle = 0,
__Seeking = 1,
__OnPath = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RootMotion__Demos__Navigator__State_Unwrapped () const noexcept {
return std::bit_cast<__RootMotion__Demos__Navigator__State_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Idle offset 0
static RootMotion::Demos::RootMotion__Demos__Navigator__State const Idle;

/// @brief Field Seeking offset 0
static RootMotion::Demos::RootMotion__Demos__Navigator__State const Seeking;

/// @brief Field OnPath offset 0
static RootMotion::Demos::RootMotion__Demos__Navigator__State const OnPath;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def RootMotion::Demos
// Type: RootMotion.Demos::Navigator
namespace RootMotion::Demos {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12447))
// CS Name: RootMotion.Demos.Navigator
class CORDL_TYPE Navigator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using State = RootMotion::Demos::RootMotion__Demos__Navigator__State;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~Navigator() = default;

// Ctor Parameters [CppParam { name: "", ty: "Navigator", modifiers: " const&", def_value: None }]
constexpr Navigator(Navigator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Navigator", modifiers: "&&", def_value: None }]
constexpr Navigator(Navigator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Navigator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Navigator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Navigator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Navigator& operator=(Navigator&& o) noexcept = default;
  constexpr Navigator& operator=(Navigator const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_activeTargetSeeking, put=__set_activeTargetSeeking))  activeTargetSeeking;

constexpr void __set_activeTargetSeeking(bool value) ;

constexpr bool __get_activeTargetSeeking() const;

 float_t __declspec(property(get=__get_cornerRadius, put=__set_cornerRadius))  cornerRadius;

constexpr void __set_cornerRadius(float_t value) ;

constexpr float_t __get_cornerRadius() const;

 float_t __declspec(property(get=__get_recalculateOnPathDistance, put=__set_recalculateOnPathDistance))  recalculateOnPathDistance;

constexpr void __set_recalculateOnPathDistance(float_t value) ;

constexpr float_t __get_recalculateOnPathDistance() const;

 float_t __declspec(property(get=__get_maxSampleDistance, put=__set_maxSampleDistance))  maxSampleDistance;

constexpr void __set_maxSampleDistance(float_t value) ;

constexpr float_t __get_maxSampleDistance() const;

 float_t __declspec(property(get=__get_nextPathInterval, put=__set_nextPathInterval))  nextPathInterval;

constexpr void __set_nextPathInterval(float_t value) ;

constexpr float_t __get_nextPathInterval() const;

 UnityEngine::Vector3 __declspec(property(get=__get__normalizedDeltaPosition_k__BackingField, put=__set__normalizedDeltaPosition_k__BackingField))  _normalizedDeltaPosition_k__BackingField;

constexpr void __set__normalizedDeltaPosition_k__BackingField(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__normalizedDeltaPosition_k__BackingField() const;

 RootMotion::Demos::RootMotion__Demos__Navigator__State __declspec(property(get=__get__state_k__BackingField, put=__set__state_k__BackingField))  _state_k__BackingField;

constexpr void __set__state_k__BackingField(RootMotion::Demos::RootMotion__Demos__Navigator__State value) ;

constexpr RootMotion::Demos::RootMotion__Demos__Navigator__State __get__state_k__BackingField() const;

 UnityEngine::Transform __declspec(property(get=__get_transform, put=__set_transform))  transform;

constexpr void __set_transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_transform() const;

 int32_t __declspec(property(get=__get_cornerIndex, put=__set_cornerIndex))  cornerIndex;

constexpr void __set_cornerIndex(int32_t value) ;

constexpr int32_t __get_cornerIndex() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_corners, put=__set_corners))  corners;

constexpr void __set_corners(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get_corners() const;

 UnityEngine::AI::NavMeshPath __declspec(property(get=__get_path, put=__set_path))  path;

constexpr void __set_path(UnityEngine::AI::NavMeshPath value) ;

constexpr UnityEngine::AI::NavMeshPath __get_path() const;

 UnityEngine::Vector3 __declspec(property(get=__get_lastTargetPosition, put=__set_lastTargetPosition))  lastTargetPosition;

constexpr void __set_lastTargetPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_lastTargetPosition() const;

 bool __declspec(property(get=__get_initiated, put=__set_initiated))  initiated;

constexpr void __set_initiated(bool value) ;

constexpr bool __get_initiated() const;

 float_t __declspec(property(get=__get_nextPathTime, put=__set_nextPathTime))  nextPathTime;

constexpr void __set_nextPathTime(float_t value) ;

constexpr float_t __get_nextPathTime() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_normalizedDeltaPosition, put=set_normalizedDeltaPosition))  normalizedDeltaPosition;

 RootMotion::Demos::RootMotion__Demos__Navigator__State __declspec(property(get=get_state, put=set_state))  state;


// Methods

/// @brief Method get_normalizedDeltaPosition addr 0x11b6824 size 0xc virtual false final false
 UnityEngine::Vector3 get_normalizedDeltaPosition() ;

/// @brief Method set_normalizedDeltaPosition addr 0x11b6830 size 0xc virtual false final false
 void set_normalizedDeltaPosition(UnityEngine::Vector3 value) ;

/// @brief Method get_state addr 0x11b683c size 0x8 virtual false final false
 RootMotion::Demos::RootMotion__Demos__Navigator__State get_state() ;

/// @brief Method set_state addr 0x11b6844 size 0x8 virtual false final false
 void set_state(RootMotion::Demos::RootMotion__Demos__Navigator__State value) ;

/// @brief Method Initiate addr 0x11b684c size 0xb4 virtual false final false
 void Initiate(UnityEngine::Transform transform) ;

/// @brief Method Update addr 0x11b6900 size 0x444 virtual false final false
 void Update(UnityEngine::Vector3 targetPosition) ;

/// @brief Method CalculatePath addr 0x11b6e1c size 0x64 virtual false final false
 void CalculatePath(UnityEngine::Vector3 targetPosition) ;

/// @brief Method Find addr 0x11b6e80 size 0x134 virtual false final false
 bool Find(UnityEngine::Vector3 targetPosition) ;

/// @brief Method Stop addr 0x11b6d44 size 0x5c virtual false final false
 void Stop() ;

/// @brief Method HorDistance addr 0x11b6da0 size 0x7c virtual false final false
 float_t HorDistance(UnityEngine::Vector3 p1, UnityEngine::Vector3 p2) ;

/// @brief Method Visualize addr 0x11b6fb4 size 0x1c4 virtual false final false
 void Visualize() ;

// Ctor Parameters []
explicit Navigator() ;

/// @brief Method .ctor addr 0x11b7178 size 0x64 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::Demos
DEFINE_IL2CPP_ARG_TYPE(RootMotion::Demos::RootMotion__Demos__Navigator__State, "RootMotion.Demos", "Navigator/State");
NEED_NO_BOX(RootMotion::Demos::Navigator);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::Demos::Navigator, "RootMotion.Demos", "Navigator");
