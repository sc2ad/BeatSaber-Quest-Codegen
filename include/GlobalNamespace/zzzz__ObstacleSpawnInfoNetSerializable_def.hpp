#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PoolableSerializable_def.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
struct Vector3Serializable;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
class ObstacleSpawnInfoNetSerializable;
}
// Type: ::ObstacleSpawnInfoNetSerializable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15122))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15118))
// CS Name: ObstacleSpawnInfoNetSerializable
class CORDL_TYPE ObstacleSpawnInfoNetSerializable : public GlobalNamespace::PoolableSerializable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~ObstacleSpawnInfoNetSerializable() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleSpawnInfoNetSerializable", modifiers: " const&", def_value: None }]
constexpr ObstacleSpawnInfoNetSerializable(ObstacleSpawnInfoNetSerializable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleSpawnInfoNetSerializable", modifiers: "&&", def_value: None }]
constexpr ObstacleSpawnInfoNetSerializable(ObstacleSpawnInfoNetSerializable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObstacleSpawnInfoNetSerializable(void* ptr) noexcept : GlobalNamespace::PoolableSerializable(ptr) {
}


  constexpr ObstacleSpawnInfoNetSerializable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObstacleSpawnInfoNetSerializable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObstacleSpawnInfoNetSerializable& operator=(ObstacleSpawnInfoNetSerializable&& o) noexcept = default;
  constexpr ObstacleSpawnInfoNetSerializable& operator=(ObstacleSpawnInfoNetSerializable const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_time, put=__set_time))  time;

constexpr void __set_time(float_t value) ;

constexpr float_t __get_time() const;

 int32_t __declspec(property(get=__get_lineIndex, put=__set_lineIndex))  lineIndex;

constexpr void __set_lineIndex(int32_t value) ;

constexpr int32_t __get_lineIndex() const;

 GlobalNamespace::NoteLineLayer __declspec(property(get=__get_lineLayer, put=__set_lineLayer))  lineLayer;

constexpr void __set_lineLayer(GlobalNamespace::NoteLineLayer value) ;

constexpr GlobalNamespace::NoteLineLayer __get_lineLayer() const;

 float_t __declspec(property(get=__get_duration, put=__set_duration))  duration;

constexpr void __set_duration(float_t value) ;

constexpr float_t __get_duration() const;

 int32_t __declspec(property(get=__get_width, put=__set_width))  width;

constexpr void __set_width(int32_t value) ;

constexpr int32_t __get_width() const;

 int32_t __declspec(property(get=__get_height, put=__set_height))  height;

constexpr void __set_height(int32_t value) ;

constexpr int32_t __get_height() const;

 GlobalNamespace::Vector3Serializable __declspec(property(get=__get_moveStartPos, put=__set_moveStartPos))  moveStartPos;

constexpr void __set_moveStartPos(GlobalNamespace::Vector3Serializable value) ;

constexpr GlobalNamespace::Vector3Serializable __get_moveStartPos() const;

 GlobalNamespace::Vector3Serializable __declspec(property(get=__get_moveEndPos, put=__set_moveEndPos))  moveEndPos;

constexpr void __set_moveEndPos(GlobalNamespace::Vector3Serializable value) ;

constexpr GlobalNamespace::Vector3Serializable __get_moveEndPos() const;

 GlobalNamespace::Vector3Serializable __declspec(property(get=__get_jumpEndPos, put=__set_jumpEndPos))  jumpEndPos;

constexpr void __set_jumpEndPos(GlobalNamespace::Vector3Serializable value) ;

constexpr GlobalNamespace::Vector3Serializable __get_jumpEndPos() const;

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

 float_t __declspec(property(get=__get_rotation, put=__set_rotation))  rotation;

constexpr void __set_rotation(float_t value) ;

constexpr float_t __get_rotation() const;


// Methods

/// @brief Method Obtain addr 0x1218148 size 0x64 virtual false final false
static GlobalNamespace::ObstacleSpawnInfoNetSerializable Obtain() ;

/// @brief Method Init addr 0x12181ac size 0x120 virtual false final false
 GlobalNamespace::ObstacleSpawnInfoNetSerializable Init(float_t time, int32_t lineIndex, GlobalNamespace::NoteLineLayer lineLayer, float_t duration, int32_t width, int32_t height, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float_t obstacleHeight, float_t moveDuration, float_t jumpDuration, float_t noteLinesDistance, float_t rotation) ;

static GlobalNamespace::ObstacleSpawnInfoNetSerializable New_ctor() ;

/// @brief Method .ctor addr 0x12182cc size 0x58 virtual false final false
 void _ctor() ;

/// @brief Method Serialize addr 0x1218324 size 0x104 virtual true final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x1218428 size 0x118 virtual true final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ObstacleSpawnInfoNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObstacleSpawnInfoNetSerializable, "", "ObstacleSpawnInfoNetSerializable");
