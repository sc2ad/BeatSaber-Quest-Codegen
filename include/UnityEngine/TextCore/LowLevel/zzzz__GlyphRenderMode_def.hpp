#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct GlyphRenderMode;
}
// Type: UnityEngine.TextCore.LowLevel::GlyphRenderMode
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15510))
// CS Name: UnityEngine.TextCore.LowLevel.GlyphRenderMode
struct CORDL_TYPE GlyphRenderMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlyphRenderMode(int32_t value__) noexcept;


                    constexpr GlyphRenderMode(GlyphRenderMode const&) = default;
                    constexpr GlyphRenderMode(GlyphRenderMode&&) = default;
                    constexpr GlyphRenderMode& operator=(GlyphRenderMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlyphRenderMode& operator=(GlyphRenderMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlyphRenderMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlyphRenderMode_Unwrapped : int32_t {
__SMOOTH_HINTED = 4121,
__SMOOTH = 4117,
__COLOR_HINTED = 69656,
__COLOR = 69652,
__RASTER_HINTED = 4122,
__RASTER = 4118,
__SDF = 4134,
__SDF8 = 8230,
__SDF16 = 16422,
__SDF32 = 32806,
__SDFAA_HINTED = 4169,
__SDFAA = 4165,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlyphRenderMode_Unwrapped () const noexcept {
return std::bit_cast<__GlyphRenderMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field SMOOTH_HINTED offset 0
static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const SMOOTH_HINTED;

/// @brief Field SMOOTH offset 0
static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const SMOOTH;

/// @brief Field COLOR_HINTED offset 0
static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const COLOR_HINTED;

/// @brief Field COLOR offset 0
static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const COLOR;

/// @brief Field RASTER_HINTED offset 0
static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const RASTER_HINTED;

/// @brief Field RASTER offset 0
static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const RASTER;

/// @brief Field SDF offset 0
static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const SDF;

/// @brief Field SDF8 offset 0
static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const SDF8;

/// @brief Field SDF16 offset 0
static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const SDF16;

/// @brief Field SDF32 offset 0
static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const SDF32;

/// @brief Field SDFAA_HINTED offset 0
static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const SDFAA_HINTED;

/// @brief Field SDFAA offset 0
static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const SDFAA;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::LowLevel
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::GlyphRenderMode, "UnityEngine.TextCore.LowLevel", "GlyphRenderMode");
