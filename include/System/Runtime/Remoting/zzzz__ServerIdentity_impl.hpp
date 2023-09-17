#pragma once
#include "System/Runtime/Remoting/zzzz__Identity_impl.hpp"
namespace {
#include "System/Runtime/Remoting/zzzz__ServerIdentity_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__Lease_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageCtrl_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__ILease_def.hpp"
#include "System/Runtime/Remoting/zzzz__ObjRef_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__Context_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::ServerIdentity._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ServerIdentity::*)(::StringW, ::System::Runtime::Remoting::Contexts::Context, ::System::Type)>(&::System::Runtime::Remoting::ServerIdentity::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x232654c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ServerIdentity>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::Context>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ServerIdentity.get_ObjectType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type (::System::Runtime::Remoting::ServerIdentity::*)()>(&::System::Runtime::Remoting::ServerIdentity::get_ObjectType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x232657c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ServerIdentity>::get(),
                            "get_ObjectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ServerIdentity.StartTrackingLifetime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ServerIdentity::*)(::System::Runtime::Remoting::Lifetime::ILease)>(&::System::Runtime::Remoting::ServerIdentity::StartTrackingLifetime)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2326584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ServerIdentity>::get(),
                            "StartTrackingLifetime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Lifetime::ILease>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ServerIdentity.OnLifetimeExpired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ServerIdentity::*)()>(&::System::Runtime::Remoting::ServerIdentity::OnLifetimeExpired)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23268d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Runtime::Remoting::ServerIdentity),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ServerIdentity>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ServerIdentity.CreateObjRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::ObjRef (::System::Runtime::Remoting::ServerIdentity::*)(::System::Type)>(&::System::Runtime::Remoting::ServerIdentity::CreateObjRef)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2326950;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Runtime::Remoting::ServerIdentity),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ServerIdentity>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ServerIdentity.AttachServerObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ServerIdentity::*)(::System::MarshalByRefObject, ::System::Runtime::Remoting::Contexts::Context)>(&::System::Runtime::Remoting::ServerIdentity::AttachServerObject)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2326f0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ServerIdentity>::get(),
                            "AttachServerObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::MarshalByRefObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::Context>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ServerIdentity.get_Lease
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Lifetime::Lease (::System::Runtime::Remoting::ServerIdentity::*)()>(&::System::Runtime::Remoting::ServerIdentity::get_Lease)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2327208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ServerIdentity>::get(),
                            "get_Lease",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ServerIdentity.get_Context
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Contexts::Context (::System::Runtime::Remoting::ServerIdentity::*)()>(&::System::Runtime::Remoting::ServerIdentity::get_Context)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2327210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ServerIdentity>::get(),
                            "get_Context",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ServerIdentity.set_Context
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ServerIdentity::*)(::System::Runtime::Remoting::Contexts::Context)>(&::System::Runtime::Remoting::ServerIdentity::set_Context)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2327218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ServerIdentity>::get(),
                            "set_Context",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::Context>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ServerIdentity.SyncObjectProcessMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage (::System::Runtime::Remoting::ServerIdentity::*)(::System::Runtime::Remoting::Messaging::IMessage)>(&::System::Runtime::Remoting::ServerIdentity::SyncObjectProcessMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Runtime::Remoting::ServerIdentity),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ServerIdentity>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ServerIdentity.AsyncObjectProcessMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageCtrl (::System::Runtime::Remoting::ServerIdentity::*)(::System::Runtime::Remoting::Messaging::IMessage, ::System::Runtime::Remoting::Messaging::IMessageSink)>(&::System::Runtime::Remoting::ServerIdentity::AsyncObjectProcessMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Runtime::Remoting::ServerIdentity),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ServerIdentity>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ServerIdentity.DisposeServerObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ServerIdentity::*)()>(&::System::Runtime::Remoting::ServerIdentity::DisposeServerObject)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x23268d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ServerIdentity>::get(),
                            "DisposeServerObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Runtime::Remoting::ServerIdentity::__set__objectType(::System::Type value)  {
