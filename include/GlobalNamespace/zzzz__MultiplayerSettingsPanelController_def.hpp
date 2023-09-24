#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class ServerCodeView;
}
namespace HMUI {
class ToggleBinder;
}
namespace GlobalNamespace {
class ILobbyPlayerData;
}
namespace GlobalNamespace {
class IRefreshable;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerSettingsPanelController;
}
// Type: ::MultiplayerSettingsPanelController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5734))
// CS Name: MultiplayerSettingsPanelController
class CORDL_TYPE MultiplayerSettingsPanelController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IRefreshable
constexpr operator  GlobalNamespace::IRefreshable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~MultiplayerSettingsPanelController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerSettingsPanelController", modifiers: " const&", def_value: None }]
constexpr MultiplayerSettingsPanelController(MultiplayerSettingsPanelController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerSettingsPanelController", modifiers: "&&", def_value: None }]
constexpr MultiplayerSettingsPanelController(MultiplayerSettingsPanelController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerSettingsPanelController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerSettingsPanelController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerSettingsPanelController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerSettingsPanelController& operator=(MultiplayerSettingsPanelController&& o) noexcept = default;
  constexpr MultiplayerSettingsPanelController& operator=(MultiplayerSettingsPanelController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ServerCodeView __declspec(property(get=__get__serverCodeView, put=__set__serverCodeView))  _serverCodeView;

constexpr void __set__serverCodeView(GlobalNamespace::ServerCodeView value) ;

constexpr GlobalNamespace::ServerCodeView __get__serverCodeView() const;

 UnityEngine::UI::Toggle __declspec(property(get=__get__spectateToggle, put=__set__spectateToggle))  _spectateToggle;

constexpr void __set__spectateToggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__spectateToggle() const;

 UnityEngine::GameObject __declspec(property(get=__get__connectionSettingsWrapper, put=__set__connectionSettingsWrapper))  _connectionSettingsWrapper;

constexpr void __set__connectionSettingsWrapper(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__connectionSettingsWrapper() const;

 UnityEngine::GameObject __declspec(property(get=__get__spectateSettingsWrapper, put=__set__spectateSettingsWrapper))  _spectateSettingsWrapper;

constexpr void __set__spectateSettingsWrapper(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__spectateSettingsWrapper() const;

 HMUI::ToggleBinder __declspec(property(get=__get__toggleBinder, put=__set__toggleBinder))  _toggleBinder;

constexpr void __set__toggleBinder(HMUI::ToggleBinder value) ;

constexpr HMUI::ToggleBinder __get__toggleBinder() const;

 GlobalNamespace::ILobbyPlayerData __declspec(property(get=__get__lobbyPlayerData, put=__set__lobbyPlayerData))  _lobbyPlayerData;

constexpr void __set__lobbyPlayerData(GlobalNamespace::ILobbyPlayerData value) ;

constexpr GlobalNamespace::ILobbyPlayerData __get__lobbyPlayerData() const;

 bool __declspec(property(get=__get__refreshed, put=__set__refreshed))  _refreshed;

constexpr void __set__refreshed(bool value) ;

constexpr bool __get__refreshed() const;

 System::Action_1<bool> __declspec(property(get=__get_playerActiveStateChangedEvent, put=__set_playerActiveStateChangedEvent))  playerActiveStateChangedEvent;

constexpr void __set_playerActiveStateChangedEvent(System::Action_1<bool> value) ;

constexpr System::Action_1<bool> __get_playerActiveStateChangedEvent() const;


// Methods

/// @brief Method add_playerActiveStateChangedEvent addr 0x215d684 size 0xb0 virtual false final false
 void add_playerActiveStateChangedEvent(System::Action_1<bool> value) ;

/// @brief Method remove_playerActiveStateChangedEvent addr 0x215d734 size 0xb0 virtual false final false
 void remove_playerActiveStateChangedEvent(System::Action_1<bool> value) ;

/// @brief Method SetLobbyPlayerDataModel addr 0x215d7e4 size 0xc virtual false final false
 void SetLobbyPlayerDataModel(GlobalNamespace::ILobbyPlayerData lobbyPlayerData) ;

/// @brief Method HideConnectionSettings addr 0x215d8fc size 0x24 virtual false final false
 void HideConnectionSettings(bool hide) ;

/// @brief Method HideSpectateSettings addr 0x215d920 size 0x24 virtual false final false
 void HideSpectateSettings(bool hide) ;

/// @brief Method SetLobbyCode addr 0x215d944 size 0x1c virtual false final false
 void SetLobbyCode(::StringW code) ;

/// @brief Method Awake addr 0x215d960 size 0xc4 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x215da24 size 0x14 virtual false final false
 void OnDestroy() ;

/// @brief Method UpdateLocalPlayerIsActiveState addr 0x215da38 size 0x24 virtual false final false
 void UpdateLocalPlayerIsActiveState(bool isActive) ;

/// @brief Method Refresh addr 0x215d7f0 size 0x10c virtual true final true
 void Refresh() ;

static GlobalNamespace::MultiplayerSettingsPanelController New_ctor() ;

/// @brief Method .ctor addr 0x215da5c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Awake>b__14_0 addr 0x215da64 size 0x24 virtual false final false
 void _Awake_b__14_0(bool on) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerSettingsPanelController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerSettingsPanelController, "", "MultiplayerSettingsPanelController");
