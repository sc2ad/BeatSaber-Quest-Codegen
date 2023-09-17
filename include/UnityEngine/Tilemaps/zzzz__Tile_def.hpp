#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileBase_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::Tilemaps {
struct TileFlags;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine::Tilemaps {
class ITilemap;
}
namespace UnityEngine::Tilemaps {
struct TileData;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::Tilemaps {
struct ____UnityEngine__Tilemaps__Tile__ColliderType;
}
namespace UnityEngine::Tilemaps {
class Tile;
}
// Type: ::ColliderType
namespace UnityEngine::Tilemaps {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15829))
// CS Name: UnityEngine.Tilemaps.Tile::ColliderType
struct CORDL_TYPE ____UnityEngine__Tilemaps__Tile__ColliderType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__Tilemaps__Tile__ColliderType(int32_t value__) noexcept;


                    constexpr ____UnityEngine__Tilemaps__Tile__ColliderType(____UnityEngine__Tilemaps__Tile__ColliderType const&) = default;
                    constexpr ____UnityEngine__Tilemaps__Tile__ColliderType(____UnityEngine__Tilemaps__Tile__ColliderType&&) = default;
                    constexpr ____UnityEngine__Tilemaps__Tile__ColliderType& operator=(____UnityEngine__Tilemaps__Tile__ColliderType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__Tilemaps__Tile__ColliderType& operator=(____UnityEngine__Tilemaps__Tile__ColliderType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__Tilemaps__Tile__ColliderType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__Tilemaps__Tile__ColliderType_Unwrapped : int32_t {
__None = 0,
__Sprite = 1,
__Grid = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__Tilemaps__Tile__ColliderType_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__Tilemaps__Tile__ColliderType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::UnityEngine::Tilemaps::____UnityEngine__Tilemaps__Tile__ColliderType const None;

/// @brief Field Sprite offset 0
static ::UnityEngine::Tilemaps::____UnityEngine__Tilemaps__Tile__ColliderType const Sprite;

/// @brief Field Grid offset 0
static ::UnityEngine::Tilemaps::____UnityEngine__Tilemaps__Tile__ColliderType const Grid;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Tilemaps
// Type: UnityEngine.Tilemaps::Tile
namespace UnityEngine::Tilemaps {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15831))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15830))
// CS Name: UnityEngine.Tilemaps.Tile
class CORDL_TYPE Tile : public ::UnityEngine::Tilemaps::TileBase {
public:
// Declarations
using ColliderType = ::UnityEngine::Tilemaps::____UnityEngine__Tilemaps__Tile__ColliderType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Tile() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tile", modifiers: " const&", def_value: None }]
constexpr Tile(Tile const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tile", modifiers: "&&", def_value: None }]
constexpr Tile(Tile&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tile(void* ptr) noexcept : ::UnityEngine::Tilemaps::TileBase(ptr) {
}


  constexpr Tile& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tile& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tile& operator=(Tile&& o) noexcept = default;
  constexpr Tile& operator=(Tile const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Sprite __declspec(property(get=__get_m_Sprite, put=__set_m_Sprite))  m_Sprite;

constexpr void __set_m_Sprite(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get_m_Sprite() const;

 ::UnityEngine::Color __declspec(property(get=__get_m_Color, put=__set_m_Color))  m_Color;

constexpr void __set_m_Color(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_m_Color() const;

 ::UnityEngine::Matrix4x4 __declspec(property(get=__get_m_Transform, put=__set_m_Transform))  m_Transform;

constexpr void __set_m_Transform(::UnityEngine::Matrix4x4 value) ;

constexpr ::UnityEngine::Matrix4x4 __get_m_Transform() const;

 ::UnityEngine::GameObject __declspec(property(get=__get_m_InstancedGameObject, put=__set_m_InstancedGameObject))  m_InstancedGameObject;

constexpr void __set_m_InstancedGameObject(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get_m_InstancedGameObject() const;

 ::UnityEngine::Tilemaps::TileFlags __declspec(property(get=__get_m_Flags, put=__set_m_Flags))  m_Flags;

constexpr void __set_m_Flags(::UnityEngine::Tilemaps::TileFlags value) ;

constexpr ::UnityEngine::Tilemaps::TileFlags __get_m_Flags() const;

 ::UnityEngine::Tilemaps::____UnityEngine__Tilemaps__Tile__ColliderType __declspec(property(get=__get_m_ColliderType, put=__set_m_ColliderType))  m_ColliderType;

constexpr void __set_m_ColliderType(::UnityEngine::Tilemaps::____UnityEngine__Tilemaps__Tile__ColliderType value) ;

constexpr ::UnityEngine::Tilemaps::____UnityEngine__Tilemaps__Tile__ColliderType __get_m_ColliderType() const;


// Properties

 ::UnityEngine::Sprite __declspec(property(get=get_sprite, put=set_sprite))  sprite;

 ::UnityEngine::Color __declspec(property(get=get_color, put=set_color))  color;

 ::UnityEngine::Matrix4x4 __declspec(property(get=get_transform, put=set_transform))  transform;

 ::UnityEngine::GameObject __declspec(property(get=get_gameObject, put=set_gameObject))  gameObject;

 ::UnityEngine::Tilemaps::TileFlags __declspec(property(get=get_flags, put=set_flags))  flags;

 ::UnityEngine::Tilemaps::____UnityEngine__Tilemaps__Tile__ColliderType __declspec(property(get=get_colliderType, put=set_colliderType))  colliderType;


// Methods

/// @brief Method get_sprite addr 0x2bd7340 size 0x8 virtual false final false
 ::UnityEngine::Sprite get_sprite() ;

/// @brief Method set_sprite addr 0x2bd7348 size 0x8 virtual false final false
 void set_sprite(::UnityEngine::Sprite value) ;

/// @brief Method get_color addr 0x2bd7350 size 0xc virtual false final false
 ::UnityEngine::Color get_color() ;

/// @brief Method set_color addr 0x2bd735c size 0xc virtual false final false
 void set_color(::UnityEngine::Color value) ;

/// @brief Method get_transform addr 0x2bd7368 size 0x14 virtual false final false
 ::UnityEngine::Matrix4x4 get_transform() ;

/// @brief Method set_transform addr 0x2bd737c size 0x14 virtual false final false
 void set_transform(::UnityEngine::Matrix4x4 value) ;

/// @brief Method get_gameObject addr 0x2bd7390 size 0x8 virtual false final false
 ::UnityEngine::GameObject get_gameObject() ;

/// @brief Method set_gameObject addr 0x2bd7398 size 0x8 virtual false final false
 void set_gameObject(::UnityEngine::GameObject value) ;

/// @brief Method get_flags addr 0x2bd73a0 size 0x8 virtual false final false
 ::UnityEngine::Tilemaps::TileFlags get_flags() ;

/// @brief Method set_flags addr 0x2bd73a8 size 0x8 virtual false final false
 void set_flags(::UnityEngine::Tilemaps::TileFlags value) ;

/// @brief Method get_colliderType addr 0x2bd73b0 size 0x8 virtual false final false
 ::UnityEngine::Tilemaps::____UnityEngine__Tilemaps__Tile__ColliderType get_colliderType() ;

/// @brief Method set_colliderType addr 0x2bd73b8 size 0x8 virtual false final false
 void set_colliderType(::UnityEngine::Tilemaps::____UnityEngine__Tilemaps__Tile__ColliderType value) ;

/// @brief Method GetTileData addr 0x2bd73c0 size 0x5c virtual true final false
 void GetTileData(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap tilemap, ByRef<::UnityEngine::Tilemaps::TileData> tileData) ;

// Ctor Parameters []
explicit Tile() ;

/// @brief Method .ctor addr 0x2bd741c size 0x70 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Tilemaps
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::____UnityEngine__Tilemaps__Tile__ColliderType, "UnityEngine.Tilemaps", "Tile/ColliderType");
NEED_NO_BOX(::UnityEngine::Tilemaps::Tile);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::Tile, "UnityEngine.Tilemaps", "Tile");
