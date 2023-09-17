#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Xml {
class XmlNameTable;
}
// Type: System.Xml::XmlNameTable
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11510))
// CS Name: System.Xml.XmlNameTable
class CORDL_TYPE XmlNameTable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~XmlNameTable() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlNameTable", modifiers: " const&", def_value: None }]
constexpr XmlNameTable(XmlNameTable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlNameTable", modifiers: "&&", def_value: None }]
constexpr XmlNameTable(XmlNameTable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlNameTable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XmlNameTable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlNameTable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlNameTable& operator=(XmlNameTable&& o) noexcept = default;
  constexpr XmlNameTable& operator=(XmlNameTable const& o) noexcept = default;
                


// Methods

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW Get(::StringW array) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW Add(::ArrayW<char16_t> array, int32_t offset, int32_t length) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW Add(::StringW array) ;

// Ctor Parameters []
explicit XmlNameTable() ;

/// @brief Method .ctor addr 0x27143e0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::XmlNameTable);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNameTable, "System.Xml", "XmlNameTable");
