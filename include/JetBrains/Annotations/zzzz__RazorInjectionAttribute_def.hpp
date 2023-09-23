#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class RazorInjectionAttribute;
}
// Type: JetBrains.Annotations::RazorInjectionAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15744))
// CS Name: JetBrains.Annotations.RazorInjectionAttribute
class CORDL_TYPE RazorInjectionAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RazorInjectionAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "RazorInjectionAttribute", modifiers: " const&", def_value: None }]
constexpr RazorInjectionAttribute(RazorInjectionAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RazorInjectionAttribute", modifiers: "&&", def_value: None }]
constexpr RazorInjectionAttribute(RazorInjectionAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RazorInjectionAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr RazorInjectionAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RazorInjectionAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RazorInjectionAttribute& operator=(RazorInjectionAttribute&& o) noexcept = default;
  constexpr RazorInjectionAttribute& operator=(RazorInjectionAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Type_k__BackingField, put=__set__Type_k__BackingField))  _Type_k__BackingField;

constexpr void __set__Type_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Type_k__BackingField() const;

 ::StringW __declspec(property(get=__get__FieldName_k__BackingField, put=__set__FieldName_k__BackingField))  _FieldName_k__BackingField;

constexpr void __set__FieldName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__FieldName_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_Type, put=set_Type))  Type;

 ::StringW __declspec(property(get=get_FieldName, put=set_FieldName))  FieldName;


// Methods

// Ctor Parameters [CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "fieldName", ty: "::StringW", modifiers: "", def_value: None }]
explicit RazorInjectionAttribute(::StringW type, ::StringW fieldName) ;

/// @brief Method .ctor addr 0x2d413ac size 0x2c virtual false final false
 void _ctor(::StringW type, ::StringW fieldName) ;

/// @brief Method get_Type addr 0x2d413d8 size 0x8 virtual false final false
 ::StringW get_Type() ;

/// @brief Method set_Type addr 0x2d413e0 size 0x8 virtual false final false
 void set_Type(::StringW value) ;

/// @brief Method get_FieldName addr 0x2d413e8 size 0x8 virtual false final false
 ::StringW get_FieldName() ;

/// @brief Method set_FieldName addr 0x2d413f0 size 0x8 virtual false final false
 void set_FieldName(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::RazorInjectionAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::RazorInjectionAttribute, "JetBrains.Annotations", "RazorInjectionAttribute");
