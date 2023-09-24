#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PoolableSerializable_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__NoteData__GameplayType;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
struct Vector3Serializable;
}
namespace GlobalNamespace {
struct QuaternionSerializable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class NoteData;
}
namespace UnityEngine {
struct Vector3;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteCutInfoNetSerializable;
}
// Type: ::NoteCutInfoNetSerializable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15122))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15115))
// CS Name: NoteCutInfoNetSerializable
class CORDL_TYPE NoteCutInfoNetSerializable : public GlobalNamespace::PoolableSerializable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~NoteCutInfoNetSerializable() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteCutInfoNetSerializable", modifiers: " const&", def_value: None }]
constexpr NoteCutInfoNetSerializable(NoteCutInfoNetSerializable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteCutInfoNetSerializable", modifiers: "&&", def_value: None }]
constexpr NoteCutInfoNetSerializable(NoteCutInfoNetSerializable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteCutInfoNetSerializable(void* ptr) noexcept : GlobalNamespace::PoolableSerializable(ptr) {
}


  constexpr NoteCutInfoNetSerializable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteCutInfoNetSerializable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteCutInfoNetSerializable& operator=(NoteCutInfoNetSerializable&& o) noexcept = default;
  constexpr NoteCutInfoNetSerializable& operator=(NoteCutInfoNetSerializable const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_saberSpeed, put=__set_saberSpeed))  saberSpeed;

constexpr void __set_saberSpeed(float_t value) ;

constexpr float_t __get_saberSpeed() const;

 bool __declspec(property(get=__get_cutWasOk, put=__set_cutWasOk))  cutWasOk;

constexpr void __set_cutWasOk(bool value) ;

constexpr bool __get_cutWasOk() const;

 GlobalNamespace::Vector3Serializable __declspec(property(get=__get_saberDir, put=__set_saberDir))  saberDir;

constexpr void __set_saberDir(GlobalNamespace::Vector3Serializable value) ;

constexpr GlobalNamespace::Vector3Serializable __get_saberDir() const;

 GlobalNamespace::Vector3Serializable __declspec(property(get=__get_cutPoint, put=__set_cutPoint))  cutPoint;

constexpr void __set_cutPoint(GlobalNamespace::Vector3Serializable value) ;

constexpr GlobalNamespace::Vector3Serializable __get_cutPoint() const;

 GlobalNamespace::Vector3Serializable __declspec(property(get=__get_cutNormal, put=__set_cutNormal))  cutNormal;

constexpr void __set_cutNormal(GlobalNamespace::Vector3Serializable value) ;

constexpr GlobalNamespace::Vector3Serializable __get_cutNormal() const;

 GlobalNamespace::Vector3Serializable __declspec(property(get=__get_notePosition, put=__set_notePosition))  notePosition;

constexpr void __set_notePosition(GlobalNamespace::Vector3Serializable value) ;

constexpr GlobalNamespace::Vector3Serializable __get_notePosition() const;

 GlobalNamespace::Vector3Serializable __declspec(property(get=__get_noteScale, put=__set_noteScale))  noteScale;

constexpr void __set_noteScale(GlobalNamespace::Vector3Serializable value) ;

constexpr GlobalNamespace::Vector3Serializable __get_noteScale() const;

 GlobalNamespace::QuaternionSerializable __declspec(property(get=__get_noteRotation, put=__set_noteRotation))  noteRotation;

constexpr void __set_noteRotation(GlobalNamespace::QuaternionSerializable value) ;

constexpr GlobalNamespace::QuaternionSerializable __get_noteRotation() const;

 GlobalNamespace::GlobalNamespace__NoteData__GameplayType __declspec(property(get=__get_gameplayType, put=__set_gameplayType))  gameplayType;

constexpr void __set_gameplayType(GlobalNamespace::GlobalNamespace__NoteData__GameplayType value) ;

constexpr GlobalNamespace::GlobalNamespace__NoteData__GameplayType __get_gameplayType() const;

 GlobalNamespace::ColorType __declspec(property(get=__get_colorType, put=__set_colorType))  colorType;

constexpr void __set_colorType(GlobalNamespace::ColorType value) ;

constexpr GlobalNamespace::ColorType __get_colorType() const;

 float_t __declspec(property(get=__get_noteTime, put=__set_noteTime))  noteTime;

constexpr void __set_noteTime(float_t value) ;

constexpr float_t __get_noteTime() const;

 int32_t __declspec(property(get=__get_noteLineIndex, put=__set_noteLineIndex))  noteLineIndex;

constexpr void __set_noteLineIndex(int32_t value) ;

constexpr int32_t __get_noteLineIndex() const;

 GlobalNamespace::NoteLineLayer __declspec(property(get=__get_lineLayer, put=__set_lineLayer))  lineLayer;

constexpr void __set_lineLayer(GlobalNamespace::NoteLineLayer value) ;

constexpr GlobalNamespace::NoteLineLayer __get_lineLayer() const;

 float_t __declspec(property(get=__get_timeToNextColorNote, put=__set_timeToNextColorNote))  timeToNextColorNote;

constexpr void __set_timeToNextColorNote(float_t value) ;

constexpr float_t __get_timeToNextColorNote() const;

 GlobalNamespace::Vector3Serializable __declspec(property(get=__get_moveVec, put=__set_moveVec))  moveVec;

constexpr void __set_moveVec(GlobalNamespace::Vector3Serializable value) ;

constexpr GlobalNamespace::Vector3Serializable __get_moveVec() const;


// Methods

/// @brief Method Obtain addr 0x1217228 size 0x64 virtual false final false
static GlobalNamespace::NoteCutInfoNetSerializable Obtain() ;

/// @brief Method Deserialize addr 0x121728c size 0x118 virtual true final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Serialize addr 0x121746c size 0x104 virtual true final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

static GlobalNamespace::NoteCutInfoNetSerializable New_ctor() ;

/// @brief Method .ctor addr 0x1217618 size 0x58 virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0x1217678 size 0xe4 virtual false final false
 GlobalNamespace::NoteCutInfoNetSerializable Init(ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo, GlobalNamespace::NoteData noteData, UnityEngine::Vector3 notePosition, UnityEngine::Quaternion noteRotation, UnityEngine::Vector3 noteScale, UnityEngine::Vector3 moveVec) ;

/// @brief Method Init addr 0x121775c size 0x224 virtual false final false
 GlobalNamespace::NoteCutInfoNetSerializable Init(float_t saberSpeed, bool cutWasOk, UnityEngine::Vector3 saberDir, UnityEngine::Vector3 cutPoint, UnityEngine::Vector3 cutNormal, GlobalNamespace::GlobalNamespace__NoteData__GameplayType gameplayType, GlobalNamespace::ColorType colorType, GlobalNamespace::NoteLineLayer lineLayer, int32_t noteLineIndex, float_t noteTime, float_t timeToNextColorNote, UnityEngine::Vector3 notePosition, UnityEngine::Quaternion noteRotation, UnityEngine::Vector3 noteScale, UnityEngine::Vector3 moveVec) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NoteCutInfoNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutInfoNetSerializable, "", "NoteCutInfoNetSerializable");
