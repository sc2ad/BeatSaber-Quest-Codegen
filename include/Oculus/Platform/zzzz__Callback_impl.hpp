#pragma once
#include "Oculus/Platform/zzzz__Callback_impl.hpp"
#include "Oculus/Platform/zzzz__Callback_def.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: Oculus::Platform::Oculus__Platform__Callback__RequestCallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Oculus__Platform__Callback__RequestCallback::*)()>(&Oculus::Platform::Oculus__Platform__Callback__RequestCallback::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2554670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Oculus__Platform__Callback__RequestCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Oculus__Platform__Callback__RequestCallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Oculus__Platform__Callback__RequestCallback::*)(Oculus::Platform::Oculus__Platform__Message__Callback)>(&Oculus::Platform::Oculus__Platform__Callback__RequestCallback::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2553c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Oculus__Platform__Callback__RequestCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message__Callback>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Oculus__Platform__Callback__RequestCallback.HandleMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Oculus__Platform__Callback__RequestCallback::*)(Oculus::Platform::Message)>(&Oculus::Platform::Oculus__Platform__Callback__RequestCallback::HandleMessage)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2554678;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::Oculus__Platform__Callback__RequestCallback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Oculus__Platform__Callback__RequestCallback>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Oculus__Platform__Callback__RequestCallback::__set_messageCallback(Oculus::Platform::Oculus__Platform__Message__Callback value)  {
::cordl_internals::setInstanceField<Oculus::Platform::Oculus__Platform__Message__Callback, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::Oculus__Platform__Message__Callback>(value));
}
constexpr Oculus::Platform::Oculus__Platform__Message__Callback Oculus::Platform::Oculus__Platform__Callback__RequestCallback::__get_messageCallback() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::Oculus__Platform__Message__Callback, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 Oculus::Platform::Oculus__Platform__Callback__RequestCallback::Oculus__Platform__Callback__RequestCallback()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Oculus__Platform__Callback__RequestCallback>())) {}
 void Oculus::Platform::Oculus__Platform__Callback__RequestCallback::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Oculus__Platform__Callback__RequestCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "callback", ty: "Oculus::Platform::Oculus__Platform__Message__Callback", modifiers: "", def_value: None }]
 Oculus::Platform::Oculus__Platform__Callback__RequestCallback::Oculus__Platform__Callback__RequestCallback(Oculus::Platform::Oculus__Platform__Message__Callback callback)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Oculus__Platform__Callback__RequestCallback>(callback))) {}
 void Oculus::Platform::Oculus__Platform__Callback__RequestCallback::_ctor(Oculus::Platform::Oculus__Platform__Message__Callback callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Oculus__Platform__Callback__RequestCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message__Callback>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callback);
}
 void Oculus::Platform::Oculus__Platform__Callback__RequestCallback::HandleMessage(Oculus::Platform::Message msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Oculus__Platform__Callback__RequestCallback>::get(),
                            "HandleMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msg);
}
//  Writing Method size for method: Oculus::Platform::Callback.SetNotificationCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Oculus::Platform::Oculus__Platform__Message__MessageType, Oculus::Platform::Oculus__Platform__Message__Callback)>(&Oculus::Platform::Callback::SetNotificationCallback)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2553b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Callback>::get(),
                            "SetNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message__Callback>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Callback.AddRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Oculus::Platform::Request)>(&Oculus::Platform::Callback::AddRequest)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2553ca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Callback>::get(),
                            "AddRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Request>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Callback.RunCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Platform::Callback::RunCallbacks)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2553d7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Callback>::get(),
                            "RunCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Callback.RunLimitedCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint32_t)>(&Oculus::Platform::Callback::RunLimitedCallbacks)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x25541b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Callback>::get(),
                            "RunLimitedCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Callback.OnApplicationQuit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Platform::Callback::OnApplicationQuit)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2554238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Callback>::get(),
                            "OnApplicationQuit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Callback.FlushRoomInviteNotificationQueue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Platform::Callback::FlushRoomInviteNotificationQueue)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x25542dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Callback>::get(),
                            "FlushRoomInviteNotificationQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Callback.FlushJoinIntentNotificationQueue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Platform::Callback::FlushJoinIntentNotificationQueue)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x25544a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Callback>::get(),
                            "FlushJoinIntentNotificationQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Callback.HandleMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Oculus::Platform::Message)>(&Oculus::Platform::Callback::HandleMessage)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x2553ebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Callback>::get(),
                            "HandleMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message>::get()}
                        )));
    return ___internal_method;
  }
};
 void Oculus::Platform::Callback::__set_requestIDsToRequests(System::Collections::Generic::Dictionary_2<uint64_t,Oculus::Platform::Request> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<uint64_t,Oculus::Platform::Request>, "requestIDsToRequests", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Callback>::get>(std::forward<System::Collections::Generic::Dictionary_2<uint64_t,Oculus::Platform::Request>>(value));
}
 System::Collections::Generic::Dictionary_2<uint64_t,Oculus::Platform::Request> Oculus::Platform::Callback::__get_requestIDsToRequests()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<uint64_t,Oculus::Platform::Request>, "requestIDsToRequests", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Callback>::get>();
}
 void Oculus::Platform::Callback::__set_notificationCallbacks(System::Collections::Generic::Dictionary_2<Oculus::Platform::Oculus__Platform__Message__MessageType,Oculus::Platform::Oculus__Platform__Callback__RequestCallback> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<Oculus::Platform::Oculus__Platform__Message__MessageType,Oculus::Platform::Oculus__Platform__Callback__RequestCallback>, "notificationCallbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Callback>::get>(std::forward<System::Collections::Generic::Dictionary_2<Oculus::Platform::Oculus__Platform__Message__MessageType,Oculus::Platform::Oculus__Platform__Callback__RequestCallback>>(value));
}
 System::Collections::Generic::Dictionary_2<Oculus::Platform::Oculus__Platform__Message__MessageType,Oculus::Platform::Oculus__Platform__Callback__RequestCallback> Oculus::Platform::Callback::__get_notificationCallbacks()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<Oculus::Platform::Oculus__Platform__Message__MessageType,Oculus::Platform::Oculus__Platform__Callback__RequestCallback>, "notificationCallbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Callback>::get>();
}
 void Oculus::Platform::Callback::__set_hasRegisteredRoomInviteNotificationHandler(bool value)  {
::cordl_internals::setStaticField<bool, "hasRegisteredRoomInviteNotificationHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Callback>::get>(std::forward<bool>(value));
}
 bool Oculus::Platform::Callback::__get_hasRegisteredRoomInviteNotificationHandler()  {
return ::cordl_internals::getStaticField<bool, "hasRegisteredRoomInviteNotificationHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Callback>::get>();
}
 void Oculus::Platform::Callback::__set_pendingRoomInviteNotifications(System::Collections::Generic::List_1<Oculus::Platform::Message> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::List_1<Oculus::Platform::Message>, "pendingRoomInviteNotifications", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Callback>::get>(std::forward<System::Collections::Generic::List_1<Oculus::Platform::Message>>(value));
}
 System::Collections::Generic::List_1<Oculus::Platform::Message> Oculus::Platform::Callback::__get_pendingRoomInviteNotifications()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::List_1<Oculus::Platform::Message>, "pendingRoomInviteNotifications", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Callback>::get>();
}
 void Oculus::Platform::Callback::__set_hasRegisteredJoinIntentNotificationHandler(bool value)  {
::cordl_internals::setStaticField<bool, "hasRegisteredJoinIntentNotificationHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Callback>::get>(std::forward<bool>(value));
}
 bool Oculus::Platform::Callback::__get_hasRegisteredJoinIntentNotificationHandler()  {
return ::cordl_internals::getStaticField<bool, "hasRegisteredJoinIntentNotificationHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Callback>::get>();
}
 void Oculus::Platform::Callback::__set_latestPendingJoinIntentNotifications(Oculus::Platform::Message value)  {
::cordl_internals::setStaticField<Oculus::Platform::Message, "latestPendingJoinIntentNotifications", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Callback>::get>(std::forward<Oculus::Platform::Message>(value));
}
 Oculus::Platform::Message Oculus::Platform::Callback::__get_latestPendingJoinIntentNotifications()  {
return ::cordl_internals::getStaticField<Oculus::Platform::Message, "latestPendingJoinIntentNotifications", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Callback>::get>();
}
template<typename T>
 void Oculus::Platform::Callback::SetNotificationCallback(Oculus::Platform::Oculus__Platform__Message__MessageType type, Oculus::Platform::Oculus__Platform__Message_1__Callback<T> callback)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Callback>::get(),
                        "SetNotificationCallback",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message_1__Callback<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type, callback);
}
 void Oculus::Platform::Callback::SetNotificationCallback(Oculus::Platform::Oculus__Platform__Message__MessageType type, Oculus::Platform::Oculus__Platform__Message__Callback callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Callback>::get(),
                            "SetNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message__Callback>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type, callback);
}
 void Oculus::Platform::Callback::AddRequest(Oculus::Platform::Request request)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Callback>::get(),
                            "AddRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Request>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, request);
}
 void Oculus::Platform::Callback::RunCallbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Callback>::get(),
                            "RunCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void Oculus::Platform::Callback::RunLimitedCallbacks(uint32_t limit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Callback>::get(),
                            "RunLimitedCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, limit);
}
 void Oculus::Platform::Callback::OnApplicationQuit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Callback>::get(),
                            "OnApplicationQuit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void Oculus::Platform::Callback::FlushRoomInviteNotificationQueue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Callback>::get(),
                            "FlushRoomInviteNotificationQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void Oculus::Platform::Callback::FlushJoinIntentNotificationQueue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Callback>::get(),
                            "FlushJoinIntentNotificationQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void Oculus::Platform::Callback::HandleMessage(Oculus::Platform::Message msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Callback>::get(),
                            "HandleMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, msg);
}
//  Writing Method size for method: Oculus::Platform::Oculus__Platform__Callback__RequestCallback_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Oculus__Platform__Callback__RequestCallback_1::*)(Oculus::Platform::Oculus__Platform__Message_1__Callback<T>)>(&Oculus::Platform::Oculus__Platform__Callback__RequestCallback_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Oculus__Platform__Callback__RequestCallback_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message_1__Callback<T>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Oculus__Platform__Callback__RequestCallback_1.HandleMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Oculus__Platform__Callback__RequestCallback_1::*)(Oculus::Platform::Message)>(&Oculus::Platform::Oculus__Platform__Callback__RequestCallback_1::HandleMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::Oculus__Platform__Callback__RequestCallback_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Oculus__Platform__Callback__RequestCallback_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Oculus__Platform__Callback__RequestCallback_1::__set_callback(Oculus::Platform::Oculus__Platform__Message_1__Callback<T> value)  {
::cordl_internals::setInstanceField<Oculus::Platform::Oculus__Platform__Message_1__Callback<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::Oculus__Platform__Message_1__Callback<T>>(value));
}
constexpr Oculus::Platform::Oculus__Platform__Message_1__Callback<T> Oculus::Platform::Oculus__Platform__Callback__RequestCallback_1::__get_callback() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::Oculus__Platform__Message_1__Callback<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "callback", ty: "Oculus::Platform::Oculus__Platform__Message_1__Callback<T>", modifiers: "", def_value: None }]
 Oculus::Platform::Oculus__Platform__Callback__RequestCallback_1::Oculus__Platform__Callback__RequestCallback_1(Oculus::Platform::Oculus__Platform__Message_1__Callback<T> callback)  : Oculus::Platform::Oculus__Platform__Callback__RequestCallback(THROW_UNLESS(::il2cpp_utils::New<Oculus__Platform__Callback__RequestCallback_1>(callback))) {}
 void Oculus::Platform::Oculus__Platform__Callback__RequestCallback_1::_ctor(Oculus::Platform::Oculus__Platform__Message_1__Callback<T> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Oculus__Platform__Callback__RequestCallback_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message_1__Callback<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callback);
}
 void Oculus::Platform::Oculus__Platform__Callback__RequestCallback_1::HandleMessage(Oculus::Platform::Message msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Oculus__Platform__Callback__RequestCallback_1>::get(),
                            "HandleMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msg);
}
