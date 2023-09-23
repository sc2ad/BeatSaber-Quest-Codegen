#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
// Type: UnityEngine.Experimental.Rendering::GraphicsFormat
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10342))
// CS Name: UnityEngine.Experimental.Rendering.GraphicsFormat
struct CORDL_TYPE GraphicsFormat : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GraphicsFormat(int32_t value__) noexcept;


                    constexpr GraphicsFormat(GraphicsFormat const&) = default;
                    constexpr GraphicsFormat(GraphicsFormat&&) = default;
                    constexpr GraphicsFormat& operator=(GraphicsFormat const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GraphicsFormat& operator=(GraphicsFormat&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GraphicsFormat(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GraphicsFormat_Unwrapped : int32_t {
__None = 0,
__R8_SRGB = 1,
__R8G8_SRGB = 2,
__R8G8B8_SRGB = 3,
__R8G8B8A8_SRGB = 4,
__R8_UNorm = 5,
__R8G8_UNorm = 6,
__R8G8B8_UNorm = 7,
__R8G8B8A8_UNorm = 8,
__R8_SNorm = 9,
__R8G8_SNorm = 10,
__R8G8B8_SNorm = 11,
__R8G8B8A8_SNorm = 12,
__R8_UInt = 13,
__R8G8_UInt = 14,
__R8G8B8_UInt = 15,
__R8G8B8A8_UInt = 16,
__R8_SInt = 17,
__R8G8_SInt = 18,
__R8G8B8_SInt = 19,
__R8G8B8A8_SInt = 20,
__R16_UNorm = 21,
__R16G16_UNorm = 22,
__R16G16B16_UNorm = 23,
__R16G16B16A16_UNorm = 24,
__R16_SNorm = 25,
__R16G16_SNorm = 26,
__R16G16B16_SNorm = 27,
__R16G16B16A16_SNorm = 28,
__R16_UInt = 29,
__R16G16_UInt = 30,
__R16G16B16_UInt = 31,
__R16G16B16A16_UInt = 32,
__R16_SInt = 33,
__R16G16_SInt = 34,
__R16G16B16_SInt = 35,
__R16G16B16A16_SInt = 36,
__R32_UInt = 37,
__R32G32_UInt = 38,
__R32G32B32_UInt = 39,
__R32G32B32A32_UInt = 40,
__R32_SInt = 41,
__R32G32_SInt = 42,
__R32G32B32_SInt = 43,
__R32G32B32A32_SInt = 44,
__R16_SFloat = 45,
__R16G16_SFloat = 46,
__R16G16B16_SFloat = 47,
__R16G16B16A16_SFloat = 48,
__R32_SFloat = 49,
__R32G32_SFloat = 50,
__R32G32B32_SFloat = 51,
__R32G32B32A32_SFloat = 52,
__B8G8R8_SRGB = 56,
__B8G8R8A8_SRGB = 57,
__B8G8R8_UNorm = 58,
__B8G8R8A8_UNorm = 59,
__B8G8R8_SNorm = 60,
__B8G8R8A8_SNorm = 61,
__B8G8R8_UInt = 62,
__B8G8R8A8_UInt = 63,
__B8G8R8_SInt = 64,
__B8G8R8A8_SInt = 65,
__R4G4B4A4_UNormPack16 = 66,
__B4G4R4A4_UNormPack16 = 67,
__R5G6B5_UNormPack16 = 68,
__B5G6R5_UNormPack16 = 69,
__R5G5B5A1_UNormPack16 = 70,
__B5G5R5A1_UNormPack16 = 71,
__A1R5G5B5_UNormPack16 = 72,
__E5B9G9R9_UFloatPack32 = 73,
__B10G11R11_UFloatPack32 = 74,
__A2B10G10R10_UNormPack32 = 75,
__A2B10G10R10_UIntPack32 = 76,
__A2B10G10R10_SIntPack32 = 77,
__A2R10G10B10_UNormPack32 = 78,
__A2R10G10B10_UIntPack32 = 79,
__A2R10G10B10_SIntPack32 = 80,
__A2R10G10B10_XRSRGBPack32 = 81,
__A2R10G10B10_XRUNormPack32 = 82,
__R10G10B10_XRSRGBPack32 = 83,
__R10G10B10_XRUNormPack32 = 84,
__A10R10G10B10_XRSRGBPack32 = 85,
__A10R10G10B10_XRUNormPack32 = 86,
__D16_UNorm = 90,
__D24_UNorm = 91,
__D24_UNorm_S8_UInt = 92,
__D32_SFloat = 93,
__D32_SFloat_S8_UInt = 94,
__S8_UInt = 95,
__RGB_DXT1_SRGB = 96,
__RGBA_DXT1_SRGB = 96,
__RGB_DXT1_UNorm = 97,
__RGBA_DXT1_UNorm = 97,
__RGBA_DXT3_SRGB = 98,
__RGBA_DXT3_UNorm = 99,
__RGBA_DXT5_SRGB = 100,
__RGBA_DXT5_UNorm = 101,
__R_BC4_UNorm = 102,
__R_BC4_SNorm = 103,
__RG_BC5_UNorm = 104,
__RG_BC5_SNorm = 105,
__RGB_BC6H_UFloat = 106,
__RGB_BC6H_SFloat = 107,
__RGBA_BC7_SRGB = 108,
__RGBA_BC7_UNorm = 109,
__RGB_PVRTC_2Bpp_SRGB = 110,
__RGB_PVRTC_2Bpp_UNorm = 111,
__RGB_PVRTC_4Bpp_SRGB = 112,
__RGB_PVRTC_4Bpp_UNorm = 113,
__RGBA_PVRTC_2Bpp_SRGB = 114,
__RGBA_PVRTC_2Bpp_UNorm = 115,
__RGBA_PVRTC_4Bpp_SRGB = 116,
__RGBA_PVRTC_4Bpp_UNorm = 117,
__RGB_ETC_UNorm = 118,
__RGB_ETC2_SRGB = 119,
__RGB_ETC2_UNorm = 120,
__RGB_A1_ETC2_SRGB = 121,
__RGB_A1_ETC2_UNorm = 122,
__RGBA_ETC2_SRGB = 123,
__RGBA_ETC2_UNorm = 124,
__R_EAC_UNorm = 125,
__R_EAC_SNorm = 126,
__RG_EAC_UNorm = 127,
__RG_EAC_SNorm = 128,
__RGBA_ASTC4X4_SRGB = 129,
__RGBA_ASTC4X4_UNorm = 130,
__RGBA_ASTC5X5_SRGB = 131,
__RGBA_ASTC5X5_UNorm = 132,
__RGBA_ASTC6X6_SRGB = 133,
__RGBA_ASTC6X6_UNorm = 134,
__RGBA_ASTC8X8_SRGB = 135,
__RGBA_ASTC8X8_UNorm = 136,
__RGBA_ASTC10X10_SRGB = 137,
__RGBA_ASTC10X10_UNorm = 138,
__RGBA_ASTC12X12_SRGB = 139,
__RGBA_ASTC12X12_UNorm = 140,
__YUV2 = 141,
__DepthAuto = 142,
__ShadowAuto = 143,
__VideoAuto = 144,
__RGBA_ASTC4X4_UFloat = 145,
__RGBA_ASTC5X5_UFloat = 146,
__RGBA_ASTC6X6_UFloat = 147,
__RGBA_ASTC8X8_UFloat = 148,
__RGBA_ASTC10X10_UFloat = 149,
__RGBA_ASTC12X12_UFloat = 150,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GraphicsFormat_Unwrapped () const noexcept {
return std::bit_cast<__GraphicsFormat_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const None;

/// @brief Field R8_SRGB offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R8_SRGB;

/// @brief Field R8G8_SRGB offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R8G8_SRGB;

/// @brief Field R8G8B8_SRGB offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R8G8B8_SRGB;

/// @brief Field R8G8B8A8_SRGB offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R8G8B8A8_SRGB;

/// @brief Field R8_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R8_UNorm;

/// @brief Field R8G8_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R8G8_UNorm;

/// @brief Field R8G8B8_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R8G8B8_UNorm;

/// @brief Field R8G8B8A8_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R8G8B8A8_UNorm;

/// @brief Field R8_SNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R8_SNorm;

/// @brief Field R8G8_SNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R8G8_SNorm;

/// @brief Field R8G8B8_SNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R8G8B8_SNorm;

/// @brief Field R8G8B8A8_SNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R8G8B8A8_SNorm;

/// @brief Field R8_UInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R8_UInt;

/// @brief Field R8G8_UInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R8G8_UInt;

/// @brief Field R8G8B8_UInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R8G8B8_UInt;

/// @brief Field R8G8B8A8_UInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R8G8B8A8_UInt;

/// @brief Field R8_SInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R8_SInt;

/// @brief Field R8G8_SInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R8G8_SInt;

/// @brief Field R8G8B8_SInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R8G8B8_SInt;

/// @brief Field R8G8B8A8_SInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R8G8B8A8_SInt;

/// @brief Field R16_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R16_UNorm;

/// @brief Field R16G16_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R16G16_UNorm;

/// @brief Field R16G16B16_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R16G16B16_UNorm;

/// @brief Field R16G16B16A16_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R16G16B16A16_UNorm;

/// @brief Field R16_SNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R16_SNorm;

/// @brief Field R16G16_SNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R16G16_SNorm;

/// @brief Field R16G16B16_SNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R16G16B16_SNorm;

/// @brief Field R16G16B16A16_SNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R16G16B16A16_SNorm;

/// @brief Field R16_UInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R16_UInt;

/// @brief Field R16G16_UInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R16G16_UInt;

/// @brief Field R16G16B16_UInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R16G16B16_UInt;

/// @brief Field R16G16B16A16_UInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R16G16B16A16_UInt;

/// @brief Field R16_SInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R16_SInt;

/// @brief Field R16G16_SInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R16G16_SInt;

/// @brief Field R16G16B16_SInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R16G16B16_SInt;

/// @brief Field R16G16B16A16_SInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R16G16B16A16_SInt;

/// @brief Field R32_UInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R32_UInt;

/// @brief Field R32G32_UInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R32G32_UInt;

/// @brief Field R32G32B32_UInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R32G32B32_UInt;

/// @brief Field R32G32B32A32_UInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R32G32B32A32_UInt;

/// @brief Field R32_SInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R32_SInt;

/// @brief Field R32G32_SInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R32G32_SInt;

/// @brief Field R32G32B32_SInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R32G32B32_SInt;

/// @brief Field R32G32B32A32_SInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R32G32B32A32_SInt;

/// @brief Field R16_SFloat offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R16_SFloat;

/// @brief Field R16G16_SFloat offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R16G16_SFloat;

/// @brief Field R16G16B16_SFloat offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R16G16B16_SFloat;

/// @brief Field R16G16B16A16_SFloat offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R16G16B16A16_SFloat;

/// @brief Field R32_SFloat offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R32_SFloat;

/// @brief Field R32G32_SFloat offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R32G32_SFloat;

/// @brief Field R32G32B32_SFloat offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R32G32B32_SFloat;

/// @brief Field R32G32B32A32_SFloat offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R32G32B32A32_SFloat;

/// @brief Field B8G8R8_SRGB offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const B8G8R8_SRGB;

/// @brief Field B8G8R8A8_SRGB offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const B8G8R8A8_SRGB;

/// @brief Field B8G8R8_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const B8G8R8_UNorm;

/// @brief Field B8G8R8A8_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const B8G8R8A8_UNorm;

/// @brief Field B8G8R8_SNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const B8G8R8_SNorm;

/// @brief Field B8G8R8A8_SNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const B8G8R8A8_SNorm;

/// @brief Field B8G8R8_UInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const B8G8R8_UInt;

/// @brief Field B8G8R8A8_UInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const B8G8R8A8_UInt;

/// @brief Field B8G8R8_SInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const B8G8R8_SInt;

/// @brief Field B8G8R8A8_SInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const B8G8R8A8_SInt;

/// @brief Field R4G4B4A4_UNormPack16 offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R4G4B4A4_UNormPack16;

/// @brief Field B4G4R4A4_UNormPack16 offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const B4G4R4A4_UNormPack16;

/// @brief Field R5G6B5_UNormPack16 offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R5G6B5_UNormPack16;

/// @brief Field B5G6R5_UNormPack16 offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const B5G6R5_UNormPack16;

/// @brief Field R5G5B5A1_UNormPack16 offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R5G5B5A1_UNormPack16;

/// @brief Field B5G5R5A1_UNormPack16 offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const B5G5R5A1_UNormPack16;

/// @brief Field A1R5G5B5_UNormPack16 offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const A1R5G5B5_UNormPack16;

/// @brief Field E5B9G9R9_UFloatPack32 offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const E5B9G9R9_UFloatPack32;

/// @brief Field B10G11R11_UFloatPack32 offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const B10G11R11_UFloatPack32;

/// @brief Field A2B10G10R10_UNormPack32 offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const A2B10G10R10_UNormPack32;

/// @brief Field A2B10G10R10_UIntPack32 offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const A2B10G10R10_UIntPack32;

/// @brief Field A2B10G10R10_SIntPack32 offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const A2B10G10R10_SIntPack32;

/// @brief Field A2R10G10B10_UNormPack32 offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const A2R10G10B10_UNormPack32;

/// @brief Field A2R10G10B10_UIntPack32 offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const A2R10G10B10_UIntPack32;

/// @brief Field A2R10G10B10_SIntPack32 offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const A2R10G10B10_SIntPack32;

/// @brief Field A2R10G10B10_XRSRGBPack32 offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const A2R10G10B10_XRSRGBPack32;

/// @brief Field A2R10G10B10_XRUNormPack32 offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const A2R10G10B10_XRUNormPack32;

/// @brief Field R10G10B10_XRSRGBPack32 offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R10G10B10_XRSRGBPack32;

/// @brief Field R10G10B10_XRUNormPack32 offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R10G10B10_XRUNormPack32;

/// @brief Field A10R10G10B10_XRSRGBPack32 offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const A10R10G10B10_XRSRGBPack32;

/// @brief Field A10R10G10B10_XRUNormPack32 offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const A10R10G10B10_XRUNormPack32;

/// @brief Field D16_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const D16_UNorm;

/// @brief Field D24_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const D24_UNorm;

/// @brief Field D24_UNorm_S8_UInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const D24_UNorm_S8_UInt;

/// @brief Field D32_SFloat offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const D32_SFloat;

/// @brief Field D32_SFloat_S8_UInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const D32_SFloat_S8_UInt;

/// @brief Field S8_UInt offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const S8_UInt;

/// @brief Field RGB_DXT1_SRGB offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGB_DXT1_SRGB;

/// @brief Field RGBA_DXT1_SRGB offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_DXT1_SRGB;

/// @brief Field RGB_DXT1_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGB_DXT1_UNorm;

/// @brief Field RGBA_DXT1_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_DXT1_UNorm;

/// @brief Field RGBA_DXT3_SRGB offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_DXT3_SRGB;

/// @brief Field RGBA_DXT3_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_DXT3_UNorm;

/// @brief Field RGBA_DXT5_SRGB offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_DXT5_SRGB;

/// @brief Field RGBA_DXT5_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_DXT5_UNorm;

/// @brief Field R_BC4_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R_BC4_UNorm;

/// @brief Field R_BC4_SNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R_BC4_SNorm;

/// @brief Field RG_BC5_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RG_BC5_UNorm;

/// @brief Field RG_BC5_SNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RG_BC5_SNorm;

/// @brief Field RGB_BC6H_UFloat offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGB_BC6H_UFloat;

/// @brief Field RGB_BC6H_SFloat offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGB_BC6H_SFloat;

/// @brief Field RGBA_BC7_SRGB offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_BC7_SRGB;

/// @brief Field RGBA_BC7_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_BC7_UNorm;

/// @brief Field RGB_PVRTC_2Bpp_SRGB offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGB_PVRTC_2Bpp_SRGB;

/// @brief Field RGB_PVRTC_2Bpp_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGB_PVRTC_2Bpp_UNorm;

/// @brief Field RGB_PVRTC_4Bpp_SRGB offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGB_PVRTC_4Bpp_SRGB;

/// @brief Field RGB_PVRTC_4Bpp_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGB_PVRTC_4Bpp_UNorm;

/// @brief Field RGBA_PVRTC_2Bpp_SRGB offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_PVRTC_2Bpp_SRGB;

/// @brief Field RGBA_PVRTC_2Bpp_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_PVRTC_2Bpp_UNorm;

/// @brief Field RGBA_PVRTC_4Bpp_SRGB offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_PVRTC_4Bpp_SRGB;

/// @brief Field RGBA_PVRTC_4Bpp_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_PVRTC_4Bpp_UNorm;

/// @brief Field RGB_ETC_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGB_ETC_UNorm;

/// @brief Field RGB_ETC2_SRGB offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGB_ETC2_SRGB;

/// @brief Field RGB_ETC2_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGB_ETC2_UNorm;

/// @brief Field RGB_A1_ETC2_SRGB offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGB_A1_ETC2_SRGB;

/// @brief Field RGB_A1_ETC2_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGB_A1_ETC2_UNorm;

/// @brief Field RGBA_ETC2_SRGB offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ETC2_SRGB;

/// @brief Field RGBA_ETC2_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ETC2_UNorm;

/// @brief Field R_EAC_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R_EAC_UNorm;

/// @brief Field R_EAC_SNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const R_EAC_SNorm;

/// @brief Field RG_EAC_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RG_EAC_UNorm;

/// @brief Field RG_EAC_SNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RG_EAC_SNorm;

/// @brief Field RGBA_ASTC4X4_SRGB offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC4X4_SRGB;

/// @brief Field RGBA_ASTC4X4_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC4X4_UNorm;

/// @brief Field RGBA_ASTC5X5_SRGB offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC5X5_SRGB;

/// @brief Field RGBA_ASTC5X5_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC5X5_UNorm;

/// @brief Field RGBA_ASTC6X6_SRGB offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC6X6_SRGB;

/// @brief Field RGBA_ASTC6X6_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC6X6_UNorm;

/// @brief Field RGBA_ASTC8X8_SRGB offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC8X8_SRGB;

/// @brief Field RGBA_ASTC8X8_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC8X8_UNorm;

/// @brief Field RGBA_ASTC10X10_SRGB offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC10X10_SRGB;

/// @brief Field RGBA_ASTC10X10_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC10X10_UNorm;

/// @brief Field RGBA_ASTC12X12_SRGB offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC12X12_SRGB;

/// @brief Field RGBA_ASTC12X12_UNorm offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC12X12_UNorm;

/// @brief Field YUV2 offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const YUV2;

/// @brief Field DepthAuto offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const DepthAuto;

/// @brief Field ShadowAuto offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const ShadowAuto;

/// @brief Field VideoAuto offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const VideoAuto;

/// @brief Field RGBA_ASTC4X4_UFloat offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC4X4_UFloat;

/// @brief Field RGBA_ASTC5X5_UFloat offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC5X5_UFloat;

/// @brief Field RGBA_ASTC6X6_UFloat offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC6X6_UFloat;

/// @brief Field RGBA_ASTC8X8_UFloat offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC8X8_UFloat;

/// @brief Field RGBA_ASTC10X10_UFloat offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC10X10_UFloat;

/// @brief Field RGBA_ASTC12X12_UFloat offset 0
static UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC12X12_UFloat;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::Rendering
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::Rendering::GraphicsFormat, "UnityEngine.Experimental.Rendering", "GraphicsFormat");
