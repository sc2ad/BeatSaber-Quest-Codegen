#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct MeshTopology;
}
// Type: UnityEngine::MeshTopology
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10051))
// CS Name: UnityEngine.MeshTopology
struct CORDL_TYPE MeshTopology : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MeshTopology(int32_t value__) noexcept;


                    constexpr MeshTopology(MeshTopology const&) = default;
                    constexpr MeshTopology(MeshTopology&&) = default;
                    constexpr MeshTopology& operator=(MeshTopology const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MeshTopology& operator=(MeshTopology&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MeshTopology(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MeshTopology_Unwrapped : int32_t {
__Triangles = 0,
__Quads = 2,
__Lines = 3,
__LineStrip = 4,
__Points = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MeshTopology_Unwrapped () const noexcept {
return std::bit_cast<__MeshTopology_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Triangles offset 0
static UnityEngine::MeshTopology const Triangles;

/// @brief Field Quads offset 0
static UnityEngine::MeshTopology const Quads;

/// @brief Field Lines offset 0
static UnityEngine::MeshTopology const Lines;

/// @brief Field LineStrip offset 0
static UnityEngine::MeshTopology const LineStrip;

/// @brief Field Points offset 0
static UnityEngine::MeshTopology const Points;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::MeshTopology, "UnityEngine", "MeshTopology");
