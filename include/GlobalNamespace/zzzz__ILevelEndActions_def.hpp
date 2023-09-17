#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class ILevelEndActions;
}
// Type: ::ILevelEndActions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5115))
// CS Name: ILevelEndActions
class CORDL_TYPE ILevelEndActions : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ILevelEndActions() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ILevelEndActions(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method add_levelFailedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_levelFailedEvent(::System::Action value) ;

/// @brief Method remove_levelFailedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_levelFailedEvent(::System::Action value) ;

/// @brief Method add_levelFinishedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_levelFinishedEvent(::System::Action value) ;

/// @brief Method remove_levelFinishedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_levelFinishedEvent(::System::Action value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ILevelEndActions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ILevelEndActions, "", "ILevelEndActions");
