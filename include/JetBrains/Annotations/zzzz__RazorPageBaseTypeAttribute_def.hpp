#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class RazorPageBaseTypeAttribute;
}
// Type: JetBrains.Annotations::RazorPageBaseTypeAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15746))
// CS Name: JetBrains.Annotations.RazorPageBaseTypeAttribute
class CORDL_TYPE RazorPageBaseTypeAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RazorPageBaseTypeAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "RazorPageBaseTypeAttribute", modifiers: " const&", def_value: None }]
constexpr RazorPageBaseTypeAttribute(RazorPageBaseTypeAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RazorPageBaseTypeAttribute", modifiers: "&&", def_value: None }]
constexpr RazorPageBaseTypeAttribute(RazorPageBaseTypeAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RazorPageBaseTypeAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr RazorPageBaseTypeAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RazorPageBaseTypeAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RazorPageBaseTypeAttribute& operator=(RazorPageBaseTypeAttribute&& o) noexcept = default;
  constexpr RazorPageBaseTypeAttribute& operator=(RazorPageBaseTypeAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__BaseType_k__BackingField, put=__set__BaseType_k__BackingField))  _BaseType_k__BackingField;

constexpr void __set__BaseType_k__BackingField(::StringW value) ;

constexpr ::StringW __get__BaseType_k__BackingField() const;

 ::StringW __declspec(property(get=__get__PageName_k__BackingField, put=__set__PageName_k__BackingField))  _PageName_k__BackingField;

constexpr void __set__PageName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__PageName_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_BaseType, put=set_BaseType))  BaseType;

 ::StringW __declspec(property(get=get_PageName, put=set_PageName))  PageName;


// Methods

static JetBrains::Annotations::RazorPageBaseTypeAttribute New_ctor(::StringW baseType) ;

/// @brief Method .ctor addr 0x2d41430 size 0x28 virtual false final false
 void _ctor(::StringW baseType) ;

static JetBrains::Annotations::RazorPageBaseTypeAttribute New_ctor(::StringW baseType, ::StringW pageName) ;

/// @brief Method .ctor addr 0x2d41458 size 0x2c virtual false final false
 void _ctor(::StringW baseType, ::StringW pageName) ;

/// @brief Method get_BaseType addr 0x2d41484 size 0x8 virtual false final false
 ::StringW get_BaseType() ;

/// @brief Method set_BaseType addr 0x2d4148c size 0x8 virtual false final false
 void set_BaseType(::StringW value) ;

/// @brief Method get_PageName addr 0x2d41494 size 0x8 virtual false final false
 ::StringW get_PageName() ;

/// @brief Method set_PageName addr 0x2d4149c size 0x8 virtual false final false
 void set_PageName(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::RazorPageBaseTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::RazorPageBaseTypeAttribute, "JetBrains.Annotations", "RazorPageBaseTypeAttribute");
