#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
struct Visibility;
}
// Type: UnityEngine.UIElements::Visibility
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6982))
// CS Name: UnityEngine.UIElements.Visibility
struct CORDL_TYPE Visibility : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Visibility(int32_t value__) noexcept;


                    constexpr Visibility(Visibility const&) = default;
                    constexpr Visibility(Visibility&&) = default;
                    constexpr Visibility& operator=(Visibility const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Visibility& operator=(Visibility&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Visibility(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Visibility_Unwrapped : int32_t {
__Visible = 0,
__Hidden = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Visibility_Unwrapped () const noexcept {
return std::bit_cast<__Visibility_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Visible offset 0
static ::UnityEngine::UIElements::Visibility const Visible;

/// @brief Field Hidden offset 0
static ::UnityEngine::UIElements::Visibility const Hidden;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Visibility, "UnityEngine.UIElements", "Visibility");
