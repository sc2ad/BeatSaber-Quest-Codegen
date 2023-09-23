#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Xml {
class IDtdAttributeInfo;
}
// Type: System.Xml::IDtdAttributeInfo
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11365))
// CS Name: System.Xml.IDtdAttributeInfo
class CORDL_TYPE IDtdAttributeInfo : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IDtdAttributeInfo() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDtdAttributeInfo(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_Prefix))  Prefix;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 int32_t __declspec(property(get=get_LineNumber))  LineNumber;

 int32_t __declspec(property(get=get_LinePosition))  LinePosition;

 bool __declspec(property(get=get_IsNonCDataType))  IsNonCDataType;

 bool __declspec(property(get=get_IsDeclaredInExternal))  IsDeclaredInExternal;

 bool __declspec(property(get=get_IsXmlAttribute))  IsXmlAttribute;


// Methods

/// @brief Method get_Prefix addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Prefix() ;

/// @brief Method get_LocalName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_LocalName() ;

/// @brief Method get_LineNumber addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_LineNumber() ;

/// @brief Method get_LinePosition addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_LinePosition() ;

/// @brief Method get_IsNonCDataType addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsNonCDataType() ;

/// @brief Method get_IsDeclaredInExternal addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsDeclaredInExternal() ;

/// @brief Method get_IsXmlAttribute addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsXmlAttribute() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::IDtdAttributeInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::IDtdAttributeInfo, "System.Xml", "IDtdAttributeInfo");
