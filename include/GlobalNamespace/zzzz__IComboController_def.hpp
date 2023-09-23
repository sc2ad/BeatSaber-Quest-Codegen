#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class IComboController;
}
// Type: ::IComboController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5406))
// CS Name: IComboController
class CORDL_TYPE IComboController : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IComboController() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IComboController(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method add_comboDidChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_comboDidChangeEvent(System::Action_1<int32_t> value) ;

/// @brief Method remove_comboDidChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_comboDidChangeEvent(System::Action_1<int32_t> value) ;

/// @brief Method add_comboBreakingEventHappenedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_comboBreakingEventHappenedEvent(System::Action value) ;

/// @brief Method remove_comboBreakingEventHappenedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_comboBreakingEventHappenedEvent(System::Action value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IComboController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IComboController, "", "IComboController");
