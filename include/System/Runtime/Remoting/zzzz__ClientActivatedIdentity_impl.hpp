#pragma once
#include "System/Runtime/Remoting/zzzz__ServerIdentity_impl.hpp"
#include "System/Runtime/Remoting/zzzz__ClientActivatedIdentity_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageCtrl_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::ClientActivatedIdentity._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ClientActivatedIdentity::*)(::StringW, System::Type)>(&System::Runtime::Remoting::ClientActivatedIdentity::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2327524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ClientActivatedIdentity>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ClientActivatedIdentity.GetServerObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::MarshalByRefObject (System::Runtime::Remoting::ClientActivatedIdentity::*)()>(&System::Runtime::Remoting::ClientActivatedIdentity::GetServerObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2327550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ClientActivatedIdentity>::get(),
                            "GetServerObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ClientActivatedIdentity.SetClientProxy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ClientActivatedIdentity::*)(System::MarshalByRefObject)>(&System::Runtime::Remoting::ClientActivatedIdentity::SetClientProxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2327558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ClientActivatedIdentity>::get(),
                            "SetClientProxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::MarshalByRefObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ClientActivatedIdentity.OnLifetimeExpired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ClientActivatedIdentity::*)()>(&System::Runtime::Remoting::ClientActivatedIdentity::OnLifetimeExpired)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2327560;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::ClientActivatedIdentity),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ClientActivatedIdentity>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ClientActivatedIdentity.SyncObjectProcessMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessage (System::Runtime::Remoting::ClientActivatedIdentity::*)(System::Runtime::Remoting::Messaging::IMessage)>(&System::Runtime::Remoting::ClientActivatedIdentity::SyncObjectProcessMessage)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x23275c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::ClientActivatedIdentity),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ClientActivatedIdentity>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ClientActivatedIdentity.AsyncObjectProcessMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessageCtrl (System::Runtime::Remoting::ClientActivatedIdentity::*)(System::Runtime::Remoting::Messaging::IMessage, System::Runtime::Remoting::Messaging::IMessageSink)>(&System::Runtime::Remoting::ClientActivatedIdentity::AsyncObjectProcessMessage)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2327854;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::ClientActivatedIdentity),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ClientActivatedIdentity>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Remoting::ClientActivatedIdentity::__set__targetThis(System::MarshalByRefObject value)  {
::cordl_internals::setInstanceField<System::MarshalByRefObject, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::MarshalByRefObject>(value));
}
constexpr System::MarshalByRefObject System::Runtime::Remoting::ClientActivatedIdentity::__get__targetThis() const {
return ::cordl_internals::getInstanceField<System::MarshalByRefObject, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "objectUri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "objectType", ty: "System::Type", modifiers: "", def_value: None }]
 System::Runtime::Remoting::ClientActivatedIdentity::ClientActivatedIdentity(::StringW objectUri, System::Type objectType)  : System::Runtime::Remoting::ServerIdentity(THROW_UNLESS(::il2cpp_utils::New<ClientActivatedIdentity>(objectUri, objectType))) {}
 void System::Runtime::Remoting::ClientActivatedIdentity::_ctor(::StringW objectUri, System::Type objectType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ClientActivatedIdentity>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, objectUri, objectType);
}
 System::MarshalByRefObject System::Runtime::Remoting::ClientActivatedIdentity::GetServerObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ClientActivatedIdentity>::get(),
                            "GetServerObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::MarshalByRefObject, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Runtime::Remoting::ClientActivatedIdentity::SetClientProxy(System::MarshalByRefObject obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ClientActivatedIdentity>::get(),
                            "SetClientProxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::MarshalByRefObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 void System::Runtime::Remoting::ClientActivatedIdentity::OnLifetimeExpired()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ClientActivatedIdentity>::get(),
                            "OnLifetimeExpired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Runtime::Remoting::Messaging::IMessage System::Runtime::Remoting::ClientActivatedIdentity::SyncObjectProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ClientActivatedIdentity>::get(),
                            "SyncObjectProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessage, false>(const_cast<void*>(instance), ___internal_method, msg);
}
 System::Runtime::Remoting::Messaging::IMessageCtrl System::Runtime::Remoting::ClientActivatedIdentity::AsyncObjectProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg, System::Runtime::Remoting::Messaging::IMessageSink replySink)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ClientActivatedIdentity>::get(),
                            "AsyncObjectProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessageCtrl, false>(const_cast<void*>(instance), ___internal_method, msg, replySink);
}
