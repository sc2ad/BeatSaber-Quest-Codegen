#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PoolableSerializable_def.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct Vector3Serializable;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct GlobalNamespace__NoteData__GameplayType;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
struct GlobalNamespace__NoteData__ScoringType;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
struct ColorType;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteSpawnInfoNetSerializable;
}
// Type: ::NoteSpawnInfoNetSerializable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15122))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15117))
// CS Name: NoteSpawnInfoNetSerializable
class CORDL_TYPE NoteSpawnInfoNetSerializable : public GlobalNamespace::PoolableSerializable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~NoteSpawnInfoNetSerializable() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteSpawnInfoNetSerializable", modifiers: " const&", def_value: None }]
constexpr NoteSpawnInfoNetSerializable(NoteSpawnInfoNetSerializable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteSpawnInfoNetSerializable", modifiers: "&&", def_value: None }]
constexpr NoteSpawnInfoNetSerializable(NoteSpawnInfoNetSerializable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteSpawnInfoNetSerializable(void* ptr) noexcept : GlobalNamespace::PoolableSerializable(ptr) {
}


  constexpr NoteSpawnInfoNetSerializable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteSpawnInfoNetSerializable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteSpawnInfoNetSerializable& operator=(NoteSpawnInfoNetSerializable&& o) noexcept = default;
  constexpr NoteSpawnInfoNetSerializable& operator=(NoteSpawnInfoNetSerializable const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_time, put=__set_time))  time;

constexpr void __set_time(float_t value) ;

constexpr float_t __get_time() const;

 int32_t __declspec(property(get=__get_lineIndex, put=__set_lineIndex))  lineIndex;

constexpr void __set_lineIndex(int32_t value) ;

constexpr int32_t __get_lineIndex() const;

 GlobalNamespace::NoteLineLayer __declspec(property(get=__get_noteLineLayer, put=__set_noteLineLayer))  noteLineLayer;

constexpr void __set_noteLineLayer(GlobalNamespace::NoteLineLayer value) ;

constexpr GlobalNamespace::NoteLineLayer __get_noteLineLayer() const;

 GlobalNamespace::NoteLineLayer __declspec(property(get=__get_beforeJumpNoteLineLayer, put=__set_beforeJumpNoteLineLayer))  beforeJumpNoteLineLayer;

constexpr void __set_beforeJumpNoteLineLayer(GlobalNamespace::NoteLineLayer value) ;

constexpr GlobalNamespace::NoteLineLayer __get_beforeJumpNoteLineLayer() const;

 GlobalNamespace::GlobalNamespace__NoteData__GameplayType __declspec(property(get=__get_gameplayType, put=__set_gameplayType))  gameplayType;

constexpr void __set_gameplayType(GlobalNamespace::GlobalNamespace__NoteData__GameplayType value) ;

constexpr GlobalNamespace::GlobalNamespace__NoteData__GameplayType __get_gameplayType() const;

 GlobalNamespace::GlobalNamespace__NoteData__ScoringType __declspec(property(get=__get_scoringType, put=__set_scoringType))  scoringType;

constexpr void __set_scoringType(GlobalNamespace::GlobalNamespace__NoteData__ScoringType value) ;

constexpr GlobalNamespace::GlobalNamespace__NoteData__ScoringType __get_scoringType() const;

 GlobalNamespace::ColorType __declspec(property(get=__get_colorType, put=__set_colorType))  colorType;

constexpr void __set_colorType(GlobalNamespace::ColorType value) ;

constexpr GlobalNamespace::ColorType __get_colorType() const;

 GlobalNamespace::NoteCutDirection __declspec(property(get=__get_cutDirection, put=__set_cutDirection))  cutDirection;

constexpr void __set_cutDirection(GlobalNamespace::NoteCutDirection value) ;

constexpr GlobalNamespace::NoteCutDirection __get_cutDirection() const;

 float_t __declspec(property(get=__get_timeToNextColorNote, put=__set_timeToNextColorNote))  timeToNextColorNote;

constexpr void __set_timeToNextColorNote(float_t value) ;

constexpr float_t __get_timeToNextColorNote() const;

 float_t __declspec(property(get=__get_timeToPrevColorNote, put=__set_timeToPrevColorNote))  timeToPrevColorNote;

constexpr void __set_timeToPrevColorNote(float_t value) ;

constexpr float_t __get_timeToPrevColorNote() const;

 int32_t __declspec(property(get=__get_flipLineIndex, put=__set_flipLineIndex))  flipLineIndex;

constexpr void __set_flipLineIndex(int32_t value) ;

constexpr int32_t __get_flipLineIndex() const;

 float_t __declspec(property(get=__get_flipYSide, put=__set_flipYSide))  flipYSide;

constexpr void __set_flipYSide(float_t value) ;

constexpr float_t __get_flipYSide() const;

 GlobalNamespace::Vector3Serializable __declspec(property(get=__get_moveStartPos, put=__set_moveStartPos))  moveStartPos;

constexpr void __set_moveStartPos(GlobalNamespace::Vector3Serializable value) ;

constexpr GlobalNamespace::Vector3Serializable __get_moveStartPos() const;

 GlobalNamespace::Vector3Serializable __declspec(property(get=__get_moveEndPos, put=__set_moveEndPos))  moveEndPos;

constexpr void __set_moveEndPos(GlobalNamespace::Vector3Serializable value) ;

constexpr GlobalNamespace::Vector3Serializable __get_moveEndPos() const;

 GlobalNamespace::Vector3Serializable __declspec(property(get=__get_jumpEndPos, put=__set_jumpEndPos))  jumpEndPos;

constexpr void __set_jumpEndPos(GlobalNamespace::Vector3Serializable value) ;

constexpr GlobalNamespace::Vector3Serializable __get_jumpEndPos() const;

 float_t __declspec(property(get=__get_jumpGravity, put=__set_jumpGravity))  jumpGravity;

constexpr void __set_jumpGravity(float_t value) ;

constexpr float_t __get_jumpGravity() const;

 float_t __declspec(property(get=__get_moveDuration, put=__set_moveDuration))  moveDuration;

constexpr void __set_moveDuration(float_t value) ;

constexpr float_t __get_moveDuration() const;

 float_t __declspec(property(get=__get_jumpDuration, put=__set_jumpDuration))  jumpDuration;

constexpr void __set_jumpDuration(float_t value) ;

constexpr float_t __get_jumpDuration() const;

 float_t __declspec(property(get=__get_rotation, put=__set_rotation))  rotation;

constexpr void __set_rotation(float_t value) ;

constexpr float_t __get_rotation() const;

 float_t __declspec(property(get=__get_cutDirectionAngleOffset, put=__set_cutDirectionAngleOffset))  cutDirectionAngleOffset;

constexpr void __set_cutDirectionAngleOffset(float_t value) ;

constexpr float_t __get_cutDirectionAngleOffset() const;

 float_t __declspec(property(get=__get_cutSfxVolumeMultiplier, put=__set_cutSfxVolumeMultiplier))  cutSfxVolumeMultiplier;

constexpr void __set_cutSfxVolumeMultiplier(float_t value) ;

constexpr float_t __get_cutSfxVolumeMultiplier() const;


// Methods

/// @brief Method Obtain addr 0x1217bf4 size 0x64 virtual false final false
static GlobalNamespace::NoteSpawnInfoNetSerializable Obtain() ;

/// @brief Method Init addr 0x1217c58 size 0x140 virtual false final false
 GlobalNamespace::NoteSpawnInfoNetSerializable Init(float_t time, int32_t lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer, GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer, GlobalNamespace::GlobalNamespace__NoteData__GameplayType gameplayType, GlobalNamespace::GlobalNamespace__NoteData__ScoringType scoringType, GlobalNamespace::ColorType colorType, GlobalNamespace::NoteCutDirection cutDirection, float_t timeToNextColorNote, float_t timeToPrevColorNote, int32_t flipLineIndex, float_t flipYSide, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float_t jumpGravity, float_t moveDuration, float_t jumpDuration, float_t rotation, float_t cutDirectionAngleOffset, float_t cutSfxVolumeMultiplier) ;

static GlobalNamespace::NoteSpawnInfoNetSerializable New_ctor() ;

/// @brief Method .ctor addr 0x1217d98 size 0x58 virtual false final false
 void _ctor() ;

/// @brief Method Serialize addr 0x1217df0 size 0x1a4 virtual true final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x1217f94 size 0x1b4 virtual true final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NoteSpawnInfoNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteSpawnInfoNetSerializable, "", "NoteSpawnInfoNetSerializable");