::cordl_internals::setInstanceField<::System::Type, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Type>(value));
}
constexpr ::System::Type ::System::Runtime::Remoting::ServerIdentity::__get__objectType() const {
return ::cordl_internals::getInstanceField<::System::Type, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::ServerIdentity::__set__serverObject(::System::MarshalByRefObject value)  {
::cordl_internals::setInstanceField<::System::MarshalByRefObject, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::MarshalByRefObject>(value));
}
constexpr ::System::MarshalByRefObject ::System::Runtime::Remoting::ServerIdentity::__get__serverObject() const {
return ::cordl_internals::getInstanceField<::System::MarshalByRefObject, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::ServerIdentity::__set__serverSink(::System::Runtime::Remoting::Messaging::IMessageSink value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Messaging::IMessageSink, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Remoting::Messaging::IMessageSink>(value));
}
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink ::System::Runtime::Remoting::ServerIdentity::__get__serverSink() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Messaging::IMessageSink, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::ServerIdentity::__set__context(::System::Runtime::Remoting::Contexts::Context value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Contexts::Context, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Remoting::Contexts::Context>(value));
}
constexpr ::System::Runtime::Remoting::Contexts::Context ::System::Runtime::Remoting::ServerIdentity::__get__context() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Contexts::Context, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::ServerIdentity::__set__lease(::System::Runtime::Remoting::Lifetime::Lease value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Lifetime::Lease, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Remoting::Lifetime::Lease>(value));
}
constexpr ::System::Runtime::Remoting::Lifetime::Lease ::System::Runtime::Remoting::ServerIdentity::__get__lease() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Lifetime::Lease, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "objectUri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Remoting::Contexts::Context", modifiers: "", def_value: None }, CppParam { name: "objectType", ty: "::System::Type", modifiers: "", def_value: None }]
 ::System::Runtime::Remoting::ServerIdentity::ServerIdentity(::StringW objectUri, ::System::Runtime::Remoting::Contexts::Context context, ::System::Type objectType)  : ::System::Runtime::Remoting::Identity(THROW_UNLESS(::il2cpp_utils::New<ServerIdentity>(objectUri, context, objectType))) {}
 void ::System::Runtime::Remoting::ServerIdentity::_ctor(::StringW objectUri, ::System::Runtime::Remoting::Contexts::Context context, ::System::Type objectType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ServerIdentity>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::Context>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, objectUri, context, objectType);
}
 ::System::Type ::System::Runtime::Remoting::ServerIdentity::get_ObjectType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ServerIdentity>::get(),
                            "get_ObjectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Runtime::Remoting::ServerIdentity::StartTrackingLifetime(::System::Runtime::Remoting::Lifetime::ILease lease)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ServerIdentity>::get(),
                            "StartTrackingLifetime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Lifetime::ILease>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, lease);
}
 void ::System::Runtime::Remoting::ServerIdentity::OnLifetimeExpired()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ServerIdentity>::get(),
                            "OnLifetimeExpired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Runtime::Remoting::ObjRef ::System::Runtime::Remoting::ServerIdentity::CreateObjRef(::System::Type requestedType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ServerIdentity>::get(),
                            "CreateObjRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::ObjRef, false>(const_cast<void*>(instance), ___internal_method, requestedType);
}
 void ::System::Runtime::Remoting::ServerIdentity::AttachServerObject(::System::MarshalByRefObject serverObject, ::System::Runtime::Remoting::Contexts::Context context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ServerIdentity>::get(),
                            "AttachServerObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::MarshalByRefObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::Context>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serverObject, context);
}
 ::System::Runtime::Remoting::Lifetime::Lease ::System::Runtime::Remoting::ServerIdentity::get_Lease()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ServerIdentity>::get(),
                            "get_Lease",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Lifetime::Lease, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Runtime::Remoting::Contexts::Context ::System::Runtime::Remoting::ServerIdentity::get_Context()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ServerIdentity>::get(),
                            "get_Context",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Contexts::Context, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Runtime::Remoting::ServerIdentity::set_Context(::System::Runtime::Remoting::Contexts::Context value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ServerIdentity>::get(),
                            "set_Context",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::Context>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Runtime::Remoting::Messaging::IMessage ::System::Runtime::Remoting::ServerIdentity::SyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ServerIdentity>::get(),
                            "SyncObjectProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage, false>(const_cast<void*>(instance), ___internal_method, msg);
}
 ::System::Runtime::Remoting::Messaging::IMessageCtrl ::System::Runtime::Remoting::ServerIdentity::AsyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage msg, ::System::Runtime::Remoting::Messaging::IMessageSink replySink)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ServerIdentity>::get(),
                            "AsyncObjectProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageCtrl, false>(const_cast<void*>(instance), ___internal_method, msg, replySink);
}
 void ::System::Runtime::Remoting::ServerIdentity::DisposeServerObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ServerIdentity>::get(),
                            "DisposeServerObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
