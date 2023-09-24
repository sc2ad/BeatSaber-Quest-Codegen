#pragma once
#include "System/Runtime/Remoting/Proxies/zzzz__RealProxy_impl.hpp"
#include "System/Runtime/Remoting/Proxies/zzzz__RemotingProxy_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Runtime/Remoting/zzzz__Identity_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/zzzz__IRemotingTypeInfo_def.hpp"
#include "System/Runtime/Remoting/zzzz__ClientIdentity_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ConstructionCall_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Proxies::RemotingProxy._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Proxies::RemotingProxy::*)(System::Type, System::Runtime::Remoting::ClientIdentity)>(&System::Runtime::Remoting::Proxies::RemotingProxy::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x232c9f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Proxies::RemotingProxy>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::ClientIdentity>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Proxies::RemotingProxy._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Proxies::RemotingProxy::*)(System::Type, ::StringW, ::ArrayW<::bs_hook::Il2CppWrapperType>)>(&System::Runtime::Remoting::Proxies::RemotingProxy::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x232a260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Proxies::RemotingProxy>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Proxies::RemotingProxy.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessage (System::Runtime::Remoting::Proxies::RemotingProxy::*)(System::Runtime::Remoting::Messaging::IMessage)>(&System::Runtime::Remoting::Proxies::RemotingProxy::Invoke)> {
  constexpr static std::size_t size = 0x5c8;
  constexpr static std::size_t addrs = 0x232d3f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Proxies::RemotingProxy),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Proxies::RemotingProxy>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Proxies::RemotingProxy.AttachIdentity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Proxies::RemotingProxy::*)(System::Runtime::Remoting::Identity)>(&System::Runtime::Remoting::Proxies::RemotingProxy::AttachIdentity)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x232dd54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Proxies::RemotingProxy>::get(),
                            "AttachIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Identity>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Proxies::RemotingProxy.ActivateRemoteObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessage (System::Runtime::Remoting::Proxies::RemotingProxy::*)(System::Runtime::Remoting::Messaging::IMethodMessage)>(&System::Runtime::Remoting::Proxies::RemotingProxy::ActivateRemoteObject)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x232b920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Proxies::RemotingProxy>::get(),
                            "ActivateRemoteObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMethodMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Proxies::RemotingProxy.get_TypeName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Proxies::RemotingProxy::*)()>(&System::Runtime::Remoting::Proxies::RemotingProxy::get_TypeName)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x232e514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Proxies::RemotingProxy>::get(),
                            "get_TypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Proxies::RemotingProxy.CanCastTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Proxies::RemotingProxy::*)(System::Type, ::bs_hook::Il2CppWrapperType)>(&System::Runtime::Remoting::Proxies::RemotingProxy::CanCastTo)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x232e64c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Proxies::RemotingProxy>::get(),
                            "CanCastTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Proxies::RemotingProxy.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Proxies::RemotingProxy::*)()>(&System::Runtime::Remoting::Proxies::RemotingProxy::Finalize)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x232e868;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Proxies::RemotingProxy),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Proxies::RemotingProxy>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Remoting::IRemotingTypeInfo
