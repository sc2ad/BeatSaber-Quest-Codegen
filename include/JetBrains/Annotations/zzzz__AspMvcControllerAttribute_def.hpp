#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcControllerAttribute;
}
// Type: JetBrains.Annotations::AspMvcControllerAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15710))
// CS Name: JetBrains.Annotations.AspMvcControllerAttribute
class CORDL_TYPE AspMvcControllerAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AspMvcControllerAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcControllerAttribute", modifiers: " const&", def_value: None }]
constexpr AspMvcControllerAttribute(AspMvcControllerAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcControllerAttribute", modifiers: "&&", def_value: None }]
constexpr AspMvcControllerAttribute(AspMvcControllerAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AspMvcControllerAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr AspMvcControllerAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AspMvcControllerAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AspMvcControllerAttribute& operator=(AspMvcControllerAttribute&& o) noexcept = default;
  constexpr AspMvcControllerAttribute& operator=(AspMvcControllerAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__AnonymousProperty_k__BackingField, put=__set__AnonymousProperty_k__BackingField))  _AnonymousProperty_k__BackingField;

constexpr void __set__AnonymousProperty_k__BackingField(::StringW value) ;

constexpr ::StringW __get__AnonymousProperty_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_AnonymousProperty, put=set_AnonymousProperty))  AnonymousProperty;


// Methods

// Ctor Parameters []
explicit AspMvcControllerAttribute() ;

/// @brief Method .ctor addr 0x2d410d0 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "anonymousProperty", ty: "::StringW", modifiers: "", def_value: None }]
explicit AspMvcControllerAttribute(::StringW anonymousProperty) ;

/// @brief Method .ctor addr 0x2d410d8 size 0x28 virtual false final false
 void _ctor(::StringW anonymousProperty) ;

/// @brief Method get_AnonymousProperty addr 0x2d41100 size 0x8 virtual false final false
 ::StringW get_AnonymousProperty() ;

/// @brief Method set_AnonymousProperty addr 0x2d41108 size 0x8 virtual false final false
 void set_AnonymousProperty(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
} // end anonymous namespace
NEED_NO_BOX(::JetBrains::Annotations::AspMvcControllerAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspMvcControllerAttribute, "JetBrains.Annotations", "AspMvcControllerAttribute");
