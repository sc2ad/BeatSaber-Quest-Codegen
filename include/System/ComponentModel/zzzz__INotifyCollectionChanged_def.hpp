#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace System::ComponentModel {
class NotifyCollectionChangedEventHandler;
}
// Forward declare root types
namespace System::ComponentModel {
class INotifyCollectionChanged;
}
// Type: System.ComponentModel::INotifyCollectionChanged
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11729))
// CS Name: System.ComponentModel.INotifyCollectionChanged
class CORDL_TYPE INotifyCollectionChanged : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INotifyCollectionChanged() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INotifyCollectionChanged(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method add_CollectionChanged addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_CollectionChanged(System::ComponentModel::NotifyCollectionChangedEventHandler value) ;

/// @brief Method remove_CollectionChanged addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_CollectionChanged(System::ComponentModel::NotifyCollectionChangedEventHandler value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::INotifyCollectionChanged);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::INotifyCollectionChanged, "System.ComponentModel", "INotifyCollectionChanged");