constexpr  System::Runtime::Remoting::Proxies::RemotingProxy::operator System::Runtime::Remoting::IRemotingTypeInfo() const noexcept {
return System::Runtime::Remoting::IRemotingTypeInfo(::bs_hook::Il2CppWrapperType::instance);
}
 void System::Runtime::Remoting::Proxies::RemotingProxy::__set__cache_GetTypeMethod(System::Reflection::MethodInfo value)  {
::cordl_internals::setStaticField<System::Reflection::MethodInfo, "_cache_GetTypeMethod", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Proxies::RemotingProxy>::get>(std::forward<System::Reflection::MethodInfo>(value));
}
 System::Reflection::MethodInfo System::Runtime::Remoting::Proxies::RemotingProxy::__get__cache_GetTypeMethod()  {
return ::cordl_internals::getStaticField<System::Reflection::MethodInfo, "_cache_GetTypeMethod", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Proxies::RemotingProxy>::get>();
}
 void System::Runtime::Remoting::Proxies::RemotingProxy::__set__cache_GetHashCodeMethod(System::Reflection::MethodInfo value)  {
::cordl_internals::setStaticField<System::Reflection::MethodInfo, "_cache_GetHashCodeMethod", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Proxies::RemotingProxy>::get>(std::forward<System::Reflection::MethodInfo>(value));
}
 System::Reflection::MethodInfo System::Runtime::Remoting::Proxies::RemotingProxy::__get__cache_GetHashCodeMethod()  {
return ::cordl_internals::getStaticField<System::Reflection::MethodInfo, "_cache_GetHashCodeMethod", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Proxies::RemotingProxy>::get>();
}
constexpr void System::Runtime::Remoting::Proxies::RemotingProxy::__set__sink(System::Runtime::Remoting::Messaging::IMessageSink value)  {
::cordl_internals::setInstanceField<System::Runtime::Remoting::Messaging::IMessageSink, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Remoting::Messaging::IMessageSink>(value));
}
constexpr System::Runtime::Remoting::Messaging::IMessageSink System::Runtime::Remoting::Proxies::RemotingProxy::__get__sink() const {
return ::cordl_internals::getInstanceField<System::Runtime::Remoting::Messaging::IMessageSink, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::Proxies::RemotingProxy::__set__hasEnvoySink(bool value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Runtime::Remoting::Proxies::RemotingProxy::__get__hasEnvoySink() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::Proxies::RemotingProxy::__set__ctorCall(System::Runtime::Remoting::Messaging::ConstructionCall value)  {
::cordl_internals::setInstanceField<System::Runtime::Remoting::Messaging::ConstructionCall, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Remoting::Messaging::ConstructionCall>(value));
}
constexpr System::Runtime::Remoting::Messaging::ConstructionCall System::Runtime::Remoting::Proxies::RemotingProxy::__get__ctorCall() const {
return ::cordl_internals::getInstanceField<System::Runtime::Remoting::Messaging::ConstructionCall, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Runtime::Remoting::Proxies::RemotingProxy System::Runtime::Remoting::Proxies::RemotingProxy::New_ctor(System::Type type, System::Runtime::Remoting::ClientIdentity identity)  {
System::Runtime::Remoting::Proxies::RemotingProxy o{THROW_UNLESS(::il2cpp_utils::New<System::Runtime::Remoting::Proxies::RemotingProxy>(type, identity))};
return o;
}
 void System::Runtime::Remoting::Proxies::RemotingProxy::_ctor(System::Type type, System::Runtime::Remoting::ClientIdentity identity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Proxies::RemotingProxy>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::ClientIdentity>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type, identity);
}
 System::Runtime::Remoting::Proxies::RemotingProxy System::Runtime::Remoting::Proxies::RemotingProxy::New_ctor(System::Type type, ::StringW activationUrl, ::ArrayW<::bs_hook::Il2CppWrapperType> activationAttributes)  {
System::Runtime::Remoting::Proxies::RemotingProxy o{THROW_UNLESS(::il2cpp_utils::New<System::Runtime::Remoting::Proxies::RemotingProxy>(type, activationUrl, activationAttributes))};
return o;
}
 void System::Runtime::Remoting::Proxies::RemotingProxy::_ctor(System::Type type, ::StringW activationUrl, ::ArrayW<::bs_hook::Il2CppWrapperType> activationAttributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Proxies::RemotingProxy>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type, activationUrl, activationAttributes);
}
 System::Runtime::Remoting::Messaging::IMessage System::Runtime::Remoting::Proxies::RemotingProxy::Invoke(System::Runtime::Remoting::Messaging::IMessage request)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Proxies::RemotingProxy>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessage, false>(const_cast<void*>(instance), ___internal_method, request);
}
 void System::Runtime::Remoting::Proxies::RemotingProxy::AttachIdentity(System::Runtime::Remoting::Identity identity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Proxies::RemotingProxy>::get(),
                            "AttachIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Identity>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, identity);
}
 System::Runtime::Remoting::Messaging::IMessage System::Runtime::Remoting::Proxies::RemotingProxy::ActivateRemoteObject(System::Runtime::Remoting::Messaging::IMethodMessage request)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Proxies::RemotingProxy>::get(),
                            "ActivateRemoteObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMethodMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessage, false>(const_cast<void*>(instance), ___internal_method, request);
}
 ::StringW System::Runtime::Remoting::Proxies::RemotingProxy::get_TypeName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Proxies::RemotingProxy>::get(),
                            "get_TypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Runtime::Remoting::Proxies::RemotingProxy::CanCastTo(System::Type fromType, ::bs_hook::Il2CppWrapperType o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Proxies::RemotingProxy>::get(),
                            "CanCastTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, fromType, o);
}
 void System::Runtime::Remoting::Proxies::RemotingProxy::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Proxies::RemotingProxy>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
