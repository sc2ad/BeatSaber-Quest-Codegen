#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct RenderTextureCreationFlags;
}
// Type: UnityEngine::RenderTextureCreationFlags
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10061))
// CS Name: UnityEngine.RenderTextureCreationFlags
struct CORDL_TYPE RenderTextureCreationFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RenderTextureCreationFlags(int32_t value__) noexcept;


                    constexpr RenderTextureCreationFlags(RenderTextureCreationFlags const&) = default;
                    constexpr RenderTextureCreationFlags(RenderTextureCreationFlags&&) = default;
                    constexpr RenderTextureCreationFlags& operator=(RenderTextureCreationFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RenderTextureCreationFlags& operator=(RenderTextureCreationFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RenderTextureCreationFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RenderTextureCreationFlags_Unwrapped : int32_t {
__MipMap = 1,
__AutoGenerateMips = 2,
__SRGB = 4,
__EyeTexture = 8,
__EnableRandomWrite = 16,
__CreatedFromScript = 32,
__AllowVerticalFlip = 128,
__NoResolvedColorSurface = 256,
__DynamicallyScalable = 1024,
__BindMS = 2048,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderTextureCreationFlags_Unwrapped () const noexcept {
return std::bit_cast<__RenderTextureCreationFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field MipMap offset 0
static ::UnityEngine::RenderTextureCreationFlags const MipMap;

/// @brief Field AutoGenerateMips offset 0
static ::UnityEngine::RenderTextureCreationFlags const AutoGenerateMips;

/// @brief Field SRGB offset 0
static ::UnityEngine::RenderTextureCreationFlags const SRGB;

/// @brief Field EyeTexture offset 0
static ::UnityEngine::RenderTextureCreationFlags const EyeTexture;

/// @brief Field EnableRandomWrite offset 0
static ::UnityEngine::RenderTextureCreationFlags const EnableRandomWrite;

/// @brief Field CreatedFromScript offset 0
static ::UnityEngine::RenderTextureCreationFlags const CreatedFromScript;

/// @brief Field AllowVerticalFlip offset 0
static ::UnityEngine::RenderTextureCreationFlags const AllowVerticalFlip;

/// @brief Field NoResolvedColorSurface offset 0
static ::UnityEngine::RenderTextureCreationFlags const NoResolvedColorSurface;

/// @brief Field DynamicallyScalable offset 0
static ::UnityEngine::RenderTextureCreationFlags const DynamicallyScalable;

/// @brief Field BindMS offset 0
static ::UnityEngine::RenderTextureCreationFlags const BindMS;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderTextureCreationFlags, "UnityEngine", "RenderTextureCreationFlags");
