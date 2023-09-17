#pragma once
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__OculusNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__IPlatformUserModel_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__RoomInviteNotification_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModelPartyConfig_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "Oculus/Platform/zzzz__RoomJoinPolicy_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__OculusConnectionManager_def.hpp"
#include "Oculus/Platform/Models/zzzz__Room_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserAndRoomList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.get_id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220e584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.get_userId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220e58c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.get_userName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220e594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.get_isMe
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_isMe)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220e59c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_isMe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.get_isPartyOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_isPartyOwner)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x220c848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_isPartyOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.get_isRoomOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_isRoomOwner)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x220e5a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_isRoomOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.get_currentPartySize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_currentPartySize)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x220e650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_currentPartySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.get_selectionMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevelSelectionMask (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_selectionMask)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x220e72c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_selectionMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.get_configuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayServerConfiguration (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_configuration)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x220e944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_configuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.get_room
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::Room (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_room)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220ece0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_room",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.set_room
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)(::Oculus::Platform::Models::Room)>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::set_room)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x220dd2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "set_room",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::Room>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.get_connectedPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IConnectedPlayer (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_connectedPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220ece8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_connectedPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.set_connectedPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)(::GlobalNamespace::IConnectedPlayer)>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::set_connectedPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220ecf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "set_connectedPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)(::GlobalNamespace::OculusNetworkPlayerModel, uint64_t, ::StringW, bool)>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x220ddb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OculusNetworkPlayerModel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.get_isMyPartyOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_isMyPartyOwner)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x220ecf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_isMyPartyOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.get_canJoin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_canJoin)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x220ed68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_canJoin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.Join
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::Join)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x220ed88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "Join",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.get_requiresPassword
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_requiresPassword)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220ee6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_requiresPassword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.Join
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)(::StringW)>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::Join)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x220ee74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "Join",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.get_isWaitingOnJoin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_isWaitingOnJoin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220ee78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_isWaitingOnJoin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.set_isWaitingOnJoin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)(bool)>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::set_isWaitingOnJoin)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x220ee80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "set_isWaitingOnJoin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.get_canInvite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_canInvite)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x220ee8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_canInvite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.Invite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::Invite)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x220ef00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "Invite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.get_isWaitingOnInvite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_isWaitingOnInvite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220ef5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_isWaitingOnInvite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.set_isWaitingOnInvite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)(bool)>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::set_isWaitingOnInvite)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x220ef64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "set_isWaitingOnInvite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.get_canKick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_canKick)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x220ef70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_canKick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.Kick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::Kick)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x220efe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "Kick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.get_canLeave
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_canLeave)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x220f0fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_canLeave",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.Leave
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::Leave)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x220f190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "Leave",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.get_canBlock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_canBlock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220f1b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_canBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.Block
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::Block)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x220f1bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "Block",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.get_canUnblock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_canUnblock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220f1c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_canUnblock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.Unblock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::Unblock)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x220f1c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "Unblock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.SendJoinResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)(bool)>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::SendJoinResponse)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x220f1cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "SendJoinResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.SendInviteResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)(bool)>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::SendInviteResponse)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x220f20c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "SendInviteResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer.SameRoomAs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)(::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer)>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::SameRoomAs)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x220e400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "SameRoomAs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer._Join_b__40_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room>)>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::_Join_b__40_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x220f218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "<Join>b__40_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::INetworkPlayer
constexpr  ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::operator ::GlobalNamespace::INetworkPlayer() const noexcept {
return ::GlobalNamespace::INetworkPlayer(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::__set__playerModel(::GlobalNamespace::OculusNetworkPlayerModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OculusNetworkPlayerModel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::OculusNetworkPlayerModel>(value));
}
constexpr ::GlobalNamespace::OculusNetworkPlayerModel ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::__get__playerModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusNetworkPlayerModel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::__set__id(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::__get__id() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::__set__userId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::__get__userId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::__set__userName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::__get__userName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::__set__isMe(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::__get__isMe() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::__set__room(::Oculus::Platform::Models::Room value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::Room, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::Models::Room>(value));
}
constexpr ::Oculus::Platform::Models::Room ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::__get__room() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::Room, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::__set__cachedSelectionMask(::System::Nullable_1<::GlobalNamespace::BeatmapLevelSelectionMask> value)  {
::cordl_internals::setInstanceField<::System::Nullable_1<::GlobalNamespace::BeatmapLevelSelectionMask>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Nullable_1<::GlobalNamespace::BeatmapLevelSelectionMask>>(value));
}
constexpr ::System::Nullable_1<::GlobalNamespace::BeatmapLevelSelectionMask> ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::__get__cachedSelectionMask() const {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::GlobalNamespace::BeatmapLevelSelectionMask>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::__set__cachedConfiguration(::System::Nullable_1<::GlobalNamespace::GameplayServerConfiguration> value)  {
::cordl_internals::setInstanceField<::System::Nullable_1<::GlobalNamespace::GameplayServerConfiguration>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Nullable_1<::GlobalNamespace::GameplayServerConfiguration>>(value));
}
constexpr ::System::Nullable_1<::GlobalNamespace::GameplayServerConfiguration> ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::__get__cachedConfiguration() const {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::GlobalNamespace::GameplayServerConfiguration>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::__set_removed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::__get_removed() const {
return ::cordl_internals::getInstanceField<bool, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::__set_inviteToken(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::__get_inviteToken() const {
return ::cordl_internals::getInstanceField<::StringW, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::__set__connectedPlayer_k__BackingField(::GlobalNamespace::IConnectedPlayer value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IConnectedPlayer, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IConnectedPlayer>(value));
}
constexpr ::GlobalNamespace::IConnectedPlayer ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::__get__connectedPlayer_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayer, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::__set__isWaitingOnJoin_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::__get__isWaitingOnJoin_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::__set__isWaitingOnInvite_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x91>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::__get__isWaitingOnInvite_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x91>(this->::bs_hook::Il2CppWrapperType::instance);
}
 uint64_t ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_userId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_userName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_isMe()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_isMe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_isPartyOwner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_isPartyOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_isRoomOwner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_isRoomOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_currentPartySize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_currentPartySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::BeatmapLevelSelectionMask ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_selectionMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_selectionMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelSelectionMask, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::GameplayServerConfiguration ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_configuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_configuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::Room ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_room()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_room",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Room, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::set_room(::Oculus::Platform::Models::Room value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "set_room",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::Room>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::GlobalNamespace::IConnectedPlayer ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_connectedPlayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_connectedPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectedPlayer, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::set_connectedPlayer(::GlobalNamespace::IConnectedPlayer value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "set_connectedPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "playerModel", ty: "::GlobalNamespace::OculusNetworkPlayerModel", modifiers: "", def_value: None }, CppParam { name: "id", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "userName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isMe", ty: "bool", modifiers: "", def_value: Some("false") }]
 ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer(::GlobalNamespace::OculusNetworkPlayerModel playerModel, uint64_t id, ::StringW userName, bool isMe)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>(playerModel, id, userName, isMe))) {}
