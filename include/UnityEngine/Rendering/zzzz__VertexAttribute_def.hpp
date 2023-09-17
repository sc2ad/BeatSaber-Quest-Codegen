#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::Rendering {
struct VertexAttribute;
}
// Type: UnityEngine.Rendering::VertexAttribute
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10267))
// CS Name: UnityEngine.Rendering.VertexAttribute
struct CORDL_TYPE VertexAttribute : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VertexAttribute(int32_t value__) noexcept;


                    constexpr VertexAttribute(VertexAttribute const&) = default;
                    constexpr VertexAttribute(VertexAttribute&&) = default;
                    constexpr VertexAttribute& operator=(VertexAttribute const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VertexAttribute& operator=(VertexAttribute&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VertexAttribute(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __VertexAttribute_Unwrapped : int32_t {
__Position = 0,
__Normal = 1,
__Tangent = 2,
__Color = 3,
__TexCoord0 = 4,
__TexCoord1 = 5,
__TexCoord2 = 6,
__TexCoord3 = 7,
__TexCoord4 = 8,
__TexCoord5 = 9,
__TexCoord6 = 10,
__TexCoord7 = 11,
__BlendWeight = 12,
__BlendIndices = 13,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VertexAttribute_Unwrapped () const noexcept {
return std::bit_cast<__VertexAttribute_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Position offset 0
static ::UnityEngine::Rendering::VertexAttribute const Position;

/// @brief Field Normal offset 0
static ::UnityEngine::Rendering::VertexAttribute const Normal;

/// @brief Field Tangent offset 0
static ::UnityEngine::Rendering::VertexAttribute const Tangent;

/// @brief Field Color offset 0
static ::UnityEngine::Rendering::VertexAttribute const Color;

/// @brief Field TexCoord0 offset 0
static ::UnityEngine::Rendering::VertexAttribute const TexCoord0;

/// @brief Field TexCoord1 offset 0
static ::UnityEngine::Rendering::VertexAttribute const TexCoord1;

/// @brief Field TexCoord2 offset 0
static ::UnityEngine::Rendering::VertexAttribute const TexCoord2;

/// @brief Field TexCoord3 offset 0
static ::UnityEngine::Rendering::VertexAttribute const TexCoord3;

/// @brief Field TexCoord4 offset 0
static ::UnityEngine::Rendering::VertexAttribute const TexCoord4;

/// @brief Field TexCoord5 offset 0
static ::UnityEngine::Rendering::VertexAttribute const TexCoord5;

/// @brief Field TexCoord6 offset 0
static ::UnityEngine::Rendering::VertexAttribute const TexCoord6;

/// @brief Field TexCoord7 offset 0
static ::UnityEngine::Rendering::VertexAttribute const TexCoord7;

/// @brief Field BlendWeight offset 0
static ::UnityEngine::Rendering::VertexAttribute const BlendWeight;

/// @brief Field BlendIndices offset 0
static ::UnityEngine::Rendering::VertexAttribute const BlendIndices;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VertexAttribute, "UnityEngine.Rendering", "VertexAttribute");
