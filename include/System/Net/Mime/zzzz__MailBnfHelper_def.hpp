#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Net::Mime {
class MailBnfHelper;
}
// Type: System.Net.Mime::MailBnfHelper
namespace System::Net::Mime {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8225))
// CS Name: System.Net.Mime.MailBnfHelper
class CORDL_TYPE MailBnfHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MailBnfHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "MailBnfHelper", modifiers: " const&", def_value: None }]
constexpr MailBnfHelper(MailBnfHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MailBnfHelper", modifiers: "&&", def_value: None }]
constexpr MailBnfHelper(MailBnfHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MailBnfHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MailBnfHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MailBnfHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MailBnfHelper& operator=(MailBnfHelper&& o) noexcept = default;
  constexpr MailBnfHelper& operator=(MailBnfHelper const& o) noexcept = default;
                


// Fields

static ::ArrayW<bool> __declspec(property(get=__get_Atext, put=__set_Atext))  Atext;

static void __set_Atext(::ArrayW<bool> value) ;

static ::ArrayW<bool> __get_Atext() ;

static ::ArrayW<bool> __declspec(property(get=__get_Qtext, put=__set_Qtext))  Qtext;

static void __set_Qtext(::ArrayW<bool> value) ;

static ::ArrayW<bool> __get_Qtext() ;

static ::ArrayW<bool> __declspec(property(get=__get_Dtext, put=__set_Dtext))  Dtext;

static void __set_Dtext(::ArrayW<bool> value) ;

static ::ArrayW<bool> __get_Dtext() ;

static ::ArrayW<bool> __declspec(property(get=__get_Ftext, put=__set_Ftext))  Ftext;

static void __set_Ftext(::ArrayW<bool> value) ;

static ::ArrayW<bool> __get_Ftext() ;

static ::ArrayW<bool> __declspec(property(get=__get_Ttext, put=__set_Ttext))  Ttext;

static void __set_Ttext(::ArrayW<bool> value) ;

static ::ArrayW<bool> __get_Ttext() ;

static ::ArrayW<bool> __declspec(property(get=__get_Ctext, put=__set_Ctext))  Ctext;

static void __set_Ctext(::ArrayW<bool> value) ;

static ::ArrayW<bool> __get_Ctext() ;

static int32_t __declspec(property(get=__get_Ascii7bitMaxValue, put=__set_Ascii7bitMaxValue))  Ascii7bitMaxValue;

static void __set_Ascii7bitMaxValue(int32_t value) ;

static int32_t __get_Ascii7bitMaxValue() ;

static char16_t __declspec(property(get=__get_Quote, put=__set_Quote))  Quote;

static void __set_Quote(char16_t value) ;

static char16_t __get_Quote() ;

static char16_t __declspec(property(get=__get_Space, put=__set_Space))  Space;

static void __set_Space(char16_t value) ;

static char16_t __get_Space() ;

static char16_t __declspec(property(get=__get_Tab, put=__set_Tab))  Tab;

static void __set_Tab(char16_t value) ;

static char16_t __get_Tab() ;

static char16_t __declspec(property(get=__get_CR, put=__set_CR))  CR;

static void __set_CR(char16_t value) ;

static char16_t __get_CR() ;

static char16_t __declspec(property(get=__get_LF, put=__set_LF))  LF;

static void __set_LF(char16_t value) ;

static char16_t __get_LF() ;

static char16_t __declspec(property(get=__get_StartComment, put=__set_StartComment))  StartComment;

static void __set_StartComment(char16_t value) ;

static char16_t __get_StartComment() ;

static char16_t __declspec(property(get=__get_EndComment, put=__set_EndComment))  EndComment;

static void __set_EndComment(char16_t value) ;

static char16_t __get_EndComment() ;

static char16_t __declspec(property(get=__get_Backslash, put=__set_Backslash))  Backslash;

static void __set_Backslash(char16_t value) ;

static char16_t __get_Backslash() ;

static char16_t __declspec(property(get=__get_At, put=__set_At))  At;

static void __set_At(char16_t value) ;

static char16_t __get_At() ;

static char16_t __declspec(property(get=__get_EndAngleBracket, put=__set_EndAngleBracket))  EndAngleBracket;

static void __set_EndAngleBracket(char16_t value) ;

static char16_t __get_EndAngleBracket() ;

static char16_t __declspec(property(get=__get_StartAngleBracket, put=__set_StartAngleBracket))  StartAngleBracket;

static void __set_StartAngleBracket(char16_t value) ;

static char16_t __get_StartAngleBracket() ;

static char16_t __declspec(property(get=__get_StartSquareBracket, put=__set_StartSquareBracket))  StartSquareBracket;

static void __set_StartSquareBracket(char16_t value) ;

static char16_t __get_StartSquareBracket() ;

static char16_t __declspec(property(get=__get_EndSquareBracket, put=__set_EndSquareBracket))  EndSquareBracket;

static void __set_EndSquareBracket(char16_t value) ;

static char16_t __get_EndSquareBracket() ;

static char16_t __declspec(property(get=__get_Comma, put=__set_Comma))  Comma;

static void __set_Comma(char16_t value) ;

static char16_t __get_Comma() ;

static char16_t __declspec(property(get=__get_Dot, put=__set_Dot))  Dot;

static void __set_Dot(char16_t value) ;

static char16_t __get_Dot() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_s_colonSeparator, put=__set_s_colonSeparator))  s_colonSeparator;

static void __set_s_colonSeparator(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_s_colonSeparator() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_s_months, put=__set_s_months))  s_months;

static void __set_s_months(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_s_months() ;


// Methods

/// @brief Method CreateCharactersAllowedInAtoms addr 0x276e1fc size 0x1dc virtual false final false
static ::ArrayW<bool> CreateCharactersAllowedInAtoms() ;

/// @brief Method CreateCharactersAllowedInQuotedStrings addr 0x276e3d8 size 0x114 virtual false final false
static ::ArrayW<bool> CreateCharactersAllowedInQuotedStrings() ;

/// @brief Method CreateCharactersAllowedInDomainLiterals addr 0x276e4ec size 0x114 virtual false final false
static ::ArrayW<bool> CreateCharactersAllowedInDomainLiterals() ;

/// @brief Method CreateCharactersAllowedInHeaderNames addr 0x276e600 size 0xa8 virtual false final false
static ::ArrayW<bool> CreateCharactersAllowedInHeaderNames() ;

/// @brief Method CreateCharactersAllowedInTokens addr 0x276e6a8 size 0xf0 virtual false final false
static ::ArrayW<bool> CreateCharactersAllowedInTokens() ;

/// @brief Method CreateCharactersAllowedInComments addr 0x276e798 size 0x13c virtual false final false
static ::ArrayW<bool> CreateCharactersAllowedInComments() ;

/// @brief Method IsAllowedWhiteSpace addr 0x276e8d4 size 0xcc virtual false final false
static bool IsAllowedWhiteSpace(char16_t c) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Mime
NEED_NO_BOX(System::Net::Mime::MailBnfHelper);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Mime::MailBnfHelper, "System.Net.Mime", "MailBnfHelper");
