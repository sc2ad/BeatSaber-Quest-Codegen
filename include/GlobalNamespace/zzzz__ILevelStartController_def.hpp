#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class ILevelStartController;
}
// Type: ::ILevelStartController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5116))
// CS Name: ILevelStartController
class CORDL_TYPE ILevelStartController : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ILevelStartController() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ILevelStartController(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method add_levelWillStartIntroEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_levelWillStartIntroEvent(System::Action value) ;

/// @brief Method remove_levelWillStartIntroEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_levelWillStartIntroEvent(System::Action value) ;

/// @brief Method add_levelDidStartEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_levelDidStartEvent(System::Action value) ;

/// @brief Method remove_levelDidStartEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_levelDidStartEvent(System::Action value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ILevelStartController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ILevelStartController, "", "ILevelStartController");
