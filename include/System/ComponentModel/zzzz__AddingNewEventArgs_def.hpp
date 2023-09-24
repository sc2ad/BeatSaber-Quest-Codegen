#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System::ComponentModel {
class AddingNewEventArgs;
}
// Type: System.ComponentModel::AddingNewEventArgs
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11727))
// CS Name: System.ComponentModel.AddingNewEventArgs
class CORDL_TYPE AddingNewEventArgs : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AddingNewEventArgs() = default;

// Ctor Parameters [CppParam { name: "", ty: "AddingNewEventArgs", modifiers: " const&", def_value: None }]
constexpr AddingNewEventArgs(AddingNewEventArgs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AddingNewEventArgs", modifiers: "&&", def_value: None }]
constexpr AddingNewEventArgs(AddingNewEventArgs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AddingNewEventArgs(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AddingNewEventArgs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AddingNewEventArgs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AddingNewEventArgs& operator=(AddingNewEventArgs&& o) noexcept = default;
  constexpr AddingNewEventArgs& operator=(AddingNewEventArgs const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__NewObject_k__BackingField, put=__set__NewObject_k__BackingField))  _NewObject_k__BackingField;

constexpr void __set__NewObject_k__BackingField(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__NewObject_k__BackingField() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_NewObject, put=set_NewObject))  NewObject;


// Methods

/// @brief Method get_NewObject addr 0x24c6a14 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_NewObject() ;

/// @brief Method set_NewObject addr 0x24c6a1c size 0x8 virtual false final false
 void set_NewObject(::bs_hook::Il2CppWrapperType value) ;

static System::ComponentModel::AddingNewEventArgs New_ctor() ;

/// @brief Method .ctor addr 0x24c6a24 size 0x8 virtual false final false
 void _ctor() ;

static System::ComponentModel::AddingNewEventArgs New_ctor(::bs_hook::Il2CppWrapperType newObject) ;

/// @brief Method .ctor addr 0x24c6a2c size 0x28 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType newObject) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::AddingNewEventArgs);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::AddingNewEventArgs, "System.ComponentModel", "AddingNewEventArgs");
