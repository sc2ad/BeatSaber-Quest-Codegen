#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Globalization {
class CultureInfo;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexBoyerMoore;
}
// Type: System.Text.RegularExpressions::RegexBoyerMoore
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7765))
// CS Name: System.Text.RegularExpressions.RegexBoyerMoore
class CORDL_TYPE RegexBoyerMoore : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~RegexBoyerMoore() = default;

// Ctor Parameters [CppParam { name: "", ty: "RegexBoyerMoore", modifiers: " const&", def_value: None }]
constexpr RegexBoyerMoore(RegexBoyerMoore const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RegexBoyerMoore", modifiers: "&&", def_value: None }]
constexpr RegexBoyerMoore(RegexBoyerMoore&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RegexBoyerMoore(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RegexBoyerMoore& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RegexBoyerMoore& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RegexBoyerMoore& operator=(RegexBoyerMoore&& o) noexcept = default;
  constexpr RegexBoyerMoore& operator=(RegexBoyerMoore const& o) noexcept = default;
                


// Fields

 ::ArrayW<int32_t> __declspec(property(get=__get_Positive, put=__set_Positive))  Positive;

constexpr void __set_Positive(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_Positive() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_NegativeASCII, put=__set_NegativeASCII))  NegativeASCII;

constexpr void __set_NegativeASCII(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_NegativeASCII() const;

 ::ArrayW<::ArrayW<int32_t>> __declspec(property(get=__get_NegativeUnicode, put=__set_NegativeUnicode))  NegativeUnicode;

constexpr void __set_NegativeUnicode(::ArrayW<::ArrayW<int32_t>> value) ;

constexpr ::ArrayW<::ArrayW<int32_t>> __get_NegativeUnicode() const;

 ::StringW __declspec(property(get=__get_Pattern, put=__set_Pattern))  Pattern;

constexpr void __set_Pattern(::StringW value) ;

constexpr ::StringW __get_Pattern() const;

 int32_t __declspec(property(get=__get_LowASCII, put=__set_LowASCII))  LowASCII;

constexpr void __set_LowASCII(int32_t value) ;

constexpr int32_t __get_LowASCII() const;

 int32_t __declspec(property(get=__get_HighASCII, put=__set_HighASCII))  HighASCII;

constexpr void __set_HighASCII(int32_t value) ;

constexpr int32_t __get_HighASCII() const;

 bool __declspec(property(get=__get_RightToLeft, put=__set_RightToLeft))  RightToLeft;

constexpr void __set_RightToLeft(bool value) ;

constexpr bool __get_RightToLeft() const;

 bool __declspec(property(get=__get_CaseInsensitive, put=__set_CaseInsensitive))  CaseInsensitive;

constexpr void __set_CaseInsensitive(bool value) ;

constexpr bool __get_CaseInsensitive() const;

 ::System::Globalization::CultureInfo __declspec(property(get=__get__culture, put=__set__culture))  _culture;

constexpr void __set__culture(::System::Globalization::CultureInfo value) ;

constexpr ::System::Globalization::CultureInfo __get__culture() const;


// Methods

// Ctor Parameters [CppParam { name: "pattern", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "caseInsensitive", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "rightToLeft", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "culture", ty: "::System::Globalization::CultureInfo", modifiers: "", def_value: None }]
explicit RegexBoyerMoore(::StringW pattern, bool caseInsensitive, bool rightToLeft, ::System::Globalization::CultureInfo culture) ;

/// @brief Method .ctor addr 0x27c1ba8 size 0x4b4 virtual false final false
 void _ctor(::StringW pattern, bool caseInsensitive, bool rightToLeft, ::System::Globalization::CultureInfo culture) ;

/// @brief Method MatchPattern addr 0x27c205c size 0x124 virtual false final false
 bool MatchPattern(::StringW text, int32_t index) ;

/// @brief Method IsMatch addr 0x27c2180 size 0x6c virtual false final false
 bool IsMatch(::StringW text, int32_t index, int32_t beglimit, int32_t endlimit) ;

/// @brief Method Scan addr 0x27c21ec size 0x2e4 virtual false final false
 int32_t Scan(::StringW text, int32_t index, int32_t beglimit, int32_t endlimit) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
} // end anonymous namespace
NEED_NO_BOX(::System::Text::RegularExpressions::RegexBoyerMoore);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexBoyerMoore, "System.Text.RegularExpressions", "RegexBoyerMoore");
