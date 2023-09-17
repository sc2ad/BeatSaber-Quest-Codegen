#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace JetBrains::Annotations {
class HtmlAttributeValueAttribute;
}
// Type: JetBrains.Annotations::HtmlAttributeValueAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15723))
// CS Name: JetBrains.Annotations.HtmlAttributeValueAttribute
class CORDL_TYPE HtmlAttributeValueAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HtmlAttributeValueAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "HtmlAttributeValueAttribute", modifiers: " const&", def_value: None }]
constexpr HtmlAttributeValueAttribute(HtmlAttributeValueAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HtmlAttributeValueAttribute", modifiers: "&&", def_value: None }]
constexpr HtmlAttributeValueAttribute(HtmlAttributeValueAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HtmlAttributeValueAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr HtmlAttributeValueAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HtmlAttributeValueAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HtmlAttributeValueAttribute& operator=(HtmlAttributeValueAttribute&& o) noexcept = default;
  constexpr HtmlAttributeValueAttribute& operator=(HtmlAttributeValueAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Name_k__BackingField, put=__set__Name_k__BackingField))  _Name_k__BackingField;

constexpr void __set__Name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Name_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_Name, put=set_Name))  Name;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
explicit HtmlAttributeValueAttribute(::StringW name) ;

/// @brief Method .ctor addr 0x2d411a8 size 0x28 virtual false final false
 void _ctor(::StringW name) ;

/// @brief Method get_Name addr 0x2d411d0 size 0x8 virtual false final false
 ::StringW get_Name() ;

/// @brief Method set_Name addr 0x2d411d8 size 0x8 virtual false final false
 void set_Name(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
} // end anonymous namespace
NEED_NO_BOX(::JetBrains::Annotations::HtmlAttributeValueAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::HtmlAttributeValueAttribute, "JetBrains.Annotations", "HtmlAttributeValueAttribute");
