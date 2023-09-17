#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace System::ComponentModel {
class AttributeProviderAttribute;
}
// Type: System.ComponentModel::AttributeProviderAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8257))
// CS Name: System.ComponentModel.AttributeProviderAttribute
class CORDL_TYPE AttributeProviderAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AttributeProviderAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AttributeProviderAttribute", modifiers: " const&", def_value: None }]
constexpr AttributeProviderAttribute(AttributeProviderAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AttributeProviderAttribute", modifiers: "&&", def_value: None }]
constexpr AttributeProviderAttribute(AttributeProviderAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AttributeProviderAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr AttributeProviderAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AttributeProviderAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AttributeProviderAttribute& operator=(AttributeProviderAttribute&& o) noexcept = default;
  constexpr AttributeProviderAttribute& operator=(AttributeProviderAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__TypeName_k__BackingField, put=__set__TypeName_k__BackingField))  _TypeName_k__BackingField;

constexpr void __set__TypeName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__TypeName_k__BackingField() const;

 ::StringW __declspec(property(get=__get__PropertyName_k__BackingField, put=__set__PropertyName_k__BackingField))  _PropertyName_k__BackingField;

constexpr void __set__PropertyName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__PropertyName_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_TypeName))  TypeName;

 ::StringW __declspec(property(get=get_PropertyName))  PropertyName;


// Methods

/// @brief Method get_TypeName addr 0x2773c44 size 0x8 virtual false final false
 ::StringW get_TypeName() ;

/// @brief Method get_PropertyName addr 0x2773c4c size 0x8 virtual false final false
 ::StringW get_PropertyName() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::AttributeProviderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::AttributeProviderAttribute, "System.ComponentModel", "AttributeProviderAttribute");
