#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData;
}
namespace GlobalNamespace {
class NoteData;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType;
}
namespace GlobalNamespace {
class IJumpOffsetYProvider;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
class SliderData;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnMovementData;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData;
}
// Type: ::ObstacleSpawnData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4838))
// CS Name: BeatmapObjectSpawnMovementData::ObstacleSpawnData
struct CORDL_TYPE GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "moveStartPos", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "moveEndPos", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "jumpEndPos", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "obstacleHeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "moveDuration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "jumpDuration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "noteLinesDistance", ty: "float_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData(UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float_t obstacleHeight, float_t moveDuration, float_t jumpDuration, float_t noteLinesDistance) noexcept;


                    constexpr GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData(GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData const&) = default;
                    constexpr GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData(GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData&&) = default;
                    constexpr GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData& operator=(GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData& operator=(GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x34};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_moveStartPos, put=__set_moveStartPos))  moveStartPos;

constexpr void __set_moveStartPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_moveStartPos() const;

 UnityEngine::Vector3 __declspec(property(get=__get_moveEndPos, put=__set_moveEndPos))  moveEndPos;

constexpr void __set_moveEndPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_moveEndPos() const;

 UnityEngine::Vector3 __declspec(property(get=__get_jumpEndPos, put=__set_jumpEndPos))  jumpEndPos;

constexpr void __set_jumpEndPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_jumpEndPos() const;

 float_t __declspec(property(get=__get_obstacleHeight, put=__set_obstacleHeight))  obstacleHeight;

constexpr void __set_obstacleHeight(float_t value) ;

constexpr float_t __get_obstacleHeight() const;

 float_t __declspec(property(get=__get_moveDuration, put=__set_moveDuration))  moveDuration;

constexpr void __set_moveDuration(float_t value) ;

constexpr float_t __get_moveDuration() const;

 float_t __declspec(property(get=__get_jumpDuration, put=__set_jumpDuration))  jumpDuration;

constexpr void __set_jumpDuration(float_t value) ;

constexpr float_t __get_jumpDuration() const;

 float_t __declspec(property(get=__get_noteLinesDistance, put=__set_noteLinesDistance))  noteLinesDistance;

constexpr void __set_noteLinesDistance(float_t value) ;

constexpr float_t __get_noteLinesDistance() const;


// Methods

/// @brief Method .ctor addr 0x2236e30 size 0x38 virtual false final false
 void _ctor(UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float_t obstacleHeight, float_t moveDuration, float_t jumpDuration, float_t noteLinesDistance) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NoteSpawnData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4839))
// CS Name: BeatmapObjectSpawnMovementData::NoteSpawnData
struct CORDL_TYPE GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "moveStartPos", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "moveEndPos", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "jumpEndPos", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "jumpGravity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "moveDuration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "jumpDuration", ty: "float_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData(UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float_t jumpGravity, float_t moveDuration, float_t jumpDuration) noexcept;


                    constexpr GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData(GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData const&) = default;
                    constexpr GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData(GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData&&) = default;
                    constexpr GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData& operator=(GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData& operator=(GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_moveStartPos, put=__set_moveStartPos))  moveStartPos;

constexpr void __set_moveStartPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_moveStartPos() const;

 UnityEngine::Vector3 __declspec(property(get=__get_moveEndPos, put=__set_moveEndPos))  moveEndPos;

constexpr void __set_moveEndPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_moveEndPos() const;

 UnityEngine::Vector3 __declspec(property(get=__get_jumpEndPos, put=__set_jumpEndPos))  jumpEndPos;

constexpr void __set_jumpEndPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_jumpEndPos() const;

 float_t __declspec(property(get=__get_jumpGravity, put=__set_jumpGravity))  jumpGravity;

constexpr void __set_jumpGravity(float_t value) ;

constexpr float_t __get_jumpGravity() const;

 float_t __declspec(property(get=__get_moveDuration, put=__set_moveDuration))  moveDuration;

constexpr void __set_moveDuration(float_t value) ;

constexpr float_t __get_moveDuration() const;

 float_t __declspec(property(get=__get_jumpDuration, put=__set_jumpDuration))  jumpDuration;

constexpr void __set_jumpDuration(float_t value) ;

constexpr float_t __get_jumpDuration() const;


// Methods

/// @brief Method .ctor addr 0x2236f2c size 0x30 virtual false final false
 void _ctor(UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float_t jumpGravity, float_t moveDuration, float_t jumpDuration) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SliderSpawnData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4840))
