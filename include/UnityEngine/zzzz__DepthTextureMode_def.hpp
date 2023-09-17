#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct DepthTextureMode;
}
// Type: UnityEngine::DepthTextureMode
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10050))
// CS Name: UnityEngine.DepthTextureMode
struct CORDL_TYPE DepthTextureMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DepthTextureMode(int32_t value__) noexcept;


                    constexpr DepthTextureMode(DepthTextureMode const&) = default;
                    constexpr DepthTextureMode(DepthTextureMode&&) = default;
                    constexpr DepthTextureMode& operator=(DepthTextureMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DepthTextureMode& operator=(DepthTextureMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DepthTextureMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __DepthTextureMode_Unwrapped : int32_t {
__None = 0,
__Depth = 1,
__DepthNormals = 2,
__MotionVectors = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DepthTextureMode_Unwrapped () const noexcept {
return std::bit_cast<__DepthTextureMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::UnityEngine::DepthTextureMode const None;

/// @brief Field Depth offset 0
static ::UnityEngine::DepthTextureMode const Depth;

/// @brief Field DepthNormals offset 0
static ::UnityEngine::DepthTextureMode const DepthNormals;

/// @brief Field MotionVectors offset 0
static ::UnityEngine::DepthTextureMode const MotionVectors;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::DepthTextureMode, "UnityEngine", "DepthTextureMode");