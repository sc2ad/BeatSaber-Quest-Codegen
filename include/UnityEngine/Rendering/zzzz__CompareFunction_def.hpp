#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Rendering {
struct CompareFunction;
}
// Type: UnityEngine.Rendering::CompareFunction
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10270))
// CS Name: UnityEngine.Rendering.CompareFunction
struct CORDL_TYPE CompareFunction : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CompareFunction(int32_t value__) noexcept;


                    constexpr CompareFunction(CompareFunction const&) = default;
                    constexpr CompareFunction(CompareFunction&&) = default;
                    constexpr CompareFunction& operator=(CompareFunction const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CompareFunction& operator=(CompareFunction&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CompareFunction(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CompareFunction_Unwrapped : int32_t {
__Disabled = 0,
__Never = 1,
__Less = 2,
__Equal = 3,
__LessEqual = 4,
__Greater = 5,
__NotEqual = 6,
__GreaterEqual = 7,
__Always = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CompareFunction_Unwrapped () const noexcept {
return std::bit_cast<__CompareFunction_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Disabled offset 0
static UnityEngine::Rendering::CompareFunction const Disabled;

/// @brief Field Never offset 0
static UnityEngine::Rendering::CompareFunction const Never;

/// @brief Field Less offset 0
static UnityEngine::Rendering::CompareFunction const Less;

/// @brief Field Equal offset 0
static UnityEngine::Rendering::CompareFunction const Equal;

/// @brief Field LessEqual offset 0
static UnityEngine::Rendering::CompareFunction const LessEqual;

/// @brief Field Greater offset 0
static UnityEngine::Rendering::CompareFunction const Greater;

/// @brief Field NotEqual offset 0
static UnityEngine::Rendering::CompareFunction const NotEqual;

/// @brief Field GreaterEqual offset 0
static UnityEngine::Rendering::CompareFunction const GreaterEqual;

/// @brief Field Always offset 0
static UnityEngine::Rendering::CompareFunction const Always;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::CompareFunction, "UnityEngine.Rendering", "CompareFunction");
