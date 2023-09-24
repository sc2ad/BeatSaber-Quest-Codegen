#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct RenderTextureFormat;
}
// Type: UnityEngine::RenderTextureFormat
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10059))
// CS Name: UnityEngine.RenderTextureFormat
struct CORDL_TYPE RenderTextureFormat : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RenderTextureFormat(int32_t value__) noexcept;


                    constexpr RenderTextureFormat(RenderTextureFormat const&) = default;
                    constexpr RenderTextureFormat(RenderTextureFormat&&) = default;
                    constexpr RenderTextureFormat& operator=(RenderTextureFormat const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RenderTextureFormat& operator=(RenderTextureFormat&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RenderTextureFormat(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RenderTextureFormat_Unwrapped : int32_t {
__ARGB32 = 0,
__Depth = 1,
__ARGBHalf = 2,
__Shadowmap = 3,
__RGB565 = 4,
__ARGB4444 = 5,
__ARGB1555 = 6,
__Default = 7,
__ARGB2101010 = 8,
__DefaultHDR = 9,
__ARGB64 = 10,
__ARGBFloat = 11,
__RGFloat = 12,
__RGHalf = 13,
__RFloat = 14,
__RHalf = 15,
__R8 = 16,
__ARGBInt = 17,
__RGInt = 18,
__RInt = 19,
__BGRA32 = 20,
__RGB111110Float = 22,
__RG32 = 23,
__RGBAUShort = 24,
__RG16 = 25,
__BGRA10101010_XR = 26,
__BGR101010_XR = 27,
__R16 = 28,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderTextureFormat_Unwrapped () const noexcept {
return std::bit_cast<__RenderTextureFormat_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ARGB32 offset 0
static UnityEngine::RenderTextureFormat const ARGB32;

/// @brief Field Depth offset 0
static UnityEngine::RenderTextureFormat const Depth;

/// @brief Field ARGBHalf offset 0
static UnityEngine::RenderTextureFormat const ARGBHalf;

/// @brief Field Shadowmap offset 0
static UnityEngine::RenderTextureFormat const Shadowmap;

/// @brief Field RGB565 offset 0
static UnityEngine::RenderTextureFormat const RGB565;

/// @brief Field ARGB4444 offset 0
static UnityEngine::RenderTextureFormat const ARGB4444;

/// @brief Field ARGB1555 offset 0
static UnityEngine::RenderTextureFormat const ARGB1555;

/// @brief Field Default offset 0
static UnityEngine::RenderTextureFormat const Default;

/// @brief Field ARGB2101010 offset 0
static UnityEngine::RenderTextureFormat const ARGB2101010;

/// @brief Field DefaultHDR offset 0
static UnityEngine::RenderTextureFormat const DefaultHDR;

/// @brief Field ARGB64 offset 0
static UnityEngine::RenderTextureFormat const ARGB64;

/// @brief Field ARGBFloat offset 0
static UnityEngine::RenderTextureFormat const ARGBFloat;

/// @brief Field RGFloat offset 0
static UnityEngine::RenderTextureFormat const RGFloat;

/// @brief Field RGHalf offset 0
static UnityEngine::RenderTextureFormat const RGHalf;

/// @brief Field RFloat offset 0
static UnityEngine::RenderTextureFormat const RFloat;

/// @brief Field RHalf offset 0
static UnityEngine::RenderTextureFormat const RHalf;

/// @brief Field R8 offset 0
static UnityEngine::RenderTextureFormat const R8;

/// @brief Field ARGBInt offset 0
static UnityEngine::RenderTextureFormat const ARGBInt;

/// @brief Field RGInt offset 0
static UnityEngine::RenderTextureFormat const RGInt;

/// @brief Field RInt offset 0
static UnityEngine::RenderTextureFormat const RInt;

/// @brief Field BGRA32 offset 0
static UnityEngine::RenderTextureFormat const BGRA32;

/// @brief Field RGB111110Float offset 0
static UnityEngine::RenderTextureFormat const RGB111110Float;

/// @brief Field RG32 offset 0
static UnityEngine::RenderTextureFormat const RG32;

/// @brief Field RGBAUShort offset 0
static UnityEngine::RenderTextureFormat const RGBAUShort;

/// @brief Field RG16 offset 0
static UnityEngine::RenderTextureFormat const RG16;

/// @brief Field BGRA10101010_XR offset 0
static UnityEngine::RenderTextureFormat const BGRA10101010_XR;

/// @brief Field BGR101010_XR offset 0
static UnityEngine::RenderTextureFormat const BGR101010_XR;

/// @brief Field R16 offset 0
static UnityEngine::RenderTextureFormat const R16;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RenderTextureFormat, "UnityEngine", "RenderTextureFormat");
