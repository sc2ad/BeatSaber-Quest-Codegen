#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class PlayerSpecificSettingsAtStartNetSerializable;
}
namespace GlobalNamespace {
class PlayerSpecificSettingsNetSerializable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0;
}
namespace GlobalNamespace {
class PlayersSpecificSettingsAtGameStartModel;
}
// Type: ::<>c__DisplayClass13_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12867))
// CS Name: PlayersSpecificSettingsAtGameStartModel::<>c__DisplayClass13_0
class CORDL_TYPE GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0(GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0(GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0& operator=(GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0&& o) noexcept = default;
  constexpr GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0& operator=(GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IConnectedPlayer __declspec(property(get=__get_player, put=__set_player))  player;

constexpr void __set_player(GlobalNamespace::IConnectedPlayer value) ;

constexpr GlobalNamespace::IConnectedPlayer __get_player() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0() ;

/// @brief Method .ctor addr 0xdc5ea4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SaveFromNetSerializable>b__0 addr 0xdc5eac size 0x11c virtual false final false
 bool _SaveFromNetSerializable_b__0(GlobalNamespace::IConnectedPlayer p) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlayersSpecificSettingsAtGameStartModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12868))
// CS Name: PlayersSpecificSettingsAtGameStartModel
class CORDL_TYPE PlayersSpecificSettingsAtGameStartModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass13_0 = GlobalNamespace::GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PlayersSpecificSettingsAtGameStartModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayersSpecificSettingsAtGameStartModel", modifiers: " const&", def_value: None }]
constexpr PlayersSpecificSettingsAtGameStartModel(PlayersSpecificSettingsAtGameStartModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayersSpecificSettingsAtGameStartModel", modifiers: "&&", def_value: None }]
constexpr PlayersSpecificSettingsAtGameStartModel(PlayersSpecificSettingsAtGameStartModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayersSpecificSettingsAtGameStartModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlayersSpecificSettingsAtGameStartModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayersSpecificSettingsAtGameStartModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayersSpecificSettingsAtGameStartModel& operator=(PlayersSpecificSettingsAtGameStartModel&& o) noexcept = default;
  constexpr PlayersSpecificSettingsAtGameStartModel& operator=(PlayersSpecificSettingsAtGameStartModel const& o) noexcept = default;
                


// Fields

 GlobalNamespace::PlayerSpecificSettingsNetSerializable __declspec(property(get=__get__localPlayerSpecificSettings_k__BackingField, put=__set__localPlayerSpecificSettings_k__BackingField))  _localPlayerSpecificSettings_k__BackingField;

constexpr void __set__localPlayerSpecificSettings_k__BackingField(GlobalNamespace::PlayerSpecificSettingsNetSerializable value) ;

constexpr GlobalNamespace::PlayerSpecificSettingsNetSerializable __get__localPlayerSpecificSettings_k__BackingField() const;

 GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable __declspec(property(get=__get__playersAtGameStartNetSerializable_k__BackingField, put=__set__playersAtGameStartNetSerializable_k__BackingField))  _playersAtGameStartNetSerializable_k__BackingField;

constexpr void __set__playersAtGameStartNetSerializable_k__BackingField(GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable value) ;

constexpr GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable __get__playersAtGameStartNetSerializable_k__BackingField() const;

 GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;


// Properties

 System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer> __declspec(property(get=get_playersAtGameStart))  playersAtGameStart;

 GlobalNamespace::PlayerSpecificSettingsNetSerializable __declspec(property(get=get_localPlayerSpecificSettings, put=set_localPlayerSpecificSettings))  localPlayerSpecificSettings;

 GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable __declspec(property(get=get_playersAtGameStartNetSerializable, put=set_playersAtGameStartNetSerializable))  playersAtGameStartNetSerializable;


// Methods

/// @brief Method get_playersAtGameStart addr 0xdc5654 size 0x18 virtual false final false
 System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer> get_playersAtGameStart() ;

/// @brief Method get_localPlayerSpecificSettings addr 0xdc566c size 0x8 virtual false final false
 GlobalNamespace::PlayerSpecificSettingsNetSerializable get_localPlayerSpecificSettings() ;

/// @brief Method set_localPlayerSpecificSettings addr 0xdc5674 size 0x8 virtual false final false
 void set_localPlayerSpecificSettings(GlobalNamespace::PlayerSpecificSettingsNetSerializable value) ;

/// @brief Method get_playersAtGameStartNetSerializable addr 0xdc567c size 0x8 virtual false final false
 GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable get_playersAtGameStartNetSerializable() ;

/// @brief Method set_playersAtGameStartNetSerializable addr 0xdc5684 size 0x8 virtual false final false
 void set_playersAtGameStartNetSerializable(GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable value) ;

// Ctor Parameters [CppParam { name: "multiplayerSessionManager", ty: "GlobalNamespace::IMultiplayerSessionManager", modifiers: "", def_value: None }, CppParam { name: "localPlayerSpecificSettings", ty: "GlobalNamespace::PlayerSpecificSettingsNetSerializable", modifiers: "", def_value: None }]
explicit PlayersSpecificSettingsAtGameStartModel(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, GlobalNamespace::PlayerSpecificSettingsNetSerializable localPlayerSpecificSettings) ;

/// @brief Method .ctor addr 0xdc568c size 0x84 virtual false final false
 void _ctor(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, GlobalNamespace::PlayerSpecificSettingsNetSerializable localPlayerSpecificSettings) ;

/// @brief Method GetPlayerSpecificSettingsForUserId addr 0xdc5710 size 0x3a8 virtual false final false
 GlobalNamespace::PlayerSpecificSettingsNetSerializable GetPlayerSpecificSettingsForUserId(::StringW userId) ;

/// @brief Method SaveFromNetSerializable addr 0xdc5ab8 size 0x3ec virtual false final false
 void SaveFromNetSerializable(GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable playersAtGameStartNetSerializable) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0, "", "PlayersSpecificSettingsAtGameStartModel/<>c__DisplayClass13_0");
NEED_NO_BOX(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel, "", "PlayersSpecificSettingsAtGameStartModel");
