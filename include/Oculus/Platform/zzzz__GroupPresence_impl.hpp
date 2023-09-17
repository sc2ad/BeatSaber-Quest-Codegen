#pragma once
namespace {
#include "Oculus/Platform/zzzz__GroupPresence_def.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationInviteList_def.hpp"
#include "Oculus/Platform/Models/zzzz__InvitePanelResultInfo_def.hpp"
#include "Oculus/Platform/zzzz__InviteOptions_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
#include "Oculus/Platform/Models/zzzz__GroupPresenceJoinIntent_def.hpp"
#include "Oculus/Platform/Models/zzzz__SendInvitesResult_def.hpp"
#include "Oculus/Platform/zzzz__MultiplayerErrorOptions_def.hpp"
#include "Oculus/Platform/Models/zzzz__RejoinDialogResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__GroupPresenceLeaveIntent_def.hpp"
#include "Oculus/Platform/zzzz__GroupPresenceOptions_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchInvitePanelFlowResult_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/zzzz__RosterOptions_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request (*)()>(&::Oculus::Platform::GroupPresence::Clear)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2593de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.GetInvitableUsers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList> (*)(::Oculus::Platform::InviteOptions)>(&::Oculus::Platform::GroupPresence::GetInvitableUsers)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2593f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "GetInvitableUsers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::InviteOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.GetSentInvites
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ApplicationInviteList> (*)()>(&::Oculus::Platform::GroupPresence::GetSentInvites)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x25940a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "GetSentInvites",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.LaunchInvitePanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::InvitePanelResultInfo> (*)(::Oculus::Platform::InviteOptions)>(&::Oculus::Platform::GroupPresence::LaunchInvitePanel)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2594204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "LaunchInvitePanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::InviteOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.LaunchMultiplayerErrorDialog
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request (*)(::Oculus::Platform::MultiplayerErrorOptions)>(&::Oculus::Platform::GroupPresence::LaunchMultiplayerErrorDialog)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x259437c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "LaunchMultiplayerErrorDialog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MultiplayerErrorOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.LaunchRejoinDialog
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::RejoinDialogResult> (*)(::StringW, ::StringW, ::StringW)>(&::Oculus::Platform::GroupPresence::LaunchRejoinDialog)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x25944e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "LaunchRejoinDialog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.LaunchRosterPanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request (*)(::Oculus::Platform::RosterOptions)>(&::Oculus::Platform::GroupPresence::LaunchRosterPanel)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x259465c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "LaunchRosterPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::RosterOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.SendInvites
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::SendInvitesResult> (*)(::ArrayW<uint64_t>)>(&::Oculus::Platform::GroupPresence::SendInvites)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2594844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "SendInvites",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request (*)(::Oculus::Platform::GroupPresenceOptions)>(&::Oculus::Platform::GroupPresence::Set)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x25949bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::GroupPresenceOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.SetDeeplinkMessageOverride
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request (*)(::StringW)>(&::Oculus::Platform::GroupPresence::SetDeeplinkMessageOverride)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2594b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "SetDeeplinkMessageOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.SetDestination
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request (*)(::StringW)>(&::Oculus::Platform::GroupPresence::SetDestination)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2594c70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "SetDestination",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.SetIsJoinable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request (*)(bool)>(&::Oculus::Platform::GroupPresence::SetIsJoinable)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2594dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "SetIsJoinable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.SetLobbySession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request (*)(::StringW)>(&::Oculus::Platform::GroupPresence::SetLobbySession)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2594f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "SetLobbySession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.SetMatchSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request (*)(::StringW)>(&::Oculus::Platform::GroupPresence::SetMatchSession)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2595060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "SetMatchSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.SetInvitationsSentNotificationCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::LaunchInvitePanelFlowResult>)>(&::Oculus::Platform::GroupPresence::SetInvitationsSentNotificationCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x25951b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "SetInvitationsSentNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::LaunchInvitePanelFlowResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.SetJoinIntentReceivedNotificationCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::GroupPresenceJoinIntent>)>(&::Oculus::Platform::GroupPresence::SetJoinIntentReceivedNotificationCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2595224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "SetJoinIntentReceivedNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::GroupPresenceJoinIntent>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.SetLeaveIntentReceivedNotificationCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::GroupPresenceLeaveIntent>)>(&::Oculus::Platform::GroupPresence::SetLeaveIntentReceivedNotificationCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2595298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "SetLeaveIntentReceivedNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::GroupPresenceLeaveIntent>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.GetNextApplicationInviteListPage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ApplicationInviteList> (*)(::Oculus::Platform::Models::ApplicationInviteList)>(&::Oculus::Platform::GroupPresence::GetNextApplicationInviteListPage)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x259530c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "GetNextApplicationInviteListPage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::ApplicationInviteList>::get()}
                        )));
    return ___internal_method;
  }
};
 ::Oculus::Platform::Request ::Oculus::Platform::GroupPresence::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request, false>(nullptr, ___internal_method);
}
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList> ::Oculus::Platform::GroupPresence::GetInvitableUsers(::Oculus::Platform::InviteOptions options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "GetInvitableUsers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::InviteOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList>, false>(nullptr, ___internal_method, options);
}
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ApplicationInviteList> ::Oculus::Platform::GroupPresence::GetSentInvites()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "GetSentInvites",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ApplicationInviteList>, false>(nullptr, ___internal_method);
}
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::InvitePanelResultInfo> ::Oculus::Platform::GroupPresence::LaunchInvitePanel(::Oculus::Platform::InviteOptions options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "LaunchInvitePanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::InviteOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::InvitePanelResultInfo>, false>(nullptr, ___internal_method, options);
}
 ::Oculus::Platform::Request ::Oculus::Platform::GroupPresence::LaunchMultiplayerErrorDialog(::Oculus::Platform::MultiplayerErrorOptions options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "LaunchMultiplayerErrorDialog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MultiplayerErrorOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request, false>(nullptr, ___internal_method, options);
}
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::RejoinDialogResult> ::Oculus::Platform::GroupPresence::LaunchRejoinDialog(::StringW lobby_session_id, ::StringW match_session_id, ::StringW destination_api_name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "LaunchRejoinDialog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::RejoinDialogResult>, false>(nullptr, ___internal_method, lobby_session_id, match_session_id, destination_api_name);
}
 ::Oculus::Platform::Request ::Oculus::Platform::GroupPresence::LaunchRosterPanel(::Oculus::Platform::RosterOptions options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "LaunchRosterPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::RosterOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request, false>(nullptr, ___internal_method, options);
}
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::SendInvitesResult> ::Oculus::Platform::GroupPresence::SendInvites(::ArrayW<uint64_t> userIDs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "SendInvites",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::SendInvitesResult>, false>(nullptr, ___internal_method, userIDs);
}
 ::Oculus::Platform::Request ::Oculus::Platform::GroupPresence::Set(::Oculus::Platform::GroupPresenceOptions groupPresenceOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::GroupPresenceOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request, false>(nullptr, ___internal_method, groupPresenceOptions);
}
 ::Oculus::Platform::Request ::Oculus::Platform::GroupPresence::SetDeeplinkMessageOverride(::StringW deeplink_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "SetDeeplinkMessageOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request, false>(nullptr, ___internal_method, deeplink_message);
}
 ::Oculus::Platform::Request ::Oculus::Platform::GroupPresence::SetDestination(::StringW api_name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "SetDestination",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request, false>(nullptr, ___internal_method, api_name);
}
 ::Oculus::Platform::Request ::Oculus::Platform::GroupPresence::SetIsJoinable(bool is_joinable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "SetIsJoinable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request, false>(nullptr, ___internal_method, is_joinable);
}
 ::Oculus::Platform::Request ::Oculus::Platform::GroupPresence::SetLobbySession(::StringW id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "SetLobbySession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request, false>(nullptr, ___internal_method, id);
}
 ::Oculus::Platform::Request ::Oculus::Platform::GroupPresence::SetMatchSession(::StringW id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "SetMatchSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request, false>(nullptr, ___internal_method, id);
}
 void ::Oculus::Platform::GroupPresence::SetInvitationsSentNotificationCallback(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::LaunchInvitePanelFlowResult> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "SetInvitationsSentNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::LaunchInvitePanelFlowResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
 void ::Oculus::Platform::GroupPresence::SetJoinIntentReceivedNotificationCallback(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::GroupPresenceJoinIntent> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "SetJoinIntentReceivedNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::GroupPresenceJoinIntent>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
 void ::Oculus::Platform::GroupPresence::SetLeaveIntentReceivedNotificationCallback(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::GroupPresenceLeaveIntent> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "SetLeaveIntentReceivedNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::GroupPresenceLeaveIntent>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ApplicationInviteList> ::Oculus::Platform::GroupPresence::GetNextApplicationInviteListPage(::Oculus::Platform::Models::ApplicationInviteList list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::GroupPresence>::get(),
                            "GetNextApplicationInviteListPage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::ApplicationInviteList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ApplicationInviteList>, false>(nullptr, ___internal_method, list);
}
} // end anonymous namespace
