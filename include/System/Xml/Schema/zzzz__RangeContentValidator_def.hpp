#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__ContentValidator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Xml::Schema {
struct XmlSchemaContentType;
}
namespace System::Xml::Schema {
class SymbolsDictionary;
}
namespace System::Xml::Schema {
class BitSet;
}
namespace System::Xml::Schema {
class Positions;
}
// Forward declare root types
namespace System::Xml::Schema {
class RangeContentValidator;
}
// Type: System.Xml.Schema::RangeContentValidator
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11552))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11556))
// CS Name: System.Xml.Schema.RangeContentValidator
class CORDL_TYPE RangeContentValidator : public ::System::Xml::Schema::ContentValidator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~RangeContentValidator() = default;

// Ctor Parameters [CppParam { name: "", ty: "RangeContentValidator", modifiers: " const&", def_value: None }]
constexpr RangeContentValidator(RangeContentValidator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RangeContentValidator", modifiers: "&&", def_value: None }]
constexpr RangeContentValidator(RangeContentValidator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RangeContentValidator(void* ptr) noexcept : ::System::Xml::Schema::ContentValidator(ptr) {
}


  constexpr RangeContentValidator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RangeContentValidator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RangeContentValidator& operator=(RangeContentValidator&& o) noexcept = default;
  constexpr RangeContentValidator& operator=(RangeContentValidator const& o) noexcept = default;
                


// Fields

 ::System::Xml::Schema::BitSet __declspec(property(get=__get_firstpos, put=__set_firstpos))  firstpos;

constexpr void __set_firstpos(::System::Xml::Schema::BitSet value) ;

constexpr ::System::Xml::Schema::BitSet __get_firstpos() const;

 ::ArrayW<::System::Xml::Schema::BitSet> __declspec(property(get=__get_followpos, put=__set_followpos))  followpos;

constexpr void __set_followpos(::ArrayW<::System::Xml::Schema::BitSet> value) ;

constexpr ::ArrayW<::System::Xml::Schema::BitSet> __get_followpos() const;

 ::System::Xml::Schema::BitSet __declspec(property(get=__get_positionsWithRangeTerminals, put=__set_positionsWithRangeTerminals))  positionsWithRangeTerminals;

constexpr void __set_positionsWithRangeTerminals(::System::Xml::Schema::BitSet value) ;

constexpr ::System::Xml::Schema::BitSet __get_positionsWithRangeTerminals() const;

 ::System::Xml::Schema::SymbolsDictionary __declspec(property(get=__get_symbols, put=__set_symbols))  symbols;

constexpr void __set_symbols(::System::Xml::Schema::SymbolsDictionary value) ;

constexpr ::System::Xml::Schema::SymbolsDictionary __get_symbols() const;

 ::System::Xml::Schema::Positions __declspec(property(get=__get_positions, put=__set_positions))  positions;

constexpr void __set_positions(::System::Xml::Schema::Positions value) ;

constexpr ::System::Xml::Schema::Positions __get_positions() const;

 int32_t __declspec(property(get=__get_minMaxNodesCount, put=__set_minMaxNodesCount))  minMaxNodesCount;

constexpr void __set_minMaxNodesCount(int32_t value) ;

constexpr int32_t __get_minMaxNodesCount() const;

 int32_t __declspec(property(get=__get_endMarkerPos, put=__set_endMarkerPos))  endMarkerPos;

constexpr void __set_endMarkerPos(int32_t value) ;

constexpr int32_t __get_endMarkerPos() const;


// Methods

// Ctor Parameters [CppParam { name: "firstpos", ty: "::System::Xml::Schema::BitSet", modifiers: "", def_value: None }, CppParam { name: "followpos", ty: "::ArrayW<::System::Xml::Schema::BitSet>", modifiers: "", def_value: None }, CppParam { name: "symbols", ty: "::System::Xml::Schema::SymbolsDictionary", modifiers: "", def_value: None }, CppParam { name: "positions", ty: "::System::Xml::Schema::Positions", modifiers: "", def_value: None }, CppParam { name: "endMarkerPos", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "contentType", ty: "::System::Xml::Schema::XmlSchemaContentType", modifiers: "", def_value: None }, CppParam { name: "isEmptiable", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "positionsWithRangeTerminals", ty: "::System::Xml::Schema::BitSet", modifiers: "", def_value: None }, CppParam { name: "minmaxNodesCount", ty: "int32_t", modifiers: "", def_value: None }]
explicit RangeContentValidator(::System::Xml::Schema::BitSet firstpos, ::ArrayW<::System::Xml::Schema::BitSet> followpos, ::System::Xml::Schema::SymbolsDictionary symbols, ::System::Xml::Schema::Positions positions, int32_t endMarkerPos, ::System::Xml::Schema::XmlSchemaContentType contentType, bool isEmptiable, ::System::Xml::Schema::BitSet positionsWithRangeTerminals, int32_t minmaxNodesCount) ;

/// @brief Method .ctor addr 0x271c9c4 size 0xc0 virtual false final false
 void _ctor(::System::Xml::Schema::BitSet firstpos, ::ArrayW<::System::Xml::Schema::BitSet> followpos, ::System::Xml::Schema::SymbolsDictionary symbols, ::System::Xml::Schema::Positions positions, int32_t endMarkerPos, ::System::Xml::Schema::XmlSchemaContentType contentType, bool isEmptiable, ::System::Xml::Schema::BitSet positionsWithRangeTerminals, int32_t minmaxNodesCount) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::RangeContentValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::RangeContentValidator, "System.Xml.Schema", "RangeContentValidator");
