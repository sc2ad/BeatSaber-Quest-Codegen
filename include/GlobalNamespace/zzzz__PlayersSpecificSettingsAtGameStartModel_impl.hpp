#pragma once
#include "GlobalNamespace/zzzz__PlayersSpecificSettingsAtGameStartModel_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettingsAtStartNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettingsNetSerializable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0::*)()>(&GlobalNamespace::GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdc5ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0._SaveFromNetSerializable_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0::*)(GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0::_SaveFromNetSerializable_b__0)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xdc5eac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0>::get(),
                            "<SaveFromNetSerializable>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0::__set_player(GlobalNamespace::IConnectedPlayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IConnectedPlayer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IConnectedPlayer>(value));
}
constexpr GlobalNamespace::IConnectedPlayer GlobalNamespace::GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0::__get_player() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IConnectedPlayer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0::GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0>())) {}
 void GlobalNamespace::GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0::_SaveFromNetSerializable_b__0(GlobalNamespace::IConnectedPlayer p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0>::get(),
                            "<SaveFromNetSerializable>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, p);
}
//  Writing Method size for method: GlobalNamespace::PlayersSpecificSettingsAtGameStartModel.get_playersAtGameStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer> (GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)()>(&GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::get_playersAtGameStart)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xdc5654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayersSpecificSettingsAtGameStartModel>::get(),
                            "get_playersAtGameStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayersSpecificSettingsAtGameStartModel.get_localPlayerSpecificSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerSpecificSettingsNetSerializable (GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)()>(&GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::get_localPlayerSpecificSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdc566c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayersSpecificSettingsAtGameStartModel>::get(),
                            "get_localPlayerSpecificSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayersSpecificSettingsAtGameStartModel.set_localPlayerSpecificSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)(GlobalNamespace::PlayerSpecificSettingsNetSerializable)>(&GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::set_localPlayerSpecificSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdc5674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayersSpecificSettingsAtGameStartModel>::get(),
                            "set_localPlayerSpecificSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettingsNetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayersSpecificSettingsAtGameStartModel.get_playersAtGameStartNetSerializable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable (GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)()>(&GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::get_playersAtGameStartNetSerializable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdc567c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayersSpecificSettingsAtGameStartModel>::get(),
                            "get_playersAtGameStartNetSerializable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayersSpecificSettingsAtGameStartModel.set_playersAtGameStartNetSerializable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)(GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable)>(&GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::set_playersAtGameStartNetSerializable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdc5684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayersSpecificSettingsAtGameStartModel>::get(),
                            "set_playersAtGameStartNetSerializable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayersSpecificSettingsAtGameStartModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)(GlobalNamespace::IMultiplayerSessionManager, GlobalNamespace::PlayerSpecificSettingsNetSerializable)>(&GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xdc568c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayersSpecificSettingsAtGameStartModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IMultiplayerSessionManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettingsNetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayersSpecificSettingsAtGameStartModel.GetPlayerSpecificSettingsForUserId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerSpecificSettingsNetSerializable (GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)(::StringW)>(&GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::GetPlayerSpecificSettingsForUserId)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0xdc5710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayersSpecificSettingsAtGameStartModel>::get(),
                            "GetPlayerSpecificSettingsForUserId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayersSpecificSettingsAtGameStartModel.SaveFromNetSerializable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)(GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable)>(&GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::SaveFromNetSerializable)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0xdc5ab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayersSpecificSettingsAtGameStartModel>::get(),
                            "SaveFromNetSerializable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::__set__localPlayerSpecificSettings_k__BackingField(GlobalNamespace::PlayerSpecificSettingsNetSerializable value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayerSpecificSettingsNetSerializable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlayerSpecificSettingsNetSerializable>(value));
}
constexpr GlobalNamespace::PlayerSpecificSettingsNetSerializable GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::__get__localPlayerSpecificSettings_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayerSpecificSettingsNetSerializable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::__set__playersAtGameStartNetSerializable_k__BackingField(GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable>(value));
}
constexpr GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::__get__playersAtGameStartNetSerializable_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::__set__multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IMultiplayerSessionManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IMultiplayerSessionManager>(value));
}
constexpr GlobalNamespace::IMultiplayerSessionManager GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::__get__multiplayerSessionManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IMultiplayerSessionManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer> GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::get_playersAtGameStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayersSpecificSettingsAtGameStartModel>::get(),
                            "get_playersAtGameStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::PlayerSpecificSettingsNetSerializable GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::get_localPlayerSpecificSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayersSpecificSettingsAtGameStartModel>::get(),
                            "get_localPlayerSpecificSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PlayerSpecificSettingsNetSerializable, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::set_localPlayerSpecificSettings(GlobalNamespace::PlayerSpecificSettingsNetSerializable value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayersSpecificSettingsAtGameStartModel>::get(),
                            "set_localPlayerSpecificSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettingsNetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::get_playersAtGameStartNetSerializable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayersSpecificSettingsAtGameStartModel>::get(),
                            "get_playersAtGameStartNetSerializable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::set_playersAtGameStartNetSerializable(GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayersSpecificSettingsAtGameStartModel>::get(),
                            "set_playersAtGameStartNetSerializable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "multiplayerSessionManager", ty: "GlobalNamespace::IMultiplayerSessionManager", modifiers: "", def_value: None }, CppParam { name: "localPlayerSpecificSettings", ty: "GlobalNamespace::PlayerSpecificSettingsNetSerializable", modifiers: "", def_value: None }]
 GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::PlayersSpecificSettingsAtGameStartModel(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, GlobalNamespace::PlayerSpecificSettingsNetSerializable localPlayerSpecificSettings)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PlayersSpecificSettingsAtGameStartModel>(multiplayerSessionManager, localPlayerSpecificSettings))) {}
 void GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::_ctor(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, GlobalNamespace::PlayerSpecificSettingsNetSerializable localPlayerSpecificSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayersSpecificSettingsAtGameStartModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IMultiplayerSessionManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettingsNetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, multiplayerSessionManager, localPlayerSpecificSettings);
}
 GlobalNamespace::PlayerSpecificSettingsNetSerializable GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::GetPlayerSpecificSettingsForUserId(::StringW userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayersSpecificSettingsAtGameStartModel>::get(),
                            "GetPlayerSpecificSettingsForUserId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PlayerSpecificSettingsNetSerializable, false>(const_cast<void*>(instance), ___internal_method, userId);
}
 void GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::SaveFromNetSerializable(GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable playersAtGameStartNetSerializable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayersSpecificSettingsAtGameStartModel>::get(),
                            "SaveFromNetSerializable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playersAtGameStartNetSerializable);
}
