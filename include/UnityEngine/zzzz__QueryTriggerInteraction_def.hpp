#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct QueryTriggerInteraction;
}
// Type: UnityEngine::QueryTriggerInteraction
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15479))
// CS Name: UnityEngine.QueryTriggerInteraction
struct CORDL_TYPE QueryTriggerInteraction : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr QueryTriggerInteraction(int32_t value__) noexcept;


                    constexpr QueryTriggerInteraction(QueryTriggerInteraction const&) = default;
                    constexpr QueryTriggerInteraction(QueryTriggerInteraction&&) = default;
                    constexpr QueryTriggerInteraction& operator=(QueryTriggerInteraction const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr QueryTriggerInteraction& operator=(QueryTriggerInteraction&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit QueryTriggerInteraction(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __QueryTriggerInteraction_Unwrapped : int32_t {
__UseGlobal = 0,
__Ignore = 1,
__Collide = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __QueryTriggerInteraction_Unwrapped () const noexcept {
return std::bit_cast<__QueryTriggerInteraction_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field UseGlobal offset 0
static UnityEngine::QueryTriggerInteraction const UseGlobal;

/// @brief Field Ignore offset 0
static UnityEngine::QueryTriggerInteraction const Ignore;

/// @brief Field Collide offset 0
static UnityEngine::QueryTriggerInteraction const Collide;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::QueryTriggerInteraction, "UnityEngine", "QueryTriggerInteraction");
