#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class AspTypePropertyAttribute;
}
// Type: JetBrains.Annotations::AspTypePropertyAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15742))
// CS Name: JetBrains.Annotations.AspTypePropertyAttribute
class CORDL_TYPE AspTypePropertyAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AspTypePropertyAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AspTypePropertyAttribute", modifiers: " const&", def_value: None }]
constexpr AspTypePropertyAttribute(AspTypePropertyAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AspTypePropertyAttribute", modifiers: "&&", def_value: None }]
constexpr AspTypePropertyAttribute(AspTypePropertyAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AspTypePropertyAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AspTypePropertyAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AspTypePropertyAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AspTypePropertyAttribute& operator=(AspTypePropertyAttribute&& o) noexcept = default;
  constexpr AspTypePropertyAttribute& operator=(AspTypePropertyAttribute const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__CreateConstructorReferences_k__BackingField, put=__set__CreateConstructorReferences_k__BackingField))  _CreateConstructorReferences_k__BackingField;

constexpr void __set__CreateConstructorReferences_k__BackingField(bool value) ;

constexpr bool __get__CreateConstructorReferences_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_CreateConstructorReferences, put=set_CreateConstructorReferences))  CreateConstructorReferences;


// Methods

/// @brief Method get_CreateConstructorReferences addr 0x2d41334 size 0x8 virtual false final false
 bool get_CreateConstructorReferences() ;

/// @brief Method set_CreateConstructorReferences addr 0x2d4133c size 0xc virtual false final false
 void set_CreateConstructorReferences(bool value) ;

// Ctor Parameters [CppParam { name: "createConstructorReferences", ty: "bool", modifiers: "", def_value: None }]
explicit AspTypePropertyAttribute(bool createConstructorReferences) ;

/// @brief Method .ctor addr 0x2d41348 size 0x2c virtual false final false
 void _ctor(bool createConstructorReferences) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::AspTypePropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspTypePropertyAttribute, "JetBrains.Annotations", "AspTypePropertyAttribute");
