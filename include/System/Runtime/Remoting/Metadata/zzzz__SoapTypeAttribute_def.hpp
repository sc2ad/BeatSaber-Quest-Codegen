#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/Remoting/Metadata/zzzz__SoapAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Runtime::Remoting::Metadata {
class SoapTypeAttribute;
}
// Type: System.Runtime.Remoting.Metadata::SoapTypeAttribute
namespace System::Runtime::Remoting::Metadata {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3134))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3138))
// CS Name: System.Runtime.Remoting.Metadata.SoapTypeAttribute
class CORDL_TYPE SoapTypeAttribute : public System::Runtime::Remoting::Metadata::SoapAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~SoapTypeAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "SoapTypeAttribute", modifiers: " const&", def_value: None }]
constexpr SoapTypeAttribute(SoapTypeAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SoapTypeAttribute", modifiers: "&&", def_value: None }]
constexpr SoapTypeAttribute(SoapTypeAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SoapTypeAttribute(void* ptr) noexcept : System::Runtime::Remoting::Metadata::SoapAttribute(ptr) {
}


  constexpr SoapTypeAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SoapTypeAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SoapTypeAttribute& operator=(SoapTypeAttribute&& o) noexcept = default;
  constexpr SoapTypeAttribute& operator=(SoapTypeAttribute const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__useAttribute, put=__set__useAttribute))  _useAttribute;

constexpr void __set__useAttribute(bool value) ;

constexpr bool __get__useAttribute() const;

 ::StringW __declspec(property(get=__get__xmlElementName, put=__set__xmlElementName))  _xmlElementName;

constexpr void __set__xmlElementName(::StringW value) ;

constexpr ::StringW __get__xmlElementName() const;

 ::StringW __declspec(property(get=__get__xmlNamespace, put=__set__xmlNamespace))  _xmlNamespace;

constexpr void __set__xmlNamespace(::StringW value) ;

constexpr ::StringW __get__xmlNamespace() const;

 ::StringW __declspec(property(get=__get__xmlTypeName, put=__set__xmlTypeName))  _xmlTypeName;

constexpr void __set__xmlTypeName(::StringW value) ;

constexpr ::StringW __get__xmlTypeName() const;

 ::StringW __declspec(property(get=__get__xmlTypeNamespace, put=__set__xmlTypeNamespace))  _xmlTypeNamespace;

constexpr void __set__xmlTypeNamespace(::StringW value) ;

constexpr ::StringW __get__xmlTypeNamespace() const;

 bool __declspec(property(get=__get__isType, put=__set__isType))  _isType;

constexpr void __set__isType(bool value) ;

constexpr bool __get__isType() const;

 bool __declspec(property(get=__get__isElement, put=__set__isElement))  _isElement;

constexpr void __set__isElement(bool value) ;

constexpr bool __get__isElement() const;


// Properties

 bool __declspec(property(get=get_UseAttribute))  UseAttribute;

 ::StringW __declspec(property(get=get_XmlElementName))  XmlElementName;

 ::StringW __declspec(property(get=get_XmlNamespace))  XmlNamespace;

 ::StringW __declspec(property(get=get_XmlTypeName))  XmlTypeName;

 ::StringW __declspec(property(get=get_XmlTypeNamespace))  XmlTypeNamespace;

 bool __declspec(property(get=get_IsInteropXmlElement))  IsInteropXmlElement;

 bool __declspec(property(get=get_IsInteropXmlType))  IsInteropXmlType;


// Methods

static System::Runtime::Remoting::Metadata::SoapTypeAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2339cf4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_UseAttribute addr 0x2339cfc size 0x8 virtual true final false
 bool get_UseAttribute() ;

/// @brief Method get_XmlElementName addr 0x2339d04 size 0x8 virtual false final false
 ::StringW get_XmlElementName() ;

/// @brief Method get_XmlNamespace addr 0x2339d0c size 0x8 virtual true final false
 ::StringW get_XmlNamespace() ;

/// @brief Method get_XmlTypeName addr 0x2339d14 size 0x8 virtual false final false
 ::StringW get_XmlTypeName() ;

/// @brief Method get_XmlTypeNamespace addr 0x2339d1c size 0x8 virtual false final false
 ::StringW get_XmlTypeNamespace() ;

/// @brief Method get_IsInteropXmlElement addr 0x2339d24 size 0x8 virtual false final false
 bool get_IsInteropXmlElement() ;

/// @brief Method get_IsInteropXmlType addr 0x2339d2c size 0x8 virtual false final false
 bool get_IsInteropXmlType() ;

/// @brief Method SetReflectionObject addr 0x2339d34 size 0x1fc virtual true final false
 void SetReflectionObject(::bs_hook::Il2CppWrapperType reflectionObject) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Metadata
NEED_NO_BOX(System::Runtime::Remoting::Metadata::SoapTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Metadata::SoapTypeAttribute, "System.Runtime.Remoting.Metadata", "SoapTypeAttribute");
