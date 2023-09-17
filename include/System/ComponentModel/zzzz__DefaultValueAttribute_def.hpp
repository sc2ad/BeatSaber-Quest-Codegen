#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::ComponentModel {
class DefaultValueAttribute;
}
// Type: System.ComponentModel::DefaultValueAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8234))
// CS Name: System.ComponentModel.DefaultValueAttribute
class CORDL_TYPE DefaultValueAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DefaultValueAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultValueAttribute", modifiers: " const&", def_value: None }]
constexpr DefaultValueAttribute(DefaultValueAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultValueAttribute", modifiers: "&&", def_value: None }]
constexpr DefaultValueAttribute(DefaultValueAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultValueAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr DefaultValueAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultValueAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultValueAttribute& operator=(DefaultValueAttribute&& o) noexcept = default;
  constexpr DefaultValueAttribute& operator=(DefaultValueAttribute const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__value() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "value", ty: "bool", modifiers: "", def_value: None }]
explicit DefaultValueAttribute(bool value) ;

/// @brief Method .ctor addr 0x2770dcc size 0x6c virtual false final false
 void _ctor(bool value) ;

// Ctor Parameters [CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }]
explicit DefaultValueAttribute(::StringW value) ;

/// @brief Method .ctor addr 0x2770e38 size 0x28 virtual false final false
 void _ctor(::StringW value) ;

// Ctor Parameters [CppParam { name: "value", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit DefaultValueAttribute(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method .ctor addr 0x2770e60 size 0x28 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_Value addr 0x2770e88 size 0x8 virtual true final false
 ::bs_hook::Il2CppWrapperType get_Value() ;

/// @brief Method Equals addr 0x2770e90 size 0x10c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2770f9c size 0x8 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::DefaultValueAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DefaultValueAttribute, "System.ComponentModel", "DefaultValueAttribute");
