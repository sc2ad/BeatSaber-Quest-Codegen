#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Rendering {
struct StencilOp;
}
// Type: UnityEngine.Rendering::StencilOp
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10272))
// CS Name: UnityEngine.Rendering.StencilOp
struct CORDL_TYPE StencilOp : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StencilOp(int32_t value__) noexcept;


                    constexpr StencilOp(StencilOp const&) = default;
                    constexpr StencilOp(StencilOp&&) = default;
                    constexpr StencilOp& operator=(StencilOp const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StencilOp& operator=(StencilOp&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StencilOp(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __StencilOp_Unwrapped : int32_t {
__Keep = 0,
__Zero = 1,
__Replace = 2,
__IncrementSaturate = 3,
__DecrementSaturate = 4,
__Invert = 5,
__IncrementWrap = 6,
__DecrementWrap = 7,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StencilOp_Unwrapped () const noexcept {
return std::bit_cast<__StencilOp_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Keep offset 0
static UnityEngine::Rendering::StencilOp const Keep;

/// @brief Field Zero offset 0
static UnityEngine::Rendering::StencilOp const Zero;

/// @brief Field Replace offset 0
static UnityEngine::Rendering::StencilOp const Replace;

/// @brief Field IncrementSaturate offset 0
static UnityEngine::Rendering::StencilOp const IncrementSaturate;

/// @brief Field DecrementSaturate offset 0
static UnityEngine::Rendering::StencilOp const DecrementSaturate;

/// @brief Field Invert offset 0
static UnityEngine::Rendering::StencilOp const Invert;

/// @brief Field IncrementWrap offset 0
static UnityEngine::Rendering::StencilOp const IncrementWrap;

/// @brief Field DecrementWrap offset 0
static UnityEngine::Rendering::StencilOp const DecrementWrap;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::StencilOp, "UnityEngine.Rendering", "StencilOp");