/// @param isMe: bool (default: false)
 void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::_ctor(::GlobalNamespace::OculusNetworkPlayerModel playerModel, uint64_t id, ::StringW userName, bool isMe)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OculusNetworkPlayerModel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playerModel, id, userName, isMe);
}
 bool ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_isMyPartyOwner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_isMyPartyOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_canJoin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_canJoin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::Join()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "Join",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_requiresPassword()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_requiresPassword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::Join(::StringW password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "Join",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, password);
}
 bool ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_isWaitingOnJoin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_isWaitingOnJoin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::set_isWaitingOnJoin(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "set_isWaitingOnJoin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_canInvite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_canInvite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::Invite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "Invite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_isWaitingOnInvite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_isWaitingOnInvite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::set_isWaitingOnInvite(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "set_isWaitingOnInvite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_canKick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_canKick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::Kick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "Kick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_canLeave()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_canLeave",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::Leave()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "Leave",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_canBlock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_canBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::Block()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "Block",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::get_canUnblock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "get_canUnblock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::Unblock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "Unblock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::SendJoinResponse(bool accept)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "SendJoinResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, accept);
}
 void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::SendInviteResponse(bool accept)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "SendInviteResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, accept);
}
 bool ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::SameRoomAs(::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "SameRoomAs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
 void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer::_Join_b__40_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>::get(),
                            "<Join>b__40_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42::MoveNext)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x220f238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x220f6d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusNetworkPlayerModel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42::____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::OculusNetworkPlayerModel __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42::__set___4__this(::GlobalNamespace::OculusNetworkPlayerModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OculusNetworkPlayerModel, 0x28>(this->__instance, std::forward<::GlobalNamespace::OculusNetworkPlayerModel>(value));
}
constexpr ::GlobalNamespace::OculusNetworkPlayerModel ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusNetworkPlayerModel, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo>, 0x30>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo> ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo>, 0x30>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220d664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0._GetUserNameAsync_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User>)>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0::_GetUserNameAsync_b__0)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x220f6e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0>::get(),
                            "<GetUserNameAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0::__set_id(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0::__get_id() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0::__set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::StringW> value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::StringW>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<::StringW>>(value));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::StringW> ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0::__get_tcs() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::StringW>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0>())) {}
 void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0::_GetUserNameAsync_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0>::get(),
                            "<GetUserNameAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220f7e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0._HandleRoomInviteReceived_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room>)>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0::_HandleRoomInviteReceived_b__0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x220f7f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0>::get(),
                            "<HandleRoomInviteReceived>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0::__set_player(::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0::__get_player() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0::__set___4__this(::GlobalNamespace::OculusNetworkPlayerModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OculusNetworkPlayerModel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::OculusNetworkPlayerModel>(value));
}
constexpr ::GlobalNamespace::OculusNetworkPlayerModel ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusNetworkPlayerModel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0>())) {}
 void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0::_HandleRoomInviteReceived_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0>::get(),
                            "<HandleRoomInviteReceived>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51::MoveNext)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x220f890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x220fc58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusNetworkPlayerModel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "message", ty: "::Oculus::Platform::Message_1<::Oculus::Platform::Models::RoomInviteNotification>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__8__1", ty: "::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51::____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::OculusNetworkPlayerModel __4__this, ::Oculus::Platform::Message_1<::Oculus::Platform::Models::RoomInviteNotification> message, ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0 __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->message = message;
