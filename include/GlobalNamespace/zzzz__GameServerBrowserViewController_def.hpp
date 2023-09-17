#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
namespace {
namespace GlobalNamespace {
class GameServersFilterText;
}
namespace GlobalNamespace {
class LoadingControl;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class GameServersListTableView;
}
// Forward declare root types
namespace GlobalNamespace {
class GameServerBrowserViewController;
}
// Type: ::GameServerBrowserViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5808))
// CS Name: GameServerBrowserViewController
class CORDL_TYPE GameServerBrowserViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~GameServerBrowserViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameServerBrowserViewController", modifiers: " const&", def_value: None }]
constexpr GameServerBrowserViewController(GameServerBrowserViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameServerBrowserViewController", modifiers: "&&", def_value: None }]
constexpr GameServerBrowserViewController(GameServerBrowserViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameServerBrowserViewController(void* ptr) noexcept : ::HMUI::ViewController(ptr) {
}


  constexpr GameServerBrowserViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameServerBrowserViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameServerBrowserViewController& operator=(GameServerBrowserViewController&& o) noexcept = default;
  constexpr GameServerBrowserViewController& operator=(GameServerBrowserViewController const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UI::Button __declspec(property(get=__get__filterServersButton, put=__set__filterServersButton))  _filterServersButton;

constexpr void __set__filterServersButton(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__filterServersButton() const;

 ::GlobalNamespace::GameServersFilterText __declspec(property(get=__get__filterText, put=__set__filterText))  _filterText;

constexpr void __set__filterText(::GlobalNamespace::GameServersFilterText value) ;

constexpr ::GlobalNamespace::GameServersFilterText __get__filterText() const;

 ::UnityEngine::UI::Toggle __declspec(property(get=__get__canBeInvitedOnLocalNetworkToggle, put=__set__canBeInvitedOnLocalNetworkToggle))  _canBeInvitedOnLocalNetworkToggle;

constexpr void __set__canBeInvitedOnLocalNetworkToggle(::UnityEngine::UI::Toggle value) ;

constexpr ::UnityEngine::UI::Toggle __get__canBeInvitedOnLocalNetworkToggle() const;

 ::UnityEngine::UI::Button __declspec(property(get=__get__createServerButton, put=__set__createServerButton))  _createServerButton;

constexpr void __set__createServerButton(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__createServerButton() const;

 ::GlobalNamespace::GameServersListTableView __declspec(property(get=__get__gameServersListTableView, put=__set__gameServersListTableView))  _gameServersListTableView;

constexpr void __set__gameServersListTableView(::GlobalNamespace::GameServersListTableView value) ;

constexpr ::GlobalNamespace::GameServersListTableView __get__gameServersListTableView() const;

 ::GlobalNamespace::LoadingControl __declspec(property(get=__get__mainLoadingControl, put=__set__mainLoadingControl))  _mainLoadingControl;

constexpr void __set__mainLoadingControl(::GlobalNamespace::LoadingControl value) ;

constexpr ::GlobalNamespace::LoadingControl __get__mainLoadingControl() const;

 ::GlobalNamespace::LoadingControl __declspec(property(get=__get__smallLoadingControl, put=__set__smallLoadingControl))  _smallLoadingControl;

constexpr void __set__smallLoadingControl(::GlobalNamespace::LoadingControl value) ;

constexpr ::GlobalNamespace::LoadingControl __get__smallLoadingControl() const;


// Methods

// Ctor Parameters []
explicit GameServerBrowserViewController() ;

/// @brief Method .ctor addr 0x21765c4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::GameServerBrowserViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerBrowserViewController, "", "GameServerBrowserViewController");
