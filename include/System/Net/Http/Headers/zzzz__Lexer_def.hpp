#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System::Net::Http::Headers {
struct Token;
}
namespace System {
struct TimeSpan;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
struct DateTimeOffset;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class Lexer;
}
// Type: System.Net.Http.Headers::Lexer
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14843))
// CS Name: System.Net.Http.Headers.Lexer
class CORDL_TYPE Lexer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Lexer() = default;

// Ctor Parameters [CppParam { name: "", ty: "Lexer", modifiers: " const&", def_value: None }]
constexpr Lexer(Lexer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Lexer", modifiers: "&&", def_value: None }]
constexpr Lexer(Lexer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Lexer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Lexer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Lexer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Lexer& operator=(Lexer&& o) noexcept = default;
  constexpr Lexer& operator=(Lexer const& o) noexcept = default;
                


// Fields

static ::ArrayW<bool> __declspec(property(get=__get_token_chars, put=__set_token_chars))  token_chars;

static void __set_token_chars(::ArrayW<bool> value) ;

static ::ArrayW<bool> __get_token_chars() ;

static int32_t __declspec(property(get=__get_last_token_char, put=__set_last_token_char))  last_token_char;

static void __set_last_token_char(int32_t value) ;

static int32_t __get_last_token_char() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_dt_formats, put=__set_dt_formats))  dt_formats;

static void __set_dt_formats(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_dt_formats() ;

 ::StringW __declspec(property(get=__get_s, put=__set_s))  s;

constexpr void __set_s(::StringW value) ;

constexpr ::StringW __get_s() const;

 int32_t __declspec(property(get=__get_pos, put=__set_pos))  pos;

constexpr void __set_pos(int32_t value) ;

constexpr int32_t __get_pos() const;


// Properties

 int32_t __declspec(property(get=get_Position, put=set_Position))  Position;


// Methods

// Ctor Parameters [CppParam { name: "stream", ty: "::StringW", modifiers: "", def_value: None }]
explicit Lexer(::StringW stream) ;

/// @brief Method .ctor addr 0x26a3204 size 0x28 virtual false final false
 void _ctor(::StringW stream) ;

/// @brief Method get_Position addr 0x26aaf14 size 0x8 virtual false final false
 int32_t get_Position() ;

/// @brief Method set_Position addr 0x26aaf1c size 0x8 virtual false final false
 void set_Position(int32_t value) ;

/// @brief Method GetStringValue addr 0x26a3704 size 0x24 virtual false final false
 ::StringW GetStringValue(::System::Net::Http::Headers::Token token) ;

/// @brief Method GetStringValue addr 0x26aaf24 size 0x24 virtual false final false
 ::StringW GetStringValue(::System::Net::Http::Headers::Token start, ::System::Net::Http::Headers::Token end) ;

/// @brief Method GetQuotedStringValue addr 0x26a4fd4 size 0x2c virtual false final false
 ::StringW GetQuotedStringValue(::System::Net::Http::Headers::Token start) ;

/// @brief Method GetRemainingStringValue addr 0x26a3728 size 0x34 virtual false final false
 ::StringW GetRemainingStringValue(int32_t position) ;

/// @brief Method IsStarStringValue addr 0x26a6c44 size 0x44 virtual false final false
 bool IsStarStringValue(::System::Net::Http::Headers::Token token) ;

/// @brief Method TryGetNumericValue addr 0x26aaf48 size 0xa0 virtual false final false
 bool TryGetNumericValue(::System::Net::Http::Headers::Token token, ByRef<int32_t> value) ;

/// @brief Method TryGetNumericValue addr 0x26a6c88 size 0xa0 virtual false final false
 bool TryGetNumericValue(::System::Net::Http::Headers::Token token, ByRef<int64_t> value) ;

/// @brief Method TryGetTimeSpanValue addr 0x26a4f0c size 0xc8 virtual false final false
 ::System::Nullable_1<::System::TimeSpan> TryGetTimeSpanValue(::System::Net::Http::Headers::Token token) ;

/// @brief Method TryGetDateValue addr 0x26aafe8 size 0xdc virtual false final false
 bool TryGetDateValue(::System::Net::Http::Headers::Token token, ByRef<::System::DateTimeOffset> value) ;

/// @brief Method TryGetDateValue addr 0x26ab0c4 size 0xdc virtual false final false
static bool TryGetDateValue(::StringW text, ByRef<::System::DateTimeOffset> value) ;

/// @brief Method TryGetDoubleValue addr 0x26ab1a0 size 0xa0 virtual false final false
 bool TryGetDoubleValue(::System::Net::Http::Headers::Token token, ByRef<double_t> value) ;

/// @brief Method IsValidToken addr 0x26ab240 size 0xb0 virtual false final false
static bool IsValidToken(::StringW input) ;

/// @brief Method IsValidCharacter addr 0x26ab2f0 size 0xb0 virtual false final false
static bool IsValidCharacter(char16_t input) ;

/// @brief Method EatChar addr 0x26a73d8 size 0x10 virtual false final false
 void EatChar() ;

/// @brief Method PeekChar addr 0x26a7398 size 0x40 virtual false final false
 int32_t PeekChar() ;

/// @brief Method ScanCommentOptional addr 0x26ab3a0 size 0x150 virtual false final false
 bool ScanCommentOptional(ByRef<::StringW> value, ByRef<::System::Net::Http::Headers::Token> readToken) ;

/// @brief Method Scan addr 0x26a3410 size 0x2f4 virtual false final false
 ::System::Net::Http::Headers::Token Scan(bool recognizeDash) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
} // end anonymous namespace
NEED_NO_BOX(::System::Net::Http::Headers::Lexer);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::Lexer, "System.Net.Http.Headers", "Lexer");
