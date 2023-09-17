#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::ComponentModel {
class BrowsableAttribute;
}
// Type: System.ComponentModel::BrowsableAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8237))
// CS Name: System.ComponentModel.BrowsableAttribute
class CORDL_TYPE BrowsableAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BrowsableAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "BrowsableAttribute", modifiers: " const&", def_value: None }]
constexpr BrowsableAttribute(BrowsableAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BrowsableAttribute", modifiers: "&&", def_value: None }]
constexpr BrowsableAttribute(BrowsableAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BrowsableAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr BrowsableAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BrowsableAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BrowsableAttribute& operator=(BrowsableAttribute&& o) noexcept = default;
  constexpr BrowsableAttribute& operator=(BrowsableAttribute const& o) noexcept = default;
                


// Fields

static ::System::ComponentModel::BrowsableAttribute __declspec(property(get=__get_Yes, put=__set_Yes))  Yes;

static void __set_Yes(::System::ComponentModel::BrowsableAttribute value) ;

static ::System::ComponentModel::BrowsableAttribute __get_Yes() ;

static ::System::ComponentModel::BrowsableAttribute __declspec(property(get=__get_No, put=__set_No))  No;

static void __set_No(::System::ComponentModel::BrowsableAttribute value) ;

static ::System::ComponentModel::BrowsableAttribute __get_No() ;

static ::System::ComponentModel::BrowsableAttribute __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(::System::ComponentModel::BrowsableAttribute value) ;

static ::System::ComponentModel::BrowsableAttribute __get_Default() ;

 bool __declspec(property(get=__get__Browsable_k__BackingField, put=__set__Browsable_k__BackingField))  _Browsable_k__BackingField;

constexpr void __set__Browsable_k__BackingField(bool value) ;

constexpr bool __get__Browsable_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_Browsable))  Browsable;


// Methods

// Ctor Parameters [CppParam { name: "browsable", ty: "bool", modifiers: "", def_value: None }]
explicit BrowsableAttribute(bool browsable) ;

/// @brief Method .ctor addr 0x2771060 size 0x28 virtual false final false
 void _ctor(bool browsable) ;

/// @brief Method get_Browsable addr 0x2771088 size 0x8 virtual false final false
 bool get_Browsable() ;

/// @brief Method Equals addr 0x2771090 size 0xe4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2771174 size 0x20 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method IsDefaultAttribute addr 0x2771194 size 0x68 virtual true final false
 bool IsDefaultAttribute() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::BrowsableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::BrowsableAttribute, "System.ComponentModel", "BrowsableAttribute");
