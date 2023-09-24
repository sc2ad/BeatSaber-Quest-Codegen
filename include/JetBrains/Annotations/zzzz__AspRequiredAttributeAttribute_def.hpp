#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class AspRequiredAttributeAttribute;
}
// Type: JetBrains.Annotations::AspRequiredAttributeAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15741))
// CS Name: JetBrains.Annotations.AspRequiredAttributeAttribute
class CORDL_TYPE AspRequiredAttributeAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AspRequiredAttributeAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AspRequiredAttributeAttribute", modifiers: " const&", def_value: None }]
constexpr AspRequiredAttributeAttribute(AspRequiredAttributeAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AspRequiredAttributeAttribute", modifiers: "&&", def_value: None }]
constexpr AspRequiredAttributeAttribute(AspRequiredAttributeAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AspRequiredAttributeAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AspRequiredAttributeAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AspRequiredAttributeAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AspRequiredAttributeAttribute& operator=(AspRequiredAttributeAttribute&& o) noexcept = default;
  constexpr AspRequiredAttributeAttribute& operator=(AspRequiredAttributeAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Attribute_k__BackingField, put=__set__Attribute_k__BackingField))  _Attribute_k__BackingField;

constexpr void __set__Attribute_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Attribute_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_Attribute, put=set_Attribute))  Attribute;


// Methods

static JetBrains::Annotations::AspRequiredAttributeAttribute New_ctor(::StringW attribute) ;

/// @brief Method .ctor addr 0x2d412fc size 0x28 virtual false final false
 void _ctor(::StringW attribute) ;

/// @brief Method get_Attribute addr 0x2d41324 size 0x8 virtual false final false
 ::StringW get_Attribute() ;

/// @brief Method set_Attribute addr 0x2d4132c size 0x8 virtual false final false
 void set_Attribute(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::AspRequiredAttributeAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspRequiredAttributeAttribute, "JetBrains.Annotations", "AspRequiredAttributeAttribute");
