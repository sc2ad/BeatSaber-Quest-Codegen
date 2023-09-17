#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/Remoting/Metadata/zzzz__SoapAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace System::Runtime::Remoting::Metadata {
class SoapMethodAttribute;
}
// Type: System.Runtime.Remoting.Metadata::SoapMethodAttribute
namespace System::Runtime::Remoting::Metadata {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3134))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3136))
// CS Name: System.Runtime.Remoting.Metadata.SoapMethodAttribute
class CORDL_TYPE SoapMethodAttribute : public ::System::Runtime::Remoting::Metadata::SoapAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~SoapMethodAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "SoapMethodAttribute", modifiers: " const&", def_value: None }]
constexpr SoapMethodAttribute(SoapMethodAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SoapMethodAttribute", modifiers: "&&", def_value: None }]
constexpr SoapMethodAttribute(SoapMethodAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SoapMethodAttribute(void* ptr) noexcept : ::System::Runtime::Remoting::Metadata::SoapAttribute(ptr) {
}


  constexpr SoapMethodAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SoapMethodAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SoapMethodAttribute& operator=(SoapMethodAttribute&& o) noexcept = default;
  constexpr SoapMethodAttribute& operator=(SoapMethodAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__responseElement, put=__set__responseElement))  _responseElement;

constexpr void __set__responseElement(::StringW value) ;

constexpr ::StringW __get__responseElement() const;

 ::StringW __declspec(property(get=__get__responseNamespace, put=__set__responseNamespace))  _responseNamespace;

constexpr void __set__responseNamespace(::StringW value) ;

constexpr ::StringW __get__responseNamespace() const;

 ::StringW __declspec(property(get=__get__returnElement, put=__set__returnElement))  _returnElement;

constexpr void __set__returnElement(::StringW value) ;

constexpr ::StringW __get__returnElement() const;

 ::StringW __declspec(property(get=__get__soapAction, put=__set__soapAction))  _soapAction;

constexpr void __set__soapAction(::StringW value) ;

constexpr ::StringW __get__soapAction() const;

 bool __declspec(property(get=__get__useAttribute, put=__set__useAttribute))  _useAttribute;

constexpr void __set__useAttribute(bool value) ;

constexpr bool __get__useAttribute() const;

 ::StringW __declspec(property(get=__get__namespace, put=__set__namespace))  _namespace;

constexpr void __set__namespace(::StringW value) ;

constexpr ::StringW __get__namespace() const;


// Properties

 bool __declspec(property(get=get_UseAttribute))  UseAttribute;

 ::StringW __declspec(property(get=get_XmlNamespace))  XmlNamespace;


// Methods

// Ctor Parameters []
explicit SoapMethodAttribute() ;

/// @brief Method .ctor addr 0x2339b28 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_UseAttribute addr 0x2339b30 size 0x8 virtual true final false
 bool get_UseAttribute() ;

/// @brief Method get_XmlNamespace addr 0x2339b38 size 0x8 virtual true final false
 ::StringW get_XmlNamespace() ;

/// @brief Method SetReflectionObject addr 0x2339b40 size 0x1ac virtual true final false
 void SetReflectionObject(::bs_hook::Il2CppWrapperType reflectionObject) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Metadata
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Metadata::SoapMethodAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Metadata::SoapMethodAttribute, "System.Runtime.Remoting.Metadata", "SoapMethodAttribute");
