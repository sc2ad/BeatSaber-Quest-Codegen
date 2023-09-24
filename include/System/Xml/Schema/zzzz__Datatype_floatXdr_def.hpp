#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_float_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class XmlNameTable;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_floatXdr;
}
// Type: System.Xml.Schema::Datatype_floatXdr
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11571))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11620))
// CS Name: System.Xml.Schema.Datatype_floatXdr
class CORDL_TYPE Datatype_floatXdr : public System::Xml::Schema::Datatype_float {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_floatXdr() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_floatXdr", modifiers: " const&", def_value: None }]
constexpr Datatype_floatXdr(Datatype_floatXdr const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_floatXdr", modifiers: "&&", def_value: None }]
constexpr Datatype_floatXdr(Datatype_floatXdr&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_floatXdr(void* ptr) noexcept : System::Xml::Schema::Datatype_float(ptr) {
}


  constexpr Datatype_floatXdr& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_floatXdr& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_floatXdr& operator=(Datatype_floatXdr&& o) noexcept = default;
  constexpr Datatype_floatXdr& operator=(Datatype_floatXdr const& o) noexcept = default;
                


// Methods

/// @brief Method ParseValue addr 0x272b344 size 0x27c virtual true final false
 ::bs_hook::Il2CppWrapperType ParseValue(::StringW s, System::Xml::XmlNameTable nameTable, System::Xml::IXmlNamespaceResolver nsmgr) ;

static System::Xml::Schema::Datatype_floatXdr New_ctor() ;

/// @brief Method .ctor addr 0x272b5c0 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Datatype_floatXdr);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Datatype_floatXdr, "System.Xml.Schema", "Datatype_floatXdr");
