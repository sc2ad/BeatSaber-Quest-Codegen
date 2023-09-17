#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class IMenuButtonTrigger;
}
// Type: ::IMenuButtonTrigger
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5153))
// CS Name: IMenuButtonTrigger
class CORDL_TYPE IMenuButtonTrigger : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IMenuButtonTrigger() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMenuButtonTrigger(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method add_menuButtonTriggeredEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_menuButtonTriggeredEvent(::System::Action value) ;

/// @brief Method remove_menuButtonTriggeredEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_menuButtonTriggeredEvent(::System::Action value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IMenuButtonTrigger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IMenuButtonTrigger, "", "IMenuButtonTrigger");
