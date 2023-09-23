#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct TextElementType;
}
// Type: UnityEngine.TextCore.Text::TextElementType
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13518))
// CS Name: UnityEngine.TextCore.Text.TextElementType
struct CORDL_TYPE TextElementType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr TextElementType(uint8_t value__) noexcept;


                    constexpr TextElementType(TextElementType const&) = default;
                    constexpr TextElementType(TextElementType&&) = default;
                    constexpr TextElementType& operator=(TextElementType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextElementType& operator=(TextElementType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextElementType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TextElementType_Unwrapped : uint8_t {
__Character = 1u,
__Sprite = 2u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextElementType_Unwrapped () const noexcept {
return std::bit_cast<__TextElementType_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field Character offset 0
static UnityEngine::TextCore::Text::TextElementType const Character;

/// @brief Field Sprite offset 0
static UnityEngine::TextCore::Text::TextElementType const Sprite;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::TextElementType, "UnityEngine.TextCore.Text", "TextElementType");
