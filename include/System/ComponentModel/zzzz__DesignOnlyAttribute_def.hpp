#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::ComponentModel {
class DesignOnlyAttribute;
}
// Type: System.ComponentModel::DesignOnlyAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8240))
// CS Name: System.ComponentModel.DesignOnlyAttribute
class CORDL_TYPE DesignOnlyAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DesignOnlyAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "DesignOnlyAttribute", modifiers: " const&", def_value: None }]
constexpr DesignOnlyAttribute(DesignOnlyAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DesignOnlyAttribute", modifiers: "&&", def_value: None }]
constexpr DesignOnlyAttribute(DesignOnlyAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DesignOnlyAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr DesignOnlyAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DesignOnlyAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DesignOnlyAttribute& operator=(DesignOnlyAttribute&& o) noexcept = default;
  constexpr DesignOnlyAttribute& operator=(DesignOnlyAttribute const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__IsDesignOnly_k__BackingField, put=__set__IsDesignOnly_k__BackingField))  _IsDesignOnly_k__BackingField;

constexpr void __set__IsDesignOnly_k__BackingField(bool value) ;

constexpr bool __get__IsDesignOnly_k__BackingField() const;

static ::System::ComponentModel::DesignOnlyAttribute __declspec(property(get=__get_Yes, put=__set_Yes))  Yes;

static void __set_Yes(::System::ComponentModel::DesignOnlyAttribute value) ;

static ::System::ComponentModel::DesignOnlyAttribute __get_Yes() ;

static ::System::ComponentModel::DesignOnlyAttribute __declspec(property(get=__get_No, put=__set_No))  No;

static void __set_No(::System::ComponentModel::DesignOnlyAttribute value) ;

static ::System::ComponentModel::DesignOnlyAttribute __get_No() ;

static ::System::ComponentModel::DesignOnlyAttribute __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(::System::ComponentModel::DesignOnlyAttribute value) ;

static ::System::ComponentModel::DesignOnlyAttribute __get_Default() ;


// Properties

 bool __declspec(property(get=get_IsDesignOnly))  IsDesignOnly;


// Methods

// Ctor Parameters [CppParam { name: "isDesignOnly", ty: "bool", modifiers: "", def_value: None }]
explicit DesignOnlyAttribute(bool isDesignOnly) ;

/// @brief Method .ctor addr 0x2771a74 size 0x28 virtual false final false
 void _ctor(bool isDesignOnly) ;

/// @brief Method get_IsDesignOnly addr 0x2771a9c size 0x8 virtual false final false
 bool get_IsDesignOnly() ;

/// @brief Method Equals addr 0x2771aa4 size 0xe4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2771b88 size 0x20 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method IsDefaultAttribute addr 0x2771ba8 size 0x80 virtual true final false
 bool IsDefaultAttribute() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::DesignOnlyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DesignOnlyAttribute, "System.ComponentModel", "DesignOnlyAttribute");
