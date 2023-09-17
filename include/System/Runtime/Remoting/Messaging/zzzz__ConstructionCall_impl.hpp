#pragma once
#include "System/Runtime/Remoting/Messaging/zzzz__MethodCall_impl.hpp"
namespace {
#include "System/Runtime/Remoting/Messaging/zzzz__ConstructionCall_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodCallMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Runtime/Remoting/Proxies/zzzz__RemotingProxy_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodMessage_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IActivator_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCall::*)(::System::Type)>(&::System::Runtime::Remoting::Messaging::ConstructionCall::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x232b9fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCall::*)(::System::Runtime::Serialization::SerializationInfo, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Remoting::Messaging::ConstructionCall::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x233ee58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.InitDictionary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(&::System::Runtime::Remoting::Messaging::ConstructionCall::InitDictionary)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x233eef4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Runtime::Remoting::Messaging::ConstructionCall),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.get_IsContextOk
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(&::System::Runtime::Remoting::Messaging::ConstructionCall::get_IsContextOk)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233f024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                            "get_IsContextOk",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.set_IsContextOk
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCall::*)(bool)>(&::System::Runtime::Remoting::Messaging::ConstructionCall::set_IsContextOk)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x233f02c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                            "set_IsContextOk",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.get_ActivationType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type (::System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(&::System::Runtime::Remoting::Messaging::ConstructionCall::get_ActivationType)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x233f038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                            "get_ActivationType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.get_ActivationTypeName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(&::System::Runtime::Remoting::Messaging::ConstructionCall::get_ActivationTypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233f100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                            "get_ActivationTypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.get_Activator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Activation::IActivator (::System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(&::System::Runtime::Remoting::Messaging::ConstructionCall::get_Activator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233f108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                            "get_Activator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.set_Activator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCall::*)(::System::Runtime::Remoting::Activation::IActivator)>(&::System::Runtime::Remoting::Messaging::ConstructionCall::set_Activator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233f110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                            "set_Activator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IActivator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.get_CallSiteActivationAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::bs_hook::Il2CppWrapperType> (::System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(&::System::Runtime::Remoting::Messaging::ConstructionCall::get_CallSiteActivationAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233f118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                            "get_CallSiteActivationAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.SetActivationAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCall::*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&::System::Runtime::Remoting::Messaging::ConstructionCall::SetActivationAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233f120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                            "SetActivationAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.get_ContextProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList (::System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(&::System::Runtime::Remoting::Messaging::ConstructionCall::get_ContextProperties)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x233f128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                            "get_ContextProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.InitMethodProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCall::*)(::StringW, ::bs_hook::Il2CppWrapperType)>(&::System::Runtime::Remoting::Messaging::ConstructionCall::InitMethodProperty)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x233f194;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Runtime::Remoting::Messaging::ConstructionCall),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCall::*)(::System::Runtime::Serialization::SerializationInfo, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Remoting::Messaging::ConstructionCall::GetObjectData)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x233f860;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Runtime::Remoting::Messaging::ConstructionCall),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.get_Properties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary (::System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(&::System::Runtime::Remoting::Messaging::ConstructionCall::get_Properties)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x233fe88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Runtime::Remoting::Messaging::ConstructionCall),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.get_SourceProxy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Proxies::RemotingProxy (::System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(&::System::Runtime::Remoting::Messaging::ConstructionCall::get_SourceProxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233fee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                            "get_SourceProxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.set_SourceProxy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCall::*)(::System::Runtime::Remoting::Proxies::RemotingProxy)>(&::System::Runtime::Remoting::Messaging::ConstructionCall::set_SourceProxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233fef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                            "set_SourceProxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Proxies::RemotingProxy>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::Remoting::Activation::IConstructionCallMessage
constexpr  ::System::Runtime::Remoting::Messaging::ConstructionCall::operator ::System::Runtime::Remoting::Activation::IConstructionCallMessage() const noexcept {
return ::System::Runtime::Remoting::Activation::IConstructionCallMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IMessage
constexpr  ::System::Runtime::Remoting::Messaging::ConstructionCall::operator ::System::Runtime::Remoting::Messaging::IMessage() const noexcept {
return ::System::Runtime::Remoting::Messaging::IMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IMethodCallMessage
constexpr  ::System::Runtime::Remoting::Messaging::ConstructionCall::operator ::System::Runtime::Remoting::Messaging::IMethodCallMessage() const noexcept {
return ::System::Runtime::Remoting::Messaging::IMethodCallMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IMethodMessage
constexpr  ::System::Runtime::Remoting::Messaging::ConstructionCall::operator ::System::Runtime::Remoting::Messaging::IMethodMessage() const noexcept {
return ::System::Runtime::Remoting::Messaging::IMethodMessage(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::ConstructionCall::__set__activator(::System::Runtime::Remoting::Activation::IActivator value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Activation::IActivator, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Remoting::Activation::IActivator>(value));
}
constexpr ::System::Runtime::Remoting::Activation::IActivator ::System::Runtime::Remoting::Messaging::ConstructionCall::__get__activator() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Activation::IActivator, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::ConstructionCall::__set__activationAttributes(::ArrayW<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> ::System::Runtime::Remoting::Messaging::ConstructionCall::__get__activationAttributes() const {
return ::cordl_internals::getInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::ConstructionCall::__set__contextProperties(::System::Collections::IList value)  {
::cordl_internals::setInstanceField<::System::Collections::IList, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::IList>(value));
}
constexpr ::System::Collections::IList ::System::Runtime::Remoting::Messaging::ConstructionCall::__get__contextProperties() const {
return ::cordl_internals::getInstanceField<::System::Collections::IList, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::ConstructionCall::__set__activationType(::System::Type value)  {
::cordl_internals::setInstanceField<::System::Type, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Type>(value));
}
constexpr ::System::Type ::System::Runtime::Remoting::Messaging::ConstructionCall::__get__activationType() const {
return ::cordl_internals::getInstanceField<::System::Type, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::ConstructionCall::__set__activationTypeName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Runtime::Remoting::Messaging::ConstructionCall::__get__activationTypeName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::ConstructionCall::__set__isContextOk(bool value)  {
::cordl_internals::setInstanceField<bool, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Runtime::Remoting::Messaging::ConstructionCall::__get__isContextOk() const {
return ::cordl_internals::getInstanceField<bool, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::ConstructionCall::__set__sourceProxy(::System::Runtime::Remoting::Proxies::RemotingProxy value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Proxies::RemotingProxy, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Remoting::Proxies::RemotingProxy>(value));
}
constexpr ::System::Runtime::Remoting::Proxies::RemotingProxy ::System::Runtime::Remoting::Messaging::ConstructionCall::__get__sourceProxy() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Proxies::RemotingProxy, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "type", ty: "::System::Type", modifiers: "", def_value: None }]
 ::System::Runtime::Remoting::Messaging::ConstructionCall::ConstructionCall(::System::Type type)  : ::System::Runtime::Remoting::Messaging::MethodCall(THROW_UNLESS(::il2cpp_utils::New<ConstructionCall>(type))) {}
 void ::System::Runtime::Remoting::Messaging::ConstructionCall::_ctor(::System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type);
}
// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
 ::System::Runtime::Remoting::Messaging::ConstructionCall::ConstructionCall(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context)  : ::System::Runtime::Remoting::Messaging::MethodCall(THROW_UNLESS(::il2cpp_utils::New<ConstructionCall>(info, context))) {}
 void ::System::Runtime::Remoting::Messaging::ConstructionCall::_ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 void ::System::Runtime::Remoting::Messaging::ConstructionCall::InitDictionary()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                            "InitDictionary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Runtime::Remoting::Messaging::ConstructionCall::get_IsContextOk()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                            "get_IsContextOk",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Runtime::Remoting::Messaging::ConstructionCall::set_IsContextOk(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                            "set_IsContextOk",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Type ::System::Runtime::Remoting::Messaging::ConstructionCall::get_ActivationType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                            "get_ActivationType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::Runtime::Remoting::Messaging::ConstructionCall::get_ActivationTypeName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                            "get_ActivationTypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Runtime::Remoting::Activation::IActivator ::System::Runtime::Remoting::Messaging::ConstructionCall::get_Activator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                            "get_Activator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Activation::IActivator, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Runtime::Remoting::Messaging::ConstructionCall::set_Activator(::System::Runtime::Remoting::Activation::IActivator value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                            "set_Activator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IActivator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> ::System::Runtime::Remoting::Messaging::ConstructionCall::get_CallSiteActivationAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                            "get_CallSiteActivationAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Runtime::Remoting::Messaging::ConstructionCall::SetActivationAttributes(::ArrayW<::bs_hook::Il2CppWrapperType> attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                            "SetActivationAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attributes);
}
 ::System::Collections::IList ::System::Runtime::Remoting::Messaging::ConstructionCall::get_ContextProperties()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                            "get_ContextProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IList, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Runtime::Remoting::Messaging::ConstructionCall::InitMethodProperty(::StringW key, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                            "InitMethodProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key, value);
}
 void ::System::Runtime::Remoting::Messaging::ConstructionCall::GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 ::System::Collections::IDictionary ::System::Runtime::Remoting::Messaging::ConstructionCall::get_Properties()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                            "get_Properties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Runtime::Remoting::Proxies::RemotingProxy ::System::Runtime::Remoting::Messaging::ConstructionCall::get_SourceProxy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                            "get_SourceProxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Proxies::RemotingProxy, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Runtime::Remoting::Messaging::ConstructionCall::set_SourceProxy(::System::Runtime::Remoting::Proxies::RemotingProxy value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall>::get(),
                            "set_SourceProxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Proxies::RemotingProxy>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
} // end anonymous namespace
