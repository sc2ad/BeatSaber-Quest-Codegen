#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
struct AlternatingRowBackground;
}
// Type: UnityEngine.UIElements::AlternatingRowBackground
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7239))
// CS Name: UnityEngine.UIElements.AlternatingRowBackground
struct CORDL_TYPE AlternatingRowBackground : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AlternatingRowBackground(int32_t value__) noexcept;


                    constexpr AlternatingRowBackground(AlternatingRowBackground const&) = default;
                    constexpr AlternatingRowBackground(AlternatingRowBackground&&) = default;
                    constexpr AlternatingRowBackground& operator=(AlternatingRowBackground const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AlternatingRowBackground& operator=(AlternatingRowBackground&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AlternatingRowBackground(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AlternatingRowBackground_Unwrapped : int32_t {
__None = 0,
__ContentOnly = 1,
__All = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AlternatingRowBackground_Unwrapped () const noexcept {
return std::bit_cast<__AlternatingRowBackground_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::UnityEngine::UIElements::AlternatingRowBackground const None;

/// @brief Field ContentOnly offset 0
static ::UnityEngine::UIElements::AlternatingRowBackground const ContentOnly;

/// @brief Field All offset 0
static ::UnityEngine::UIElements::AlternatingRowBackground const All;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::AlternatingRowBackground, "UnityEngine.UIElements", "AlternatingRowBackground");
