#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class GameServerBrowserFlowCoordinator;
}
// Type: ::GameServerBrowserFlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13633))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5598))
// CS Name: GameServerBrowserFlowCoordinator
class CORDL_TYPE GameServerBrowserFlowCoordinator : public HMUI::FlowCoordinator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~GameServerBrowserFlowCoordinator() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameServerBrowserFlowCoordinator", modifiers: " const&", def_value: None }]
constexpr GameServerBrowserFlowCoordinator(GameServerBrowserFlowCoordinator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameServerBrowserFlowCoordinator", modifiers: "&&", def_value: None }]
constexpr GameServerBrowserFlowCoordinator(GameServerBrowserFlowCoordinator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameServerBrowserFlowCoordinator(void* ptr) noexcept : HMUI::FlowCoordinator(ptr) {
}


  constexpr GameServerBrowserFlowCoordinator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameServerBrowserFlowCoordinator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameServerBrowserFlowCoordinator& operator=(GameServerBrowserFlowCoordinator&& o) noexcept = default;
  constexpr GameServerBrowserFlowCoordinator& operator=(GameServerBrowserFlowCoordinator const& o) noexcept = default;
                


// Methods

/// @brief Method DidActivate addr 0x2136f88 size 0x4 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

static GlobalNamespace::GameServerBrowserFlowCoordinator New_ctor() ;

/// @brief Method .ctor addr 0x2136f8c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GameServerBrowserFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameServerBrowserFlowCoordinator, "", "GameServerBrowserFlowCoordinator");
