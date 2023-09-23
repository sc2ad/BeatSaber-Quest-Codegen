#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct StyleEnumType;
}
// Type: UnityEngine.UIElements.StyleSheets::StyleEnumType
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7586))
// CS Name: UnityEngine.UIElements.StyleSheets.StyleEnumType
struct CORDL_TYPE StyleEnumType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StyleEnumType(int32_t value__) noexcept;


                    constexpr StyleEnumType(StyleEnumType const&) = default;
                    constexpr StyleEnumType(StyleEnumType&&) = default;
                    constexpr StyleEnumType& operator=(StyleEnumType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StyleEnumType& operator=(StyleEnumType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StyleEnumType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __StyleEnumType_Unwrapped : int32_t {
__Align = 0,
__DisplayStyle = 1,
__EasingMode = 2,
__FlexDirection = 3,
__FontStyle = 4,
__Justify = 5,
__Overflow = 6,
__OverflowClipBox = 7,
__OverflowInternal = 8,
__Position = 9,
__ScaleMode = 10,
__TextAnchor = 11,
__TextOverflow = 12,
__TextOverflowPosition = 13,
__TransformOriginOffset = 14,
__Visibility = 15,
__WhiteSpace = 16,
__Wrap = 17,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StyleEnumType_Unwrapped () const noexcept {
return std::bit_cast<__StyleEnumType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Align offset 0
static UnityEngine::UIElements::StyleSheets::StyleEnumType const Align;

/// @brief Field DisplayStyle offset 0
static UnityEngine::UIElements::StyleSheets::StyleEnumType const DisplayStyle;

/// @brief Field EasingMode offset 0
static UnityEngine::UIElements::StyleSheets::StyleEnumType const EasingMode;

/// @brief Field FlexDirection offset 0
static UnityEngine::UIElements::StyleSheets::StyleEnumType const FlexDirection;

/// @brief Field FontStyle offset 0
static UnityEngine::UIElements::StyleSheets::StyleEnumType const FontStyle;

/// @brief Field Justify offset 0
static UnityEngine::UIElements::StyleSheets::StyleEnumType const Justify;

/// @brief Field Overflow offset 0
static UnityEngine::UIElements::StyleSheets::StyleEnumType const Overflow;

/// @brief Field OverflowClipBox offset 0
static UnityEngine::UIElements::StyleSheets::StyleEnumType const OverflowClipBox;

/// @brief Field OverflowInternal offset 0
static UnityEngine::UIElements::StyleSheets::StyleEnumType const OverflowInternal;

/// @brief Field Position offset 0
static UnityEngine::UIElements::StyleSheets::StyleEnumType const Position;

/// @brief Field ScaleMode offset 0
static UnityEngine::UIElements::StyleSheets::StyleEnumType const ScaleMode;

/// @brief Field TextAnchor offset 0
static UnityEngine::UIElements::StyleSheets::StyleEnumType const TextAnchor;

/// @brief Field TextOverflow offset 0
static UnityEngine::UIElements::StyleSheets::StyleEnumType const TextOverflow;

/// @brief Field TextOverflowPosition offset 0
static UnityEngine::UIElements::StyleSheets::StyleEnumType const TextOverflowPosition;

/// @brief Field TransformOriginOffset offset 0
static UnityEngine::UIElements::StyleSheets::StyleEnumType const TransformOriginOffset;

/// @brief Field Visibility offset 0
static UnityEngine::UIElements::StyleSheets::StyleEnumType const Visibility;

/// @brief Field WhiteSpace offset 0
static UnityEngine::UIElements::StyleSheets::StyleEnumType const WhiteSpace;

/// @brief Field Wrap offset 0
static UnityEngine::UIElements::StyleSheets::StyleEnumType const Wrap;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleSheets::StyleEnumType, "UnityEngine.UIElements.StyleSheets", "StyleEnumType");
