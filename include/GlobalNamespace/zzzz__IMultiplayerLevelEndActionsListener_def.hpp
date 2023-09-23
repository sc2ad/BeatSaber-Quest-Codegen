#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
// Forward declare root types
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsListener;
}
// Type: ::IMultiplayerLevelEndActionsListener
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5257))
// CS Name: IMultiplayerLevelEndActionsListener
class CORDL_TYPE IMultiplayerLevelEndActionsListener : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IMultiplayerLevelEndActionsListener() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMultiplayerLevelEndActionsListener(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method ReportPlayerDidFinish addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReportPlayerDidFinish(GlobalNamespace::MultiplayerLevelCompletionResults results) ;

/// @brief Method ReportPlayerNetworkDidFailed addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReportPlayerNetworkDidFailed(GlobalNamespace::MultiplayerLevelCompletionResults results) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IMultiplayerLevelEndActionsListener);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IMultiplayerLevelEndActionsListener, "", "IMultiplayerLevelEndActionsListener");
