#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct GlyphLoadFlags;
}
// Type: UnityEngine.TextCore.LowLevel::GlyphLoadFlags
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15508))
// CS Name: UnityEngine.TextCore.LowLevel.GlyphLoadFlags
struct CORDL_TYPE GlyphLoadFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlyphLoadFlags(int32_t value__) noexcept;


                    constexpr GlyphLoadFlags(GlyphLoadFlags const&) = default;
                    constexpr GlyphLoadFlags(GlyphLoadFlags&&) = default;
                    constexpr GlyphLoadFlags& operator=(GlyphLoadFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlyphLoadFlags& operator=(GlyphLoadFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlyphLoadFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlyphLoadFlags_Unwrapped : int32_t {
__LOAD_DEFAULT = 0,
__LOAD_NO_SCALE = 1,
__LOAD_NO_HINTING = 2,
__LOAD_RENDER = 4,
__LOAD_NO_BITMAP = 8,
__LOAD_FORCE_AUTOHINT = 32,
__LOAD_MONOCHROME = 4096,
__LOAD_NO_AUTOHINT = 32768,
__LOAD_COLOR = 1048576,
__LOAD_COMPUTE_METRICS = 2097152,
__LOAD_BITMAP_METRICS_ONLY = 4194304,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlyphLoadFlags_Unwrapped () const noexcept {
return std::bit_cast<__GlyphLoadFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field LOAD_DEFAULT offset 0
static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_DEFAULT;

/// @brief Field LOAD_NO_SCALE offset 0
static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_NO_SCALE;

/// @brief Field LOAD_NO_HINTING offset 0
static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_NO_HINTING;

/// @brief Field LOAD_RENDER offset 0
static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_RENDER;

/// @brief Field LOAD_NO_BITMAP offset 0
static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_NO_BITMAP;

/// @brief Field LOAD_FORCE_AUTOHINT offset 0
static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_FORCE_AUTOHINT;

/// @brief Field LOAD_MONOCHROME offset 0
static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_MONOCHROME;

/// @brief Field LOAD_NO_AUTOHINT offset 0
static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_NO_AUTOHINT;

/// @brief Field LOAD_COLOR offset 0
static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_COLOR;

/// @brief Field LOAD_COMPUTE_METRICS offset 0
static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_COMPUTE_METRICS;

/// @brief Field LOAD_BITMAP_METRICS_ONLY offset 0
static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_BITMAP_METRICS_ONLY;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::LowLevel
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::GlyphLoadFlags, "UnityEngine.TextCore.LowLevel", "GlyphLoadFlags");
