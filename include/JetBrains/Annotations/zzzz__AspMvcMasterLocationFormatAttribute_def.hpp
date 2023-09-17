#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcMasterLocationFormatAttribute;
}
// Type: JetBrains.Annotations::AspMvcMasterLocationFormatAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15705))
// CS Name: JetBrains.Annotations.AspMvcMasterLocationFormatAttribute
class CORDL_TYPE AspMvcMasterLocationFormatAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AspMvcMasterLocationFormatAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcMasterLocationFormatAttribute", modifiers: " const&", def_value: None }]
constexpr AspMvcMasterLocationFormatAttribute(AspMvcMasterLocationFormatAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcMasterLocationFormatAttribute", modifiers: "&&", def_value: None }]
constexpr AspMvcMasterLocationFormatAttribute(AspMvcMasterLocationFormatAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AspMvcMasterLocationFormatAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr AspMvcMasterLocationFormatAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AspMvcMasterLocationFormatAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AspMvcMasterLocationFormatAttribute& operator=(AspMvcMasterLocationFormatAttribute&& o) noexcept = default;
  constexpr AspMvcMasterLocationFormatAttribute& operator=(AspMvcMasterLocationFormatAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Format_k__BackingField, put=__set__Format_k__BackingField))  _Format_k__BackingField;

constexpr void __set__Format_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Format_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_Format, put=set_Format))  Format;


// Methods

// Ctor Parameters [CppParam { name: "format", ty: "::StringW", modifiers: "", def_value: None }]
explicit AspMvcMasterLocationFormatAttribute(::StringW format) ;

/// @brief Method .ctor addr 0x2d40fa8 size 0x28 virtual false final false
 void _ctor(::StringW format) ;

/// @brief Method get_Format addr 0x2d40fd0 size 0x8 virtual false final false
 ::StringW get_Format() ;

/// @brief Method set_Format addr 0x2d40fd8 size 0x8 virtual false final false
 void set_Format(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
} // end anonymous namespace
NEED_NO_BOX(::JetBrains::Annotations::AspMvcMasterLocationFormatAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspMvcMasterLocationFormatAttribute, "JetBrains.Annotations", "AspMvcMasterLocationFormatAttribute");
