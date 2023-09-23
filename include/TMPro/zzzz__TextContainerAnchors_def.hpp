#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace TMPro {
struct TextContainerAnchors;
}
// Type: TMPro::TextContainerAnchors
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12247))
// CS Name: TMPro.TextContainerAnchors
struct CORDL_TYPE TextContainerAnchors : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextContainerAnchors(int32_t value__) noexcept;


                    constexpr TextContainerAnchors(TextContainerAnchors const&) = default;
                    constexpr TextContainerAnchors(TextContainerAnchors&&) = default;
                    constexpr TextContainerAnchors& operator=(TextContainerAnchors const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextContainerAnchors& operator=(TextContainerAnchors&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextContainerAnchors(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TextContainerAnchors_Unwrapped : int32_t {
__TopLeft = 0,
__Top = 1,
__TopRight = 2,
__Left = 3,
__Middle = 4,
__Right = 5,
__BottomLeft = 6,
__Bottom = 7,
__BottomRight = 8,
__Custom = 9,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextContainerAnchors_Unwrapped () const noexcept {
return std::bit_cast<__TextContainerAnchors_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field TopLeft offset 0
static TMPro::TextContainerAnchors const TopLeft;

/// @brief Field Top offset 0
static TMPro::TextContainerAnchors const Top;

/// @brief Field TopRight offset 0
static TMPro::TextContainerAnchors const TopRight;

/// @brief Field Left offset 0
static TMPro::TextContainerAnchors const Left;

/// @brief Field Middle offset 0
static TMPro::TextContainerAnchors const Middle;

/// @brief Field Right offset 0
static TMPro::TextContainerAnchors const Right;

/// @brief Field BottomLeft offset 0
static TMPro::TextContainerAnchors const BottomLeft;

/// @brief Field Bottom offset 0
static TMPro::TextContainerAnchors const Bottom;

/// @brief Field BottomRight offset 0
static TMPro::TextContainerAnchors const BottomRight;

/// @brief Field Custom offset 0
static TMPro::TextContainerAnchors const Custom;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(TMPro::TextContainerAnchors, "TMPro", "TextContainerAnchors");
