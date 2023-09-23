#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections {
class IList;
}
namespace System::ComponentModel {
struct NotifyCollectionChangedAction;
}
// Forward declare root types
namespace System::ComponentModel {
class NotifyCollectionChangedEventArgs;
}
// Type: System.ComponentModel::NotifyCollectionChangedEventArgs
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11732))
// CS Name: System.ComponentModel.NotifyCollectionChangedEventArgs
class CORDL_TYPE NotifyCollectionChangedEventArgs : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~NotifyCollectionChangedEventArgs() = default;

// Ctor Parameters [CppParam { name: "", ty: "NotifyCollectionChangedEventArgs", modifiers: " const&", def_value: None }]
constexpr NotifyCollectionChangedEventArgs(NotifyCollectionChangedEventArgs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NotifyCollectionChangedEventArgs", modifiers: "&&", def_value: None }]
constexpr NotifyCollectionChangedEventArgs(NotifyCollectionChangedEventArgs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NotifyCollectionChangedEventArgs(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NotifyCollectionChangedEventArgs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NotifyCollectionChangedEventArgs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NotifyCollectionChangedEventArgs& operator=(NotifyCollectionChangedEventArgs&& o) noexcept = default;
  constexpr NotifyCollectionChangedEventArgs& operator=(NotifyCollectionChangedEventArgs const& o) noexcept = default;
                


// Fields

 System::ComponentModel::NotifyCollectionChangedAction __declspec(property(get=__get__Action_k__BackingField, put=__set__Action_k__BackingField))  _Action_k__BackingField;

constexpr void __set__Action_k__BackingField(System::ComponentModel::NotifyCollectionChangedAction value) ;

constexpr System::ComponentModel::NotifyCollectionChangedAction __get__Action_k__BackingField() const;

 System::Collections::IList __declspec(property(get=__get__NewItems_k__BackingField, put=__set__NewItems_k__BackingField))  _NewItems_k__BackingField;

constexpr void __set__NewItems_k__BackingField(System::Collections::IList value) ;

constexpr System::Collections::IList __get__NewItems_k__BackingField() const;

 int32_t __declspec(property(get=__get__NewStartingIndex_k__BackingField, put=__set__NewStartingIndex_k__BackingField))  _NewStartingIndex_k__BackingField;

constexpr void __set__NewStartingIndex_k__BackingField(int32_t value) ;

constexpr int32_t __get__NewStartingIndex_k__BackingField() const;

 System::Collections::IList __declspec(property(get=__get__OldItems_k__BackingField, put=__set__OldItems_k__BackingField))  _OldItems_k__BackingField;

constexpr void __set__OldItems_k__BackingField(System::Collections::IList value) ;

constexpr System::Collections::IList __get__OldItems_k__BackingField() const;

 int32_t __declspec(property(get=__get__OldStartingIndex_k__BackingField, put=__set__OldStartingIndex_k__BackingField))  _OldStartingIndex_k__BackingField;

constexpr void __set__OldStartingIndex_k__BackingField(int32_t value) ;

constexpr int32_t __get__OldStartingIndex_k__BackingField() const;


// Properties

 System::ComponentModel::NotifyCollectionChangedAction __declspec(property(get=get_Action, put=set_Action))  Action;

 System::Collections::IList __declspec(property(get=get_NewItems, put=set_NewItems))  NewItems;

 int32_t __declspec(property(get=get_NewStartingIndex, put=set_NewStartingIndex))  NewStartingIndex;

 System::Collections::IList __declspec(property(get=get_OldItems, put=set_OldItems))  OldItems;

 int32_t __declspec(property(get=get_OldStartingIndex, put=set_OldStartingIndex))  OldStartingIndex;


// Methods

/// @brief Method get_Action addr 0x24c6bcc size 0x8 virtual false final false
 System::ComponentModel::NotifyCollectionChangedAction get_Action() ;

/// @brief Method set_Action addr 0x24c6bd4 size 0x8 virtual false final false
 void set_Action(System::ComponentModel::NotifyCollectionChangedAction value) ;

/// @brief Method get_NewItems addr 0x24c6bdc size 0x8 virtual false final false
 System::Collections::IList get_NewItems() ;

/// @brief Method set_NewItems addr 0x24c6be4 size 0x8 virtual false final false
 void set_NewItems(System::Collections::IList value) ;

/// @brief Method get_NewStartingIndex addr 0x24c6bec size 0x8 virtual false final false
 int32_t get_NewStartingIndex() ;

/// @brief Method set_NewStartingIndex addr 0x24c6bf4 size 0x8 virtual false final false
 void set_NewStartingIndex(int32_t value) ;

/// @brief Method get_OldItems addr 0x24c6bfc size 0x8 virtual false final false
 System::Collections::IList get_OldItems() ;

/// @brief Method set_OldItems addr 0x24c6c04 size 0x8 virtual false final false
 void set_OldItems(System::Collections::IList value) ;

/// @brief Method get_OldStartingIndex addr 0x24c6c0c size 0x8 virtual false final false
 int32_t get_OldStartingIndex() ;

/// @brief Method set_OldStartingIndex addr 0x24c6c14 size 0x8 virtual false final false
 void set_OldStartingIndex(int32_t value) ;

// Ctor Parameters [CppParam { name: "action", ty: "System::ComponentModel::NotifyCollectionChangedAction", modifiers: "", def_value: None }]
explicit NotifyCollectionChangedEventArgs(System::ComponentModel::NotifyCollectionChangedAction action) ;

/// @brief Method .ctor addr 0x24c6c1c size 0x28 virtual false final false
 void _ctor(System::ComponentModel::NotifyCollectionChangedAction action) ;

// Ctor Parameters [CppParam { name: "action", ty: "System::ComponentModel::NotifyCollectionChangedAction", modifiers: "", def_value: None }, CppParam { name: "changedItems", ty: "System::Collections::IList", modifiers: "", def_value: None }]
explicit NotifyCollectionChangedEventArgs(System::ComponentModel::NotifyCollectionChangedAction action, System::Collections::IList changedItems) ;

/// @brief Method .ctor addr 0x24c6c44 size 0x30 virtual false final false
 void _ctor(System::ComponentModel::NotifyCollectionChangedAction action, System::Collections::IList changedItems) ;

// Ctor Parameters [CppParam { name: "action", ty: "System::ComponentModel::NotifyCollectionChangedAction", modifiers: "", def_value: None }, CppParam { name: "changedItem", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit NotifyCollectionChangedEventArgs(System::ComponentModel::NotifyCollectionChangedAction action, ::bs_hook::Il2CppWrapperType changedItem) ;

/// @brief Method .ctor addr 0x24c6c74 size 0x100 virtual false final false
 void _ctor(System::ComponentModel::NotifyCollectionChangedAction action, ::bs_hook::Il2CppWrapperType changedItem) ;

// Ctor Parameters [CppParam { name: "action", ty: "System::ComponentModel::NotifyCollectionChangedAction", modifiers: "", def_value: None }, CppParam { name: "newItems", ty: "System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "oldItems", ty: "System::Collections::IList", modifiers: "", def_value: None }]
explicit NotifyCollectionChangedEventArgs(System::ComponentModel::NotifyCollectionChangedAction action, System::Collections::IList newItems, System::Collections::IList oldItems) ;

/// @brief Method .ctor addr 0x24c6d74 size 0x40 virtual false final false
 void _ctor(System::ComponentModel::NotifyCollectionChangedAction action, System::Collections::IList newItems, System::Collections::IList oldItems) ;

// Ctor Parameters [CppParam { name: "action", ty: "System::ComponentModel::NotifyCollectionChangedAction", modifiers: "", def_value: None }, CppParam { name: "changedItems", ty: "System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "startingIndex", ty: "int32_t", modifiers: "", def_value: None }]
explicit NotifyCollectionChangedEventArgs(System::ComponentModel::NotifyCollectionChangedAction action, System::Collections::IList changedItems, int32_t startingIndex) ;

/// @brief Method .ctor addr 0x24c6db4 size 0x40 virtual false final false
 void _ctor(System::ComponentModel::NotifyCollectionChangedAction action, System::Collections::IList changedItems, int32_t startingIndex) ;

// Ctor Parameters [CppParam { name: "action", ty: "System::ComponentModel::NotifyCollectionChangedAction", modifiers: "", def_value: None }, CppParam { name: "changedItem", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
explicit NotifyCollectionChangedEventArgs(System::ComponentModel::NotifyCollectionChangedAction action, ::bs_hook::Il2CppWrapperType changedItem, int32_t index) ;

/// @brief Method .ctor addr 0x24c6df4 size 0x24 virtual false final false
 void _ctor(System::ComponentModel::NotifyCollectionChangedAction action, ::bs_hook::Il2CppWrapperType changedItem, int32_t index) ;

// Ctor Parameters [CppParam { name: "action", ty: "System::ComponentModel::NotifyCollectionChangedAction", modifiers: "", def_value: None }, CppParam { name: "newItem", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "oldItem", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit NotifyCollectionChangedEventArgs(System::ComponentModel::NotifyCollectionChangedAction action, ::bs_hook::Il2CppWrapperType newItem, ::bs_hook::Il2CppWrapperType oldItem) ;

/// @brief Method .ctor addr 0x24c6e18 size 0x10c virtual false final false
 void _ctor(System::ComponentModel::NotifyCollectionChangedAction action, ::bs_hook::Il2CppWrapperType newItem, ::bs_hook::Il2CppWrapperType oldItem) ;

// Ctor Parameters [CppParam { name: "action", ty: "System::ComponentModel::NotifyCollectionChangedAction", modifiers: "", def_value: None }, CppParam { name: "newItems", ty: "System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "oldItems", ty: "System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "startingIndex", ty: "int32_t", modifiers: "", def_value: None }]
explicit NotifyCollectionChangedEventArgs(System::ComponentModel::NotifyCollectionChangedAction action, System::Collections::IList newItems, System::Collections::IList oldItems, int32_t startingIndex) ;

/// @brief Method .ctor addr 0x24c6f24 size 0x48 virtual false final false
 void _ctor(System::ComponentModel::NotifyCollectionChangedAction action, System::Collections::IList newItems, System::Collections::IList oldItems, int32_t startingIndex) ;

// Ctor Parameters [CppParam { name: "action", ty: "System::ComponentModel::NotifyCollectionChangedAction", modifiers: "", def_value: None }, CppParam { name: "changedItems", ty: "System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "oldIndex", ty: "int32_t", modifiers: "", def_value: None }]
explicit NotifyCollectionChangedEventArgs(System::ComponentModel::NotifyCollectionChangedAction action, System::Collections::IList changedItems, int32_t index, int32_t oldIndex) ;

/// @brief Method .ctor addr 0x24c6f6c size 0x48 virtual false final false
 void _ctor(System::ComponentModel::NotifyCollectionChangedAction action, System::Collections::IList changedItems, int32_t index, int32_t oldIndex) ;

// Ctor Parameters [CppParam { name: "action", ty: "System::ComponentModel::NotifyCollectionChangedAction", modifiers: "", def_value: None }, CppParam { name: "changedItem", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "oldIndex", ty: "int32_t", modifiers: "", def_value: None }]
explicit NotifyCollectionChangedEventArgs(System::ComponentModel::NotifyCollectionChangedAction action, ::bs_hook::Il2CppWrapperType changedItem, int32_t index, int32_t oldIndex) ;

/// @brief Method .ctor addr 0x24c6fb4 size 0x2c virtual false final false
 void _ctor(System::ComponentModel::NotifyCollectionChangedAction action, ::bs_hook::Il2CppWrapperType changedItem, int32_t index, int32_t oldIndex) ;

// Ctor Parameters [CppParam { name: "action", ty: "System::ComponentModel::NotifyCollectionChangedAction", modifiers: "", def_value: None }, CppParam { name: "newItem", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "oldItem", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
explicit NotifyCollectionChangedEventArgs(System::ComponentModel::NotifyCollectionChangedAction action, ::bs_hook::Il2CppWrapperType newItem, ::bs_hook::Il2CppWrapperType oldItem, int32_t index) ;

/// @brief Method .ctor addr 0x24c6fe0 size 0x24 virtual false final false
 void _ctor(System::ComponentModel::NotifyCollectionChangedAction action, ::bs_hook::Il2CppWrapperType newItem, ::bs_hook::Il2CppWrapperType oldItem, int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::NotifyCollectionChangedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::NotifyCollectionChangedEventArgs, "System.ComponentModel", "NotifyCollectionChangedEventArgs");
