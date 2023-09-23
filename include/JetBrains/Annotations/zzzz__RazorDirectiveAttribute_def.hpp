#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class RazorDirectiveAttribute;
}
// Type: JetBrains.Annotations::RazorDirectiveAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15745))
// CS Name: JetBrains.Annotations.RazorDirectiveAttribute
class CORDL_TYPE RazorDirectiveAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RazorDirectiveAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "RazorDirectiveAttribute", modifiers: " const&", def_value: None }]
constexpr RazorDirectiveAttribute(RazorDirectiveAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RazorDirectiveAttribute", modifiers: "&&", def_value: None }]
constexpr RazorDirectiveAttribute(RazorDirectiveAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RazorDirectiveAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr RazorDirectiveAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RazorDirectiveAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RazorDirectiveAttribute& operator=(RazorDirectiveAttribute&& o) noexcept = default;
  constexpr RazorDirectiveAttribute& operator=(RazorDirectiveAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Directive_k__BackingField, put=__set__Directive_k__BackingField))  _Directive_k__BackingField;

constexpr void __set__Directive_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Directive_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_Directive, put=set_Directive))  Directive;


// Methods

// Ctor Parameters [CppParam { name: "directive", ty: "::StringW", modifiers: "", def_value: None }]
explicit RazorDirectiveAttribute(::StringW directive) ;

/// @brief Method .ctor addr 0x2d413f8 size 0x28 virtual false final false
 void _ctor(::StringW directive) ;

/// @brief Method get_Directive addr 0x2d41420 size 0x8 virtual false final false
 ::StringW get_Directive() ;

/// @brief Method set_Directive addr 0x2d41428 size 0x8 virtual false final false
 void set_Directive(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::RazorDirectiveAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::RazorDirectiveAttribute, "JetBrains.Annotations", "RazorDirectiveAttribute");
