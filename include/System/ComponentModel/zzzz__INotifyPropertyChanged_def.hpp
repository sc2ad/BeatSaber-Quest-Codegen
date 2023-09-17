#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace System::ComponentModel {
class INotifyPropertyChanged;
}
// Type: System.ComponentModel::INotifyPropertyChanged
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8316))
// CS Name: System.ComponentModel.INotifyPropertyChanged
class CORDL_TYPE INotifyPropertyChanged : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INotifyPropertyChanged() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INotifyPropertyChanged(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::INotifyPropertyChanged);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::INotifyPropertyChanged, "System.ComponentModel", "INotifyPropertyChanged");