this->__8__1 = __8__1;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51::__set___4__this(::GlobalNamespace::OculusNetworkPlayerModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OculusNetworkPlayerModel, 0x28>(this->__instance, std::forward<::GlobalNamespace::OculusNetworkPlayerModel>(value));
}
constexpr ::GlobalNamespace::OculusNetworkPlayerModel ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusNetworkPlayerModel, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51::__set_message(::Oculus::Platform::Message_1<::Oculus::Platform::Models::RoomInviteNotification> value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Message_1<::Oculus::Platform::Models::RoomInviteNotification>, 0x30>(this->__instance, std::forward<::Oculus::Platform::Message_1<::Oculus::Platform::Models::RoomInviteNotification>>(value));
}
constexpr ::Oculus::Platform::Message_1<::Oculus::Platform::Models::RoomInviteNotification> ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51::__get_message() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Message_1<::Oculus::Platform::Models::RoomInviteNotification>, 0x30>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51::__set___8__1(::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0 value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0, 0x38>(this->__instance, std::forward<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0 ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51::__get___8__1() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0, 0x38>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>, 0x40>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>, 0x40>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220df2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0._Refresh_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAndRoomList>)>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0::_Refresh_b__0)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x220fc64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0>::get(),
                            "<Refresh>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAndRoomList>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0._Refresh_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList>)>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0::_Refresh_b__1)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x22102d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0>::get(),
                            "<Refresh>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0::__set___4__this(::GlobalNamespace::OculusNetworkPlayerModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OculusNetworkPlayerModel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::OculusNetworkPlayerModel>(value));
}
constexpr ::GlobalNamespace::OculusNetworkPlayerModel ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusNetworkPlayerModel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0::__set_onGetFriends(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::UserAndRoomList> value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::UserAndRoomList>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::UserAndRoomList>>(value));
}
constexpr ::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::UserAndRoomList> ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0::__get_onGetFriends() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::UserAndRoomList>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0::__set_onGetInvitable(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::UserList> value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::UserList>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::UserList>>(value));
}
constexpr ::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::UserList> ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0::__get_onGetInvitable() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::UserList>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0>())) {}
 void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0::_Refresh_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAndRoomList> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0>::get(),
                            "<Refresh>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAndRoomList>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
 void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0::_Refresh_b__1(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0>::get(),
                            "<Refresh>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220e3f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0._ShouldAcceptConnectionFromPlayer_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room>)>(&::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0::_ShouldAcceptConnectionFromPlayer_b__0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x221081c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0>::get(),
                            "<ShouldAcceptConnectionFromPlayer>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0::__set___4__this(::GlobalNamespace::OculusNetworkPlayerModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OculusNetworkPlayerModel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::OculusNetworkPlayerModel>(value));
}
constexpr ::GlobalNamespace::OculusNetworkPlayerModel ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusNetworkPlayerModel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0::__set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool> value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<bool>>(value));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool> ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0::__get_tcs() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0::__set_userId(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0::__get_userId() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0>())) {}
 void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0::_ShouldAcceptConnectionFromPlayer_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0>::get(),
                            "<ShouldAcceptConnectionFromPlayer>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.get_localPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::INetworkPlayer (::GlobalNamespace::OculusNetworkPlayerModel::*)()>(&::GlobalNamespace::OculusNetworkPlayerModel::get_localPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220c814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "get_localPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.get_localPlayerIsPartyOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OculusNetworkPlayerModel::*)()>(&::GlobalNamespace::OculusNetworkPlayerModel::get_localPlayerIsPartyOwner)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x220c81c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::OculusNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                                  50
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.get_currentPartySize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OculusNetworkPlayerModel::*)()>(&::GlobalNamespace::OculusNetworkPlayerModel::get_currentPartySize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x220c85c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::OculusNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.add_partySizeChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusNetworkPlayerModel::*)(::System::Action_1<int32_t>)>(&::GlobalNamespace::OculusNetworkPlayerModel::add_partySizeChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x220c8a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::OculusNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                                  44
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.remove_partySizeChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusNetworkPlayerModel::*)(::System::Action_1<int32_t>)>(&::GlobalNamespace::OculusNetworkPlayerModel::remove_partySizeChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x220c954;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::OculusNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                                  45
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.add_partyChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel>)>(&::GlobalNamespace::OculusNetworkPlayerModel::add_partyChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x220ca04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::OculusNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                                  42
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.remove_partyChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel>)>(&::GlobalNamespace::OculusNetworkPlayerModel::remove_partyChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x220cab4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::OculusNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                                  43
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.add_inviteRequestedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayer>)>(&::GlobalNamespace::OculusNetworkPlayerModel::add_inviteRequestedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x220cb64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::OculusNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                                  48
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.remove_inviteRequestedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayer>)>(&::GlobalNamespace::OculusNetworkPlayerModel::remove_inviteRequestedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x220cc14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::OculusNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                                  49
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.get_oculusConnectionManager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OculusConnectionManager (::GlobalNamespace::OculusNetworkPlayerModel::*)()>(&::GlobalNamespace::OculusNetworkPlayerModel::get_oculusConnectionManager)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x220ccc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "get_oculusConnectionManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusNetworkPlayerModel::*)()>(&::GlobalNamespace::OculusNetworkPlayerModel::Start)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x220cd1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::OculusNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusNetworkPlayerModel::*)()>(&::GlobalNamespace::OculusNetworkPlayerModel::Update)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x220cdb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::OculusNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.GetPartyPlayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer> (::GlobalNamespace::OculusNetworkPlayerModel::*)()>(&::GlobalNamespace::OculusNetworkPlayerModel::GetPartyPlayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220cff4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::OculusNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                                  51
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.GetOtherPlayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer> (::GlobalNamespace::OculusNetworkPlayerModel::*)()>(&::GlobalNamespace::OculusNetworkPlayerModel::GetOtherPlayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220cffc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::OculusNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                                  52
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.GetPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer (::GlobalNamespace::OculusNetworkPlayerModel::*)(uint64_t)>(&::GlobalNamespace::OculusNetworkPlayerModel::GetPlayer)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x220d004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "GetPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.GetPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer (::GlobalNamespace::OculusNetworkPlayerModel::*)(::StringW)>(&::GlobalNamespace::OculusNetworkPlayerModel::GetPlayer)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x220d114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "GetPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.TryCreateRoom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OculusNetworkPlayerModel::*)()>(&::GlobalNamespace::OculusNetworkPlayerModel::TryCreateRoom)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x220d234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "TryCreateRoom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.GetUserName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::OculusNetworkPlayerModel::*)(uint64_t)>(&::GlobalNamespace::OculusNetworkPlayerModel::GetUserName)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x220d50c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "GetUserName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.GetUserNameAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW> (::GlobalNamespace::OculusNetworkPlayerModel::*)(uint64_t)>(&::GlobalNamespace::OculusNetworkPlayerModel::GetUserNameAsync)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x220d524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "GetUserNameAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.HandleRoomInviteReceived
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusNetworkPlayerModel::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::RoomInviteNotification>)>(&::GlobalNamespace::OculusNetworkPlayerModel::HandleRoomInviteReceived)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x220d66c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "HandleRoomInviteReceived",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::RoomInviteNotification>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.HandleRoomInviteAccepted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusNetworkPlayerModel::*)(::Oculus::Platform::Message_1<::StringW>)>(&::GlobalNamespace::OculusNetworkPlayerModel::HandleRoomInviteAccepted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x220d70c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "HandleRoomInviteAccepted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.HandleRoomUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusNetworkPlayerModel::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room>)>(&::GlobalNamespace::OculusNetworkPlayerModel::HandleRoomUpdate)> {
  constexpr static std::size_t size = 0x61c;
  constexpr static std::size_t addrs = 0x220d710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "HandleRoomUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.HandlePlayersChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusNetworkPlayerModel::*)()>(&::GlobalNamespace::OculusNetworkPlayerModel::HandlePlayersChanged)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x220dd44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "HandlePlayersChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.Refresh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusNetworkPlayerModel::*)()>(&::GlobalNamespace::OculusNetworkPlayerModel::Refresh)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x220ce14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.DestroyPartyConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusNetworkPlayerModel::*)()>(&::GlobalNamespace::OculusNetworkPlayerModel::DestroyPartyConnection)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x220df34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::OculusNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                                  63
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.PlayerConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusNetworkPlayerModel::*)(::GlobalNamespace::IConnectedPlayer)>(&::GlobalNamespace::OculusNetworkPlayerModel::PlayerConnected)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x220e198;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::OculusNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                                  54
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.PlayerDisconnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusNetworkPlayerModel::*)(::GlobalNamespace::IConnectedPlayer)>(&::GlobalNamespace::OculusNetworkPlayerModel::PlayerDisconnected)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x220e254;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::OculusNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                                  55
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.PartySizeChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusNetworkPlayerModel::*)(int32_t)>(&::GlobalNamespace::OculusNetworkPlayerModel::PartySizeChanged)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x220e32c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::OculusNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                                  59
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.UpdateRoomDataStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusNetworkPlayerModel::*)()>(&::GlobalNamespace::OculusNetworkPlayerModel::UpdateRoomDataStore)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x220e3d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "UpdateRoomDataStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.TryLeaveRoom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusNetworkPlayerModel::*)()>(&::GlobalNamespace::OculusNetworkPlayerModel::TryLeaveRoom)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x220df80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "TryLeaveRoom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.TryConnectToServer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusNetworkPlayerModel::*)()>(&::GlobalNamespace::OculusNetworkPlayerModel::TryConnectToServer)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x220de6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "TryConnectToServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel.ShouldAcceptConnectionFromPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool> (::GlobalNamespace::OculusNetworkPlayerModel::*)(uint64_t)>(&::GlobalNamespace::OculusNetworkPlayerModel::ShouldAcceptConnectionFromPlayer)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x220c634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "ShouldAcceptConnectionFromPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusNetworkPlayerModel::*)()>(&::GlobalNamespace::OculusNetworkPlayerModel::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x220e43c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel._TryCreateRoom_b__48_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusNetworkPlayerModel::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room>)>(&::GlobalNamespace::OculusNetworkPlayerModel::_TryCreateRoom_b__48_0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x220e538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "<TryCreateRoom>b__48_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::INetworkPlayerModel
constexpr  ::GlobalNamespace::OculusNetworkPlayerModel::operator ::GlobalNamespace::INetworkPlayerModel() const noexcept {
return ::GlobalNamespace::INetworkPlayerModel(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OculusNetworkPlayerModel::__set__platformUserModel(::GlobalNamespace::IPlatformUserModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPlatformUserModel, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IPlatformUserModel>(value));
}
constexpr ::GlobalNamespace::IPlatformUserModel ::GlobalNamespace::OculusNetworkPlayerModel::__get__platformUserModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPlatformUserModel, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OculusNetworkPlayerModel::__set__lastRefreshTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::OculusNetworkPlayerModel::__get__lastRefreshTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OculusNetworkPlayerModel::__set__isRefreshing(bool value)  {
::cordl_internals::setInstanceField<bool, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OculusNetworkPlayerModel::__get__isRefreshing() const {
return ::cordl_internals::getInstanceField<bool, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OculusNetworkPlayerModel::__set__localPlayer(::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer ::GlobalNamespace::OculusNetworkPlayerModel::__get__localPlayer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OculusNetworkPlayerModel::__set__joinPolicy(::Oculus::Platform::RoomJoinPolicy value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::RoomJoinPolicy, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::RoomJoinPolicy>(value));
}
constexpr ::Oculus::Platform::RoomJoinPolicy ::GlobalNamespace::OculusNetworkPlayerModel::__get__joinPolicy() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::RoomJoinPolicy, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OculusNetworkPlayerModel::__set__partyEnabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0xac>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OculusNetworkPlayerModel::__get__partyEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0xac>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OculusNetworkPlayerModel::__set__waitingOnRoomCreate(bool value)  {
::cordl_internals::setInstanceField<bool, 0xad>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OculusNetworkPlayerModel::__get__waitingOnRoomCreate() const {
return ::cordl_internals::getInstanceField<bool, 0xad>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OculusNetworkPlayerModel::__set__roomDataStore(::System::Collections::Generic::Dictionary_2<::StringW,::StringW> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW> ::GlobalNamespace::OculusNetworkPlayerModel::__get__roomDataStore() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OculusNetworkPlayerModel::__set__partyPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer> ::GlobalNamespace::OculusNetworkPlayerModel::__get__partyPlayers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OculusNetworkPlayerModel::__set__otherPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer> ::GlobalNamespace::OculusNetworkPlayerModel::__get__otherPlayers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OculusNetworkPlayerModel::__set_partySizeChangedEvent(::System::Action_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Action_1<int32_t>, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<int32_t>>(value));
}
constexpr ::System::Action_1<int32_t> ::GlobalNamespace::OculusNetworkPlayerModel::__get_partySizeChangedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<int32_t>, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OculusNetworkPlayerModel::__set_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::INetworkPlayerModel>, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::GlobalNamespace::INetworkPlayerModel>>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel> ::GlobalNamespace::OculusNetworkPlayerModel::__get_partyChangedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::INetworkPlayerModel>, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OculusNetworkPlayerModel::__set_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::INetworkPlayer>, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::GlobalNamespace::INetworkPlayer>>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer> ::GlobalNamespace::OculusNetworkPlayerModel::__get_inviteRequestedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::INetworkPlayer>, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::GlobalNamespace::INetworkPlayer ::GlobalNamespace::OculusNetworkPlayerModel::get_localPlayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "get_localPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::INetworkPlayer, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::OculusNetworkPlayerModel::get_localPlayerIsPartyOwner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "get_localPlayerIsPartyOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::GlobalNamespace::OculusNetworkPlayerModel::get_currentPartySize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "get_currentPartySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OculusNetworkPlayerModel::add_partySizeChangedEvent(::System::Action_1<int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "add_partySizeChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::OculusNetworkPlayerModel::remove_partySizeChangedEvent(::System::Action_1<int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "remove_partySizeChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::OculusNetworkPlayerModel::add_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "add_partyChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::OculusNetworkPlayerModel::remove_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "remove_partyChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::OculusNetworkPlayerModel::add_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "add_inviteRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::OculusNetworkPlayerModel::remove_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "remove_inviteRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::GlobalNamespace::OculusConnectionManager ::GlobalNamespace::OculusNetworkPlayerModel::get_oculusConnectionManager()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "get_oculusConnectionManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OculusConnectionManager, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OculusNetworkPlayerModel::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OculusNetworkPlayerModel::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer> ::GlobalNamespace::OculusNetworkPlayerModel::GetPartyPlayers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "GetPartyPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer> ::GlobalNamespace::OculusNetworkPlayerModel::GetOtherPlayers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "GetOtherPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer ::GlobalNamespace::OculusNetworkPlayerModel::GetPlayer(uint64_t id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "GetPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer, false>(const_cast<void*>(instance), ___internal_method, id);
}
 ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer ::GlobalNamespace::OculusNetworkPlayerModel::GetPlayer(::StringW userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "GetPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer, false>(const_cast<void*>(instance), ___internal_method, userId);
}
 bool ::GlobalNamespace::OculusNetworkPlayerModel::TryCreateRoom()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "TryCreateRoom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::GlobalNamespace::OculusNetworkPlayerModel::GetUserName(uint64_t id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "GetUserName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, id);
}
 ::System::Threading::Tasks::Task_1<::StringW> ::GlobalNamespace::OculusNetworkPlayerModel::GetUserNameAsync(uint64_t id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "GetUserNameAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>, false>(const_cast<void*>(instance), ___internal_method, id);
}
 void ::GlobalNamespace::OculusNetworkPlayerModel::HandleRoomInviteReceived(::Oculus::Platform::Message_1<::Oculus::Platform::Models::RoomInviteNotification> message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "HandleRoomInviteReceived",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::RoomInviteNotification>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
 void ::GlobalNamespace::OculusNetworkPlayerModel::HandleRoomInviteAccepted(::Oculus::Platform::Message_1<::StringW> message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "HandleRoomInviteAccepted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
 void ::GlobalNamespace::OculusNetworkPlayerModel::HandleRoomUpdate(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room> message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "HandleRoomUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
 void ::GlobalNamespace::OculusNetworkPlayerModel::HandlePlayersChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "HandlePlayersChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OculusNetworkPlayerModel::Refresh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename T>
 bool ::GlobalNamespace::OculusNetworkPlayerModel::CreatePartyConnection(::GlobalNamespace::INetworkPlayerModelPartyConfig_1<T> createConfig)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                        "CreatePartyConnection",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayerModelPartyConfig_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, createConfig);
}
 void ::GlobalNamespace::OculusNetworkPlayerModel::DestroyPartyConnection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "DestroyPartyConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OculusNetworkPlayerModel::PlayerConnected(::GlobalNamespace::IConnectedPlayer connectedPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "PlayerConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, connectedPlayer);
}
 void ::GlobalNamespace::OculusNetworkPlayerModel::PlayerDisconnected(::GlobalNamespace::IConnectedPlayer connectedPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "PlayerDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, connectedPlayer);
}
 void ::GlobalNamespace::OculusNetworkPlayerModel::PartySizeChanged(int32_t currentPartySize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "PartySizeChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, currentPartySize);
}
 void ::GlobalNamespace::OculusNetworkPlayerModel::UpdateRoomDataStore()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "UpdateRoomDataStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OculusNetworkPlayerModel::TryLeaveRoom()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "TryLeaveRoom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OculusNetworkPlayerModel::TryConnectToServer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "TryConnectToServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task_1<bool> ::GlobalNamespace::OculusNetworkPlayerModel::ShouldAcceptConnectionFromPlayer(uint64_t userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "ShouldAcceptConnectionFromPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>, false>(const_cast<void*>(instance), ___internal_method, userId);
}
// Ctor Parameters []
 ::GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayerModel()  : ::GlobalNamespace::PlatformNetworkPlayerModel(THROW_UNLESS(::il2cpp_utils::New<OculusNetworkPlayerModel>())) {}
 void ::GlobalNamespace::OculusNetworkPlayerModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OculusNetworkPlayerModel::_TryCreateRoom_b__48_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel>::get(),
                            "<TryCreateRoom>b__48_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
} // end anonymous namespace
