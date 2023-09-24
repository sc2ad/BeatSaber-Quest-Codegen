#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections {
class ArrayList;
}
namespace System {
struct Decimal;
}
namespace System {
class Exception;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
// Forward declare root types
namespace System::Xml::Schema {
class Numeric10FacetsChecker;
}
// Type: System.Xml.Schema::Numeric10FacetsChecker
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11628))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11629))
// CS Name: System.Xml.Schema.Numeric10FacetsChecker
class CORDL_TYPE Numeric10FacetsChecker : public System::Xml::Schema::FacetsChecker {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Numeric10FacetsChecker() = default;

// Ctor Parameters [CppParam { name: "", ty: "Numeric10FacetsChecker", modifiers: " const&", def_value: None }]
constexpr Numeric10FacetsChecker(Numeric10FacetsChecker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Numeric10FacetsChecker", modifiers: "&&", def_value: None }]
constexpr Numeric10FacetsChecker(Numeric10FacetsChecker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Numeric10FacetsChecker(void* ptr) noexcept : System::Xml::Schema::FacetsChecker(ptr) {
}


  constexpr Numeric10FacetsChecker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Numeric10FacetsChecker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Numeric10FacetsChecker& operator=(Numeric10FacetsChecker&& o) noexcept = default;
  constexpr Numeric10FacetsChecker& operator=(Numeric10FacetsChecker const& o) noexcept = default;
                


// Fields

static ::ArrayW<char16_t> __declspec(property(get=__get_signs, put=__set_signs))  signs;

static void __set_signs(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_signs() ;

 System::Decimal __declspec(property(get=__get_maxValue, put=__set_maxValue))  maxValue;

constexpr void __set_maxValue(System::Decimal value) ;

constexpr System::Decimal __get_maxValue() const;

 System::Decimal __declspec(property(get=__get_minValue, put=__set_minValue))  minValue;

constexpr void __set_minValue(System::Decimal value) ;

constexpr System::Decimal __get_minValue() const;


// Methods

static System::Xml::Schema::Numeric10FacetsChecker New_ctor(System::Decimal minVal, System::Decimal maxVal) ;

/// @brief Method .ctor addr 0x27253b8 size 0x40 virtual false final false
 void _ctor(System::Decimal minVal, System::Decimal maxVal) ;

/// @brief Method CheckValueFacets addr 0x272d3f0 size 0x70 virtual true final false
 System::Exception CheckValueFacets(::bs_hook::Il2CppWrapperType value, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method CheckValueFacets addr 0x272d460 size 0x558 virtual true final false
 System::Exception CheckValueFacets(System::Decimal value, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method CheckValueFacets addr 0x272dc00 size 0x8c virtual true final false
 System::Exception CheckValueFacets(int64_t value, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method CheckValueFacets addr 0x272dc8c size 0x8c virtual true final false
 System::Exception CheckValueFacets(int32_t value, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method CheckValueFacets addr 0x272dd18 size 0x8c virtual true final false
 System::Exception CheckValueFacets(int16_t value, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method MatchEnumeration addr 0x272dda4 size 0x84 virtual true final false
 bool MatchEnumeration(::bs_hook::Il2CppWrapperType value, System::Collections::ArrayList enumeration, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method MatchEnumeration addr 0x272dae0 size 0x120 virtual false final false
 bool MatchEnumeration(System::Decimal value, System::Collections::ArrayList enumeration, System::Xml::Schema::XmlValueConverter valueConverter) ;

/// @brief Method CheckTotalAndFractionDigits addr 0x272c1dc size 0x2a4 virtual false final false
 System::Exception CheckTotalAndFractionDigits(System::Decimal value, int32_t totalDigits, int32_t fractionDigits, bool checkTotal, bool checkFraction) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Numeric10FacetsChecker);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Numeric10FacetsChecker, "System.Xml.Schema", "Numeric10FacetsChecker");
