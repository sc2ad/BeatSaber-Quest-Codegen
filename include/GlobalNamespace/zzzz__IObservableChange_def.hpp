#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class IObservableChange;
}
// Type: ::IObservableChange
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13901))
// CS Name: IObservableChange
class CORDL_TYPE IObservableChange : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IObservableChange() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IObservableChange(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method add_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_didChangeEvent(System::Action value) ;

/// @brief Method remove_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_didChangeEvent(System::Action value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IObservableChange);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IObservableChange, "", "IObservableChange");
