#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData;
}
namespace GlobalNamespace {
class IBeatmapObjectSpawnController;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectAvoidanceYOffsetEvaluator;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData;
}
// Type: ::BufferData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3944))
// CS Name: BeatmapObjectAvoidanceYOffsetEvaluator::BufferData
struct CORDL_TYPE GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "songTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "yOffset", ty: "float_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData(float_t songTime, float_t yOffset) noexcept;


                    constexpr GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData(GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData const&) = default;
                    constexpr GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData(GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData&&) = default;
                    constexpr GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData& operator=(GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData& operator=(GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_songTime, put=__set_songTime))  songTime;

constexpr void __set_songTime(float_t value) ;

constexpr float_t __get_songTime() const;

 float_t __declspec(property(get=__get_yOffset, put=__set_yOffset))  yOffset;

constexpr void __set_yOffset(float_t value) ;

constexpr float_t __get_yOffset() const;


// Methods

/// @brief Method .ctor addr 0x20a4f88 size 0x8 virtual false final false
 void _ctor(float_t songTime, float_t yOffset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapObjectAvoidanceYOffsetEvaluator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3945))
// CS Name: BeatmapObjectAvoidanceYOffsetEvaluator
class CORDL_TYPE BeatmapObjectAvoidanceYOffsetEvaluator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using BufferData = GlobalNamespace::GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BeatmapObjectAvoidanceYOffsetEvaluator() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectAvoidanceYOffsetEvaluator", modifiers: " const&", def_value: None }]
constexpr BeatmapObjectAvoidanceYOffsetEvaluator(BeatmapObjectAvoidanceYOffsetEvaluator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectAvoidanceYOffsetEvaluator", modifiers: "&&", def_value: None }]
constexpr BeatmapObjectAvoidanceYOffsetEvaluator(BeatmapObjectAvoidanceYOffsetEvaluator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapObjectAvoidanceYOffsetEvaluator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapObjectAvoidanceYOffsetEvaluator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapObjectAvoidanceYOffsetEvaluator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapObjectAvoidanceYOffsetEvaluator& operator=(BeatmapObjectAvoidanceYOffsetEvaluator&& o) noexcept = default;
  constexpr BeatmapObjectAvoidanceYOffsetEvaluator& operator=(BeatmapObjectAvoidanceYOffsetEvaluator const& o) noexcept = default;
                


// Fields

/// @brief Field kYJumpOffsetBufferLength offset 0
static constexpr int32_t  kYJumpOffsetBufferLength{2000};

/// @brief Field kYJumpOffsetBufferSongTimeInitValue offset 0
static constexpr float_t  kYJumpOffsetBufferSongTimeInitValue{-1000};

 int32_t __declspec(property(get=__get__currentYJumpOffsetBufferEndIndex, put=__set__currentYJumpOffsetBufferEndIndex))  _currentYJumpOffsetBufferEndIndex;

constexpr void __set__currentYJumpOffsetBufferEndIndex(int32_t value) ;

constexpr int32_t __get__currentYJumpOffsetBufferEndIndex() const;

 float_t __declspec(property(get=__get__jumpDurationToDesiredZPosition, put=__set__jumpDurationToDesiredZPosition))  _jumpDurationToDesiredZPosition;

constexpr void __set__jumpDurationToDesiredZPosition(float_t value) ;

constexpr float_t __get__jumpDurationToDesiredZPosition() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData> __declspec(property(get=__get__yJumpOffsetBuffer, put=__set__yJumpOffsetBuffer))  _yJumpOffsetBuffer;

constexpr void __set__yJumpOffsetBuffer(::ArrayW<GlobalNamespace::GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData> __get__yJumpOffsetBuffer() const;

 GlobalNamespace::IAudioTimeSource __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource))  _audioTimeSource;

constexpr void __set__audioTimeSource(GlobalNamespace::IAudioTimeSource value) ;

constexpr GlobalNamespace::IAudioTimeSource __get__audioTimeSource() const;

 GlobalNamespace::IBeatmapObjectSpawnController __declspec(property(get=__get__beatmapObjectSpawnController, put=__set__beatmapObjectSpawnController))  _beatmapObjectSpawnController;

constexpr void __set__beatmapObjectSpawnController(GlobalNamespace::IBeatmapObjectSpawnController value) ;

constexpr GlobalNamespace::IBeatmapObjectSpawnController __get__beatmapObjectSpawnController() const;


// Methods

// Ctor Parameters [CppParam { name: "audioTimeSource", ty: "GlobalNamespace::IAudioTimeSource", modifiers: "", def_value: None }, CppParam { name: "beatmapObjectSpawnController", ty: "GlobalNamespace::IBeatmapObjectSpawnController", modifiers: "", def_value: None }, CppParam { name: "moveToPlayerHeadTParam", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "noteSpawnData", ty: "GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData", modifiers: "", def_value: None }]
explicit BeatmapObjectAvoidanceYOffsetEvaluator(GlobalNamespace::IAudioTimeSource audioTimeSource, GlobalNamespace::IBeatmapObjectSpawnController beatmapObjectSpawnController, float_t moveToPlayerHeadTParam, GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData noteSpawnData) ;

/// @brief Method .ctor addr 0x20a4e34 size 0x154 virtual false final false
 void _ctor(GlobalNamespace::IAudioTimeSource audioTimeSource, GlobalNamespace::IBeatmapObjectSpawnController beatmapObjectSpawnController, float_t moveToPlayerHeadTParam, GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData noteSpawnData) ;

/// @brief Method ManualUpdate addr 0x20a4f90 size 0x178 virtual false final false
 void ManualUpdate() ;

/// @brief Method GetJumpOffsetYAtJumpStartSongTime addr 0x20a5108 size 0x310 virtual false final false
 float_t GetJumpOffsetYAtJumpStartSongTime(float_t lastDeltaTime) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator, "", "BeatmapObjectAvoidanceYOffsetEvaluator");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData, "", "BeatmapObjectAvoidanceYOffsetEvaluator/BufferData");
