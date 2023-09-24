#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class TypeConverterAttribute;
}
// Type: System.ComponentModel::TypeConverterAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8309))
// CS Name: System.ComponentModel.TypeConverterAttribute
class CORDL_TYPE TypeConverterAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TypeConverterAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeConverterAttribute", modifiers: " const&", def_value: None }]
constexpr TypeConverterAttribute(TypeConverterAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeConverterAttribute", modifiers: "&&", def_value: None }]
constexpr TypeConverterAttribute(TypeConverterAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeConverterAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr TypeConverterAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeConverterAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeConverterAttribute& operator=(TypeConverterAttribute&& o) noexcept = default;
  constexpr TypeConverterAttribute& operator=(TypeConverterAttribute const& o) noexcept = default;
                


// Fields

static System::ComponentModel::TypeConverterAttribute __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(System::ComponentModel::TypeConverterAttribute value) ;

static System::ComponentModel::TypeConverterAttribute __get_Default() ;

 ::StringW __declspec(property(get=__get__ConverterTypeName_k__BackingField, put=__set__ConverterTypeName_k__BackingField))  _ConverterTypeName_k__BackingField;

constexpr void __set__ConverterTypeName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__ConverterTypeName_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_ConverterTypeName))  ConverterTypeName;


// Methods

static System::ComponentModel::TypeConverterAttribute New_ctor() ;

/// @brief Method .ctor addr 0x278645c size 0x5c virtual false final false
 void _ctor() ;

static System::ComponentModel::TypeConverterAttribute New_ctor(System::Type type) ;

/// @brief Method .ctor addr 0x27864b8 size 0x44 virtual false final false
 void _ctor(System::Type type) ;

static System::ComponentModel::TypeConverterAttribute New_ctor(::StringW typeName) ;

/// @brief Method .ctor addr 0x27864fc size 0x28 virtual false final false
 void _ctor(::StringW typeName) ;

/// @brief Method get_ConverterTypeName addr 0x2786524 size 0x8 virtual false final false
 ::StringW get_ConverterTypeName() ;

/// @brief Method Equals addr 0x278652c size 0x80 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x27865ac size 0x20 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::TypeConverterAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::TypeConverterAttribute, "System.ComponentModel", "TypeConverterAttribute");
