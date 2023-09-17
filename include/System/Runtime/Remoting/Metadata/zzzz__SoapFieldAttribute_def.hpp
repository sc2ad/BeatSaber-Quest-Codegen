#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/Remoting/Metadata/zzzz__SoapAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace System::Runtime::Remoting::Metadata {
class SoapFieldAttribute;
}
// Type: System.Runtime.Remoting.Metadata::SoapFieldAttribute
namespace System::Runtime::Remoting::Metadata {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3134))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3135))
// CS Name: System.Runtime.Remoting.Metadata.SoapFieldAttribute
class CORDL_TYPE SoapFieldAttribute : public ::System::Runtime::Remoting::Metadata::SoapAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~SoapFieldAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "SoapFieldAttribute", modifiers: " const&", def_value: None }]
constexpr SoapFieldAttribute(SoapFieldAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SoapFieldAttribute", modifiers: "&&", def_value: None }]
constexpr SoapFieldAttribute(SoapFieldAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SoapFieldAttribute(void* ptr) noexcept : ::System::Runtime::Remoting::Metadata::SoapAttribute(ptr) {
}


  constexpr SoapFieldAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SoapFieldAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SoapFieldAttribute& operator=(SoapFieldAttribute&& o) noexcept = default;
  constexpr SoapFieldAttribute& operator=(SoapFieldAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__elementName, put=__set__elementName))  _elementName;

constexpr void __set__elementName(::StringW value) ;

constexpr ::StringW __get__elementName() const;

 bool __declspec(property(get=__get__isElement, put=__set__isElement))  _isElement;

constexpr void __set__isElement(bool value) ;

constexpr bool __get__isElement() const;


// Properties

 ::StringW __declspec(property(get=get_XmlElementName))  XmlElementName;


// Methods

// Ctor Parameters []
explicit SoapFieldAttribute() ;

/// @brief Method .ctor addr 0x2339a70 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_XmlElementName addr 0x2339a78 size 0x8 virtual false final false
 ::StringW get_XmlElementName() ;

/// @brief Method IsInteropXmlElement addr 0x2339a80 size 0x8 virtual false final false
 bool IsInteropXmlElement() ;

/// @brief Method SetReflectionObject addr 0x2339a88 size 0xa0 virtual true final false
 void SetReflectionObject(::bs_hook::Il2CppWrapperType reflectionObject) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Metadata
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Metadata::SoapFieldAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Metadata::SoapFieldAttribute, "System.Runtime.Remoting.Metadata", "SoapFieldAttribute");
