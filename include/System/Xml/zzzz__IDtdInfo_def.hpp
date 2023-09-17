#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Xml {
class IDtdAttributeListInfo;
}
namespace System::Xml {
class IDtdEntityInfo;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml {
class IDtdInfo;
}
// Type: System.Xml::IDtdInfo
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11363))
// CS Name: System.Xml.IDtdInfo
class CORDL_TYPE IDtdInfo : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IDtdInfo() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDtdInfo(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::System::Xml::XmlQualifiedName __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_InternalDtdSubset))  InternalDtdSubset;

 bool __declspec(property(get=get_HasDefaultAttributes))  HasDefaultAttributes;

 bool __declspec(property(get=get_HasNonCDataAttributes))  HasNonCDataAttributes;


// Methods

/// @brief Method get_Name addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Xml::XmlQualifiedName get_Name() ;

/// @brief Method get_InternalDtdSubset addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_InternalDtdSubset() ;

/// @brief Method get_HasDefaultAttributes addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_HasDefaultAttributes() ;

/// @brief Method get_HasNonCDataAttributes addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_HasNonCDataAttributes() ;

/// @brief Method LookupAttributeList addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Xml::IDtdAttributeListInfo LookupAttributeList(::StringW prefix, ::StringW localName) ;

/// @brief Method LookupEntity addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Xml::IDtdEntityInfo LookupEntity(::StringW name) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::IDtdInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IDtdInfo, "System.Xml", "IDtdInfo");
