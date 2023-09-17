#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine::Tilemaps {
struct TileFlags;
}
namespace UnityEngine::Tilemaps {
struct ____UnityEngine__Tilemaps__Tile__ColliderType;
}
// Forward declare root types
namespace UnityEngine::Tilemaps {
struct TileDataNative;
}
// Type: UnityEngine.Tilemaps::TileDataNative
namespace UnityEngine::Tilemaps {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15826))
// CS Name: UnityEngine.Tilemaps.TileDataNative
struct CORDL_TYPE TileDataNative : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Sprite", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_Transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "m_GameObject", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "::UnityEngine::Tilemaps::TileFlags", modifiers: "", def_value: None }, CppParam { name: "m_ColliderType", ty: "::UnityEngine::Tilemaps::____UnityEngine__Tilemaps__Tile__ColliderType", modifiers: "", def_value: None }]
constexpr TileDataNative(int32_t m_Sprite, ::UnityEngine::Color m_Color, ::UnityEngine::Matrix4x4 m_Transform, int32_t m_GameObject, ::UnityEngine::Tilemaps::TileFlags m_Flags, ::UnityEngine::Tilemaps::____UnityEngine__Tilemaps__Tile__ColliderType m_ColliderType) noexcept;


                    constexpr TileDataNative(TileDataNative const&) = default;
                    constexpr TileDataNative(TileDataNative&&) = default;
                    constexpr TileDataNative& operator=(TileDataNative const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TileDataNative& operator=(TileDataNative&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x60};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TileDataNative(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_Sprite, put=__set_m_Sprite))  m_Sprite;

constexpr void __set_m_Sprite(int32_t value) ;

constexpr int32_t __get_m_Sprite() const;

 ::UnityEngine::Color __declspec(property(get=__get_m_Color, put=__set_m_Color))  m_Color;

constexpr void __set_m_Color(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_m_Color() const;

 ::UnityEngine::Matrix4x4 __declspec(property(get=__get_m_Transform, put=__set_m_Transform))  m_Transform;

constexpr void __set_m_Transform(::UnityEngine::Matrix4x4 value) ;

constexpr ::UnityEngine::Matrix4x4 __get_m_Transform() const;

 int32_t __declspec(property(get=__get_m_GameObject, put=__set_m_GameObject))  m_GameObject;

constexpr void __set_m_GameObject(int32_t value) ;

constexpr int32_t __get_m_GameObject() const;

 ::UnityEngine::Tilemaps::TileFlags __declspec(property(get=__get_m_Flags, put=__set_m_Flags))  m_Flags;

constexpr void __set_m_Flags(::UnityEngine::Tilemaps::TileFlags value) ;

constexpr ::UnityEngine::Tilemaps::TileFlags __get_m_Flags() const;

 ::UnityEngine::Tilemaps::____UnityEngine__Tilemaps__Tile__ColliderType __declspec(property(get=__get_m_ColliderType, put=__set_m_ColliderType))  m_ColliderType;

constexpr void __set_m_ColliderType(::UnityEngine::Tilemaps::____UnityEngine__Tilemaps__Tile__ColliderType value) ;

constexpr ::UnityEngine::Tilemaps::____UnityEngine__Tilemaps__Tile__ColliderType __get_m_ColliderType() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Tilemaps
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::TileDataNative, "UnityEngine.Tilemaps", "TileDataNative");
