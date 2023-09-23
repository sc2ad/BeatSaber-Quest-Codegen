#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace System::Runtime::Serialization {
class DataContractAttribute;
}
// Type: System.Runtime.Serialization::DataContractAttribute
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16062))
// CS Name: System.Runtime.Serialization.DataContractAttribute
class CORDL_TYPE DataContractAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DataContractAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "DataContractAttribute", modifiers: " const&", def_value: None }]
constexpr DataContractAttribute(DataContractAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DataContractAttribute", modifiers: "&&", def_value: None }]
constexpr DataContractAttribute(DataContractAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DataContractAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr DataContractAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DataContractAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DataContractAttribute& operator=(DataContractAttribute&& o) noexcept = default;
  constexpr DataContractAttribute& operator=(DataContractAttribute const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_isReference, put=__set_isReference))  isReference;

constexpr void __set_isReference(bool value) ;

constexpr bool __get_isReference() const;


// Properties

 bool __declspec(property(get=get_IsReference))  IsReference;


// Methods

/// @brief Method get_IsReference addr 0x26bac98 size 0x8 virtual false final false
 bool get_IsReference() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::DataContractAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::DataContractAttribute, "System.Runtime.Serialization", "DataContractAttribute");
