#pragma once
#include "System/Runtime/Remoting/zzzz__ServerIdentity_impl.hpp"
#include "System/Runtime/Remoting/zzzz__SingletonIdentity_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageCtrl_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__Context_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::SingletonIdentity._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::SingletonIdentity::*)(::StringW, System::Runtime::Remoting::Contexts::Context, System::Type)>(&System::Runtime::Remoting::SingletonIdentity::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2327944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::SingletonIdentity>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::Context>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::SingletonIdentity.GetServerObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::MarshalByRefObject (System::Runtime::Remoting::SingletonIdentity::*)()>(&System::Runtime::Remoting::SingletonIdentity::GetServerObject)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x2327974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::SingletonIdentity>::get(),
                            "GetServerObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::SingletonIdentity.SyncObjectProcessMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessage (System::Runtime::Remoting::SingletonIdentity::*)(System::Runtime::Remoting::Messaging::IMessage)>(&System::Runtime::Remoting::SingletonIdentity::SyncObjectProcessMessage)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2327b6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::SingletonIdentity),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::SingletonIdentity>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::SingletonIdentity.AsyncObjectProcessMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessageCtrl (System::Runtime::Remoting::SingletonIdentity::*)(System::Runtime::Remoting::Messaging::IMessage, System::Runtime::Remoting::Messaging::IMessageSink)>(&System::Runtime::Remoting::SingletonIdentity::AsyncObjectProcessMessage)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2327c3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::SingletonIdentity),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::SingletonIdentity>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "objectUri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Remoting::Contexts::Context", modifiers: "", def_value: None }, CppParam { name: "objectType", ty: "System::Type", modifiers: "", def_value: None }]
 System::Runtime::Remoting::SingletonIdentity::SingletonIdentity(::StringW objectUri, System::Runtime::Remoting::Contexts::Context context, System::Type objectType)  : System::Runtime::Remoting::ServerIdentity(THROW_UNLESS(::il2cpp_utils::New<SingletonIdentity>(objectUri, context, objectType))) {}
 void System::Runtime::Remoting::SingletonIdentity::_ctor(::StringW objectUri, System::Runtime::Remoting::Contexts::Context context, System::Type objectType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::SingletonIdentity>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::Context>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, objectUri, context, objectType);
}
 System::MarshalByRefObject System::Runtime::Remoting::SingletonIdentity::GetServerObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::SingletonIdentity>::get(),
                            "GetServerObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::MarshalByRefObject, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Runtime::Remoting::Messaging::IMessage System::Runtime::Remoting::SingletonIdentity::SyncObjectProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::SingletonIdentity>::get(),
                            "SyncObjectProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessage, false>(const_cast<void*>(instance), ___internal_method, msg);
}
 System::Runtime::Remoting::Messaging::IMessageCtrl System::Runtime::Remoting::SingletonIdentity::AsyncObjectProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg, System::Runtime::Remoting::Messaging::IMessageSink replySink)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::SingletonIdentity>::get(),
                            "AsyncObjectProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessageCtrl, false>(const_cast<void*>(instance), ___internal_method, msg, replySink);
}
