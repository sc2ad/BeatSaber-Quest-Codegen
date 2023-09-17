#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class INetworkConfig;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::UI {
class Button;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class MultiplayerStatusData;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton;
}
namespace GlobalNamespace {
class MultiplayerModeSelectionViewController;
}
// Type: ::MenuButton
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5813))
// CS Name: MultiplayerModeSelectionViewController::MenuButton
struct CORDL_TYPE ____GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton(____GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton const&) = default;
                    constexpr ____GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton(____GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton&&) = default;
                    constexpr ____GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton& operator=(____GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton& operator=(____GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton_Unwrapped : int32_t {
__QuickPlay = 0,
__CreateServer = 1,
__JoinWithCode = 2,
__GameBrowser = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field QuickPlay offset 0
static ::GlobalNamespace::____GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton const QuickPlay;

/// @brief Field CreateServer offset 0
static ::GlobalNamespace::____GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton const CreateServer;

/// @brief Field JoinWithCode offset 0
static ::GlobalNamespace::____GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton const JoinWithCode;

/// @brief Field GameBrowser offset 0
static ::GlobalNamespace::____GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton const GameBrowser;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerModeSelectionViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5814))
// CS Name: MultiplayerModeSelectionViewController
class CORDL_TYPE MultiplayerModeSelectionViewController : public ::HMUI::ViewController {
public:
// Declarations
using MenuButton = ::GlobalNamespace::____GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~MultiplayerModeSelectionViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerModeSelectionViewController", modifiers: " const&", def_value: None }]
constexpr MultiplayerModeSelectionViewController(MultiplayerModeSelectionViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerModeSelectionViewController", modifiers: "&&", def_value: None }]
constexpr MultiplayerModeSelectionViewController(MultiplayerModeSelectionViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerModeSelectionViewController(void* ptr) noexcept : ::HMUI::ViewController(ptr) {
}


  constexpr MultiplayerModeSelectionViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerModeSelectionViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerModeSelectionViewController& operator=(MultiplayerModeSelectionViewController&& o) noexcept = default;
  constexpr MultiplayerModeSelectionViewController& operator=(MultiplayerModeSelectionViewController const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UI::Button __declspec(property(get=__get__quickPlayButton, put=__set__quickPlayButton))  _quickPlayButton;

constexpr void __set__quickPlayButton(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__quickPlayButton() const;

 ::UnityEngine::UI::Button __declspec(property(get=__get__gameBrowserButton, put=__set__gameBrowserButton))  _gameBrowserButton;

constexpr void __set__gameBrowserButton(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__gameBrowserButton() const;

 ::UnityEngine::UI::Button __declspec(property(get=__get__joinWithCodeButton, put=__set__joinWithCodeButton))  _joinWithCodeButton;

constexpr void __set__joinWithCodeButton(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__joinWithCodeButton() const;

 ::UnityEngine::UI::Button __declspec(property(get=__get__createServerButton, put=__set__createServerButton))  _createServerButton;

constexpr void __set__createServerButton(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__createServerButton() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__maintenanceMessageText, put=__set__maintenanceMessageText))  _maintenanceMessageText;

constexpr void __set__maintenanceMessageText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__maintenanceMessageText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__customServerEndPointText, put=__set__customServerEndPointText))  _customServerEndPointText;

constexpr void __set__customServerEndPointText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__customServerEndPointText() const;

 ::GlobalNamespace::INetworkConfig __declspec(property(get=__get__networkConfig, put=__set__networkConfig))  _networkConfig;

constexpr void __set__networkConfig(::GlobalNamespace::INetworkConfig value) ;

constexpr ::GlobalNamespace::INetworkConfig __get__networkConfig() const;

 ::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController,::GlobalNamespace::____GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController,::GlobalNamespace::____GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton> value) ;

constexpr ::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController,::GlobalNamespace::____GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton> __get_didFinishEvent() const;


// Methods

/// @brief Method add_didFinishEvent addr 0x217842c size 0xb0 virtual false final false
 void add_didFinishEvent(::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController,::GlobalNamespace::____GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton> value) ;

/// @brief Method remove_didFinishEvent addr 0x21784dc size 0xb0 virtual false final false
 void remove_didFinishEvent(::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController,::GlobalNamespace::____GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton> value) ;

/// @brief Method DidActivate addr 0x217858c size 0x2dc virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method SetData addr 0x2178868 size 0x26c virtual false final false
 void SetData(::GlobalNamespace::MultiplayerStatusData multiplayerStatusData) ;

/// @brief Method HandleMenuButton addr 0x2178ad4 size 0x28 virtual false final false
 void HandleMenuButton(::GlobalNamespace::____GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton menuButton) ;

// Ctor Parameters []
explicit MultiplayerModeSelectionViewController() ;

/// @brief Method .ctor addr 0x2178afc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__11_0 addr 0x2178b04 size 0x24 virtual false final false
 void _DidActivate_b__11_0() ;

/// @brief Method <DidActivate>b__11_1 addr 0x2178b28 size 0x24 virtual false final false
 void _DidActivate_b__11_1() ;

/// @brief Method <DidActivate>b__11_2 addr 0x2178b4c size 0x24 virtual false final false
 void _DidActivate_b__11_2() ;

/// @brief Method <DidActivate>b__11_3 addr 0x2178b70 size 0x24 virtual false final false
 void _DidActivate_b__11_3() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton, "", "MultiplayerModeSelectionViewController/MenuButton");
NEED_NO_BOX(::GlobalNamespace::MultiplayerModeSelectionViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerModeSelectionViewController, "", "MultiplayerModeSelectionViewController");
