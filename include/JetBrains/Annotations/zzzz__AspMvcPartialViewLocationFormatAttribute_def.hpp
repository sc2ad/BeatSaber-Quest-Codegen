#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcPartialViewLocationFormatAttribute;
}
// Type: JetBrains.Annotations::AspMvcPartialViewLocationFormatAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15706))
// CS Name: JetBrains.Annotations.AspMvcPartialViewLocationFormatAttribute
class CORDL_TYPE AspMvcPartialViewLocationFormatAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AspMvcPartialViewLocationFormatAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcPartialViewLocationFormatAttribute", modifiers: " const&", def_value: None }]
constexpr AspMvcPartialViewLocationFormatAttribute(AspMvcPartialViewLocationFormatAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcPartialViewLocationFormatAttribute", modifiers: "&&", def_value: None }]
constexpr AspMvcPartialViewLocationFormatAttribute(AspMvcPartialViewLocationFormatAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AspMvcPartialViewLocationFormatAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AspMvcPartialViewLocationFormatAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AspMvcPartialViewLocationFormatAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AspMvcPartialViewLocationFormatAttribute& operator=(AspMvcPartialViewLocationFormatAttribute&& o) noexcept = default;
  constexpr AspMvcPartialViewLocationFormatAttribute& operator=(AspMvcPartialViewLocationFormatAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Format_k__BackingField, put=__set__Format_k__BackingField))  _Format_k__BackingField;

constexpr void __set__Format_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Format_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_Format, put=set_Format))  Format;


// Methods

static JetBrains::Annotations::AspMvcPartialViewLocationFormatAttribute New_ctor(::StringW format) ;

/// @brief Method .ctor addr 0x2d40fe0 size 0x28 virtual false final false
 void _ctor(::StringW format) ;

/// @brief Method get_Format addr 0x2d41008 size 0x8 virtual false final false
 ::StringW get_Format() ;

/// @brief Method set_Format addr 0x2d41010 size 0x8 virtual false final false
 void set_Format(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::AspMvcPartialViewLocationFormatAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspMvcPartialViewLocationFormatAttribute, "JetBrains.Annotations", "AspMvcPartialViewLocationFormatAttribute");
