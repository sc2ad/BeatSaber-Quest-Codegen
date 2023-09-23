#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class LocalizationRequiredAttribute;
}
// Type: JetBrains.Annotations::LocalizationRequiredAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15687))
// CS Name: JetBrains.Annotations.LocalizationRequiredAttribute
class CORDL_TYPE LocalizationRequiredAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LocalizationRequiredAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalizationRequiredAttribute", modifiers: " const&", def_value: None }]
constexpr LocalizationRequiredAttribute(LocalizationRequiredAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalizationRequiredAttribute", modifiers: "&&", def_value: None }]
constexpr LocalizationRequiredAttribute(LocalizationRequiredAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalizationRequiredAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr LocalizationRequiredAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalizationRequiredAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalizationRequiredAttribute& operator=(LocalizationRequiredAttribute&& o) noexcept = default;
  constexpr LocalizationRequiredAttribute& operator=(LocalizationRequiredAttribute const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__Required_k__BackingField, put=__set__Required_k__BackingField))  _Required_k__BackingField;

constexpr void __set__Required_k__BackingField(bool value) ;

constexpr bool __get__Required_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_Required, put=set_Required))  Required;


// Methods

// Ctor Parameters []
explicit LocalizationRequiredAttribute() ;

/// @brief Method .ctor addr 0x2d40bb8 size 0x20 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "required", ty: "bool", modifiers: "", def_value: None }]
explicit LocalizationRequiredAttribute(bool required) ;

/// @brief Method .ctor addr 0x2d40bd8 size 0x2c virtual false final false
 void _ctor(bool required) ;

/// @brief Method get_Required addr 0x2d40c04 size 0x8 virtual false final false
 bool get_Required() ;

/// @brief Method set_Required addr 0x2d40c0c size 0xc virtual false final false
 void set_Required(bool value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::LocalizationRequiredAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::LocalizationRequiredAttribute, "JetBrains.Annotations", "LocalizationRequiredAttribute");