// CS Name: BeatmapObjectSpawnMovementData::SliderSpawnData
struct CORDL_TYPE GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "headMoveStartPos", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "headJumpStartPos", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "headJumpEndPos", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "headJumpGravity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "tailMoveStartPos", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "tailJumpStartPos", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "tailJumpEndPos", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "tailJumpGravity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "moveDuration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "jumpDuration", ty: "float_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData(UnityEngine::Vector3 headMoveStartPos, UnityEngine::Vector3 headJumpStartPos, UnityEngine::Vector3 headJumpEndPos, float_t headJumpGravity, UnityEngine::Vector3 tailMoveStartPos, UnityEngine::Vector3 tailJumpStartPos, UnityEngine::Vector3 tailJumpEndPos, float_t tailJumpGravity, float_t moveDuration, float_t jumpDuration) noexcept;


                    constexpr GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData(GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData const&) = default;
                    constexpr GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData(GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData&&) = default;
                    constexpr GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData& operator=(GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData& operator=(GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_headMoveStartPos, put=__set_headMoveStartPos))  headMoveStartPos;

constexpr void __set_headMoveStartPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_headMoveStartPos() const;

 UnityEngine::Vector3 __declspec(property(get=__get_headJumpStartPos, put=__set_headJumpStartPos))  headJumpStartPos;

constexpr void __set_headJumpStartPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_headJumpStartPos() const;

 UnityEngine::Vector3 __declspec(property(get=__get_headJumpEndPos, put=__set_headJumpEndPos))  headJumpEndPos;

constexpr void __set_headJumpEndPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_headJumpEndPos() const;

 float_t __declspec(property(get=__get_headJumpGravity, put=__set_headJumpGravity))  headJumpGravity;

constexpr void __set_headJumpGravity(float_t value) ;

constexpr float_t __get_headJumpGravity() const;

 UnityEngine::Vector3 __declspec(property(get=__get_tailMoveStartPos, put=__set_tailMoveStartPos))  tailMoveStartPos;

constexpr void __set_tailMoveStartPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_tailMoveStartPos() const;

 UnityEngine::Vector3 __declspec(property(get=__get_tailJumpStartPos, put=__set_tailJumpStartPos))  tailJumpStartPos;

constexpr void __set_tailJumpStartPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_tailJumpStartPos() const;

 UnityEngine::Vector3 __declspec(property(get=__get_tailJumpEndPos, put=__set_tailJumpEndPos))  tailJumpEndPos;

constexpr void __set_tailJumpEndPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_tailJumpEndPos() const;

 float_t __declspec(property(get=__get_tailJumpGravity, put=__set_tailJumpGravity))  tailJumpGravity;

constexpr void __set_tailJumpGravity(float_t value) ;

constexpr float_t __get_tailJumpGravity() const;

 float_t __declspec(property(get=__get_moveDuration, put=__set_moveDuration))  moveDuration;

constexpr void __set_moveDuration(float_t value) ;

constexpr float_t __get_moveDuration() const;

 float_t __declspec(property(get=__get_jumpDuration, put=__set_jumpDuration))  jumpDuration;

constexpr void __set_jumpDuration(float_t value) ;

constexpr float_t __get_jumpDuration() const;


// Methods

/// @brief Method .ctor addr 0x2236f5c size 0x64 virtual false final false
 void _ctor(UnityEngine::Vector3 headMoveStartPos, UnityEngine::Vector3 headJumpStartPos, UnityEngine::Vector3 headJumpEndPos, float_t headJumpGravity, UnityEngine::Vector3 tailMoveStartPos, UnityEngine::Vector3 tailJumpStartPos, UnityEngine::Vector3 tailJumpEndPos, float_t tailJumpGravity, float_t moveDuration, float_t jumpDuration) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NoteJumpValueType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4841))
