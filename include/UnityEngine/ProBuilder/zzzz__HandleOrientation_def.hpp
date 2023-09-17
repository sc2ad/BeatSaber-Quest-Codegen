#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct HandleOrientation;
}
// Type: UnityEngine.ProBuilder::HandleOrientation
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12069))
// CS Name: UnityEngine.ProBuilder.HandleOrientation
struct CORDL_TYPE HandleOrientation : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HandleOrientation(int32_t value__) noexcept;


                    constexpr HandleOrientation(HandleOrientation const&) = default;
                    constexpr HandleOrientation(HandleOrientation&&) = default;
                    constexpr HandleOrientation& operator=(HandleOrientation const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HandleOrientation& operator=(HandleOrientation&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HandleOrientation(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HandleOrientation_Unwrapped : int32_t {
__World = 0,
__ActiveObject = 1,
__ActiveElement = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HandleOrientation_Unwrapped () const noexcept {
return std::bit_cast<__HandleOrientation_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field World offset 0
static ::UnityEngine::ProBuilder::HandleOrientation const World;

/// @brief Field ActiveObject offset 0
static ::UnityEngine::ProBuilder::HandleOrientation const ActiveObject;

/// @brief Field ActiveElement offset 0
static ::UnityEngine::ProBuilder::HandleOrientation const ActiveElement;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::HandleOrientation, "UnityEngine.ProBuilder", "HandleOrientation");