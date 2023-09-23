#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class HtmlElementAttributesAttribute;
}
// Type: JetBrains.Annotations::HtmlElementAttributesAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15722))
// CS Name: JetBrains.Annotations.HtmlElementAttributesAttribute
class CORDL_TYPE HtmlElementAttributesAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HtmlElementAttributesAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "HtmlElementAttributesAttribute", modifiers: " const&", def_value: None }]
constexpr HtmlElementAttributesAttribute(HtmlElementAttributesAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HtmlElementAttributesAttribute", modifiers: "&&", def_value: None }]
constexpr HtmlElementAttributesAttribute(HtmlElementAttributesAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HtmlElementAttributesAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr HtmlElementAttributesAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HtmlElementAttributesAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HtmlElementAttributesAttribute& operator=(HtmlElementAttributesAttribute&& o) noexcept = default;
  constexpr HtmlElementAttributesAttribute& operator=(HtmlElementAttributesAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Name_k__BackingField, put=__set__Name_k__BackingField))  _Name_k__BackingField;

constexpr void __set__Name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Name_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_Name, put=set_Name))  Name;


// Methods

// Ctor Parameters []
explicit HtmlElementAttributesAttribute() ;

/// @brief Method .ctor addr 0x2d41168 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
explicit HtmlElementAttributesAttribute(::StringW name) ;

/// @brief Method .ctor addr 0x2d41170 size 0x28 virtual false final false
 void _ctor(::StringW name) ;

/// @brief Method get_Name addr 0x2d41198 size 0x8 virtual false final false
 ::StringW get_Name() ;

/// @brief Method set_Name addr 0x2d411a0 size 0x8 virtual false final false
 void set_Name(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::HtmlElementAttributesAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::HtmlElementAttributesAttribute, "JetBrains.Annotations", "HtmlElementAttributesAttribute");
