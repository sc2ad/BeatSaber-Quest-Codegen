#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
// Forward declare root types
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsPublisher;
}
// Type: ::IMultiplayerLevelEndActionsPublisher
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5258))
// CS Name: IMultiplayerLevelEndActionsPublisher
class CORDL_TYPE IMultiplayerLevelEndActionsPublisher : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IMultiplayerLevelEndActionsPublisher() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMultiplayerLevelEndActionsPublisher(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method add_playerDidFinishEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_playerDidFinishEvent(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

/// @brief Method remove_playerDidFinishEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_playerDidFinishEvent(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

/// @brief Method add_playerNetworkDidFailedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_playerNetworkDidFailedEvent(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

/// @brief Method remove_playerNetworkDidFailedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_playerNetworkDidFailedEvent(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IMultiplayerLevelEndActionsPublisher);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IMultiplayerLevelEndActionsPublisher, "", "IMultiplayerLevelEndActionsPublisher");
