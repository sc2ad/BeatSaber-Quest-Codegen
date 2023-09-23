#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XmlNodeWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
namespace System::Xml {
class XmlDocumentType;
}
namespace Newtonsoft::Json::Converters {
class IXmlDocumentType;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XmlDocumentTypeWrapper;
}
// Type: Newtonsoft.Json.Converters::XmlDocumentTypeWrapper
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11994))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11993))
// CS Name: Newtonsoft.Json.Converters.XmlDocumentTypeWrapper
class CORDL_TYPE XmlDocumentTypeWrapper : public Newtonsoft::Json::Converters::XmlNodeWrapper {
public:
// Declarations
/// @brief Convert operator to Newtonsoft::Json::Converters::IXmlDocumentType
constexpr operator  Newtonsoft::Json::Converters::IXmlDocumentType() const noexcept;

/// @brief Convert operator to Newtonsoft::Json::Converters::IXmlNode
constexpr operator  Newtonsoft::Json::Converters::IXmlNode() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~XmlDocumentTypeWrapper() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlDocumentTypeWrapper", modifiers: " const&", def_value: None }]
constexpr XmlDocumentTypeWrapper(XmlDocumentTypeWrapper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlDocumentTypeWrapper", modifiers: "&&", def_value: None }]
constexpr XmlDocumentTypeWrapper(XmlDocumentTypeWrapper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlDocumentTypeWrapper(void* ptr) noexcept : Newtonsoft::Json::Converters::XmlNodeWrapper(ptr) {
}


  constexpr XmlDocumentTypeWrapper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlDocumentTypeWrapper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlDocumentTypeWrapper& operator=(XmlDocumentTypeWrapper&& o) noexcept = default;
  constexpr XmlDocumentTypeWrapper& operator=(XmlDocumentTypeWrapper const& o) noexcept = default;
                


// Fields

 System::Xml::XmlDocumentType __declspec(property(get=__get__documentType, put=__set__documentType))  _documentType;

constexpr void __set__documentType(System::Xml::XmlDocumentType value) ;

constexpr System::Xml::XmlDocumentType __get__documentType() const;


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_System))  System;

 ::StringW __declspec(property(get=get_Public))  Public;

 ::StringW __declspec(property(get=get_InternalSubset))  InternalSubset;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;


// Methods

// Ctor Parameters [CppParam { name: "documentType", ty: "System::Xml::XmlDocumentType", modifiers: "", def_value: None }]
explicit XmlDocumentTypeWrapper(System::Xml::XmlDocumentType documentType) ;

/// @brief Method .ctor addr 0x2541c24 size 0x2c virtual false final false
 void _ctor(System::Xml::XmlDocumentType documentType) ;

/// @brief Method get_Name addr 0x2542200 size 0x20 virtual true final true
 ::StringW get_Name() ;

/// @brief Method get_System addr 0x2542220 size 0x1c virtual true final true
 ::StringW get_System() ;

/// @brief Method get_Public addr 0x254223c size 0x1c virtual true final true
 ::StringW get_Public() ;

/// @brief Method get_InternalSubset addr 0x2542258 size 0x1c virtual true final true
 ::StringW get_InternalSubset() ;

/// @brief Method get_LocalName addr 0x2542274 size 0x40 virtual true final false
 ::StringW get_LocalName() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(Newtonsoft::Json::Converters::XmlDocumentTypeWrapper);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Converters::XmlDocumentTypeWrapper, "Newtonsoft.Json.Converters", "XmlDocumentTypeWrapper");
