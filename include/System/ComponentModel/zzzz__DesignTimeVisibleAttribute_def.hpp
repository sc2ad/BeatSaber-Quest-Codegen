#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::ComponentModel {
class DesignTimeVisibleAttribute;
}
// Type: System.ComponentModel::DesignTimeVisibleAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8271))
// CS Name: System.ComponentModel.DesignTimeVisibleAttribute
class CORDL_TYPE DesignTimeVisibleAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DesignTimeVisibleAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "DesignTimeVisibleAttribute", modifiers: " const&", def_value: None }]
constexpr DesignTimeVisibleAttribute(DesignTimeVisibleAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DesignTimeVisibleAttribute", modifiers: "&&", def_value: None }]
constexpr DesignTimeVisibleAttribute(DesignTimeVisibleAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DesignTimeVisibleAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr DesignTimeVisibleAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DesignTimeVisibleAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DesignTimeVisibleAttribute& operator=(DesignTimeVisibleAttribute&& o) noexcept = default;
  constexpr DesignTimeVisibleAttribute& operator=(DesignTimeVisibleAttribute const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__Visible_k__BackingField, put=__set__Visible_k__BackingField))  _Visible_k__BackingField;

constexpr void __set__Visible_k__BackingField(bool value) ;

constexpr bool __get__Visible_k__BackingField() const;

static ::System::ComponentModel::DesignTimeVisibleAttribute __declspec(property(get=__get_Yes, put=__set_Yes))  Yes;

static void __set_Yes(::System::ComponentModel::DesignTimeVisibleAttribute value) ;

static ::System::ComponentModel::DesignTimeVisibleAttribute __get_Yes() ;

static ::System::ComponentModel::DesignTimeVisibleAttribute __declspec(property(get=__get_No, put=__set_No))  No;

static void __set_No(::System::ComponentModel::DesignTimeVisibleAttribute value) ;

static ::System::ComponentModel::DesignTimeVisibleAttribute __get_No() ;

static ::System::ComponentModel::DesignTimeVisibleAttribute __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(::System::ComponentModel::DesignTimeVisibleAttribute value) ;

static ::System::ComponentModel::DesignTimeVisibleAttribute __get_Default() ;


// Properties

 bool __declspec(property(get=get_Visible))  Visible;


// Methods

// Ctor Parameters [CppParam { name: "visible", ty: "bool", modifiers: "", def_value: None }]
explicit DesignTimeVisibleAttribute(bool visible) ;

/// @brief Method .ctor addr 0x277be9c size 0x28 virtual false final false
 void _ctor(bool visible) ;

/// @brief Method get_Visible addr 0x277bec4 size 0x8 virtual false final false
 bool get_Visible() ;

/// @brief Method Equals addr 0x277becc size 0x98 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x277bf64 size 0x9c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method IsDefaultAttribute addr 0x277c000 size 0x80 virtual true final false
 bool IsDefaultAttribute() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::DesignTimeVisibleAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DesignTimeVisibleAttribute, "System.ComponentModel", "DesignTimeVisibleAttribute");
