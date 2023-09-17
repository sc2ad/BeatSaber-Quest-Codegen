#pragma once
namespace {
#include "Oculus/Platform/zzzz__Voip_def.hpp"
#include "Oculus/Platform/Models/zzzz__MicrophoneAvailabilityState_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__CAPI_def.hpp"
#include "Oculus/Platform/zzzz__VoipBitrate_def.hpp"
#include "Oculus/Platform/zzzz__VoipMuteState_def.hpp"
#include "Oculus/Platform/zzzz__SystemVoipStatus_def.hpp"
#include "Oculus/Platform/Models/zzzz__SystemVoipState_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetworkingPeer_def.hpp"
#include "Oculus/Platform/zzzz__VoipDtxState_def.hpp"
#include "Oculus/Platform/zzzz__VoipOptions_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Voip.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t)>(&::Oculus::Platform::Voip::Start)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x258cea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Voip.Accept
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t)>(&::Oculus::Platform::Voip::Accept)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x258cf64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "Accept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Voip.Stop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t)>(&::Oculus::Platform::Voip::Stop)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x258d028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "Stop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Voip.SetMicrophoneFilterCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::____Oculus__Platform__CAPI__FilterCallback)>(&::Oculus::Platform::Voip::SetMicrophoneFilterCallback)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x258d0ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "SetMicrophoneFilterCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__CAPI__FilterCallback>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Voip.SetMicrophoneMuted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::VoipMuteState)>(&::Oculus::Platform::Voip::SetMicrophoneMuted)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x258d1ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "SetMicrophoneMuted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::VoipMuteState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Voip.GetSystemVoipMicrophoneMuted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::VoipMuteState (*)()>(&::Oculus::Platform::Voip::GetSystemVoipMicrophoneMuted)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x258d2b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "GetSystemVoipMicrophoneMuted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Voip.GetSystemVoipStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::SystemVoipStatus (*)()>(&::Oculus::Platform::Voip::GetSystemVoipStatus)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x258d370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "GetSystemVoipStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Voip.GetIsConnectionUsingDtx
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::VoipDtxState (*)(uint64_t)>(&::Oculus::Platform::Voip::GetIsConnectionUsingDtx)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x258d430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "GetIsConnectionUsingDtx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Voip.GetLocalBitrate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::VoipBitrate (*)(uint64_t)>(&::Oculus::Platform::Voip::GetLocalBitrate)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x258d4f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "GetLocalBitrate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Voip.GetRemoteBitrate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::VoipBitrate (*)(uint64_t)>(&::Oculus::Platform::Voip::GetRemoteBitrate)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x258d5c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "GetRemoteBitrate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Voip.SetNewConnectionOptions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::VoipOptions)>(&::Oculus::Platform::Voip::SetNewConnectionOptions)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x258d688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "SetNewConnectionOptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::VoipOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Voip.GetMicrophoneAvailability
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MicrophoneAvailabilityState> (*)()>(&::Oculus::Platform::Voip::GetMicrophoneAvailability)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x258d760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "GetMicrophoneAvailability",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Voip.SetSystemVoipSuppressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::SystemVoipState> (*)(bool)>(&::Oculus::Platform::Voip::SetSystemVoipSuppressed)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x258d8b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "SetSystemVoipSuppressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Voip.SetVoipConnectRequestCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::NetworkingPeer>)>(&::Oculus::Platform::Voip::SetVoipConnectRequestCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x258da18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "SetVoipConnectRequestCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::NetworkingPeer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Voip.SetMicrophoneAvailabilityStateUpdateNotificationCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::StringW>)>(&::Oculus::Platform::Voip::SetMicrophoneAvailabilityStateUpdateNotificationCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x258da8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "SetMicrophoneAvailabilityStateUpdateNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Voip.SetVoipStateChangeCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::NetworkingPeer>)>(&::Oculus::Platform::Voip::SetVoipStateChangeCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x258db00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "SetVoipStateChangeCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::NetworkingPeer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Voip.SetSystemVoipStateNotificationCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::SystemVoipState>)>(&::Oculus::Platform::Voip::SetSystemVoipStateNotificationCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x258db74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "SetSystemVoipStateNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::SystemVoipState>>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::Oculus::Platform::Voip::Start(uint64_t userID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userID);
}
 void ::Oculus::Platform::Voip::Accept(uint64_t userID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "Accept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userID);
}
 void ::Oculus::Platform::Voip::Stop(uint64_t userID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "Stop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userID);
}
 void ::Oculus::Platform::Voip::SetMicrophoneFilterCallback(::Oculus::Platform::____Oculus__Platform__CAPI__FilterCallback callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "SetMicrophoneFilterCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__CAPI__FilterCallback>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
 void ::Oculus::Platform::Voip::SetMicrophoneMuted(::Oculus::Platform::VoipMuteState state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "SetMicrophoneMuted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::VoipMuteState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, state);
}
 ::Oculus::Platform::VoipMuteState ::Oculus::Platform::Voip::GetSystemVoipMicrophoneMuted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "GetSystemVoipMicrophoneMuted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::VoipMuteState, false>(nullptr, ___internal_method);
}
 ::Oculus::Platform::SystemVoipStatus ::Oculus::Platform::Voip::GetSystemVoipStatus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "GetSystemVoipStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::SystemVoipStatus, false>(nullptr, ___internal_method);
}
 ::Oculus::Platform::VoipDtxState ::Oculus::Platform::Voip::GetIsConnectionUsingDtx(uint64_t peerID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "GetIsConnectionUsingDtx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::VoipDtxState, false>(nullptr, ___internal_method, peerID);
}
 ::Oculus::Platform::VoipBitrate ::Oculus::Platform::Voip::GetLocalBitrate(uint64_t peerID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "GetLocalBitrate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::VoipBitrate, false>(nullptr, ___internal_method, peerID);
}
 ::Oculus::Platform::VoipBitrate ::Oculus::Platform::Voip::GetRemoteBitrate(uint64_t peerID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "GetRemoteBitrate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::VoipBitrate, false>(nullptr, ___internal_method, peerID);
}
 void ::Oculus::Platform::Voip::SetNewConnectionOptions(::Oculus::Platform::VoipOptions voipOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "SetNewConnectionOptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::VoipOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, voipOptions);
}
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MicrophoneAvailabilityState> ::Oculus::Platform::Voip::GetMicrophoneAvailability()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "GetMicrophoneAvailability",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MicrophoneAvailabilityState>, false>(nullptr, ___internal_method);
}
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::SystemVoipState> ::Oculus::Platform::Voip::SetSystemVoipSuppressed(bool suppressed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "SetSystemVoipSuppressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::SystemVoipState>, false>(nullptr, ___internal_method, suppressed);
}
 void ::Oculus::Platform::Voip::SetVoipConnectRequestCallback(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::NetworkingPeer> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "SetVoipConnectRequestCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::NetworkingPeer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
 void ::Oculus::Platform::Voip::SetMicrophoneAvailabilityStateUpdateNotificationCallback(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::StringW> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "SetMicrophoneAvailabilityStateUpdateNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
 void ::Oculus::Platform::Voip::SetVoipStateChangeCallback(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::NetworkingPeer> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "SetVoipStateChangeCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::NetworkingPeer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
 void ::Oculus::Platform::Voip::SetSystemVoipStateNotificationCallback(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::SystemVoipState> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Voip>::get(),
                            "SetSystemVoipStateNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::SystemVoipState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
} // end anonymous namespace
