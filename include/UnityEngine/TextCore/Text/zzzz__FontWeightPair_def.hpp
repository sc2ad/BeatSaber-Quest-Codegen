#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct FontWeightPair;
}
// Type: UnityEngine.TextCore.Text::FontWeightPair
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13491))
// CS Name: UnityEngine.TextCore.Text.FontWeightPair
struct CORDL_TYPE FontWeightPair : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "regularTypeface", ty: "UnityEngine::TextCore::Text::FontAsset", modifiers: "", def_value: None }, CppParam { name: "italicTypeface", ty: "UnityEngine::TextCore::Text::FontAsset", modifiers: "", def_value: None }]
constexpr FontWeightPair(UnityEngine::TextCore::Text::FontAsset regularTypeface, UnityEngine::TextCore::Text::FontAsset italicTypeface) noexcept;


                    constexpr FontWeightPair(FontWeightPair const&) = default;
                    constexpr FontWeightPair(FontWeightPair&&) = default;
                    constexpr FontWeightPair& operator=(FontWeightPair const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FontWeightPair& operator=(FontWeightPair&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FontWeightPair(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::TextCore::Text::FontAsset __declspec(property(get=__get_regularTypeface, put=__set_regularTypeface))  regularTypeface;

constexpr void __set_regularTypeface(UnityEngine::TextCore::Text::FontAsset value) ;

constexpr UnityEngine::TextCore::Text::FontAsset __get_regularTypeface() const;

 UnityEngine::TextCore::Text::FontAsset __declspec(property(get=__get_italicTypeface, put=__set_italicTypeface))  italicTypeface;

constexpr void __set_italicTypeface(UnityEngine::TextCore::Text::FontAsset value) ;

constexpr UnityEngine::TextCore::Text::FontAsset __get_italicTypeface() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::FontWeightPair, "UnityEngine.TextCore.Text", "FontWeightPair");
