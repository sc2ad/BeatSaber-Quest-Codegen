#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Xml {
class IDtdDefaultAttributeInfo;
}
namespace System::Xml {
class IDtdAttributeInfo;
}
// Forward declare root types
namespace System::Xml {
class IDtdAttributeListInfo;
}
// Type: System.Xml::IDtdAttributeListInfo
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11364))
// CS Name: System.Xml.IDtdAttributeListInfo
class CORDL_TYPE IDtdAttributeListInfo : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IDtdAttributeListInfo() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDtdAttributeListInfo(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_HasNonCDataAttributes))  HasNonCDataAttributes;


// Methods

/// @brief Method get_HasNonCDataAttributes addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_HasNonCDataAttributes() ;

/// @brief Method LookupAttribute addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Xml::IDtdAttributeInfo LookupAttribute(::StringW prefix, ::StringW localName) ;

/// @brief Method LookupDefaultAttributes addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::IEnumerable_1<System::Xml::IDtdDefaultAttributeInfo> LookupDefaultAttributes() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::IDtdAttributeListInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::IDtdAttributeListInfo, "System.Xml", "IDtdAttributeListInfo");
