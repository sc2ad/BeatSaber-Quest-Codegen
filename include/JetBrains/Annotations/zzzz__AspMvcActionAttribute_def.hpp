#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcActionAttribute;
}
// Type: JetBrains.Annotations::AspMvcActionAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15708))
// CS Name: JetBrains.Annotations.AspMvcActionAttribute
class CORDL_TYPE AspMvcActionAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AspMvcActionAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcActionAttribute", modifiers: " const&", def_value: None }]
constexpr AspMvcActionAttribute(AspMvcActionAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcActionAttribute", modifiers: "&&", def_value: None }]
constexpr AspMvcActionAttribute(AspMvcActionAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AspMvcActionAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AspMvcActionAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AspMvcActionAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AspMvcActionAttribute& operator=(AspMvcActionAttribute&& o) noexcept = default;
  constexpr AspMvcActionAttribute& operator=(AspMvcActionAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__AnonymousProperty_k__BackingField, put=__set__AnonymousProperty_k__BackingField))  _AnonymousProperty_k__BackingField;

constexpr void __set__AnonymousProperty_k__BackingField(::StringW value) ;

constexpr ::StringW __get__AnonymousProperty_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_AnonymousProperty, put=set_AnonymousProperty))  AnonymousProperty;


// Methods

// Ctor Parameters []
explicit AspMvcActionAttribute() ;

/// @brief Method .ctor addr 0x2d41050 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "anonymousProperty", ty: "::StringW", modifiers: "", def_value: None }]
explicit AspMvcActionAttribute(::StringW anonymousProperty) ;

/// @brief Method .ctor addr 0x2d41058 size 0x28 virtual false final false
 void _ctor(::StringW anonymousProperty) ;

/// @brief Method get_AnonymousProperty addr 0x2d41080 size 0x8 virtual false final false
 ::StringW get_AnonymousProperty() ;

/// @brief Method set_AnonymousProperty addr 0x2d41088 size 0x8 virtual false final false
 void set_AnonymousProperty(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::AspMvcActionAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspMvcActionAttribute, "JetBrains.Annotations", "AspMvcActionAttribute");
