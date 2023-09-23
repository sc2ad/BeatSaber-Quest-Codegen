#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleValueType;
}
// Type: UnityEngine.UIElements::StyleValueType
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7362))
// CS Name: UnityEngine.UIElements.StyleValueType
struct CORDL_TYPE StyleValueType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StyleValueType(int32_t value__) noexcept;


                    constexpr StyleValueType(StyleValueType const&) = default;
                    constexpr StyleValueType(StyleValueType&&) = default;
                    constexpr StyleValueType& operator=(StyleValueType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StyleValueType& operator=(StyleValueType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StyleValueType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __StyleValueType_Unwrapped : int32_t {
__Invalid = 0,
__Keyword = 1,
__Float = 2,
__Dimension = 3,
__Color = 4,
__ResourcePath = 5,
__AssetReference = 6,
__Enum = 7,
__Variable = 8,
__String = 9,
__Function = 10,
__CommaSeparator = 11,
__ScalableImage = 12,
__MissingAssetReference = 13,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StyleValueType_Unwrapped () const noexcept {
return std::bit_cast<__StyleValueType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Invalid offset 0
static UnityEngine::UIElements::StyleValueType const Invalid;

/// @brief Field Keyword offset 0
static UnityEngine::UIElements::StyleValueType const Keyword;

/// @brief Field Float offset 0
static UnityEngine::UIElements::StyleValueType const Float;

/// @brief Field Dimension offset 0
static UnityEngine::UIElements::StyleValueType const Dimension;

/// @brief Field Color offset 0
static UnityEngine::UIElements::StyleValueType const Color;

/// @brief Field ResourcePath offset 0
static UnityEngine::UIElements::StyleValueType const ResourcePath;

/// @brief Field AssetReference offset 0
static UnityEngine::UIElements::StyleValueType const AssetReference;

/// @brief Field Enum offset 0
static UnityEngine::UIElements::StyleValueType const Enum;

/// @brief Field Variable offset 0
static UnityEngine::UIElements::StyleValueType const Variable;

/// @brief Field String offset 0
static UnityEngine::UIElements::StyleValueType const String;

/// @brief Field Function offset 0
static UnityEngine::UIElements::StyleValueType const Function;

/// @brief Field CommaSeparator offset 0
static UnityEngine::UIElements::StyleValueType const CommaSeparator;

/// @brief Field ScalableImage offset 0
static UnityEngine::UIElements::StyleValueType const ScalableImage;

/// @brief Field MissingAssetReference offset 0
static UnityEngine::UIElements::StyleValueType const MissingAssetReference;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleValueType, "UnityEngine.UIElements", "StyleValueType");
