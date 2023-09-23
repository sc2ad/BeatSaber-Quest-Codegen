#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct TextureMapping;
}
// Type: UnityEngine.TextCore.Text::TextureMapping
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13501))
// CS Name: UnityEngine.TextCore.Text.TextureMapping
struct CORDL_TYPE TextureMapping : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextureMapping(int32_t value__) noexcept;


                    constexpr TextureMapping(TextureMapping const&) = default;
                    constexpr TextureMapping(TextureMapping&&) = default;
                    constexpr TextureMapping& operator=(TextureMapping const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextureMapping& operator=(TextureMapping&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextureMapping(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TextureMapping_Unwrapped : int32_t {
__Character = 0,
__Line = 1,
__Paragraph = 2,
__MatchAspect = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextureMapping_Unwrapped () const noexcept {
return std::bit_cast<__TextureMapping_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Character offset 0
static UnityEngine::TextCore::Text::TextureMapping const Character;

/// @brief Field Line offset 0
static UnityEngine::TextCore::Text::TextureMapping const Line;

/// @brief Field Paragraph offset 0
static UnityEngine::TextCore::Text::TextureMapping const Paragraph;

/// @brief Field MatchAspect offset 0
static UnityEngine::TextCore::Text::TextureMapping const MatchAspect;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::TextureMapping, "UnityEngine.TextCore.Text", "TextureMapping");
