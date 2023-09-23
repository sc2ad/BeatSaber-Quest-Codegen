#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PoolableSerializable_def.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
struct GlobalNamespace__SliderData__Type;
}
namespace GlobalNamespace {
struct Vector3Serializable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
struct SliderMidAnchorMode;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct ColorType;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderSpawnInfoNetSerializable;
}
// Type: ::SliderSpawnInfoNetSerializable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15122))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15135))
// CS Name: SliderSpawnInfoNetSerializable
class CORDL_TYPE SliderSpawnInfoNetSerializable : public GlobalNamespace::PoolableSerializable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc8};

virtual ~SliderSpawnInfoNetSerializable() = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderSpawnInfoNetSerializable", modifiers: " const&", def_value: None }]
constexpr SliderSpawnInfoNetSerializable(SliderSpawnInfoNetSerializable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderSpawnInfoNetSerializable", modifiers: "&&", def_value: None }]
constexpr SliderSpawnInfoNetSerializable(SliderSpawnInfoNetSerializable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SliderSpawnInfoNetSerializable(void* ptr) noexcept : GlobalNamespace::PoolableSerializable(ptr) {
}


  constexpr SliderSpawnInfoNetSerializable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SliderSpawnInfoNetSerializable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SliderSpawnInfoNetSerializable& operator=(SliderSpawnInfoNetSerializable&& o) noexcept = default;
  constexpr SliderSpawnInfoNetSerializable& operator=(SliderSpawnInfoNetSerializable const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ColorType __declspec(property(get=__get_colorType, put=__set_colorType))  colorType;

constexpr void __set_colorType(GlobalNamespace::ColorType value) ;

constexpr GlobalNamespace::ColorType __get_colorType() const;

 GlobalNamespace::GlobalNamespace__SliderData__Type __declspec(property(get=__get_sliderType, put=__set_sliderType))  sliderType;

constexpr void __set_sliderType(GlobalNamespace::GlobalNamespace__SliderData__Type value) ;

constexpr GlobalNamespace::GlobalNamespace__SliderData__Type __get_sliderType() const;

 bool __declspec(property(get=__get_hasHeadNote, put=__set_hasHeadNote))  hasHeadNote;

constexpr void __set_hasHeadNote(bool value) ;

constexpr bool __get_hasHeadNote() const;

 float_t __declspec(property(get=__get_headTime, put=__set_headTime))  headTime;

constexpr void __set_headTime(float_t value) ;

constexpr float_t __get_headTime() const;

 int32_t __declspec(property(get=__get_headLineIndex, put=__set_headLineIndex))  headLineIndex;

constexpr void __set_headLineIndex(int32_t value) ;

constexpr int32_t __get_headLineIndex() const;

 GlobalNamespace::NoteLineLayer __declspec(property(get=__get_headLineLayer, put=__set_headLineLayer))  headLineLayer;

constexpr void __set_headLineLayer(GlobalNamespace::NoteLineLayer value) ;

constexpr GlobalNamespace::NoteLineLayer __get_headLineLayer() const;

 GlobalNamespace::NoteLineLayer __declspec(property(get=__get_headBeforeJumpLineLayer, put=__set_headBeforeJumpLineLayer))  headBeforeJumpLineLayer;

constexpr void __set_headBeforeJumpLineLayer(GlobalNamespace::NoteLineLayer value) ;

constexpr GlobalNamespace::NoteLineLayer __get_headBeforeJumpLineLayer() const;

 float_t __declspec(property(get=__get_headControlPointLengthMultiplier, put=__set_headControlPointLengthMultiplier))  headControlPointLengthMultiplier;

constexpr void __set_headControlPointLengthMultiplier(float_t value) ;

constexpr float_t __get_headControlPointLengthMultiplier() const;

 GlobalNamespace::NoteCutDirection __declspec(property(get=__get_headCutDirection, put=__set_headCutDirection))  headCutDirection;

constexpr void __set_headCutDirection(GlobalNamespace::NoteCutDirection value) ;

constexpr GlobalNamespace::NoteCutDirection __get_headCutDirection() const;

 float_t __declspec(property(get=__get_headCutDirectionAngleOffset, put=__set_headCutDirectionAngleOffset))  headCutDirectionAngleOffset;

constexpr void __set_headCutDirectionAngleOffset(float_t value) ;

constexpr float_t __get_headCutDirectionAngleOffset() const;

 bool __declspec(property(get=__get_hasTailNote, put=__set_hasTailNote))  hasTailNote;

constexpr void __set_hasTailNote(bool value) ;

constexpr bool __get_hasTailNote() const;

 float_t __declspec(property(get=__get_tailTime, put=__set_tailTime))  tailTime;

constexpr void __set_tailTime(float_t value) ;

constexpr float_t __get_tailTime() const;

 int32_t __declspec(property(get=__get_tailLineIndex, put=__set_tailLineIndex))  tailLineIndex;

constexpr void __set_tailLineIndex(int32_t value) ;

constexpr int32_t __get_tailLineIndex() const;

 GlobalNamespace::NoteLineLayer __declspec(property(get=__get_tailLineLayer, put=__set_tailLineLayer))  tailLineLayer;

constexpr void __set_tailLineLayer(GlobalNamespace::NoteLineLayer value) ;

constexpr GlobalNamespace::NoteLineLayer __get_tailLineLayer() const;

 GlobalNamespace::NoteLineLayer __declspec(property(get=__get_tailBeforeJumpLineLayer, put=__set_tailBeforeJumpLineLayer))  tailBeforeJumpLineLayer;

constexpr void __set_tailBeforeJumpLineLayer(GlobalNamespace::NoteLineLayer value) ;

constexpr GlobalNamespace::NoteLineLayer __get_tailBeforeJumpLineLayer() const;

 float_t __declspec(property(get=__get_tailControlPointLengthMultiplier, put=__set_tailControlPointLengthMultiplier))  tailControlPointLengthMultiplier;

constexpr void __set_tailControlPointLengthMultiplier(float_t value) ;

constexpr float_t __get_tailControlPointLengthMultiplier() const;

 GlobalNamespace::NoteCutDirection __declspec(property(get=__get_tailCutDirection, put=__set_tailCutDirection))  tailCutDirection;

constexpr void __set_tailCutDirection(GlobalNamespace::NoteCutDirection value) ;

constexpr GlobalNamespace::NoteCutDirection __get_tailCutDirection() const;

 float_t __declspec(property(get=__get_tailCutDirectionAngleOffset, put=__set_tailCutDirectionAngleOffset))  tailCutDirectionAngleOffset;

constexpr void __set_tailCutDirectionAngleOffset(float_t value) ;

constexpr float_t __get_tailCutDirectionAngleOffset() const;

 GlobalNamespace::SliderMidAnchorMode __declspec(property(get=__get_midAnchorMode, put=__set_midAnchorMode))  midAnchorMode;

constexpr void __set_midAnchorMode(GlobalNamespace::SliderMidAnchorMode value) ;

constexpr GlobalNamespace::SliderMidAnchorMode __get_midAnchorMode() const;

 int32_t __declspec(property(get=__get_sliceCount, put=__set_sliceCount))  sliceCount;

constexpr void __set_sliceCount(int32_t value) ;

constexpr int32_t __get_sliceCount() const;

 float_t __declspec(property(get=__get_squishAmount, put=__set_squishAmount))  squishAmount;

constexpr void __set_squishAmount(float_t value) ;

constexpr float_t __get_squishAmount() const;

 GlobalNamespace::Vector3Serializable __declspec(property(get=__get_headMoveStartPos, put=__set_headMoveStartPos))  headMoveStartPos;

constexpr void __set_headMoveStartPos(GlobalNamespace::Vector3Serializable value) ;

constexpr GlobalNamespace::Vector3Serializable __get_headMoveStartPos() const;

 GlobalNamespace::Vector3Serializable __declspec(property(get=__get_headJumpStartPos, put=__set_headJumpStartPos))  headJumpStartPos;

constexpr void __set_headJumpStartPos(GlobalNamespace::Vector3Serializable value) ;

constexpr GlobalNamespace::Vector3Serializable __get_headJumpStartPos() const;

 GlobalNamespace::Vector3Serializable __declspec(property(get=__get_headJumpEndPos, put=__set_headJumpEndPos))  headJumpEndPos;

constexpr void __set_headJumpEndPos(GlobalNamespace::Vector3Serializable value) ;

constexpr GlobalNamespace::Vector3Serializable __get_headJumpEndPos() const;

 float_t __declspec(property(get=__get_headJumpGravity, put=__set_headJumpGravity))  headJumpGravity;

constexpr void __set_headJumpGravity(float_t value) ;

constexpr float_t __get_headJumpGravity() const;

 GlobalNamespace::Vector3Serializable __declspec(property(get=__get_tailMoveStartPos, put=__set_tailMoveStartPos))  tailMoveStartPos;

constexpr void __set_tailMoveStartPos(GlobalNamespace::Vector3Serializable value) ;

constexpr GlobalNamespace::Vector3Serializable __get_tailMoveStartPos() const;

 GlobalNamespace::Vector3Serializable __declspec(property(get=__get_tailJumpStartPos, put=__set_tailJumpStartPos))  tailJumpStartPos;

constexpr void __set_tailJumpStartPos(GlobalNamespace::Vector3Serializable value) ;

constexpr GlobalNamespace::Vector3Serializable __get_tailJumpStartPos() const;

 GlobalNamespace::Vector3Serializable __declspec(property(get=__get_tailJumpEndPos, put=__set_tailJumpEndPos))  tailJumpEndPos;

constexpr void __set_tailJumpEndPos(GlobalNamespace::Vector3Serializable value) ;

constexpr GlobalNamespace::Vector3Serializable __get_tailJumpEndPos() const;

 float_t __declspec(property(get=__get_tailJumpGravity, put=__set_tailJumpGravity))  tailJumpGravity;

constexpr void __set_tailJumpGravity(float_t value) ;

constexpr float_t __get_tailJumpGravity() const;

 float_t __declspec(property(get=__get_moveDuration, put=__set_moveDuration))  moveDuration;

constexpr void __set_moveDuration(float_t value) ;

constexpr float_t __get_moveDuration() const;

 float_t __declspec(property(get=__get_jumpDuration, put=__set_jumpDuration))  jumpDuration;

constexpr void __set_jumpDuration(float_t value) ;

constexpr float_t __get_jumpDuration() const;

 float_t __declspec(property(get=__get_rotation, put=__set_rotation))  rotation;

constexpr void __set_rotation(float_t value) ;

constexpr float_t __get_rotation() const;


// Methods

/// @brief Method Obtain addr 0x121bee8 size 0x64 virtual false final false
static GlobalNamespace::SliderSpawnInfoNetSerializable Obtain() ;

/// @brief Method Init addr 0x121bf4c size 0x244 virtual false final false
 GlobalNamespace::SliderSpawnInfoNetSerializable Init(GlobalNamespace::ColorType colorType, GlobalNamespace::GlobalNamespace__SliderData__Type sliderType, bool hasHeadNote, float_t headTime, int32_t headLineIndex, GlobalNamespace::NoteLineLayer headLineLayer, GlobalNamespace::NoteLineLayer headBeforeJumpLineLayer, float_t headControlPointLengthMultiplier, GlobalNamespace::NoteCutDirection headCutDirection, float_t headCutDirectionAngleOffset, bool hasTailNote, float_t tailTime, int32_t tailLineIndex, GlobalNamespace::NoteLineLayer tailLineLayer, GlobalNamespace::NoteLineLayer tailBeforeJumpLineLayer, float_t tailControlPointLengthMultiplier, GlobalNamespace::NoteCutDirection tailCutDirection, float_t tailCutDirectionAngleOffset, GlobalNamespace::SliderMidAnchorMode midAnchorMode, int32_t sliceCount, float_t squishAmount, UnityEngine::Vector3 headMoveStartPos, UnityEngine::Vector3 headJumpStartPos, UnityEngine::Vector3 headJumpEndPos, float_t headJumpGravity, UnityEngine::Vector3 tailMoveStartPos, UnityEngine::Vector3 tailJumpStartPos, UnityEngine::Vector3 tailJumpEndPos, float_t tailJumpGravity, float_t moveDuration, float_t jumpDuration, float_t rotation) ;

// Ctor Parameters []
explicit SliderSpawnInfoNetSerializable() ;

/// @brief Method .ctor addr 0x121c190 size 0x58 virtual false final false
 void _ctor() ;

/// @brief Method Serialize addr 0x121c1e8 size 0x238 virtual true final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x121c420 size 0x274 virtual true final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SliderSpawnInfoNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SliderSpawnInfoNetSerializable, "", "SliderSpawnInfoNetSerializable");
