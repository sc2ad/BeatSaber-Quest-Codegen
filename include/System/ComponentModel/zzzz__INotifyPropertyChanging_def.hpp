#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace System::ComponentModel {
class PropertyChangingEventHandler;
}
// Forward declare root types
namespace System::ComponentModel {
class INotifyPropertyChanging;
}
// Type: System.ComponentModel::INotifyPropertyChanging
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11730))
// CS Name: System.ComponentModel.INotifyPropertyChanging
class CORDL_TYPE INotifyPropertyChanging : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INotifyPropertyChanging() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INotifyPropertyChanging(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method add_PropertyChanging addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_PropertyChanging(System::ComponentModel::PropertyChangingEventHandler value) ;

/// @brief Method remove_PropertyChanging addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_PropertyChanging(System::ComponentModel::PropertyChangingEventHandler value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::INotifyPropertyChanging);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::INotifyPropertyChanging, "System.ComponentModel", "INotifyPropertyChanging");