// CS Name: BeatmapObjectSpawnMovementData::NoteJumpValueType
struct CORDL_TYPE GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType(GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType const&) = default;
                    constexpr GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType(GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType&&) = default;
                    constexpr GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType& operator=(GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType& operator=(GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType_Unwrapped : int32_t {
__BeatOffset = 1,
__JumpDuration = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field BeatOffset offset 0
static GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType const BeatOffset;

/// @brief Field JumpDuration offset 0
static GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType const JumpDuration;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapObjectSpawnMovementData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4842))
// CS Name: BeatmapObjectSpawnMovementData
class CORDL_TYPE BeatmapObjectSpawnMovementData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using NoteJumpValueType = GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType;

using SliderSpawnData = GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData;

using NoteSpawnData = GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData;

using ObstacleSpawnData = GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~BeatmapObjectSpawnMovementData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectSpawnMovementData", modifiers: " const&", def_value: None }]
constexpr BeatmapObjectSpawnMovementData(BeatmapObjectSpawnMovementData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectSpawnMovementData", modifiers: "&&", def_value: None }]
constexpr BeatmapObjectSpawnMovementData(BeatmapObjectSpawnMovementData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapObjectSpawnMovementData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapObjectSpawnMovementData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapObjectSpawnMovementData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapObjectSpawnMovementData& operator=(BeatmapObjectSpawnMovementData&& o) noexcept = default;
  constexpr BeatmapObjectSpawnMovementData& operator=(BeatmapObjectSpawnMovementData const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get__centerPos, put=__set__centerPos))  _centerPos;

constexpr void __set__centerPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__centerPos() const;

 float_t __declspec(property(get=__get__maxHalfJumpDistance, put=__set__maxHalfJumpDistance))  _maxHalfJumpDistance;

constexpr void __set__maxHalfJumpDistance(float_t value) ;

constexpr float_t __get__maxHalfJumpDistance() const;

 float_t __declspec(property(get=__get__startHalfJumpDurationInBeats, put=__set__startHalfJumpDurationInBeats))  _startHalfJumpDurationInBeats;

constexpr void __set__startHalfJumpDurationInBeats(float_t value) ;

constexpr float_t __get__startHalfJumpDurationInBeats() const;

 float_t __declspec(property(get=__get__baseLinesHighestJumpPosY, put=__set__baseLinesHighestJumpPosY))  _baseLinesHighestJumpPosY;

constexpr void __set__baseLinesHighestJumpPosY(float_t value) ;

constexpr float_t __get__baseLinesHighestJumpPosY() const;

 float_t __declspec(property(get=__get__upperLinesHighestJumpPosY, put=__set__upperLinesHighestJumpPosY))  _upperLinesHighestJumpPosY;

constexpr void __set__upperLinesHighestJumpPosY(float_t value) ;

constexpr float_t __get__upperLinesHighestJumpPosY() const;

 float_t __declspec(property(get=__get__topLinesHighestJumpPosY, put=__set__topLinesHighestJumpPosY))  _topLinesHighestJumpPosY;

constexpr void __set__topLinesHighestJumpPosY(float_t value) ;

constexpr float_t __get__topLinesHighestJumpPosY() const;

 float_t __declspec(property(get=__get__moveSpeed, put=__set__moveSpeed))  _moveSpeed;

constexpr void __set__moveSpeed(float_t value) ;

constexpr float_t __get__moveSpeed() const;

 float_t __declspec(property(get=__get__moveDuration, put=__set__moveDuration))  _moveDuration;

constexpr void __set__moveDuration(float_t value) ;

constexpr float_t __get__moveDuration() const;

 float_t __declspec(property(get=__get__verticalObstaclePosY, put=__set__verticalObstaclePosY))  _verticalObstaclePosY;

constexpr void __set__verticalObstaclePosY(float_t value) ;

constexpr float_t __get__verticalObstaclePosY() const;

 float_t __declspec(property(get=__get__obstacleTopPosY, put=__set__obstacleTopPosY))  _obstacleTopPosY;

constexpr void __set__obstacleTopPosY(float_t value) ;

constexpr float_t __get__obstacleTopPosY() const;

 float_t __declspec(property(get=__get__spawnAheadTime, put=__set__spawnAheadTime))  _spawnAheadTime;

constexpr void __set__spawnAheadTime(float_t value) ;

constexpr float_t __get__spawnAheadTime() const;

 float_t __declspec(property(get=__get__jumpDuration, put=__set__jumpDuration))  _jumpDuration;

constexpr void __set__jumpDuration(float_t value) ;

constexpr float_t __get__jumpDuration() const;

 float_t __declspec(property(get=__get__noteJumpStartBeatOffset, put=__set__noteJumpStartBeatOffset))  _noteJumpStartBeatOffset;

constexpr void __set__noteJumpStartBeatOffset(float_t value) ;

constexpr float_t __get__noteJumpStartBeatOffset() const;

 float_t __declspec(property(get=__get__noteJumpMovementSpeed, put=__set__noteJumpMovementSpeed))  _noteJumpMovementSpeed;

constexpr void __set__noteJumpMovementSpeed(float_t value) ;

constexpr float_t __get__noteJumpMovementSpeed() const;

 float_t __declspec(property(get=__get__jumpDistance, put=__set__jumpDistance))  _jumpDistance;

constexpr void __set__jumpDistance(float_t value) ;

constexpr float_t __get__jumpDistance() const;

 float_t __declspec(property(get=__get__moveDistance, put=__set__moveDistance))  _moveDistance;

constexpr void __set__moveDistance(float_t value) ;

constexpr float_t __get__moveDistance() const;

 UnityEngine::Vector3 __declspec(property(get=__get__moveStartPos, put=__set__moveStartPos))  _moveStartPos;

constexpr void __set__moveStartPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__moveStartPos() const;

 UnityEngine::Vector3 __declspec(property(get=__get__moveEndPos, put=__set__moveEndPos))  _moveEndPos;

constexpr void __set__moveEndPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__moveEndPos() const;

 UnityEngine::Vector3 __declspec(property(get=__get__jumpEndPos, put=__set__jumpEndPos))  _jumpEndPos;

constexpr void __set__jumpEndPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__jumpEndPos() const;

 int32_t __declspec(property(get=__get__noteLinesCount, put=__set__noteLinesCount))  _noteLinesCount;

constexpr void __set__noteLinesCount(int32_t value) ;

constexpr int32_t __get__noteLinesCount() const;

 GlobalNamespace::IJumpOffsetYProvider __declspec(property(get=__get__jumpOffsetYProvider, put=__set__jumpOffsetYProvider))  _jumpOffsetYProvider;

constexpr void __set__jumpOffsetYProvider(GlobalNamespace::IJumpOffsetYProvider value) ;

constexpr GlobalNamespace::IJumpOffsetYProvider __get__jumpOffsetYProvider() const;

 UnityEngine::Vector3 __declspec(property(get=__get__rightVec, put=__set__rightVec))  _rightVec;

constexpr void __set__rightVec(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__rightVec() const;

 UnityEngine::Vector3 __declspec(property(get=__get__forwardVec, put=__set__forwardVec))  _forwardVec;

constexpr void __set__forwardVec(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__forwardVec() const;

/// @brief Field kDefaultMaxHalfJumpDistance offset 0
static constexpr float_t  kDefaultMaxHalfJumpDistance{18};

/// @brief Field kDefaultStartHalfJumpDurationInBeats offset 0
static constexpr float_t  kDefaultStartHalfJumpDurationInBeats{4};


// Properties

 float_t __declspec(property(get=get_spawnAheadTime))  spawnAheadTime;

 float_t __declspec(property(get=get_moveDuration))  moveDuration;

 float_t __declspec(property(get=get_jumpDuration))  jumpDuration;

 float_t __declspec(property(get=get_noteLinesDistance))  noteLinesDistance;

 float_t __declspec(property(get=get_verticalLayersDistance))  verticalLayersDistance;

 float_t __declspec(property(get=get_jumpDistance))  jumpDistance;

 float_t __declspec(property(get=get_noteJumpMovementSpeed))  noteJumpMovementSpeed;

 int32_t __declspec(property(get=get_noteLinesCount))  noteLinesCount;

 UnityEngine::Vector3 __declspec(property(get=get_centerPos))  centerPos;

 float_t __declspec(property(get=get_jumpOffsetY))  jumpOffsetY;


// Methods

/// @brief Method get_spawnAheadTime addr 0x2236d6c size 0x8 virtual false final false
 float_t get_spawnAheadTime() ;

/// @brief Method get_moveDuration addr 0x2236d74 size 0x8 virtual false final false
 float_t get_moveDuration() ;

/// @brief Method get_jumpDuration addr 0x2236d7c size 0x8 virtual false final false
 float_t get_jumpDuration() ;

/// @brief Method get_noteLinesDistance addr 0x2235d94 size 0xc virtual false final false
 float_t get_noteLinesDistance() ;

/// @brief Method get_verticalLayersDistance addr 0x2235d4c size 0xc virtual false final false
 float_t get_verticalLayersDistance() ;

/// @brief Method get_jumpDistance addr 0x2236d84 size 0x8 virtual false final false
 float_t get_jumpDistance() ;

/// @brief Method get_noteJumpMovementSpeed addr 0x2236d8c size 0x8 virtual false final false
 float_t get_noteJumpMovementSpeed() ;

/// @brief Method get_noteLinesCount addr 0x2236d94 size 0x8 virtual false final false
 int32_t get_noteLinesCount() ;

/// @brief Method get_centerPos addr 0x2236d9c size 0xc virtual false final false
 UnityEngine::Vector3 get_centerPos() ;

/// @brief Method get_jumpOffsetY addr 0x2235c38 size 0xa0 virtual false final false
 float_t get_jumpOffsetY() ;

/// @brief Method Init addr 0x223626c size 0x150 virtual false final false
 void Init(int32_t noteLinesCount, float_t startNoteJumpMovementSpeed, float_t startBpm, GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType noteJumpValueType, float_t noteJumpValue, GlobalNamespace::IJumpOffsetYProvider jumpOffsetYProvider, UnityEngine::Vector3 rightVec, UnityEngine::Vector3 forwardVec) ;

/// @brief Method GetObstacleSpawnData addr 0x2236524 size 0x170 virtual false final false
 GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData GetObstacleSpawnData(GlobalNamespace::ObstacleData obstacleData) ;

/// @brief Method GetJumpingNoteSpawnData addr 0x223679c size 0xf8 virtual false final false
 GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData GetJumpingNoteSpawnData(GlobalNamespace::NoteData noteData) ;

/// @brief Method GetSliderSpawnData addr 0x22369ac size 0x188 virtual false final false
 GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData GetSliderSpawnData(GlobalNamespace::SliderData sliderData) ;

/// @brief Method GetNoteOffset addr 0x2236e68 size 0x78 virtual false final false
 UnityEngine::Vector3 GetNoteOffset(int32_t noteLineIndex, GlobalNamespace::NoteLineLayer noteLineLayer) ;

/// @brief Method GetObstacleOffset addr 0x2236da8 size 0x88 virtual false final false
 UnityEngine::Vector3 GetObstacleOffset(int32_t noteLineIndex, GlobalNamespace::NoteLineLayer noteLineLayer) ;

/// @brief Method Get2DNoteOffset addr 0x2236b80 size 0x14 virtual false final false
 UnityEngine::Vector2 Get2DNoteOffset(int32_t noteLineIndex, GlobalNamespace::NoteLineLayer noteLineLayer) ;

/// @brief Method JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset addr 0x2236bac size 0x70 virtual false final false
 float_t JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset(GlobalNamespace::NoteLineLayer lineLayer, float_t distanceFromPlayer) ;

/// @brief Method HighestJumpPosYForLineLayer addr 0x2237024 size 0x144 virtual false final false
 float_t HighestJumpPosYForLineLayer(GlobalNamespace::NoteLineLayer lineLayer) ;

/// @brief Method HighestJumpPosYForLineLayerWithoutJumpOffset addr 0x2237168 size 0x28 virtual false final false
 float_t HighestJumpPosYForLineLayerWithoutJumpOffset(GlobalNamespace::NoteLineLayer lineLayer) ;

/// @brief Method NoteJumpGravityForLineLayer addr 0x2236ee0 size 0x4c virtual false final false
 float_t NoteJumpGravityForLineLayer(GlobalNamespace::NoteLineLayer lineLayer, GlobalNamespace::NoteLineLayer beforeJumpLineLayer) ;

/// @brief Method NoteJumpGravityForLineLayerWithoutJumpOffset addr 0x2236fc0 size 0x64 virtual false final false
 float_t NoteJumpGravityForLineLayerWithoutJumpOffset(GlobalNamespace::NoteLineLayer lineLayer, GlobalNamespace::NoteLineLayer beforeJumpLineLayer) ;

static GlobalNamespace::BeatmapObjectSpawnMovementData New_ctor() ;

/// @brief Method .ctor addr 0x2236cac size 0x30 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType, "", "BeatmapObjectSpawnMovementData/NoteJumpValueType");
NEED_NO_BOX(GlobalNamespace::BeatmapObjectSpawnMovementData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectSpawnMovementData, "", "BeatmapObjectSpawnMovementData");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData, "", "BeatmapObjectSpawnMovementData/NoteSpawnData");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData, "", "BeatmapObjectSpawnMovementData/ObstacleSpawnData");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData, "", "BeatmapObjectSpawnMovementData/SliderSpawnData");
