#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace System::ComponentModel {
class NotifyParentPropertyAttribute;
}
// Type: System.ComponentModel::NotifyParentPropertyAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8344))
// CS Name: System.ComponentModel.NotifyParentPropertyAttribute
class CORDL_TYPE NotifyParentPropertyAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~NotifyParentPropertyAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NotifyParentPropertyAttribute", modifiers: " const&", def_value: None }]
constexpr NotifyParentPropertyAttribute(NotifyParentPropertyAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NotifyParentPropertyAttribute", modifiers: "&&", def_value: None }]
constexpr NotifyParentPropertyAttribute(NotifyParentPropertyAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NotifyParentPropertyAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr NotifyParentPropertyAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NotifyParentPropertyAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NotifyParentPropertyAttribute& operator=(NotifyParentPropertyAttribute&& o) noexcept = default;
  constexpr NotifyParentPropertyAttribute& operator=(NotifyParentPropertyAttribute const& o) noexcept = default;
                


// Fields

static System::ComponentModel::NotifyParentPropertyAttribute __declspec(property(get=__get_Yes, put=__set_Yes))  Yes;

static void __set_Yes(System::ComponentModel::NotifyParentPropertyAttribute value) ;

static System::ComponentModel::NotifyParentPropertyAttribute __get_Yes() ;

static System::ComponentModel::NotifyParentPropertyAttribute __declspec(property(get=__get_No, put=__set_No))  No;

static void __set_No(System::ComponentModel::NotifyParentPropertyAttribute value) ;

static System::ComponentModel::NotifyParentPropertyAttribute __get_No() ;

static System::ComponentModel::NotifyParentPropertyAttribute __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(System::ComponentModel::NotifyParentPropertyAttribute value) ;

static System::ComponentModel::NotifyParentPropertyAttribute __get_Default() ;

 bool __declspec(property(get=__get_notifyParent, put=__set_notifyParent))  notifyParent;

constexpr void __set_notifyParent(bool value) ;

constexpr bool __get_notifyParent() const;


// Properties

 bool __declspec(property(get=get_NotifyParent))  NotifyParent;


// Methods

// Ctor Parameters [CppParam { name: "notifyParent", ty: "bool", modifiers: "", def_value: None }]
explicit NotifyParentPropertyAttribute(bool notifyParent) ;

/// @brief Method .ctor addr 0x27a7d58 size 0x28 virtual false final false
 void _ctor(bool notifyParent) ;

/// @brief Method get_NotifyParent addr 0x27a7d80 size 0x8 virtual false final false
 bool get_NotifyParent() ;

/// @brief Method Equals addr 0x27a7d88 size 0x80 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x27a7e08 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method IsDefaultAttribute addr 0x27a7e10 size 0x68 virtual true final false
 bool IsDefaultAttribute() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::NotifyParentPropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::NotifyParentPropertyAttribute, "System.ComponentModel", "NotifyParentPropertyAttribute");
