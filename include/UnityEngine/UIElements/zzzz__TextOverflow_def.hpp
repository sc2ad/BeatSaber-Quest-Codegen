#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
struct TextOverflow;
}
// Type: UnityEngine.UIElements::TextOverflow
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6980))
// CS Name: UnityEngine.UIElements.TextOverflow
struct CORDL_TYPE TextOverflow : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextOverflow(int32_t value__) noexcept;


                    constexpr TextOverflow(TextOverflow const&) = default;
                    constexpr TextOverflow(TextOverflow&&) = default;
                    constexpr TextOverflow& operator=(TextOverflow const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextOverflow& operator=(TextOverflow&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextOverflow(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TextOverflow_Unwrapped : int32_t {
__Clip = 0,
__Ellipsis = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextOverflow_Unwrapped () const noexcept {
return std::bit_cast<__TextOverflow_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Clip offset 0
static ::UnityEngine::UIElements::TextOverflow const Clip;

/// @brief Field Ellipsis offset 0
static ::UnityEngine::UIElements::TextOverflow const Ellipsis;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextOverflow, "UnityEngine.UIElements", "TextOverflow");
