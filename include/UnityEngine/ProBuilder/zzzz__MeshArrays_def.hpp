#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct MeshArrays;
}
// Type: UnityEngine.ProBuilder::MeshArrays
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12108))
// CS Name: UnityEngine.ProBuilder.MeshArrays
struct CORDL_TYPE MeshArrays : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MeshArrays(int32_t value__) noexcept;


                    constexpr MeshArrays(MeshArrays const&) = default;
                    constexpr MeshArrays(MeshArrays&&) = default;
                    constexpr MeshArrays& operator=(MeshArrays const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MeshArrays& operator=(MeshArrays&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MeshArrays(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MeshArrays_Unwrapped : int32_t {
__Position = 1,
__Texture0 = 2,
__Texture1 = 4,
__Lightmap = 4,
__Texture2 = 8,
__Texture3 = 16,
__Color = 32,
__Normal = 64,
__Tangent = 128,
__All = 255,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MeshArrays_Unwrapped () const noexcept {
return std::bit_cast<__MeshArrays_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Position offset 0
static UnityEngine::ProBuilder::MeshArrays const Position;

/// @brief Field Texture0 offset 0
static UnityEngine::ProBuilder::MeshArrays const Texture0;

/// @brief Field Texture1 offset 0
static UnityEngine::ProBuilder::MeshArrays const Texture1;

/// @brief Field Lightmap offset 0
static UnityEngine::ProBuilder::MeshArrays const Lightmap;

/// @brief Field Texture2 offset 0
static UnityEngine::ProBuilder::MeshArrays const Texture2;

/// @brief Field Texture3 offset 0
static UnityEngine::ProBuilder::MeshArrays const Texture3;

/// @brief Field Color offset 0
static UnityEngine::ProBuilder::MeshArrays const Color;

/// @brief Field Normal offset 0
static UnityEngine::ProBuilder::MeshArrays const Normal;

/// @brief Field Tangent offset 0
static UnityEngine::ProBuilder::MeshArrays const Tangent;

/// @brief Field All offset 0
static UnityEngine::ProBuilder::MeshArrays const All;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshArrays, "UnityEngine.ProBuilder", "MeshArrays");
