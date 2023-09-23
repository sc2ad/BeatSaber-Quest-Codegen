#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::ComponentModel {
class TypeDescriptionProviderAttribute;
}
// Type: System.ComponentModel::TypeDescriptionProviderAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8312))
// CS Name: System.ComponentModel.TypeDescriptionProviderAttribute
class CORDL_TYPE TypeDescriptionProviderAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TypeDescriptionProviderAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptionProviderAttribute", modifiers: " const&", def_value: None }]
constexpr TypeDescriptionProviderAttribute(TypeDescriptionProviderAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptionProviderAttribute", modifiers: "&&", def_value: None }]
constexpr TypeDescriptionProviderAttribute(TypeDescriptionProviderAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeDescriptionProviderAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr TypeDescriptionProviderAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeDescriptionProviderAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeDescriptionProviderAttribute& operator=(TypeDescriptionProviderAttribute&& o) noexcept = default;
  constexpr TypeDescriptionProviderAttribute& operator=(TypeDescriptionProviderAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__TypeName_k__BackingField, put=__set__TypeName_k__BackingField))  _TypeName_k__BackingField;

constexpr void __set__TypeName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__TypeName_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_TypeName))  TypeName;


// Methods

// Ctor Parameters [CppParam { name: "typeName", ty: "::StringW", modifiers: "", def_value: None }]
explicit TypeDescriptionProviderAttribute(::StringW typeName) ;

/// @brief Method .ctor addr 0x2786944 size 0x78 virtual false final false
 void _ctor(::StringW typeName) ;

/// @brief Method get_TypeName addr 0x27869bc size 0x8 virtual false final false
 ::StringW get_TypeName() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::TypeDescriptionProviderAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::TypeDescriptionProviderAttribute, "System.ComponentModel", "TypeDescriptionProviderAttribute");
