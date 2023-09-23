#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcAreaPartialViewLocationFormatAttribute;
}
// Type: JetBrains.Annotations::AspMvcAreaPartialViewLocationFormatAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15703))
// CS Name: JetBrains.Annotations.AspMvcAreaPartialViewLocationFormatAttribute
class CORDL_TYPE AspMvcAreaPartialViewLocationFormatAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AspMvcAreaPartialViewLocationFormatAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcAreaPartialViewLocationFormatAttribute", modifiers: " const&", def_value: None }]
constexpr AspMvcAreaPartialViewLocationFormatAttribute(AspMvcAreaPartialViewLocationFormatAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcAreaPartialViewLocationFormatAttribute", modifiers: "&&", def_value: None }]
constexpr AspMvcAreaPartialViewLocationFormatAttribute(AspMvcAreaPartialViewLocationFormatAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AspMvcAreaPartialViewLocationFormatAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AspMvcAreaPartialViewLocationFormatAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AspMvcAreaPartialViewLocationFormatAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AspMvcAreaPartialViewLocationFormatAttribute& operator=(AspMvcAreaPartialViewLocationFormatAttribute&& o) noexcept = default;
  constexpr AspMvcAreaPartialViewLocationFormatAttribute& operator=(AspMvcAreaPartialViewLocationFormatAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Format_k__BackingField, put=__set__Format_k__BackingField))  _Format_k__BackingField;

constexpr void __set__Format_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Format_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_Format, put=set_Format))  Format;


// Methods

// Ctor Parameters [CppParam { name: "format", ty: "::StringW", modifiers: "", def_value: None }]
explicit AspMvcAreaPartialViewLocationFormatAttribute(::StringW format) ;

/// @brief Method .ctor addr 0x2d40f38 size 0x28 virtual false final false
 void _ctor(::StringW format) ;

/// @brief Method get_Format addr 0x2d40f60 size 0x8 virtual false final false
 ::StringW get_Format() ;

/// @brief Method set_Format addr 0x2d40f68 size 0x8 virtual false final false
 void set_Format(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::AspMvcAreaPartialViewLocationFormatAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspMvcAreaPartialViewLocationFormatAttribute, "JetBrains.Annotations", "AspMvcAreaPartialViewLocationFormatAttribute");
