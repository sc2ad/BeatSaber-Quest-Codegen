#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/Remoting/Metadata/zzzz__SoapAttribute_def.hpp"
// Forward declare root types
namespace System::Runtime::Remoting::Metadata {
class SoapParameterAttribute;
}
// Type: System.Runtime.Remoting.Metadata::SoapParameterAttribute
namespace System::Runtime::Remoting::Metadata {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3134))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3137))
// CS Name: System.Runtime.Remoting.Metadata.SoapParameterAttribute
class CORDL_TYPE SoapParameterAttribute : public System::Runtime::Remoting::Metadata::SoapAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SoapParameterAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "SoapParameterAttribute", modifiers: " const&", def_value: None }]
constexpr SoapParameterAttribute(SoapParameterAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SoapParameterAttribute", modifiers: "&&", def_value: None }]
constexpr SoapParameterAttribute(SoapParameterAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SoapParameterAttribute(void* ptr) noexcept : System::Runtime::Remoting::Metadata::SoapAttribute(ptr) {
}


  constexpr SoapParameterAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SoapParameterAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SoapParameterAttribute& operator=(SoapParameterAttribute&& o) noexcept = default;
  constexpr SoapParameterAttribute& operator=(SoapParameterAttribute const& o) noexcept = default;
                


// Methods

static System::Runtime::Remoting::Metadata::SoapParameterAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2339cec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Metadata
NEED_NO_BOX(System::Runtime::Remoting::Metadata::SoapParameterAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Metadata::SoapParameterAttribute, "System.Runtime.Remoting.Metadata", "SoapParameterAttribute");
