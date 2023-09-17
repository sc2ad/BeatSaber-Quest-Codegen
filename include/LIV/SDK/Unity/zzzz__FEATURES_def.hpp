#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace LIV::SDK::Unity {
struct FEATURES;
}
// Type: LIV.SDK.Unity::FEATURES
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15149))
// CS Name: LIV.SDK.Unity.FEATURES
struct CORDL_TYPE FEATURES : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr FEATURES(uint64_t value__) noexcept;


                    constexpr FEATURES(FEATURES const&) = default;
                    constexpr FEATURES(FEATURES&&) = default;
                    constexpr FEATURES& operator=(FEATURES const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FEATURES& operator=(FEATURES&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FEATURES(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __FEATURES_Unwrapped : uint64_t {
__NONE = 0u,
__BACKGROUND_RENDER = 1u,
__FOREGROUND_RENDER = 2u,
__COMPLEX_CLIP_PLANE = 4u,
__BACKGROUND_DEPTH_RENDER = 8u,
__OVERRIDE_POST_PROCESSING = 16u,
__FIX_FOREGROUND_ALPHA = 32u,
__GROUND_CLIP_PLANE = 64u,
__RELEASE_CONTROL = 32768u,
__OPTIMIZED_RENDER = 268435456u,
__INTERLACED_RENDER = 536870912u,
__DEBUG_CLIP_PLANE = 281474976710656u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FEATURES_Unwrapped () const noexcept {
return std::bit_cast<__FEATURES_Unwrapped>(__instance);
}


// Fields

 uint64_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint64_t value) ;

constexpr uint64_t __get_value__() const;

/// @brief Field NONE offset 0
static ::LIV::SDK::Unity::FEATURES const NONE;

/// @brief Field BACKGROUND_RENDER offset 0
static ::LIV::SDK::Unity::FEATURES const BACKGROUND_RENDER;

/// @brief Field FOREGROUND_RENDER offset 0
static ::LIV::SDK::Unity::FEATURES const FOREGROUND_RENDER;

/// @brief Field COMPLEX_CLIP_PLANE offset 0
static ::LIV::SDK::Unity::FEATURES const COMPLEX_CLIP_PLANE;

/// @brief Field BACKGROUND_DEPTH_RENDER offset 0
static ::LIV::SDK::Unity::FEATURES const BACKGROUND_DEPTH_RENDER;

/// @brief Field OVERRIDE_POST_PROCESSING offset 0
static ::LIV::SDK::Unity::FEATURES const OVERRIDE_POST_PROCESSING;

/// @brief Field FIX_FOREGROUND_ALPHA offset 0
static ::LIV::SDK::Unity::FEATURES const FIX_FOREGROUND_ALPHA;

/// @brief Field GROUND_CLIP_PLANE offset 0
static ::LIV::SDK::Unity::FEATURES const GROUND_CLIP_PLANE;

/// @brief Field RELEASE_CONTROL offset 0
static ::LIV::SDK::Unity::FEATURES const RELEASE_CONTROL;

/// @brief Field OPTIMIZED_RENDER offset 0
static ::LIV::SDK::Unity::FEATURES const OPTIMIZED_RENDER;

/// @brief Field INTERLACED_RENDER offset 0
static ::LIV::SDK::Unity::FEATURES const INTERLACED_RENDER;

/// @brief Field DEBUG_CLIP_PLANE offset 0
static ::LIV::SDK::Unity::FEATURES const DEBUG_CLIP_PLANE;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LIV::SDK::Unity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::FEATURES, "LIV.SDK.Unity", "FEATURES");
