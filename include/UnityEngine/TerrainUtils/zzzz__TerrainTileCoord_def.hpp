#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::TerrainUtils {
struct TerrainTileCoord;
}
// Type: UnityEngine.TerrainUtils::TerrainTileCoord
namespace UnityEngine::TerrainUtils {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15453))
// CS Name: UnityEngine.TerrainUtils.TerrainTileCoord
struct CORDL_TYPE TerrainTileCoord : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "tileX", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "tileZ", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TerrainTileCoord(int32_t tileX, int32_t tileZ) noexcept;


                    constexpr TerrainTileCoord(TerrainTileCoord const&) = default;
                    constexpr TerrainTileCoord(TerrainTileCoord&&) = default;
                    constexpr TerrainTileCoord& operator=(TerrainTileCoord const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TerrainTileCoord& operator=(TerrainTileCoord&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TerrainTileCoord(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_tileX, put=__set_tileX))  tileX;

constexpr void __set_tileX(int32_t value) ;

constexpr int32_t __get_tileX() const;

 int32_t __declspec(property(get=__get_tileZ, put=__set_tileZ))  tileZ;

constexpr void __set_tileZ(int32_t value) ;

constexpr int32_t __get_tileZ() const;


// Methods

/// @brief Method .ctor addr 0x2ba76bc size 0x8 virtual false final false
 void _ctor(int32_t tileX, int32_t tileZ) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TerrainUtils
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainUtils::TerrainTileCoord, "UnityEngine.TerrainUtils", "TerrainTileCoord");
