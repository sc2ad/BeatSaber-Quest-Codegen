#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
struct DTSubString;
}
namespace System::Globalization {
class CompareInfo;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System::Globalization {
class DateTimeFormatInfo;
}
namespace System {
struct TokenType;
}
// Forward declare root types
namespace System {
struct __DTString;
}
// Type: System::__DTString
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2392))
// CS Name: System.__DTString
struct CORDL_TYPE __DTString : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Value", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_current", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "m_info", ty: "::System::Globalization::CompareInfo", modifiers: "", def_value: None }, CppParam { name: "m_checkDigitToken", ty: "bool", modifiers: "", def_value: None }]
constexpr __DTString(::System::ReadOnlySpan_1<char16_t> Value, int32_t Index, char16_t m_current, ::System::Globalization::CompareInfo m_info, bool m_checkDigitToken) noexcept;


                    constexpr __DTString(__DTString const&) = default;
                    constexpr __DTString(__DTString&&) = default;
                    constexpr __DTString& operator=(__DTString const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr __DTString& operator=(__DTString&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit __DTString(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::ReadOnlySpan_1<char16_t> __declspec(property(get=__get_Value, put=__set_Value))  Value;

constexpr void __set_Value(::System::ReadOnlySpan_1<char16_t> value) ;

constexpr ::System::ReadOnlySpan_1<char16_t> __get_Value() const;

 int32_t __declspec(property(get=__get_Index, put=__set_Index))  Index;

constexpr void __set_Index(int32_t value) ;

constexpr int32_t __get_Index() const;

 char16_t __declspec(property(get=__get_m_current, put=__set_m_current))  m_current;

constexpr void __set_m_current(char16_t value) ;

constexpr char16_t __get_m_current() const;

 ::System::Globalization::CompareInfo __declspec(property(get=__get_m_info, put=__set_m_info))  m_info;

constexpr void __set_m_info(::System::Globalization::CompareInfo value) ;

constexpr ::System::Globalization::CompareInfo __get_m_info() const;

 bool __declspec(property(get=__get_m_checkDigitToken, put=__set_m_checkDigitToken))  m_checkDigitToken;

constexpr void __set_m_checkDigitToken(bool value) ;

constexpr bool __get_m_checkDigitToken() const;

static ::ArrayW<char16_t> __declspec(property(get=__get_WhiteSpaceChecks, put=__set_WhiteSpaceChecks))  WhiteSpaceChecks;

static void __set_WhiteSpaceChecks(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_WhiteSpaceChecks() ;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 ::System::Globalization::CompareInfo __declspec(property(get=get_CompareInfo))  CompareInfo;


// Methods

/// @brief Method get_Length addr 0x2437018 size 0x3c virtual false final false
 int32_t get_Length() ;

/// @brief Method .ctor addr 0x2437054 size 0x24 virtual false final false
 void _ctor(::System::ReadOnlySpan_1<char16_t> str, ::System::Globalization::DateTimeFormatInfo dtfi, bool checkDigitToken) ;

/// @brief Method .ctor addr 0x2437078 size 0xc4 virtual false final false
 void _ctor(::System::ReadOnlySpan_1<char16_t> str, ::System::Globalization::DateTimeFormatInfo dtfi) ;

/// @brief Method get_CompareInfo addr 0x243713c size 0x8 virtual false final false
 ::System::Globalization::CompareInfo get_CompareInfo() ;

/// @brief Method GetNext addr 0x2437144 size 0x78 virtual false final false
 bool GetNext() ;

/// @brief Method AtEnd addr 0x24371bc size 0x48 virtual false final false
 bool AtEnd() ;

/// @brief Method Advance addr 0x2437204 size 0x78 virtual false final false
 bool Advance(int32_t count) ;

/// @brief Method GetRegularToken addr 0x243727c size 0x2e8 virtual false final false
 void GetRegularToken(ByRef<::System::TokenType> tokenType, ByRef<int32_t> tokenValue, ::System::Globalization::DateTimeFormatInfo dtfi) ;

/// @brief Method GetSeparatorToken addr 0x2437564 size 0xe0 virtual false final false
 ::System::TokenType GetSeparatorToken(::System::Globalization::DateTimeFormatInfo dtfi, ByRef<int32_t> indexBeforeSeparator, ByRef<char16_t> charBeforeSeparator) ;

/// @brief Method MatchSpecifiedWord addr 0x243776c size 0x100 virtual false final false
 bool MatchSpecifiedWord(::StringW target) ;

/// @brief Method MatchSpecifiedWords addr 0x243786c size 0x44c virtual false final false
 bool MatchSpecifiedWords(::StringW target, bool checkWordBoundary, ByRef<int32_t> matchLength) ;

/// @brief Method Match addr 0x2437cb8 size 0x12c virtual false final false
 bool Match(::StringW str) ;

/// @brief Method Match addr 0x2437de4 size 0x9c virtual false final false
 bool Match(char16_t ch) ;

/// @brief Method MatchLongestWords addr 0x2437e80 size 0xb8 virtual false final false
 int32_t MatchLongestWords(::ArrayW<::StringW> words, ByRef<int32_t> maxMatchStrLen) ;

/// @brief Method GetRepeatCount addr 0x2437f38 size 0xa8 virtual false final false
 int32_t GetRepeatCount() ;

/// @brief Method GetNextDigit addr 0x2437fe0 size 0xb8 virtual false final false
 bool GetNextDigit() ;

/// @brief Method GetChar addr 0x2438098 size 0x28 virtual false final false
 char16_t GetChar() ;

/// @brief Method GetDigit addr 0x24380c0 size 0x2c virtual false final false
 int32_t GetDigit() ;

/// @brief Method SkipWhiteSpaces addr 0x24380ec size 0xd4 virtual false final false
 void SkipWhiteSpaces() ;

/// @brief Method SkipWhiteSpaceCurrent addr 0x2437644 size 0x128 virtual false final false
 bool SkipWhiteSpaceCurrent() ;

/// @brief Method TrimTail addr 0x24381c0 size 0x10c virtual false final false
 void TrimTail() ;

/// @brief Method RemoveTrailingInQuoteSpaces addr 0x24382cc size 0x234 virtual false final false
 void RemoveTrailingInQuoteSpaces() ;

/// @brief Method RemoveLeadingInQuoteSpaces addr 0x2438500 size 0x274 virtual false final false
 void RemoveLeadingInQuoteSpaces() ;

/// @brief Method GetSubString addr 0x2438774 size 0x138 virtual false final false
 ::System::DTSubString GetSubString() ;

/// @brief Method ConsumeSubString addr 0x24388ac size 0x6c virtual false final false
 void ConsumeSubString(::System::DTSubString sub) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::__DTString, "System", "__DTString");
