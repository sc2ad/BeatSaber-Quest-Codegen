#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct HandleAxis;
}
// Type: UnityEngine.ProBuilder::HandleAxis
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12101))
// CS Name: UnityEngine.ProBuilder.HandleAxis
struct CORDL_TYPE HandleAxis : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HandleAxis(int32_t value__) noexcept;


                    constexpr HandleAxis(HandleAxis const&) = default;
                    constexpr HandleAxis(HandleAxis&&) = default;
                    constexpr HandleAxis& operator=(HandleAxis const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HandleAxis& operator=(HandleAxis&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HandleAxis(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HandleAxis_Unwrapped : int32_t {
__X = 1,
__Y = 2,
__Z = 4,
__Free = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HandleAxis_Unwrapped () const noexcept {
return std::bit_cast<__HandleAxis_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field X offset 0
static UnityEngine::ProBuilder::HandleAxis const X;

/// @brief Field Y offset 0
static UnityEngine::ProBuilder::HandleAxis const Y;

/// @brief Field Z offset 0
static UnityEngine::ProBuilder::HandleAxis const Z;

/// @brief Field Free offset 0
static UnityEngine::ProBuilder::HandleAxis const Free;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::HandleAxis, "UnityEngine.ProBuilder", "HandleAxis");
