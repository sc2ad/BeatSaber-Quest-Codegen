#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MovementBeatmapEventEffect__MovementData;
}
namespace GlobalNamespace {
class MovementBeatmapEventEffect;
}
// Type: ::MovementData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5088))
// CS Name: MovementBeatmapEventEffect::MovementData
class CORDL_TYPE GlobalNamespace__MovementBeatmapEventEffect__MovementData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__MovementBeatmapEventEffect__MovementData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MovementBeatmapEventEffect__MovementData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MovementBeatmapEventEffect__MovementData(GlobalNamespace__MovementBeatmapEventEffect__MovementData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MovementBeatmapEventEffect__MovementData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MovementBeatmapEventEffect__MovementData(GlobalNamespace__MovementBeatmapEventEffect__MovementData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MovementBeatmapEventEffect__MovementData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MovementBeatmapEventEffect__MovementData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MovementBeatmapEventEffect__MovementData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MovementBeatmapEventEffect__MovementData& operator=(GlobalNamespace__MovementBeatmapEventEffect__MovementData&& o) noexcept = default;
  constexpr GlobalNamespace__MovementBeatmapEventEffect__MovementData& operator=(GlobalNamespace__MovementBeatmapEventEffect__MovementData const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get__localPositionOffset, put=__set__localPositionOffset))  _localPositionOffset;

constexpr void __set__localPositionOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__localPositionOffset() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_localPositionOffset))  localPositionOffset;


// Methods

/// @brief Method get_localPositionOffset addr 0x2269e40 size 0xc virtual false final false
 UnityEngine::Vector3 get_localPositionOffset() ;

// Ctor Parameters []
explicit GlobalNamespace__MovementBeatmapEventEffect__MovementData() ;

/// @brief Method .ctor addr 0x2269e4c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MovementBeatmapEventEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5089))
// CS Name: MovementBeatmapEventEffect
class CORDL_TYPE MovementBeatmapEventEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
using MovementData = GlobalNamespace::GlobalNamespace__MovementBeatmapEventEffect__MovementData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~MovementBeatmapEventEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "MovementBeatmapEventEffect", modifiers: " const&", def_value: None }]
constexpr MovementBeatmapEventEffect(MovementBeatmapEventEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MovementBeatmapEventEffect", modifiers: "&&", def_value: None }]
constexpr MovementBeatmapEventEffect(MovementBeatmapEventEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MovementBeatmapEventEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MovementBeatmapEventEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MovementBeatmapEventEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MovementBeatmapEventEffect& operator=(MovementBeatmapEventEffect&& o) noexcept = default;
  constexpr MovementBeatmapEventEffect& operator=(MovementBeatmapEventEffect const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BasicBeatmapEventType __declspec(property(get=__get__beatmapEventType, put=__set__beatmapEventType))  _beatmapEventType;

constexpr void __set__beatmapEventType(GlobalNamespace::BasicBeatmapEventType value) ;

constexpr GlobalNamespace::BasicBeatmapEventType __get__beatmapEventType() const;

 float_t __declspec(property(get=__get__transitionSpeed, put=__set__transitionSpeed))  _transitionSpeed;

constexpr void __set__transitionSpeed(float_t value) ;

constexpr float_t __get__transitionSpeed() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__MovementBeatmapEventEffect__MovementData> __declspec(property(get=__get__movementData, put=__set__movementData))  _movementData;

constexpr void __set__movementData(::ArrayW<GlobalNamespace::GlobalNamespace__MovementBeatmapEventEffect__MovementData> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__MovementBeatmapEventEffect__MovementData> __get__movementData() const;

 ::ArrayW<UnityEngine::Transform> __declspec(property(get=__get__transforms, put=__set__transforms))  _transforms;

constexpr void __set__transforms(::ArrayW<UnityEngine::Transform> value) ;

constexpr ::ArrayW<UnityEngine::Transform> __get__transforms() const;

 GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value) ;

constexpr GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 int32_t __declspec(property(get=__get__currentMovementDataIdx, put=__set__currentMovementDataIdx))  _currentMovementDataIdx;

constexpr void __set__currentMovementDataIdx(int32_t value) ;

constexpr int32_t __get__currentMovementDataIdx() const;

 UnityEngine::Vector3 __declspec(property(get=__get__currentPositionOffset, put=__set__currentPositionOffset))  _currentPositionOffset;

constexpr void __set__currentPositionOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__currentPositionOffset() const;

 UnityEngine::Vector3 __declspec(property(get=__get__prevPositionOffset, put=__set__prevPositionOffset))  _prevPositionOffset;

constexpr void __set__prevPositionOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__prevPositionOffset() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get__startLocalPositions, put=__set__startLocalPositions))  _startLocalPositions;

constexpr void __set__startLocalPositions(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get__startLocalPositions() const;

 GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__beatmapDataCallbackWrapper, put=__set__beatmapDataCallbackWrapper))  _beatmapDataCallbackWrapper;

constexpr void __set__beatmapDataCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr GlobalNamespace::BeatmapDataCallbackWrapper __get__beatmapDataCallbackWrapper() const;


// Methods

/// @brief Method Start addr 0x2269994 size 0x1f8 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2269c48 size 0x1c virtual false final false
 void OnDestroy() ;

/// @brief Method FixedUpdate addr 0x2269c64 size 0x110 virtual false final false
 void FixedUpdate() ;

/// @brief Method LateUpdate addr 0x2269d74 size 0x8c virtual false final false
 void LateUpdate() ;

/// @brief Method HandleBeatmapEvent addr 0x2269e00 size 0x38 virtual false final false
 void HandleBeatmapEvent(GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData) ;

/// @brief Method SetLocalPositionOffsetsForAllObjects addr 0x2269b8c size 0xbc virtual false final false
 void SetLocalPositionOffsetsForAllObjects(UnityEngine::Vector3 localPositionOffset) ;

// Ctor Parameters []
explicit MovementBeatmapEventEffect() ;

/// @brief Method .ctor addr 0x2269e38 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MovementBeatmapEventEffect__MovementData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MovementBeatmapEventEffect__MovementData, "", "MovementBeatmapEventEffect/MovementData");
NEED_NO_BOX(GlobalNamespace::MovementBeatmapEventEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MovementBeatmapEventEffect, "", "MovementBeatmapEventEffect");
