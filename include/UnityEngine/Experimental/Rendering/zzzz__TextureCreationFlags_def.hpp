#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
struct TextureCreationFlags;
}
// Type: UnityEngine.Experimental.Rendering::TextureCreationFlags
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10339))
// CS Name: UnityEngine.Experimental.Rendering.TextureCreationFlags
struct CORDL_TYPE TextureCreationFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextureCreationFlags(int32_t value__) noexcept;


                    constexpr TextureCreationFlags(TextureCreationFlags const&) = default;
                    constexpr TextureCreationFlags(TextureCreationFlags&&) = default;
                    constexpr TextureCreationFlags& operator=(TextureCreationFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextureCreationFlags& operator=(TextureCreationFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextureCreationFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TextureCreationFlags_Unwrapped : int32_t {
__None = 0,
__MipChain = 1,
__Crunch = 64,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextureCreationFlags_Unwrapped () const noexcept {
return std::bit_cast<__TextureCreationFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::Experimental::Rendering::TextureCreationFlags const None;

/// @brief Field MipChain offset 0
static UnityEngine::Experimental::Rendering::TextureCreationFlags const MipChain;

/// @brief Field Crunch offset 0
static UnityEngine::Experimental::Rendering::TextureCreationFlags const Crunch;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::Rendering
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::Rendering::TextureCreationFlags, "UnityEngine.Experimental.Rendering", "TextureCreationFlags");
