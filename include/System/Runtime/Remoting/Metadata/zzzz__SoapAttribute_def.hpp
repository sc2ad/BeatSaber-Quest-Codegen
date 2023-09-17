#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace System::Runtime::Remoting::Metadata {
class SoapAttribute;
}
// Type: System.Runtime.Remoting.Metadata::SoapAttribute
namespace System::Runtime::Remoting::Metadata {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3134))
// CS Name: System.Runtime.Remoting.Metadata.SoapAttribute
class CORDL_TYPE SoapAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SoapAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "SoapAttribute", modifiers: " const&", def_value: None }]
constexpr SoapAttribute(SoapAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SoapAttribute", modifiers: "&&", def_value: None }]
constexpr SoapAttribute(SoapAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SoapAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr SoapAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SoapAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SoapAttribute& operator=(SoapAttribute&& o) noexcept = default;
  constexpr SoapAttribute& operator=(SoapAttribute const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__useAttribute, put=__set__useAttribute))  _useAttribute;

constexpr void __set__useAttribute(bool value) ;

constexpr bool __get__useAttribute() const;

 ::StringW __declspec(property(get=__get_ProtXmlNamespace, put=__set_ProtXmlNamespace))  ProtXmlNamespace;

constexpr void __set_ProtXmlNamespace(::StringW value) ;

constexpr ::StringW __get_ProtXmlNamespace() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_ReflectInfo, put=__set_ReflectInfo))  ReflectInfo;

constexpr void __set_ReflectInfo(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_ReflectInfo() const;


// Properties

 bool __declspec(property(get=get_UseAttribute))  UseAttribute;

 ::StringW __declspec(property(get=get_XmlNamespace))  XmlNamespace;


// Methods

// Ctor Parameters []
explicit SoapAttribute() ;

/// @brief Method .ctor addr 0x2339a50 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_UseAttribute addr 0x2339a58 size 0x8 virtual true final false
 bool get_UseAttribute() ;

/// @brief Method get_XmlNamespace addr 0x2339a60 size 0x8 virtual true final false
 ::StringW get_XmlNamespace() ;

/// @brief Method SetReflectionObject addr 0x2339a68 size 0x8 virtual true final false
 void SetReflectionObject(::bs_hook::Il2CppWrapperType reflectionObject) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Metadata
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Metadata::SoapAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Metadata::SoapAttribute, "System.Runtime.Remoting.Metadata", "SoapAttribute");
