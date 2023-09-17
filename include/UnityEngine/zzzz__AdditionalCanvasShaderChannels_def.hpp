#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct AdditionalCanvasShaderChannels;
}
// Type: UnityEngine::AdditionalCanvasShaderChannels
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15758))
// CS Name: UnityEngine.AdditionalCanvasShaderChannels
struct CORDL_TYPE AdditionalCanvasShaderChannels : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AdditionalCanvasShaderChannels(int32_t value__) noexcept;


                    constexpr AdditionalCanvasShaderChannels(AdditionalCanvasShaderChannels const&) = default;
                    constexpr AdditionalCanvasShaderChannels(AdditionalCanvasShaderChannels&&) = default;
                    constexpr AdditionalCanvasShaderChannels& operator=(AdditionalCanvasShaderChannels const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AdditionalCanvasShaderChannels& operator=(AdditionalCanvasShaderChannels&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AdditionalCanvasShaderChannels(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AdditionalCanvasShaderChannels_Unwrapped : int32_t {
__None = 0,
__TexCoord1 = 1,
__TexCoord2 = 2,
__TexCoord3 = 4,
__Normal = 8,
__Tangent = 16,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AdditionalCanvasShaderChannels_Unwrapped () const noexcept {
return std::bit_cast<__AdditionalCanvasShaderChannels_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::UnityEngine::AdditionalCanvasShaderChannels const None;

/// @brief Field TexCoord1 offset 0
static ::UnityEngine::AdditionalCanvasShaderChannels const TexCoord1;

/// @brief Field TexCoord2 offset 0
static ::UnityEngine::AdditionalCanvasShaderChannels const TexCoord2;

/// @brief Field TexCoord3 offset 0
static ::UnityEngine::AdditionalCanvasShaderChannels const TexCoord3;

/// @brief Field Normal offset 0
static ::UnityEngine::AdditionalCanvasShaderChannels const Normal;

/// @brief Field Tangent offset 0
static ::UnityEngine::AdditionalCanvasShaderChannels const Tangent;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AdditionalCanvasShaderChannels, "UnityEngine", "AdditionalCanvasShaderChannels");
