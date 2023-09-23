#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace System {
struct AttributeTargets;
}
// Forward declare root types
namespace System {
class AttributeUsageAttribute;
}
// Type: System::AttributeUsageAttribute
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2355))
// CS Name: System.AttributeUsageAttribute
class CORDL_TYPE AttributeUsageAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AttributeUsageAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AttributeUsageAttribute", modifiers: " const&", def_value: None }]
constexpr AttributeUsageAttribute(AttributeUsageAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AttributeUsageAttribute", modifiers: "&&", def_value: None }]
constexpr AttributeUsageAttribute(AttributeUsageAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AttributeUsageAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AttributeUsageAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AttributeUsageAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AttributeUsageAttribute& operator=(AttributeUsageAttribute&& o) noexcept = default;
  constexpr AttributeUsageAttribute& operator=(AttributeUsageAttribute const& o) noexcept = default;
                


// Fields

 System::AttributeTargets __declspec(property(get=__get__attributeTarget, put=__set__attributeTarget))  _attributeTarget;

constexpr void __set__attributeTarget(System::AttributeTargets value) ;

constexpr System::AttributeTargets __get__attributeTarget() const;

 bool __declspec(property(get=__get__allowMultiple, put=__set__allowMultiple))  _allowMultiple;

constexpr void __set__allowMultiple(bool value) ;

constexpr bool __get__allowMultiple() const;

 bool __declspec(property(get=__get__inherited, put=__set__inherited))  _inherited;

constexpr void __set__inherited(bool value) ;

constexpr bool __get__inherited() const;

static System::AttributeUsageAttribute __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(System::AttributeUsageAttribute value) ;

static System::AttributeUsageAttribute __get_Default() ;


// Properties

 bool __declspec(property(get=get_AllowMultiple, put=set_AllowMultiple))  AllowMultiple;

 bool __declspec(property(get=get_Inherited, put=set_Inherited))  Inherited;


// Methods

// Ctor Parameters [CppParam { name: "validOn", ty: "System::AttributeTargets", modifiers: "", def_value: None }]
explicit AttributeUsageAttribute(System::AttributeTargets validOn) ;

/// @brief Method .ctor addr 0x23b4958 size 0x38 virtual false final false
 void _ctor(System::AttributeTargets validOn) ;

/// @brief Method get_AllowMultiple addr 0x23b4990 size 0x8 virtual false final false
 bool get_AllowMultiple() ;

/// @brief Method set_AllowMultiple addr 0x23b4998 size 0xc virtual false final false
 void set_AllowMultiple(bool value) ;

/// @brief Method get_Inherited addr 0x23b49a4 size 0x8 virtual false final false
 bool get_Inherited() ;

/// @brief Method set_Inherited addr 0x23b49ac size 0xc virtual false final false
 void set_Inherited(bool value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::AttributeUsageAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::AttributeUsageAttribute, "System", "AttributeUsageAttribute");
