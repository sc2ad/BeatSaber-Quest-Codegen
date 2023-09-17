#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace {
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::Tilemaps {
struct TileChangeData;
}
// Type: UnityEngine.Tilemaps::TileChangeData
namespace UnityEngine::Tilemaps {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15827))
// CS Name: UnityEngine.Tilemaps.TileChangeData
struct CORDL_TYPE TileChangeData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None }, CppParam { name: "m_TileAsset", ty: "::UnityEngine::Object", modifiers: "", def_value: None }, CppParam { name: "m_Color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_Transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }]
constexpr TileChangeData(::UnityEngine::Vector3Int m_Position, ::UnityEngine::Object m_TileAsset, ::UnityEngine::Color m_Color, ::UnityEngine::Matrix4x4 m_Transform) noexcept;


                    constexpr TileChangeData(TileChangeData const&) = default;
                    constexpr TileChangeData(TileChangeData&&) = default;
                    constexpr TileChangeData& operator=(TileChangeData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TileChangeData& operator=(TileChangeData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x68};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TileChangeData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Vector3Int __declspec(property(get=__get_m_Position, put=__set_m_Position))  m_Position;

constexpr void __set_m_Position(::UnityEngine::Vector3Int value) ;

constexpr ::UnityEngine::Vector3Int __get_m_Position() const;

 ::UnityEngine::Object __declspec(property(get=__get_m_TileAsset, put=__set_m_TileAsset))  m_TileAsset;

constexpr void __set_m_TileAsset(::UnityEngine::Object value) ;

constexpr ::UnityEngine::Object __get_m_TileAsset() const;

 ::UnityEngine::Color __declspec(property(get=__get_m_Color, put=__set_m_Color))  m_Color;

constexpr void __set_m_Color(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_m_Color() const;

 ::UnityEngine::Matrix4x4 __declspec(property(get=__get_m_Transform, put=__set_m_Transform))  m_Transform;

constexpr void __set_m_Transform(::UnityEngine::Matrix4x4 value) ;

constexpr ::UnityEngine::Matrix4x4 __get_m_Transform() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Tilemaps
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::TileChangeData, "UnityEngine.Tilemaps", "TileChangeData");
