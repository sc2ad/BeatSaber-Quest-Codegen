#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace System::ComponentModel {
class ReadOnlyAttribute;
}
// Type: System.ComponentModel::ReadOnlyAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8251))
// CS Name: System.ComponentModel.ReadOnlyAttribute
class CORDL_TYPE ReadOnlyAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ReadOnlyAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlyAttribute", modifiers: " const&", def_value: None }]
constexpr ReadOnlyAttribute(ReadOnlyAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlyAttribute", modifiers: "&&", def_value: None }]
constexpr ReadOnlyAttribute(ReadOnlyAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReadOnlyAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr ReadOnlyAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReadOnlyAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReadOnlyAttribute& operator=(ReadOnlyAttribute&& o) noexcept = default;
  constexpr ReadOnlyAttribute& operator=(ReadOnlyAttribute const& o) noexcept = default;
                


// Fields

static System::ComponentModel::ReadOnlyAttribute __declspec(property(get=__get_Yes, put=__set_Yes))  Yes;

static void __set_Yes(System::ComponentModel::ReadOnlyAttribute value) ;

static System::ComponentModel::ReadOnlyAttribute __get_Yes() ;

static System::ComponentModel::ReadOnlyAttribute __declspec(property(get=__get_No, put=__set_No))  No;

static void __set_No(System::ComponentModel::ReadOnlyAttribute value) ;

static System::ComponentModel::ReadOnlyAttribute __get_No() ;

static System::ComponentModel::ReadOnlyAttribute __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(System::ComponentModel::ReadOnlyAttribute value) ;

static System::ComponentModel::ReadOnlyAttribute __get_Default() ;

 bool __declspec(property(get=__get__IsReadOnly_k__BackingField, put=__set__IsReadOnly_k__BackingField))  _IsReadOnly_k__BackingField;

constexpr void __set__IsReadOnly_k__BackingField(bool value) ;

constexpr bool __get__IsReadOnly_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;


// Methods

// Ctor Parameters [CppParam { name: "isReadOnly", ty: "bool", modifiers: "", def_value: None }]
explicit ReadOnlyAttribute(bool isReadOnly) ;

/// @brief Method .ctor addr 0x27725c4 size 0x28 virtual false final false
 void _ctor(bool isReadOnly) ;

/// @brief Method get_IsReadOnly addr 0x27725ec size 0x8 virtual false final false
 bool get_IsReadOnly() ;

/// @brief Method Equals addr 0x27725f4 size 0xe4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetHashCode addr 0x27726d8 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method IsDefaultAttribute addr 0x27726e0 size 0x80 virtual true final false
 bool IsDefaultAttribute() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::ReadOnlyAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::ReadOnlyAttribute, "System.ComponentModel", "ReadOnlyAttribute");
