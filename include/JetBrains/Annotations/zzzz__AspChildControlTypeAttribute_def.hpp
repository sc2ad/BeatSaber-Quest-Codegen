#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Type;
}
// Forward declare root types
namespace JetBrains::Annotations {
class AspChildControlTypeAttribute;
}
// Type: JetBrains.Annotations::AspChildControlTypeAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15737))
// CS Name: JetBrains.Annotations.AspChildControlTypeAttribute
class CORDL_TYPE AspChildControlTypeAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AspChildControlTypeAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AspChildControlTypeAttribute", modifiers: " const&", def_value: None }]
constexpr AspChildControlTypeAttribute(AspChildControlTypeAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AspChildControlTypeAttribute", modifiers: "&&", def_value: None }]
constexpr AspChildControlTypeAttribute(AspChildControlTypeAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AspChildControlTypeAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AspChildControlTypeAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AspChildControlTypeAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AspChildControlTypeAttribute& operator=(AspChildControlTypeAttribute&& o) noexcept = default;
  constexpr AspChildControlTypeAttribute& operator=(AspChildControlTypeAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__TagName_k__BackingField, put=__set__TagName_k__BackingField))  _TagName_k__BackingField;

constexpr void __set__TagName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__TagName_k__BackingField() const;

 System::Type __declspec(property(get=__get__ControlType_k__BackingField, put=__set__ControlType_k__BackingField))  _ControlType_k__BackingField;

constexpr void __set__ControlType_k__BackingField(System::Type value) ;

constexpr System::Type __get__ControlType_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_TagName, put=set_TagName))  TagName;

 System::Type __declspec(property(get=get_ControlType, put=set_ControlType))  ControlType;


// Methods

// Ctor Parameters [CppParam { name: "tagName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "controlType", ty: "System::Type", modifiers: "", def_value: None }]
explicit AspChildControlTypeAttribute(::StringW tagName, System::Type controlType) ;

/// @brief Method .ctor addr 0x2d41298 size 0x2c virtual false final false
 void _ctor(::StringW tagName, System::Type controlType) ;

/// @brief Method get_TagName addr 0x2d412c4 size 0x8 virtual false final false
 ::StringW get_TagName() ;

/// @brief Method set_TagName addr 0x2d412cc size 0x8 virtual false final false
 void set_TagName(::StringW value) ;

/// @brief Method get_ControlType addr 0x2d412d4 size 0x8 virtual false final false
 System::Type get_ControlType() ;

/// @brief Method set_ControlType addr 0x2d412dc size 0x8 virtual false final false
 void set_ControlType(System::Type value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::AspChildControlTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspChildControlTypeAttribute, "JetBrains.Annotations", "AspChildControlTypeAttribute");
