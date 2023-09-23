#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct RenderTextureMemoryless;
}
// Type: UnityEngine::RenderTextureMemoryless
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10063))
// CS Name: UnityEngine.RenderTextureMemoryless
struct CORDL_TYPE RenderTextureMemoryless : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RenderTextureMemoryless(int32_t value__) noexcept;


                    constexpr RenderTextureMemoryless(RenderTextureMemoryless const&) = default;
                    constexpr RenderTextureMemoryless(RenderTextureMemoryless&&) = default;
                    constexpr RenderTextureMemoryless& operator=(RenderTextureMemoryless const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RenderTextureMemoryless& operator=(RenderTextureMemoryless&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RenderTextureMemoryless(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RenderTextureMemoryless_Unwrapped : int32_t {
__None = 0,
__Color = 1,
__Depth = 2,
__MSAA = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderTextureMemoryless_Unwrapped () const noexcept {
return std::bit_cast<__RenderTextureMemoryless_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::RenderTextureMemoryless const None;

/// @brief Field Color offset 0
static UnityEngine::RenderTextureMemoryless const Color;

/// @brief Field Depth offset 0
static UnityEngine::RenderTextureMemoryless const Depth;

/// @brief Field MSAA offset 0
static UnityEngine::RenderTextureMemoryless const MSAA;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RenderTextureMemoryless, "UnityEngine", "RenderTextureMemoryless");
