#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
namespace System {
class Type;
}
// Forward declare root types
namespace JetBrains::Annotations {
class BaseTypeRequiredAttribute;
}
// Type: JetBrains.Annotations::BaseTypeRequiredAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15689))
// CS Name: JetBrains.Annotations.BaseTypeRequiredAttribute
class CORDL_TYPE BaseTypeRequiredAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BaseTypeRequiredAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseTypeRequiredAttribute", modifiers: " const&", def_value: None }]
constexpr BaseTypeRequiredAttribute(BaseTypeRequiredAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseTypeRequiredAttribute", modifiers: "&&", def_value: None }]
constexpr BaseTypeRequiredAttribute(BaseTypeRequiredAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseTypeRequiredAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr BaseTypeRequiredAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseTypeRequiredAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseTypeRequiredAttribute& operator=(BaseTypeRequiredAttribute&& o) noexcept = default;
  constexpr BaseTypeRequiredAttribute& operator=(BaseTypeRequiredAttribute const& o) noexcept = default;
                


// Fields

 ::System::Type __declspec(property(get=__get__BaseType_k__BackingField, put=__set__BaseType_k__BackingField))  _BaseType_k__BackingField;

constexpr void __set__BaseType_k__BackingField(::System::Type value) ;

constexpr ::System::Type __get__BaseType_k__BackingField() const;


// Properties

 ::System::Type __declspec(property(get=get_BaseType, put=set_BaseType))  BaseType;


// Methods

// Ctor Parameters [CppParam { name: "baseType", ty: "::System::Type", modifiers: "", def_value: None }]
explicit BaseTypeRequiredAttribute(::System::Type baseType) ;

/// @brief Method .ctor addr 0x2d40c20 size 0x28 virtual false final false
 void _ctor(::System::Type baseType) ;

/// @brief Method get_BaseType addr 0x2d40c48 size 0x8 virtual false final false
 ::System::Type get_BaseType() ;

/// @brief Method set_BaseType addr 0x2d40c50 size 0x8 virtual false final false
 void set_BaseType(::System::Type value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
} // end anonymous namespace
NEED_NO_BOX(::JetBrains::Annotations::BaseTypeRequiredAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::BaseTypeRequiredAttribute, "JetBrains.Annotations", "BaseTypeRequiredAttribute");
