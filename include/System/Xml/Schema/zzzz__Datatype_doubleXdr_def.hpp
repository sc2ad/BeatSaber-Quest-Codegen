#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_double_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_doubleXdr;
}
// Type: System.Xml.Schema::Datatype_doubleXdr
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11572))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11619))
// CS Name: System.Xml.Schema.Datatype_doubleXdr
class CORDL_TYPE Datatype_doubleXdr : public System::Xml::Schema::Datatype_double {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_doubleXdr() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_doubleXdr", modifiers: " const&", def_value: None }]
constexpr Datatype_doubleXdr(Datatype_doubleXdr const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_doubleXdr", modifiers: "&&", def_value: None }]
constexpr Datatype_doubleXdr(Datatype_doubleXdr&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_doubleXdr(void* ptr) noexcept : System::Xml::Schema::Datatype_double(ptr) {
}


  constexpr Datatype_doubleXdr& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_doubleXdr& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_doubleXdr& operator=(Datatype_doubleXdr&& o) noexcept = default;
  constexpr Datatype_doubleXdr& operator=(Datatype_doubleXdr const& o) noexcept = default;
                


// Methods

/// @brief Method ParseValue addr 0x272b068 size 0x27c virtual true final false
 ::bs_hook::Il2CppWrapperType ParseValue(::StringW s, System::Xml::XmlNameTable nameTable, System::Xml::IXmlNamespaceResolver nsmgr) ;

static System::Xml::Schema::Datatype_doubleXdr New_ctor() ;

/// @brief Method .ctor addr 0x272b2f0 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Datatype_doubleXdr);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Datatype_doubleXdr, "System.Xml.Schema", "Datatype_doubleXdr");
