#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__RemoteInputPlayerConnection_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputRemoting_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__RemoteInputPlayerConnection_def.hpp"
#include "UnityEngine/Networking/PlayerConnection/zzzz__MessageEventArgs_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/Networking/PlayerConnection/zzzz__IEditorPlayerConnection_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber::Dispose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2915070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29149d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  UnityEngine::InputSystem::UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber::__set_owner(UnityEngine::InputSystem::RemoteInputPlayerConnection value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::RemoteInputPlayerConnection, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::RemoteInputPlayerConnection>(value));
}
constexpr UnityEngine::InputSystem::RemoteInputPlayerConnection UnityEngine::InputSystem::UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber::__get_owner() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::RemoteInputPlayerConnection, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber::__set_observer(System::IObserver_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message> value)  {
::cordl_internals::setInstanceField<System::IObserver_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IObserver_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>>(value));
}
constexpr System::IObserver_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message> UnityEngine::InputSystem::UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber::__get_observer() const {
return ::cordl_internals::getInstanceField<System::IObserver_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber UnityEngine::InputSystem::UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber::New_ctor()  {
UnityEngine::InputSystem::UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber>())};
return o;
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::RemoteInputPlayerConnection.Bind
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection, bool)>(&UnityEngine::InputSystem::RemoteInputPlayerConnection::Bind)> {
  constexpr static std::size_t size = 0x6dc;
  constexpr static std::size_t addrs = 0x291407c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            "Bind",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::RemoteInputPlayerConnection.Subscribe
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IDisposable (UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(System::IObserver_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>)>(&UnityEngine::InputSystem::RemoteInputPlayerConnection::Subscribe)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2914834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            "Subscribe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObserver_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::RemoteInputPlayerConnection.OnConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(int32_t)>(&UnityEngine::InputSystem::RemoteInputPlayerConnection::OnConnected)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2914758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            "OnConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::RemoteInputPlayerConnection.OnDisconnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(int32_t)>(&UnityEngine::InputSystem::RemoteInputPlayerConnection::OnDisconnected)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2914ae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            "OnDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::RemoteInputPlayerConnection.OnNewDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(UnityEngine::Networking::PlayerConnection::MessageEventArgs)>(&UnityEngine::InputSystem::RemoteInputPlayerConnection::OnNewDevice)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2914bc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            "OnNewDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::PlayerConnection::MessageEventArgs>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::RemoteInputPlayerConnection.OnNewLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(UnityEngine::Networking::PlayerConnection::MessageEventArgs)>(&UnityEngine::InputSystem::RemoteInputPlayerConnection::OnNewLayout)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2914bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            "OnNewLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::PlayerConnection::MessageEventArgs>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::RemoteInputPlayerConnection.OnNewEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(UnityEngine::Networking::PlayerConnection::MessageEventArgs)>(&UnityEngine::InputSystem::RemoteInputPlayerConnection::OnNewEvents)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2914bdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            "OnNewEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::PlayerConnection::MessageEventArgs>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::RemoteInputPlayerConnection.OnRemoveDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(UnityEngine::Networking::PlayerConnection::MessageEventArgs)>(&UnityEngine::InputSystem::RemoteInputPlayerConnection::OnRemoveDevice)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2914be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            "OnRemoveDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::PlayerConnection::MessageEventArgs>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::RemoteInputPlayerConnection.OnChangeUsages
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(UnityEngine::Networking::PlayerConnection::MessageEventArgs)>(&UnityEngine::InputSystem::RemoteInputPlayerConnection::OnChangeUsages)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2914bf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            "OnChangeUsages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::PlayerConnection::MessageEventArgs>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::RemoteInputPlayerConnection.OnStartSending
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(UnityEngine::Networking::PlayerConnection::MessageEventArgs)>(&UnityEngine::InputSystem::RemoteInputPlayerConnection::OnStartSending)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2914c00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            "OnStartSending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::PlayerConnection::MessageEventArgs>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::RemoteInputPlayerConnection.OnStopSending
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(UnityEngine::Networking::PlayerConnection::MessageEventArgs)>(&UnityEngine::InputSystem::RemoteInputPlayerConnection::OnStopSending)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2914c0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            "OnStopSending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::PlayerConnection::MessageEventArgs>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::RemoteInputPlayerConnection.SendToSubscribers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType, UnityEngine::Networking::PlayerConnection::MessageEventArgs)>(&UnityEngine::InputSystem::RemoteInputPlayerConnection::SendToSubscribers)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x29149dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            "SendToSubscribers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::PlayerConnection::MessageEventArgs>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::RemoteInputPlayerConnection.System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message)>(&UnityEngine::InputSystem::RemoteInputPlayerConnection::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnNext)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x2914c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::RemoteInputPlayerConnection.System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(System::Exception)>(&UnityEngine::InputSystem::RemoteInputPlayerConnection::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnError)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2914e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::RemoteInputPlayerConnection.System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::RemoteInputPlayerConnection::*)()>(&UnityEngine::InputSystem::RemoteInputPlayerConnection::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnCompleted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2914e80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::RemoteInputPlayerConnection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::RemoteInputPlayerConnection::*)()>(&UnityEngine::InputSystem::RemoteInputPlayerConnection::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2914e84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IObserver_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>
constexpr  UnityEngine::InputSystem::RemoteInputPlayerConnection::operator System::IObserver_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>() const noexcept {
return System::IObserver_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IObservable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>
constexpr  UnityEngine::InputSystem::RemoteInputPlayerConnection::operator System::IObservable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>() const noexcept {
return System::IObservable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>(::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::InputSystem::RemoteInputPlayerConnection::__set_kNewDeviceMsg(System::Guid value)  {
::cordl_internals::setStaticField<System::Guid, "kNewDeviceMsg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get>(std::forward<System::Guid>(value));
}
 System::Guid UnityEngine::InputSystem::RemoteInputPlayerConnection::__get_kNewDeviceMsg()  {
return ::cordl_internals::getStaticField<System::Guid, "kNewDeviceMsg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get>();
}
 void UnityEngine::InputSystem::RemoteInputPlayerConnection::__set_kNewLayoutMsg(System::Guid value)  {
::cordl_internals::setStaticField<System::Guid, "kNewLayoutMsg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get>(std::forward<System::Guid>(value));
}
 System::Guid UnityEngine::InputSystem::RemoteInputPlayerConnection::__get_kNewLayoutMsg()  {
return ::cordl_internals::getStaticField<System::Guid, "kNewLayoutMsg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get>();
}
 void UnityEngine::InputSystem::RemoteInputPlayerConnection::__set_kNewEventsMsg(System::Guid value)  {
::cordl_internals::setStaticField<System::Guid, "kNewEventsMsg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get>(std::forward<System::Guid>(value));
}
 System::Guid UnityEngine::InputSystem::RemoteInputPlayerConnection::__get_kNewEventsMsg()  {
return ::cordl_internals::getStaticField<System::Guid, "kNewEventsMsg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get>();
}
 void UnityEngine::InputSystem::RemoteInputPlayerConnection::__set_kRemoveDeviceMsg(System::Guid value)  {
::cordl_internals::setStaticField<System::Guid, "kRemoveDeviceMsg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get>(std::forward<System::Guid>(value));
}
 System::Guid UnityEngine::InputSystem::RemoteInputPlayerConnection::__get_kRemoveDeviceMsg()  {
return ::cordl_internals::getStaticField<System::Guid, "kRemoveDeviceMsg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get>();
}
 void UnityEngine::InputSystem::RemoteInputPlayerConnection::__set_kChangeUsagesMsg(System::Guid value)  {
::cordl_internals::setStaticField<System::Guid, "kChangeUsagesMsg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get>(std::forward<System::Guid>(value));
}
 System::Guid UnityEngine::InputSystem::RemoteInputPlayerConnection::__get_kChangeUsagesMsg()  {
return ::cordl_internals::getStaticField<System::Guid, "kChangeUsagesMsg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get>();
}
 void UnityEngine::InputSystem::RemoteInputPlayerConnection::__set_kStartSendingMsg(System::Guid value)  {
::cordl_internals::setStaticField<System::Guid, "kStartSendingMsg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get>(std::forward<System::Guid>(value));
}
 System::Guid UnityEngine::InputSystem::RemoteInputPlayerConnection::__get_kStartSendingMsg()  {
return ::cordl_internals::getStaticField<System::Guid, "kStartSendingMsg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get>();
}
 void UnityEngine::InputSystem::RemoteInputPlayerConnection::__set_kStopSendingMsg(System::Guid value)  {
::cordl_internals::setStaticField<System::Guid, "kStopSendingMsg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get>(std::forward<System::Guid>(value));
}
 System::Guid UnityEngine::InputSystem::RemoteInputPlayerConnection::__get_kStopSendingMsg()  {
return ::cordl_internals::getStaticField<System::Guid, "kStopSendingMsg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get>();
}
constexpr void UnityEngine::InputSystem::RemoteInputPlayerConnection::__set_m_Connection(UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection value)  {
::cordl_internals::setInstanceField<UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection>(value));
}
constexpr UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection UnityEngine::InputSystem::RemoteInputPlayerConnection::__get_m_Connection() const {
return ::cordl_internals::getInstanceField<UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::RemoteInputPlayerConnection::__set_m_Subscribers(::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber>>(value));
}
constexpr ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber> UnityEngine::InputSystem::RemoteInputPlayerConnection::__get_m_Subscribers() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::RemoteInputPlayerConnection::__set_m_ConnectedIds(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> UnityEngine::InputSystem::RemoteInputPlayerConnection::__get_m_ConnectedIds() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::InputSystem::RemoteInputPlayerConnection::Bind(UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection connection, bool isConnected)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            "Bind",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, connection, isConnected);
}
 System::IDisposable UnityEngine::InputSystem::RemoteInputPlayerConnection::Subscribe(System::IObserver_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message> observer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            "Subscribe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObserver_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IDisposable, false>(const_cast<void*>(instance), ___internal_method, observer);
}
 void UnityEngine::InputSystem::RemoteInputPlayerConnection::OnConnected(int32_t id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            "OnConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, id);
}
 void UnityEngine::InputSystem::RemoteInputPlayerConnection::OnDisconnected(int32_t id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            "OnDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, id);
}
 void UnityEngine::InputSystem::RemoteInputPlayerConnection::OnNewDevice(UnityEngine::Networking::PlayerConnection::MessageEventArgs args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            "OnNewDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::PlayerConnection::MessageEventArgs>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, args);
}
 void UnityEngine::InputSystem::RemoteInputPlayerConnection::OnNewLayout(UnityEngine::Networking::PlayerConnection::MessageEventArgs args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            "OnNewLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::PlayerConnection::MessageEventArgs>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, args);
}
 void UnityEngine::InputSystem::RemoteInputPlayerConnection::OnNewEvents(UnityEngine::Networking::PlayerConnection::MessageEventArgs args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            "OnNewEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::PlayerConnection::MessageEventArgs>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, args);
}
 void UnityEngine::InputSystem::RemoteInputPlayerConnection::OnRemoveDevice(UnityEngine::Networking::PlayerConnection::MessageEventArgs args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            "OnRemoveDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::PlayerConnection::MessageEventArgs>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, args);
}
 void UnityEngine::InputSystem::RemoteInputPlayerConnection::OnChangeUsages(UnityEngine::Networking::PlayerConnection::MessageEventArgs args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            "OnChangeUsages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::PlayerConnection::MessageEventArgs>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, args);
}
 void UnityEngine::InputSystem::RemoteInputPlayerConnection::OnStartSending(UnityEngine::Networking::PlayerConnection::MessageEventArgs args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            "OnStartSending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::PlayerConnection::MessageEventArgs>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, args);
}
 void UnityEngine::InputSystem::RemoteInputPlayerConnection::OnStopSending(UnityEngine::Networking::PlayerConnection::MessageEventArgs args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            "OnStopSending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::PlayerConnection::MessageEventArgs>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, args);
}
 void UnityEngine::InputSystem::RemoteInputPlayerConnection::SendToSubscribers(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType type, UnityEngine::Networking::PlayerConnection::MessageEventArgs args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            "SendToSubscribers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::PlayerConnection::MessageEventArgs>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type, args);
}
 void UnityEngine::InputSystem::RemoteInputPlayerConnection::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnNext(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msg);
}
 void UnityEngine::InputSystem::RemoteInputPlayerConnection::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnError(System::Exception error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, error);
}
 void UnityEngine::InputSystem::RemoteInputPlayerConnection::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::RemoteInputPlayerConnection UnityEngine::InputSystem::RemoteInputPlayerConnection::New_ctor()  {
UnityEngine::InputSystem::RemoteInputPlayerConnection o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::RemoteInputPlayerConnection>())};
return o;
}
 void UnityEngine::InputSystem::RemoteInputPlayerConnection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::RemoteInputPlayerConnection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
