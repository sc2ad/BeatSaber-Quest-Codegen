#pragma once
namespace {
#include "System/Runtime/Remoting/Activation/zzzz__ActivationServices_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ConstructionCall_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Remoting/Proxies/zzzz__RemotingProxy_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IActivator_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ActivationServices.get_ConstructionActivator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Activation::IActivator (*)()>(&::System::Runtime::Remoting::Activation::ActivationServices::get_ConstructionActivator)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2338054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices>::get(),
                            "get_ConstructionActivator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ActivationServices.Activate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage (*)(::System::Runtime::Remoting::Proxies::RemotingProxy, ::System::Runtime::Remoting::Messaging::ConstructionCall)>(&::System::Runtime::Remoting::Activation::ActivationServices::Activate)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x232e2ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Proxies::RemotingProxy>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::ConstructionCall>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ActivationServices.RemoteActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage (*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage)>(&::System::Runtime::Remoting::Activation::ActivationServices::RemoteActivate)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x23380f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices>::get(),
                            "RemoteActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IConstructionCallMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ActivationServices.CreateConstructionCall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::ConstructionCall (*)(::System::Type, ::StringW, ::ArrayW<::bs_hook::Il2CppWrapperType>)>(&::System::Runtime::Remoting::Activation::ActivationServices::CreateConstructionCall)> {
  constexpr static std::size_t size = 0x9bc;
  constexpr static std::size_t addrs = 0x232ca3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices>::get(),
                            "CreateConstructionCall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ActivationServices.CreateInstanceFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage (*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage)>(&::System::Runtime::Remoting::Activation::ActivationServices::CreateInstanceFromMessage)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x2338314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices>::get(),
                            "CreateInstanceFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IConstructionCallMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ActivationServices.CreateProxyForType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::System::Type)>(&::System::Runtime::Remoting::Activation::ActivationServices::CreateProxyForType)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2338718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices>::get(),
                            "CreateProxyForType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ActivationServices.AllocateUninitializedClassInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::System::Type)>(&::System::Runtime::Remoting::Activation::ActivationServices::AllocateUninitializedClassInstance)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2338714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices>::get(),
                            "AllocateUninitializedClassInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ActivationServices.EnableProxyActivation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type, bool)>(&::System::Runtime::Remoting::Activation::ActivationServices::EnableProxyActivation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2338858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices>::get(),
                            "EnableProxyActivation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::System::Runtime::Remoting::Activation::ActivationServices::__set__constructionActivator(::System::Runtime::Remoting::Activation::IActivator value)  {
::cordl_internals::setStaticField<::System::Runtime::Remoting::Activation::IActivator, "_constructionActivator", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices>::get>(std::forward<::System::Runtime::Remoting::Activation::IActivator>(value));
}
 ::System::Runtime::Remoting::Activation::IActivator ::System::Runtime::Remoting::Activation::ActivationServices::__get__constructionActivator()  {
return ::cordl_internals::getStaticField<::System::Runtime::Remoting::Activation::IActivator, "_constructionActivator", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices>::get>();
}
 ::System::Runtime::Remoting::Activation::IActivator ::System::Runtime::Remoting::Activation::ActivationServices::get_ConstructionActivator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices>::get(),
                            "get_ConstructionActivator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Activation::IActivator, false>(nullptr, ___internal_method);
}
 ::System::Runtime::Remoting::Messaging::IMessage ::System::Runtime::Remoting::Activation::ActivationServices::Activate(::System::Runtime::Remoting::Proxies::RemotingProxy proxy, ::System::Runtime::Remoting::Messaging::ConstructionCall ctorCall)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Proxies::RemotingProxy>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::ConstructionCall>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage, false>(nullptr, ___internal_method, proxy, ctorCall);
}
 ::System::Runtime::Remoting::Messaging::IMessage ::System::Runtime::Remoting::Activation::ActivationServices::RemoteActivate(::System::Runtime::Remoting::Activation::IConstructionCallMessage ctorCall)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices>::get(),
                            "RemoteActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IConstructionCallMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage, false>(nullptr, ___internal_method, ctorCall);
}
 ::System::Runtime::Remoting::Messaging::ConstructionCall ::System::Runtime::Remoting::Activation::ActivationServices::CreateConstructionCall(::System::Type type, ::StringW activationUrl, ::ArrayW<::bs_hook::Il2CppWrapperType> activationAttributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices>::get(),
                            "CreateConstructionCall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::ConstructionCall, false>(nullptr, ___internal_method, type, activationUrl, activationAttributes);
}
 ::System::Runtime::Remoting::Messaging::IMessage ::System::Runtime::Remoting::Activation::ActivationServices::CreateInstanceFromMessage(::System::Runtime::Remoting::Activation::IConstructionCallMessage ctorCall)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices>::get(),
                            "CreateInstanceFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IConstructionCallMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage, false>(nullptr, ___internal_method, ctorCall);
}
 ::bs_hook::Il2CppWrapperType ::System::Runtime::Remoting::Activation::ActivationServices::CreateProxyForType(::System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices>::get(),
                            "CreateProxyForType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, type);
}
 ::bs_hook::Il2CppWrapperType ::System::Runtime::Remoting::Activation::ActivationServices::AllocateUninitializedClassInstance(::System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices>::get(),
                            "AllocateUninitializedClassInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, type);
}
 void ::System::Runtime::Remoting::Activation::ActivationServices::EnableProxyActivation(::System::Type type, bool enable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices>::get(),
                            "EnableProxyActivation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type, enable);
}
} // end anonymous namespace
