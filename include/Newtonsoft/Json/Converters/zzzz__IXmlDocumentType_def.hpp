#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class IXmlDocumentType;
}
// Type: Newtonsoft.Json.Converters::IXmlDocumentType
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11997))
// CS Name: Newtonsoft.Json.Converters.IXmlDocumentType
class CORDL_TYPE IXmlDocumentType : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to Newtonsoft::Json::Converters::IXmlNode
constexpr operator  Newtonsoft::Json::Converters::IXmlNode() const noexcept;

~IXmlDocumentType() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IXmlDocumentType(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_System))  System;

 ::StringW __declspec(property(get=get_Public))  Public;

 ::StringW __declspec(property(get=get_InternalSubset))  InternalSubset;


// Methods

/// @brief Method get_Name addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_System addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_System() ;

/// @brief Method get_Public addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Public() ;

/// @brief Method get_InternalSubset addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_InternalSubset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(Newtonsoft::Json::Converters::IXmlDocumentType);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Converters::IXmlDocumentType, "Newtonsoft.Json.Converters", "IXmlDocumentType");
