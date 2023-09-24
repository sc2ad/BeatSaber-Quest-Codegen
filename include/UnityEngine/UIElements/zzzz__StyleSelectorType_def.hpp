#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleSelectorType;
}
// Type: UnityEngine.UIElements::StyleSelectorType
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7381))
// CS Name: UnityEngine.UIElements.StyleSelectorType
struct CORDL_TYPE StyleSelectorType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StyleSelectorType(int32_t value__) noexcept;


                    constexpr StyleSelectorType(StyleSelectorType const&) = default;
                    constexpr StyleSelectorType(StyleSelectorType&&) = default;
                    constexpr StyleSelectorType& operator=(StyleSelectorType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StyleSelectorType& operator=(StyleSelectorType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StyleSelectorType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __StyleSelectorType_Unwrapped : int32_t {
__Unknown = 0,
__Wildcard = 1,
__Type = 2,
__Class = 3,
__PseudoClass = 4,
__RecursivePseudoClass = 5,
__ID = 6,
__Predicate = 7,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StyleSelectorType_Unwrapped () const noexcept {
return std::bit_cast<__StyleSelectorType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static UnityEngine::UIElements::StyleSelectorType const Unknown;

/// @brief Field Wildcard offset 0
static UnityEngine::UIElements::StyleSelectorType const Wildcard;

/// @brief Field Type offset 0
static UnityEngine::UIElements::StyleSelectorType const Type;

/// @brief Field Class offset 0
static UnityEngine::UIElements::StyleSelectorType const Class;

/// @brief Field PseudoClass offset 0
static UnityEngine::UIElements::StyleSelectorType const PseudoClass;

/// @brief Field RecursivePseudoClass offset 0
static UnityEngine::UIElements::StyleSelectorType const RecursivePseudoClass;

/// @brief Field ID offset 0
static UnityEngine::UIElements::StyleSelectorType const ID;

/// @brief Field Predicate offset 0
static UnityEngine::UIElements::StyleSelectorType const Predicate;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleSelectorType, "UnityEngine.UIElements", "StyleSelectorType");
