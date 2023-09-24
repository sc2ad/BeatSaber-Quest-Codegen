#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::XR {
struct MeshVertexAttributes;
}
// Type: UnityEngine.XR::MeshVertexAttributes
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15587))
// CS Name: UnityEngine.XR.MeshVertexAttributes
struct CORDL_TYPE MeshVertexAttributes : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MeshVertexAttributes(int32_t value__) noexcept;


                    constexpr MeshVertexAttributes(MeshVertexAttributes const&) = default;
                    constexpr MeshVertexAttributes(MeshVertexAttributes&&) = default;
                    constexpr MeshVertexAttributes& operator=(MeshVertexAttributes const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MeshVertexAttributes& operator=(MeshVertexAttributes&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MeshVertexAttributes(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MeshVertexAttributes_Unwrapped : int32_t {
__None = 0,
__Normals = 1,
__Tangents = 2,
__UVs = 4,
__Colors = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MeshVertexAttributes_Unwrapped () const noexcept {
return std::bit_cast<__MeshVertexAttributes_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::XR::MeshVertexAttributes const None;

/// @brief Field Normals offset 0
static UnityEngine::XR::MeshVertexAttributes const Normals;

/// @brief Field Tangents offset 0
static UnityEngine::XR::MeshVertexAttributes const Tangents;

/// @brief Field UVs offset 0
static UnityEngine::XR::MeshVertexAttributes const UVs;

/// @brief Field Colors offset 0
static UnityEngine::XR::MeshVertexAttributes const Colors;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::MeshVertexAttributes, "UnityEngine.XR", "MeshVertexAttributes");
