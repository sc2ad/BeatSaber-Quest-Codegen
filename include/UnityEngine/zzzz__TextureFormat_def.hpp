#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct TextureFormat;
}
// Type: UnityEngine::TextureFormat
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10057))
// CS Name: UnityEngine.TextureFormat
struct CORDL_TYPE TextureFormat : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextureFormat(int32_t value__) noexcept;


                    constexpr TextureFormat(TextureFormat const&) = default;
                    constexpr TextureFormat(TextureFormat&&) = default;
                    constexpr TextureFormat& operator=(TextureFormat const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextureFormat& operator=(TextureFormat&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextureFormat(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TextureFormat_Unwrapped : int32_t {
__Alpha8 = 1,
__ARGB4444 = 2,
__RGB24 = 3,
__RGBA32 = 4,
__ARGB32 = 5,
__RGB565 = 7,
__R16 = 9,
__DXT1 = 10,
__DXT5 = 12,
__RGBA4444 = 13,
__BGRA32 = 14,
__RHalf = 15,
__RGHalf = 16,
__RGBAHalf = 17,
__RFloat = 18,
__RGFloat = 19,
__RGBAFloat = 20,
__YUY2 = 21,
__RGB9e5Float = 22,
__BC4 = 26,
__BC5 = 27,
__BC6H = 24,
__BC7 = 25,
__DXT1Crunched = 28,
__DXT5Crunched = 29,
__PVRTC_RGB2 = 30,
__PVRTC_RGBA2 = 31,
__PVRTC_RGB4 = 32,
__PVRTC_RGBA4 = 33,
__ETC_RGB4 = 34,
__EAC_R = 41,
__EAC_R_SIGNED = 42,
__EAC_RG = 43,
__EAC_RG_SIGNED = 44,
__ETC2_RGB = 45,
__ETC2_RGBA1 = 46,
__ETC2_RGBA8 = 47,
__ASTC_4x4 = 48,
__ASTC_5x5 = 49,
__ASTC_6x6 = 50,
__ASTC_8x8 = 51,
__ASTC_10x10 = 52,
__ASTC_12x12 = 53,
__ETC_RGB4_3DS = 60,
__ETC_RGBA8_3DS = 61,
__RG16 = 62,
__R8 = 63,
__ETC_RGB4Crunched = 64,
__ETC2_RGBA8Crunched = 65,
__ASTC_HDR_4x4 = 66,
__ASTC_HDR_5x5 = 67,
__ASTC_HDR_6x6 = 68,
__ASTC_HDR_8x8 = 69,
__ASTC_HDR_10x10 = 70,
__ASTC_HDR_12x12 = 71,
__RG32 = 72,
__RGB48 = 73,
__RGBA64 = 74,
__ASTC_RGB_4x4 = 48,
__ASTC_RGB_5x5 = 49,
__ASTC_RGB_6x6 = 50,
__ASTC_RGB_8x8 = 51,
__ASTC_RGB_10x10 = 52,
__ASTC_RGB_12x12 = 53,
__ASTC_RGBA_4x4 = 54,
__ASTC_RGBA_5x5 = 55,
__ASTC_RGBA_6x6 = 56,
__ASTC_RGBA_8x8 = 57,
__ASTC_RGBA_10x10 = 58,
__ASTC_RGBA_12x12 = 59,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextureFormat_Unwrapped () const noexcept {
return std::bit_cast<__TextureFormat_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Alpha8 offset 0
static UnityEngine::TextureFormat const Alpha8;

/// @brief Field ARGB4444 offset 0
static UnityEngine::TextureFormat const ARGB4444;

/// @brief Field RGB24 offset 0
static UnityEngine::TextureFormat const RGB24;

/// @brief Field RGBA32 offset 0
static UnityEngine::TextureFormat const RGBA32;

/// @brief Field ARGB32 offset 0
static UnityEngine::TextureFormat const ARGB32;

/// @brief Field RGB565 offset 0
static UnityEngine::TextureFormat const RGB565;

/// @brief Field R16 offset 0
static UnityEngine::TextureFormat const R16;

/// @brief Field DXT1 offset 0
static UnityEngine::TextureFormat const DXT1;

/// @brief Field DXT5 offset 0
static UnityEngine::TextureFormat const DXT5;

/// @brief Field RGBA4444 offset 0
static UnityEngine::TextureFormat const RGBA4444;

/// @brief Field BGRA32 offset 0
static UnityEngine::TextureFormat const BGRA32;

/// @brief Field RHalf offset 0
static UnityEngine::TextureFormat const RHalf;

/// @brief Field RGHalf offset 0
static UnityEngine::TextureFormat const RGHalf;

/// @brief Field RGBAHalf offset 0
static UnityEngine::TextureFormat const RGBAHalf;

/// @brief Field RFloat offset 0
static UnityEngine::TextureFormat const RFloat;

/// @brief Field RGFloat offset 0
static UnityEngine::TextureFormat const RGFloat;

/// @brief Field RGBAFloat offset 0
static UnityEngine::TextureFormat const RGBAFloat;

/// @brief Field YUY2 offset 0
static UnityEngine::TextureFormat const YUY2;

/// @brief Field RGB9e5Float offset 0
static UnityEngine::TextureFormat const RGB9e5Float;

/// @brief Field BC4 offset 0
static UnityEngine::TextureFormat const BC4;

/// @brief Field BC5 offset 0
static UnityEngine::TextureFormat const BC5;

/// @brief Field BC6H offset 0
static UnityEngine::TextureFormat const BC6H;

/// @brief Field BC7 offset 0
static UnityEngine::TextureFormat const BC7;

/// @brief Field DXT1Crunched offset 0
static UnityEngine::TextureFormat const DXT1Crunched;

/// @brief Field DXT5Crunched offset 0
static UnityEngine::TextureFormat const DXT5Crunched;

/// @brief Field PVRTC_RGB2 offset 0
static UnityEngine::TextureFormat const PVRTC_RGB2;

/// @brief Field PVRTC_RGBA2 offset 0
static UnityEngine::TextureFormat const PVRTC_RGBA2;

/// @brief Field PVRTC_RGB4 offset 0
static UnityEngine::TextureFormat const PVRTC_RGB4;

/// @brief Field PVRTC_RGBA4 offset 0
static UnityEngine::TextureFormat const PVRTC_RGBA4;

/// @brief Field ETC_RGB4 offset 0
static UnityEngine::TextureFormat const ETC_RGB4;

/// @brief Field EAC_R offset 0
static UnityEngine::TextureFormat const EAC_R;

/// @brief Field EAC_R_SIGNED offset 0
static UnityEngine::TextureFormat const EAC_R_SIGNED;

/// @brief Field EAC_RG offset 0
static UnityEngine::TextureFormat const EAC_RG;

/// @brief Field EAC_RG_SIGNED offset 0
static UnityEngine::TextureFormat const EAC_RG_SIGNED;

/// @brief Field ETC2_RGB offset 0
static UnityEngine::TextureFormat const ETC2_RGB;

/// @brief Field ETC2_RGBA1 offset 0
static UnityEngine::TextureFormat const ETC2_RGBA1;

/// @brief Field ETC2_RGBA8 offset 0
static UnityEngine::TextureFormat const ETC2_RGBA8;

/// @brief Field ASTC_4x4 offset 0
static UnityEngine::TextureFormat const ASTC_4x4;

/// @brief Field ASTC_5x5 offset 0
static UnityEngine::TextureFormat const ASTC_5x5;

/// @brief Field ASTC_6x6 offset 0
static UnityEngine::TextureFormat const ASTC_6x6;

/// @brief Field ASTC_8x8 offset 0
static UnityEngine::TextureFormat const ASTC_8x8;

/// @brief Field ASTC_10x10 offset 0
static UnityEngine::TextureFormat const ASTC_10x10;

/// @brief Field ASTC_12x12 offset 0
static UnityEngine::TextureFormat const ASTC_12x12;

/// @brief Field ETC_RGB4_3DS offset 0
static UnityEngine::TextureFormat const ETC_RGB4_3DS;

/// @brief Field ETC_RGBA8_3DS offset 0
static UnityEngine::TextureFormat const ETC_RGBA8_3DS;

/// @brief Field RG16 offset 0
static UnityEngine::TextureFormat const RG16;

/// @brief Field R8 offset 0
static UnityEngine::TextureFormat const R8;

/// @brief Field ETC_RGB4Crunched offset 0
static UnityEngine::TextureFormat const ETC_RGB4Crunched;

/// @brief Field ETC2_RGBA8Crunched offset 0
static UnityEngine::TextureFormat const ETC2_RGBA8Crunched;

/// @brief Field ASTC_HDR_4x4 offset 0
static UnityEngine::TextureFormat const ASTC_HDR_4x4;

/// @brief Field ASTC_HDR_5x5 offset 0
static UnityEngine::TextureFormat const ASTC_HDR_5x5;

/// @brief Field ASTC_HDR_6x6 offset 0
static UnityEngine::TextureFormat const ASTC_HDR_6x6;

/// @brief Field ASTC_HDR_8x8 offset 0
static UnityEngine::TextureFormat const ASTC_HDR_8x8;

/// @brief Field ASTC_HDR_10x10 offset 0
static UnityEngine::TextureFormat const ASTC_HDR_10x10;

/// @brief Field ASTC_HDR_12x12 offset 0
static UnityEngine::TextureFormat const ASTC_HDR_12x12;

/// @brief Field RG32 offset 0
static UnityEngine::TextureFormat const RG32;

/// @brief Field RGB48 offset 0
static UnityEngine::TextureFormat const RGB48;

/// @brief Field RGBA64 offset 0
static UnityEngine::TextureFormat const RGBA64;

/// @brief Field ASTC_RGB_4x4 offset 0
static UnityEngine::TextureFormat const ASTC_RGB_4x4;

/// @brief Field ASTC_RGB_5x5 offset 0
static UnityEngine::TextureFormat const ASTC_RGB_5x5;

/// @brief Field ASTC_RGB_6x6 offset 0
static UnityEngine::TextureFormat const ASTC_RGB_6x6;

/// @brief Field ASTC_RGB_8x8 offset 0
static UnityEngine::TextureFormat const ASTC_RGB_8x8;

/// @brief Field ASTC_RGB_10x10 offset 0
static UnityEngine::TextureFormat const ASTC_RGB_10x10;

/// @brief Field ASTC_RGB_12x12 offset 0
static UnityEngine::TextureFormat const ASTC_RGB_12x12;

/// @brief Field ASTC_RGBA_4x4 offset 0
static UnityEngine::TextureFormat const ASTC_RGBA_4x4;

/// @brief Field ASTC_RGBA_5x5 offset 0
static UnityEngine::TextureFormat const ASTC_RGBA_5x5;

/// @brief Field ASTC_RGBA_6x6 offset 0
static UnityEngine::TextureFormat const ASTC_RGBA_6x6;

/// @brief Field ASTC_RGBA_8x8 offset 0
static UnityEngine::TextureFormat const ASTC_RGBA_8x8;

/// @brief Field ASTC_RGBA_10x10 offset 0
static UnityEngine::TextureFormat const ASTC_RGBA_10x10;

/// @brief Field ASTC_RGBA_12x12 offset 0
static UnityEngine::TextureFormat const ASTC_RGBA_12x12;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextureFormat, "UnityEngine", "TextureFormat");
