#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System::ComponentModel {
class DesignerCategoryAttribute;
}
// Type: System.ComponentModel::DesignerCategoryAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8241))
// CS Name: System.ComponentModel.DesignerCategoryAttribute
class CORDL_TYPE DesignerCategoryAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DesignerCategoryAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "DesignerCategoryAttribute", modifiers: " const&", def_value: None }]
constexpr DesignerCategoryAttribute(DesignerCategoryAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DesignerCategoryAttribute", modifiers: "&&", def_value: None }]
constexpr DesignerCategoryAttribute(DesignerCategoryAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DesignerCategoryAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr DesignerCategoryAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DesignerCategoryAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DesignerCategoryAttribute& operator=(DesignerCategoryAttribute&& o) noexcept = default;
  constexpr DesignerCategoryAttribute& operator=(DesignerCategoryAttribute const& o) noexcept = default;
                


// Fields

static System::ComponentModel::DesignerCategoryAttribute __declspec(property(get=__get_Component, put=__set_Component))  Component;

static void __set_Component(System::ComponentModel::DesignerCategoryAttribute value) ;

static System::ComponentModel::DesignerCategoryAttribute __get_Component() ;

static System::ComponentModel::DesignerCategoryAttribute __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(System::ComponentModel::DesignerCategoryAttribute value) ;

static System::ComponentModel::DesignerCategoryAttribute __get_Default() ;

static System::ComponentModel::DesignerCategoryAttribute __declspec(property(get=__get_Form, put=__set_Form))  Form;

static void __set_Form(System::ComponentModel::DesignerCategoryAttribute value) ;

static System::ComponentModel::DesignerCategoryAttribute __get_Form() ;

static System::ComponentModel::DesignerCategoryAttribute __declspec(property(get=__get_Generic, put=__set_Generic))  Generic;

static void __set_Generic(System::ComponentModel::DesignerCategoryAttribute value) ;

static System::ComponentModel::DesignerCategoryAttribute __get_Generic() ;

 ::StringW __declspec(property(get=__get__Category_k__BackingField, put=__set__Category_k__BackingField))  _Category_k__BackingField;

constexpr void __set__Category_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Category_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_Category))  Category;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_TypeId))  TypeId;


// Methods

// Ctor Parameters []
explicit DesignerCategoryAttribute() ;

/// @brief Method .ctor addr 0x2771cbc size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "category", ty: "::StringW", modifiers: "", def_value: None }]
explicit DesignerCategoryAttribute(::StringW category) ;

/// @brief Method .ctor addr 0x2771d18 size 0x28 virtual false final false
 void _ctor(::StringW category) ;

/// @brief Method get_Category addr 0x2771d40 size 0x8 virtual false final false
 ::StringW get_Category() ;

/// @brief Method Equals addr 0x2771d48 size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2771dd8 size 0x20 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method IsDefaultAttribute addr 0x2771df8 size 0x78 virtual true final false
 bool IsDefaultAttribute() ;

/// @brief Method get_TypeId addr 0x2771e70 size 0x38 virtual true final false
 ::bs_hook::Il2CppWrapperType get_TypeId() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::DesignerCategoryAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::DesignerCategoryAttribute, "System.ComponentModel", "DesignerCategoryAttribute");
