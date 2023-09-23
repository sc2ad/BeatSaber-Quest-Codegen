#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections {
class ArrayList;
}
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
namespace System::Xml::Schema {
struct RestrictionFlags;
}
// Forward declare root types
namespace System::Xml::Schema {
class RestrictionFacets;
}
// Type: System.Xml.Schema::RestrictionFacets
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11561))
// CS Name: System.Xml.Schema.RestrictionFacets
class CORDL_TYPE RestrictionFacets : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~RestrictionFacets() = default;

// Ctor Parameters [CppParam { name: "", ty: "RestrictionFacets", modifiers: " const&", def_value: None }]
constexpr RestrictionFacets(RestrictionFacets const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RestrictionFacets", modifiers: "&&", def_value: None }]
constexpr RestrictionFacets(RestrictionFacets&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RestrictionFacets(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RestrictionFacets& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RestrictionFacets& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RestrictionFacets& operator=(RestrictionFacets&& o) noexcept = default;
  constexpr RestrictionFacets& operator=(RestrictionFacets const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_Length, put=__set_Length))  Length;

constexpr void __set_Length(int32_t value) ;

constexpr int32_t __get_Length() const;

 int32_t __declspec(property(get=__get_MinLength, put=__set_MinLength))  MinLength;

constexpr void __set_MinLength(int32_t value) ;

constexpr int32_t __get_MinLength() const;

 int32_t __declspec(property(get=__get_MaxLength, put=__set_MaxLength))  MaxLength;

constexpr void __set_MaxLength(int32_t value) ;

constexpr int32_t __get_MaxLength() const;

 System::Collections::ArrayList __declspec(property(get=__get_Patterns, put=__set_Patterns))  Patterns;

constexpr void __set_Patterns(System::Collections::ArrayList value) ;

constexpr System::Collections::ArrayList __get_Patterns() const;

 System::Collections::ArrayList __declspec(property(get=__get_Enumeration, put=__set_Enumeration))  Enumeration;

constexpr void __set_Enumeration(System::Collections::ArrayList value) ;

constexpr System::Collections::ArrayList __get_Enumeration() const;

 System::Xml::Schema::XmlSchemaWhiteSpace __declspec(property(get=__get_WhiteSpace, put=__set_WhiteSpace))  WhiteSpace;

constexpr void __set_WhiteSpace(System::Xml::Schema::XmlSchemaWhiteSpace value) ;

constexpr System::Xml::Schema::XmlSchemaWhiteSpace __get_WhiteSpace() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_MaxInclusive, put=__set_MaxInclusive))  MaxInclusive;

constexpr void __set_MaxInclusive(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_MaxInclusive() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_MaxExclusive, put=__set_MaxExclusive))  MaxExclusive;

constexpr void __set_MaxExclusive(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_MaxExclusive() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_MinInclusive, put=__set_MinInclusive))  MinInclusive;

constexpr void __set_MinInclusive(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_MinInclusive() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_MinExclusive, put=__set_MinExclusive))  MinExclusive;

constexpr void __set_MinExclusive(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_MinExclusive() const;

 int32_t __declspec(property(get=__get_TotalDigits, put=__set_TotalDigits))  TotalDigits;

constexpr void __set_TotalDigits(int32_t value) ;

constexpr int32_t __get_TotalDigits() const;

 int32_t __declspec(property(get=__get_FractionDigits, put=__set_FractionDigits))  FractionDigits;

constexpr void __set_FractionDigits(int32_t value) ;

constexpr int32_t __get_FractionDigits() const;

 System::Xml::Schema::RestrictionFlags __declspec(property(get=__get_Flags, put=__set_Flags))  Flags;

constexpr void __set_Flags(System::Xml::Schema::RestrictionFlags value) ;

constexpr System::Xml::Schema::RestrictionFlags __get_Flags() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::RestrictionFacets);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::RestrictionFacets, "System.Xml.Schema", "RestrictionFacets");
