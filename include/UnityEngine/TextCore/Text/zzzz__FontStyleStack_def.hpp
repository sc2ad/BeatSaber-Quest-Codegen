#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::TextCore::Text {
struct FontStyles;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct FontStyleStack;
}
// Type: UnityEngine.TextCore.Text::FontStyleStack
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13539))
// CS Name: UnityEngine.TextCore.Text.FontStyleStack
struct CORDL_TYPE FontStyleStack : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "bold", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "italic", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "underline", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "strikethrough", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "highlight", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "superscript", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "subscript", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "uppercase", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "lowercase", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "smallcaps", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr FontStyleStack(uint8_t bold, uint8_t italic, uint8_t underline, uint8_t strikethrough, uint8_t highlight, uint8_t superscript, uint8_t subscript, uint8_t uppercase, uint8_t lowercase, uint8_t smallcaps) noexcept;


                    constexpr FontStyleStack(FontStyleStack const&) = default;
                    constexpr FontStyleStack(FontStyleStack&&) = default;
                    constexpr FontStyleStack& operator=(FontStyleStack const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FontStyleStack& operator=(FontStyleStack&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xa};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FontStyleStack(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint8_t __declspec(property(get=__get_bold, put=__set_bold))  bold;

constexpr void __set_bold(uint8_t value) ;

constexpr uint8_t __get_bold() const;

 uint8_t __declspec(property(get=__get_italic, put=__set_italic))  italic;

constexpr void __set_italic(uint8_t value) ;

constexpr uint8_t __get_italic() const;

 uint8_t __declspec(property(get=__get_underline, put=__set_underline))  underline;

constexpr void __set_underline(uint8_t value) ;

constexpr uint8_t __get_underline() const;

 uint8_t __declspec(property(get=__get_strikethrough, put=__set_strikethrough))  strikethrough;

constexpr void __set_strikethrough(uint8_t value) ;

constexpr uint8_t __get_strikethrough() const;

 uint8_t __declspec(property(get=__get_highlight, put=__set_highlight))  highlight;

constexpr void __set_highlight(uint8_t value) ;

constexpr uint8_t __get_highlight() const;

 uint8_t __declspec(property(get=__get_superscript, put=__set_superscript))  superscript;

constexpr void __set_superscript(uint8_t value) ;

constexpr uint8_t __get_superscript() const;

 uint8_t __declspec(property(get=__get_subscript, put=__set_subscript))  subscript;

constexpr void __set_subscript(uint8_t value) ;

constexpr uint8_t __get_subscript() const;

 uint8_t __declspec(property(get=__get_uppercase, put=__set_uppercase))  uppercase;

constexpr void __set_uppercase(uint8_t value) ;

constexpr uint8_t __get_uppercase() const;

 uint8_t __declspec(property(get=__get_lowercase, put=__set_lowercase))  lowercase;

constexpr void __set_lowercase(uint8_t value) ;

constexpr uint8_t __get_lowercase() const;

 uint8_t __declspec(property(get=__get_smallcaps, put=__set_smallcaps))  smallcaps;

constexpr void __set_smallcaps(uint8_t value) ;

constexpr uint8_t __get_smallcaps() const;


// Methods

/// @brief Method Clear addr 0x2bd2660 size 0xc virtual false final false
 void Clear() ;

/// @brief Method Add addr 0x2bd266c size 0xfc virtual false final false
 uint8_t Add(::UnityEngine::TextCore::Text::FontStyles style) ;

/// @brief Method Remove addr 0x2bd2768 size 0x120 virtual false final false
 uint8_t Remove(::UnityEngine::TextCore::Text::FontStyles style) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::FontStyleStack, "UnityEngine.TextCore.Text", "FontStyleStack");
