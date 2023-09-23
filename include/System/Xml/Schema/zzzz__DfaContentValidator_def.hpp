#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__ContentValidator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Xml::Schema {
struct XmlSchemaContentType;
}
namespace System::Xml::Schema {
class SymbolsDictionary;
}
// Forward declare root types
namespace System::Xml::Schema {
class DfaContentValidator;
}
// Type: System.Xml.Schema::DfaContentValidator
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11552))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11554))
// CS Name: System.Xml.Schema.DfaContentValidator
class CORDL_TYPE DfaContentValidator : public System::Xml::Schema::ContentValidator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DfaContentValidator() = default;

// Ctor Parameters [CppParam { name: "", ty: "DfaContentValidator", modifiers: " const&", def_value: None }]
constexpr DfaContentValidator(DfaContentValidator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DfaContentValidator", modifiers: "&&", def_value: None }]
constexpr DfaContentValidator(DfaContentValidator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DfaContentValidator(void* ptr) noexcept : System::Xml::Schema::ContentValidator(ptr) {
}


  constexpr DfaContentValidator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DfaContentValidator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DfaContentValidator& operator=(DfaContentValidator&& o) noexcept = default;
  constexpr DfaContentValidator& operator=(DfaContentValidator const& o) noexcept = default;
                


// Fields

 ::ArrayW<::ArrayW<int32_t>> __declspec(property(get=__get_transitionTable, put=__set_transitionTable))  transitionTable;

constexpr void __set_transitionTable(::ArrayW<::ArrayW<int32_t>> value) ;

constexpr ::ArrayW<::ArrayW<int32_t>> __get_transitionTable() const;

 System::Xml::Schema::SymbolsDictionary __declspec(property(get=__get_symbols, put=__set_symbols))  symbols;

constexpr void __set_symbols(System::Xml::Schema::SymbolsDictionary value) ;

constexpr System::Xml::Schema::SymbolsDictionary __get_symbols() const;


// Methods

// Ctor Parameters [CppParam { name: "transitionTable", ty: "::ArrayW<::ArrayW<int32_t>>", modifiers: "", def_value: None }, CppParam { name: "symbols", ty: "System::Xml::Schema::SymbolsDictionary", modifiers: "", def_value: None }, CppParam { name: "contentType", ty: "System::Xml::Schema::XmlSchemaContentType", modifiers: "", def_value: None }, CppParam { name: "isOpen", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isEmptiable", ty: "bool", modifiers: "", def_value: None }]
explicit DfaContentValidator(::ArrayW<::ArrayW<int32_t>> transitionTable, System::Xml::Schema::SymbolsDictionary symbols, System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable) ;

/// @brief Method .ctor addr 0x271d0a4 size 0xa0 virtual false final false
 void _ctor(::ArrayW<::ArrayW<int32_t>> transitionTable, System::Xml::Schema::SymbolsDictionary symbols, System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::DfaContentValidator);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::DfaContentValidator, "System.Xml.Schema", "DfaContentValidator");
