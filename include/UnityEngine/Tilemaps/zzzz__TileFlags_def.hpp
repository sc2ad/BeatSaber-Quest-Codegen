#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::Tilemaps {
struct TileFlags;
}
// Type: UnityEngine.Tilemaps::TileFlags
namespace UnityEngine::Tilemaps {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15822))
// CS Name: UnityEngine.Tilemaps.TileFlags
struct CORDL_TYPE TileFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TileFlags(int32_t value__) noexcept;


                    constexpr TileFlags(TileFlags const&) = default;
                    constexpr TileFlags(TileFlags&&) = default;
                    constexpr TileFlags& operator=(TileFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TileFlags& operator=(TileFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TileFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TileFlags_Unwrapped : int32_t {
__None = 0,
__LockColor = 1,
__LockTransform = 2,
__InstantiateGameObjectRuntimeOnly = 4,
__KeepGameObjectRuntimeOnly = 8,
__LockAll = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TileFlags_Unwrapped () const noexcept {
return std::bit_cast<__TileFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::UnityEngine::Tilemaps::TileFlags const None;

/// @brief Field LockColor offset 0
static ::UnityEngine::Tilemaps::TileFlags const LockColor;

/// @brief Field LockTransform offset 0
static ::UnityEngine::Tilemaps::TileFlags const LockTransform;

/// @brief Field InstantiateGameObjectRuntimeOnly offset 0
static ::UnityEngine::Tilemaps::TileFlags const InstantiateGameObjectRuntimeOnly;

/// @brief Field KeepGameObjectRuntimeOnly offset 0
static ::UnityEngine::Tilemaps::TileFlags const KeepGameObjectRuntimeOnly;

/// @brief Field LockAll offset 0
static ::UnityEngine::Tilemaps::TileFlags const LockAll;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Tilemaps
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::TileFlags, "UnityEngine.Tilemaps", "TileFlags");
