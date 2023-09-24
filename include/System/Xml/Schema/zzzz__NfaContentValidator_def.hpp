#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__ContentValidator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Xml::Schema {
class BitSet;
}
namespace System::Xml::Schema {
class SymbolsDictionary;
}
namespace System::Xml::Schema {
class Positions;
}
namespace System::Xml::Schema {
struct XmlSchemaContentType;
}
// Forward declare root types
namespace System::Xml::Schema {
class NfaContentValidator;
}
// Type: System.Xml.Schema::NfaContentValidator
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11552))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11555))
// CS Name: System.Xml.Schema.NfaContentValidator
class CORDL_TYPE NfaContentValidator : public System::Xml::Schema::ContentValidator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~NfaContentValidator() = default;

// Ctor Parameters [CppParam { name: "", ty: "NfaContentValidator", modifiers: " const&", def_value: None }]
constexpr NfaContentValidator(NfaContentValidator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NfaContentValidator", modifiers: "&&", def_value: None }]
constexpr NfaContentValidator(NfaContentValidator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NfaContentValidator(void* ptr) noexcept : System::Xml::Schema::ContentValidator(ptr) {
}


  constexpr NfaContentValidator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NfaContentValidator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NfaContentValidator& operator=(NfaContentValidator&& o) noexcept = default;
  constexpr NfaContentValidator& operator=(NfaContentValidator const& o) noexcept = default;
                


// Fields

 System::Xml::Schema::BitSet __declspec(property(get=__get_firstpos, put=__set_firstpos))  firstpos;

constexpr void __set_firstpos(System::Xml::Schema::BitSet value) ;

constexpr System::Xml::Schema::BitSet __get_firstpos() const;

 ::ArrayW<System::Xml::Schema::BitSet> __declspec(property(get=__get_followpos, put=__set_followpos))  followpos;

constexpr void __set_followpos(::ArrayW<System::Xml::Schema::BitSet> value) ;

constexpr ::ArrayW<System::Xml::Schema::BitSet> __get_followpos() const;

 System::Xml::Schema::SymbolsDictionary __declspec(property(get=__get_symbols, put=__set_symbols))  symbols;

constexpr void __set_symbols(System::Xml::Schema::SymbolsDictionary value) ;

constexpr System::Xml::Schema::SymbolsDictionary __get_symbols() const;

 System::Xml::Schema::Positions __declspec(property(get=__get_positions, put=__set_positions))  positions;

constexpr void __set_positions(System::Xml::Schema::Positions value) ;

constexpr System::Xml::Schema::Positions __get_positions() const;

 int32_t __declspec(property(get=__get_endMarkerPos, put=__set_endMarkerPos))  endMarkerPos;

constexpr void __set_endMarkerPos(int32_t value) ;

constexpr int32_t __get_endMarkerPos() const;


// Methods

static System::Xml::Schema::NfaContentValidator New_ctor(System::Xml::Schema::BitSet firstpos, ::ArrayW<System::Xml::Schema::BitSet> followpos, System::Xml::Schema::SymbolsDictionary symbols, System::Xml::Schema::Positions positions, int32_t endMarkerPos, System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable) ;

/// @brief Method .ctor addr 0x271d144 size 0xbc virtual false final false
 void _ctor(System::Xml::Schema::BitSet firstpos, ::ArrayW<System::Xml::Schema::BitSet> followpos, System::Xml::Schema::SymbolsDictionary symbols, System::Xml::Schema::Positions positions, int32_t endMarkerPos, System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::NfaContentValidator);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::NfaContentValidator, "System.Xml.Schema", "NfaContentValidator");
