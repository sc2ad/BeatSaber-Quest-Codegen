#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleValueKeyword;
}
// Type: UnityEngine.UIElements::StyleValueKeyword
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7379))
// CS Name: UnityEngine.UIElements.StyleValueKeyword
struct CORDL_TYPE StyleValueKeyword : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StyleValueKeyword(int32_t value__) noexcept;


                    constexpr StyleValueKeyword(StyleValueKeyword const&) = default;
                    constexpr StyleValueKeyword(StyleValueKeyword&&) = default;
                    constexpr StyleValueKeyword& operator=(StyleValueKeyword const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StyleValueKeyword& operator=(StyleValueKeyword&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StyleValueKeyword(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __StyleValueKeyword_Unwrapped : int32_t {
__Inherit = 0,
__Initial = 1,
__Auto = 2,
__Unset = 3,
__True = 4,
__False = 5,
__None = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StyleValueKeyword_Unwrapped () const noexcept {
return std::bit_cast<__StyleValueKeyword_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Inherit offset 0
static ::UnityEngine::UIElements::StyleValueKeyword const Inherit;

/// @brief Field Initial offset 0
static ::UnityEngine::UIElements::StyleValueKeyword const Initial;

/// @brief Field Auto offset 0
static ::UnityEngine::UIElements::StyleValueKeyword const Auto;

/// @brief Field Unset offset 0
static ::UnityEngine::UIElements::StyleValueKeyword const Unset;

/// @brief Field True offset 0
static ::UnityEngine::UIElements::StyleValueKeyword const True;

/// @brief Field False offset 0
static ::UnityEngine::UIElements::StyleValueKeyword const False;

/// @brief Field None offset 0
static ::UnityEngine::UIElements::StyleValueKeyword const None;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleValueKeyword, "UnityEngine.UIElements", "StyleValueKeyword");
