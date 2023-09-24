#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct TextureWrapMode;
}
// Type: UnityEngine::TextureWrapMode
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10056))
// CS Name: UnityEngine.TextureWrapMode
struct CORDL_TYPE TextureWrapMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextureWrapMode(int32_t value__) noexcept;


                    constexpr TextureWrapMode(TextureWrapMode const&) = default;
                    constexpr TextureWrapMode(TextureWrapMode&&) = default;
                    constexpr TextureWrapMode& operator=(TextureWrapMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextureWrapMode& operator=(TextureWrapMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextureWrapMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TextureWrapMode_Unwrapped : int32_t {
__Repeat = 0,
__Clamp = 1,
__Mirror = 2,
__MirrorOnce = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextureWrapMode_Unwrapped () const noexcept {
return std::bit_cast<__TextureWrapMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Repeat offset 0
static UnityEngine::TextureWrapMode const Repeat;

/// @brief Field Clamp offset 0
static UnityEngine::TextureWrapMode const Clamp;

/// @brief Field Mirror offset 0
static UnityEngine::TextureWrapMode const Mirror;

/// @brief Field MirrorOnce offset 0
static UnityEngine::TextureWrapMode const MirrorOnce;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextureWrapMode, "UnityEngine", "TextureWrapMode");
