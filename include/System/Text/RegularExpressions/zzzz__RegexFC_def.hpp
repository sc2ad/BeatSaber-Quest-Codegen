#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Text::RegularExpressions {
class RegexCharClass;
}
namespace System::Globalization {
class CultureInfo;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexFC;
}
// Type: System.Text.RegularExpressions::RegexFC
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7772))
// CS Name: System.Text.RegularExpressions.RegexFC
class CORDL_TYPE RegexFC : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RegexFC() = default;

// Ctor Parameters [CppParam { name: "", ty: "RegexFC", modifiers: " const&", def_value: None }]
constexpr RegexFC(RegexFC const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RegexFC", modifiers: "&&", def_value: None }]
constexpr RegexFC(RegexFC&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RegexFC(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RegexFC& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RegexFC& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RegexFC& operator=(RegexFC&& o) noexcept = default;
  constexpr RegexFC& operator=(RegexFC const& o) noexcept = default;
                


// Fields

 System::Text::RegularExpressions::RegexCharClass __declspec(property(get=__get__cc, put=__set__cc))  _cc;

constexpr void __set__cc(System::Text::RegularExpressions::RegexCharClass value) ;

constexpr System::Text::RegularExpressions::RegexCharClass __get__cc() const;

 bool __declspec(property(get=__get__nullable, put=__set__nullable))  _nullable;

constexpr void __set__nullable(bool value) ;

constexpr bool __get__nullable() const;

 bool __declspec(property(get=__get__CaseInsensitive_k__BackingField, put=__set__CaseInsensitive_k__BackingField))  _CaseInsensitive_k__BackingField;

constexpr void __set__CaseInsensitive_k__BackingField(bool value) ;

constexpr bool __get__CaseInsensitive_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_CaseInsensitive, put=set_CaseInsensitive))  CaseInsensitive;


// Methods

// Ctor Parameters [CppParam { name: "nullable", ty: "bool", modifiers: "", def_value: None }]
explicit RegexFC(bool nullable) ;

/// @brief Method .ctor addr 0x27ccb20 size 0x80 virtual false final false
 void _ctor(bool nullable) ;

// Ctor Parameters [CppParam { name: "ch", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "not", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "nullable", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "caseInsensitive", ty: "bool", modifiers: "", def_value: None }]
explicit RegexFC(char16_t ch, bool not, bool nullable, bool caseInsensitive) ;

/// @brief Method .ctor addr 0x27ccc4c size 0xf4 virtual false final false
 void _ctor(char16_t ch, bool not, bool nullable, bool caseInsensitive) ;

// Ctor Parameters [CppParam { name: "charClass", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "nullable", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "caseInsensitive", ty: "bool", modifiers: "", def_value: None }]
explicit RegexFC(::StringW charClass, bool nullable, bool caseInsensitive) ;

/// @brief Method .ctor addr 0x27ccd40 size 0x94 virtual false final false
 void _ctor(::StringW charClass, bool nullable, bool caseInsensitive) ;

/// @brief Method AddFC addr 0x27ccba0 size 0xac virtual false final false
 bool AddFC(System::Text::RegularExpressions::RegexFC fc, bool concatenate) ;

/// @brief Method get_CaseInsensitive addr 0x27ccdd4 size 0x8 virtual false final false
 bool get_CaseInsensitive() ;

/// @brief Method set_CaseInsensitive addr 0x27ccddc size 0xc virtual false final false
 void set_CaseInsensitive(bool value) ;

/// @brief Method GetFirstChars addr 0x27cbf58 size 0x38 virtual false final false
 ::StringW GetFirstChars(System::Globalization::CultureInfo culture) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
NEED_NO_BOX(System::Text::RegularExpressions::RegexFC);
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexFC, "System.Text.RegularExpressions", "RegexFC");
