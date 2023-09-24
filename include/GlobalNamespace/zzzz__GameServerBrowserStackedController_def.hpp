#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__StackedController_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class GameServerBrowserStackedController;
}
// Type: ::GameServerBrowserStackedController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13647))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5807))
// CS Name: GameServerBrowserStackedController
class CORDL_TYPE GameServerBrowserStackedController : public HMUI::StackedController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GameServerBrowserStackedController() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameServerBrowserStackedController", modifiers: " const&", def_value: None }]
constexpr GameServerBrowserStackedController(GameServerBrowserStackedController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameServerBrowserStackedController", modifiers: "&&", def_value: None }]
constexpr GameServerBrowserStackedController(GameServerBrowserStackedController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameServerBrowserStackedController(void* ptr) noexcept : HMUI::StackedController(ptr) {
}


  constexpr GameServerBrowserStackedController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameServerBrowserStackedController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameServerBrowserStackedController& operator=(GameServerBrowserStackedController&& o) noexcept = default;
  constexpr GameServerBrowserStackedController& operator=(GameServerBrowserStackedController const& o) noexcept = default;
                


// Methods

/// @brief Method DidActivate addr 0x21765b4 size 0x4 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x21765b8 size 0x4 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

static GlobalNamespace::GameServerBrowserStackedController New_ctor() ;

/// @brief Method .ctor addr 0x21765bc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GameServerBrowserStackedController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameServerBrowserStackedController, "", "GameServerBrowserStackedController");
