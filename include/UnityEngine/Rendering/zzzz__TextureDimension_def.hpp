#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Rendering {
struct TextureDimension;
}
// Type: UnityEngine.Rendering::TextureDimension
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10286))
// CS Name: UnityEngine.Rendering.TextureDimension
struct CORDL_TYPE TextureDimension : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextureDimension(int32_t value__) noexcept;


                    constexpr TextureDimension(TextureDimension const&) = default;
                    constexpr TextureDimension(TextureDimension&&) = default;
                    constexpr TextureDimension& operator=(TextureDimension const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextureDimension& operator=(TextureDimension&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextureDimension(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TextureDimension_Unwrapped : int32_t {
__Unknown = -1,
__None = 0,
__Any = 1,
__Tex2D = 2,
__Tex3D = 3,
__Cube = 4,
__Tex2DArray = 5,
__CubeArray = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextureDimension_Unwrapped () const noexcept {
return std::bit_cast<__TextureDimension_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static UnityEngine::Rendering::TextureDimension const Unknown;

/// @brief Field None offset 0
static UnityEngine::Rendering::TextureDimension const None;

/// @brief Field Any offset 0
static UnityEngine::Rendering::TextureDimension const Any;

/// @brief Field Tex2D offset 0
static UnityEngine::Rendering::TextureDimension const Tex2D;

/// @brief Field Tex3D offset 0
static UnityEngine::Rendering::TextureDimension const Tex3D;

/// @brief Field Cube offset 0
static UnityEngine::Rendering::TextureDimension const Cube;

/// @brief Field Tex2DArray offset 0
static UnityEngine::Rendering::TextureDimension const Tex2DArray;

/// @brief Field CubeArray offset 0
static UnityEngine::Rendering::TextureDimension const CubeArray;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::TextureDimension, "UnityEngine.Rendering", "TextureDimension");
