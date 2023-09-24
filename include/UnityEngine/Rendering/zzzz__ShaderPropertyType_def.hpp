#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShaderPropertyType;
}
// Type: UnityEngine.Rendering::ShaderPropertyType
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10307))
// CS Name: UnityEngine.Rendering.ShaderPropertyType
struct CORDL_TYPE ShaderPropertyType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ShaderPropertyType(int32_t value__) noexcept;


                    constexpr ShaderPropertyType(ShaderPropertyType const&) = default;
                    constexpr ShaderPropertyType(ShaderPropertyType&&) = default;
                    constexpr ShaderPropertyType& operator=(ShaderPropertyType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ShaderPropertyType& operator=(ShaderPropertyType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ShaderPropertyType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ShaderPropertyType_Unwrapped : int32_t {
__Color = 0,
__Vector = 1,
__Float = 2,
__Range = 3,
__Texture = 4,
__Int = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ShaderPropertyType_Unwrapped () const noexcept {
return std::bit_cast<__ShaderPropertyType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Color offset 0
static UnityEngine::Rendering::ShaderPropertyType const Color;

/// @brief Field Vector offset 0
static UnityEngine::Rendering::ShaderPropertyType const Vector;

/// @brief Field Float offset 0
static UnityEngine::Rendering::ShaderPropertyType const Float;

/// @brief Field Range offset 0
static UnityEngine::Rendering::ShaderPropertyType const Range;

/// @brief Field Texture offset 0
static UnityEngine::Rendering::ShaderPropertyType const Texture;

/// @brief Field Int offset 0
static UnityEngine::Rendering::ShaderPropertyType const Int;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::ShaderPropertyType, "UnityEngine.Rendering", "ShaderPropertyType");
