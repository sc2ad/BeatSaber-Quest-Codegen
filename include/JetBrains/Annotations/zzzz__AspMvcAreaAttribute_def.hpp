#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcAreaAttribute;
}
// Type: JetBrains.Annotations::AspMvcAreaAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15709))
// CS Name: JetBrains.Annotations.AspMvcAreaAttribute
class CORDL_TYPE AspMvcAreaAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AspMvcAreaAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcAreaAttribute", modifiers: " const&", def_value: None }]
constexpr AspMvcAreaAttribute(AspMvcAreaAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcAreaAttribute", modifiers: "&&", def_value: None }]
constexpr AspMvcAreaAttribute(AspMvcAreaAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AspMvcAreaAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AspMvcAreaAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AspMvcAreaAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AspMvcAreaAttribute& operator=(AspMvcAreaAttribute&& o) noexcept = default;
  constexpr AspMvcAreaAttribute& operator=(AspMvcAreaAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__AnonymousProperty_k__BackingField, put=__set__AnonymousProperty_k__BackingField))  _AnonymousProperty_k__BackingField;

constexpr void __set__AnonymousProperty_k__BackingField(::StringW value) ;

constexpr ::StringW __get__AnonymousProperty_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_AnonymousProperty, put=set_AnonymousProperty))  AnonymousProperty;


// Methods

static JetBrains::Annotations::AspMvcAreaAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2d41090 size 0x8 virtual false final false
 void _ctor() ;

static JetBrains::Annotations::AspMvcAreaAttribute New_ctor(::StringW anonymousProperty) ;

/// @brief Method .ctor addr 0x2d41098 size 0x28 virtual false final false
 void _ctor(::StringW anonymousProperty) ;

/// @brief Method get_AnonymousProperty addr 0x2d410c0 size 0x8 virtual false final false
 ::StringW get_AnonymousProperty() ;

/// @brief Method set_AnonymousProperty addr 0x2d410c8 size 0x8 virtual false final false
 void set_AnonymousProperty(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::AspMvcAreaAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspMvcAreaAttribute, "JetBrains.Annotations", "AspMvcAreaAttribute");
