#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::ComponentModel {
class SettingsBindableAttribute;
}
// Type: System.ComponentModel::SettingsBindableAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8305))
// CS Name: System.ComponentModel.SettingsBindableAttribute
class CORDL_TYPE SettingsBindableAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SettingsBindableAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "SettingsBindableAttribute", modifiers: " const&", def_value: None }]
constexpr SettingsBindableAttribute(SettingsBindableAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SettingsBindableAttribute", modifiers: "&&", def_value: None }]
constexpr SettingsBindableAttribute(SettingsBindableAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SettingsBindableAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr SettingsBindableAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SettingsBindableAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SettingsBindableAttribute& operator=(SettingsBindableAttribute&& o) noexcept = default;
  constexpr SettingsBindableAttribute& operator=(SettingsBindableAttribute const& o) noexcept = default;
                


// Fields

static ::System::ComponentModel::SettingsBindableAttribute __declspec(property(get=__get_Yes, put=__set_Yes))  Yes;

static void __set_Yes(::System::ComponentModel::SettingsBindableAttribute value) ;

static ::System::ComponentModel::SettingsBindableAttribute __get_Yes() ;

static ::System::ComponentModel::SettingsBindableAttribute __declspec(property(get=__get_No, put=__set_No))  No;

static void __set_No(::System::ComponentModel::SettingsBindableAttribute value) ;

static ::System::ComponentModel::SettingsBindableAttribute __get_No() ;

 bool __declspec(property(get=__get__Bindable_k__BackingField, put=__set__Bindable_k__BackingField))  _Bindable_k__BackingField;

constexpr void __set__Bindable_k__BackingField(bool value) ;

constexpr bool __get__Bindable_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_Bindable))  Bindable;


// Methods

// Ctor Parameters [CppParam { name: "bindable", ty: "bool", modifiers: "", def_value: None }]
explicit SettingsBindableAttribute(bool bindable) ;

/// @brief Method .ctor addr 0x278589c size 0x28 virtual false final false
 void _ctor(bool bindable) ;

/// @brief Method get_Bindable addr 0x27858c4 size 0x8 virtual false final false
 bool get_Bindable() ;

/// @brief Method Equals addr 0x27858cc size 0x8c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2785958 size 0x20 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::SettingsBindableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::SettingsBindableAttribute, "System.ComponentModel", "SettingsBindableAttribute");
