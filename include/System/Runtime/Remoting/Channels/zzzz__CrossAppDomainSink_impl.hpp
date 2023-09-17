#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Runtime/Remoting/Channels/zzzz__CrossAppDomainSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADMethodCallMessage_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageCtrl_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADMethodReturnMessage_def.hpp"
// Ctor Parameters [CppParam { name: "arrResponse", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cadMrm", ty: "::System::Runtime::Remoting::Messaging::CADMethodReturnMessage", modifiers: "", def_value: Some("csnull") }]
constexpr ::System::Runtime::Remoting::Channels::____System__Runtime__Remoting__Channels__CrossAppDomainSink__ProcessMessageRes::____System__Runtime__Remoting__Channels__CrossAppDomainSink__ProcessMessageRes(::ArrayW<uint8_t> arrResponse, ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage cadMrm) noexcept : ::bs_hook::ValueTypeWrapper() {this->arrResponse = arrResponse;
this->cadMrm = cadMrm;
}
constexpr void ::System::Runtime::Remoting::Channels::____System__Runtime__Remoting__Channels__CrossAppDomainSink__ProcessMessageRes::__set_arrResponse(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x0>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::System::Runtime::Remoting::Channels::____System__Runtime__Remoting__Channels__CrossAppDomainSink__ProcessMessageRes::__get_arrResponse() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x0>(this->__instance);
}
constexpr void ::System::Runtime::Remoting::Channels::____System__Runtime__Remoting__Channels__CrossAppDomainSink__ProcessMessageRes::__set_cadMrm(::System::Runtime::Remoting::Messaging::CADMethodReturnMessage value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage, 0x8>(this->__instance, std::forward<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage>(value));
}
constexpr ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage ::System::Runtime::Remoting::Channels::____System__Runtime__Remoting__Channels__CrossAppDomainSink__ProcessMessageRes::__get_cadMrm() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage, 0x8>(this->__instance);
}
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainSink._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Channels::CrossAppDomainSink::*)(int32_t)>(&::System::Runtime::Remoting::Channels::CrossAppDomainSink::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2337008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainSink.GetSink
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Channels::CrossAppDomainSink (*)(int32_t)>(&::System::Runtime::Remoting::Channels::CrossAppDomainSink::GetSink)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x2336cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink>::get(),
                            "GetSink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainSink.get_TargetDomainId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Remoting::Channels::CrossAppDomainSink::*)()>(&::System::Runtime::Remoting::Channels::CrossAppDomainSink::get_TargetDomainId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2337030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink>::get(),
                            "get_TargetDomainId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainSink.ProcessMessageInDomain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Channels::____System__Runtime__Remoting__Channels__CrossAppDomainSink__ProcessMessageRes (*)(::ArrayW<uint8_t>, ::System::Runtime::Remoting::Messaging::CADMethodCallMessage)>(&::System::Runtime::Remoting::Channels::CrossAppDomainSink::ProcessMessageInDomain)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2337038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink>::get(),
                            "ProcessMessageInDomain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::CADMethodCallMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainSink.SyncProcessMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage (::System::Runtime::Remoting::Channels::CrossAppDomainSink::*)(::System::Runtime::Remoting::Messaging::IMessage)>(&::System::Runtime::Remoting::Channels::CrossAppDomainSink::SyncProcessMessage)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x23372b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Runtime::Remoting::Channels::CrossAppDomainSink),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainSink.AsyncProcessMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageCtrl (::System::Runtime::Remoting::Channels::CrossAppDomainSink::*)(::System::Runtime::Remoting::Messaging::IMessage, ::System::Runtime::Remoting::Messaging::IMessageSink)>(&::System::Runtime::Remoting::Channels::CrossAppDomainSink::AsyncProcessMessage)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x23379f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Runtime::Remoting::Channels::CrossAppDomainSink),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainSink.SendAsyncMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Channels::CrossAppDomainSink::*)(::bs_hook::Il2CppWrapperType)>(&::System::Runtime::Remoting::Channels::CrossAppDomainSink::SendAsyncMessage)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2337af0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink>::get(),
                            "SendAsyncMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainSink._AsyncProcessMessage_b__10_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Channels::CrossAppDomainSink::*)(::bs_hook::Il2CppWrapperType)>(&::System::Runtime::Remoting::Channels::CrossAppDomainSink::_AsyncProcessMessage_b__10_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2337cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink>::get(),
                            "<AsyncProcessMessage>b__10_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IMessageSink
constexpr  ::System::Runtime::Remoting::Channels::CrossAppDomainSink::operator ::System::Runtime::Remoting::Messaging::IMessageSink() const noexcept {
return ::System::Runtime::Remoting::Messaging::IMessageSink(::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::Runtime::Remoting::Channels::CrossAppDomainSink::__set_s_sinks(::System::Collections::Hashtable value)  {
::cordl_internals::setStaticField<::System::Collections::Hashtable, "s_sinks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink>::get>(std::forward<::System::Collections::Hashtable>(value));
}
 ::System::Collections::Hashtable ::System::Runtime::Remoting::Channels::CrossAppDomainSink::__get_s_sinks()  {
return ::cordl_internals::getStaticField<::System::Collections::Hashtable, "s_sinks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink>::get>();
}
 void ::System::Runtime::Remoting::Channels::CrossAppDomainSink::__set_processMessageMethod(::System::Reflection::MethodInfo value)  {
::cordl_internals::setStaticField<::System::Reflection::MethodInfo, "processMessageMethod", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink>::get>(std::forward<::System::Reflection::MethodInfo>(value));
}
 ::System::Reflection::MethodInfo ::System::Runtime::Remoting::Channels::CrossAppDomainSink::__get_processMessageMethod()  {
return ::cordl_internals::getStaticField<::System::Reflection::MethodInfo, "processMessageMethod", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink>::get>();
}
constexpr void ::System::Runtime::Remoting::Channels::CrossAppDomainSink::__set__domainID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Runtime::Remoting::Channels::CrossAppDomainSink::__get__domainID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "domainID", ty: "int32_t", modifiers: "", def_value: None }]
 ::System::Runtime::Remoting::Channels::CrossAppDomainSink::CrossAppDomainSink(int32_t domainID)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CrossAppDomainSink>(domainID))) {}
 void ::System::Runtime::Remoting::Channels::CrossAppDomainSink::_ctor(int32_t domainID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, domainID);
}
 ::System::Runtime::Remoting::Channels::CrossAppDomainSink ::System::Runtime::Remoting::Channels::CrossAppDomainSink::GetSink(int32_t domainID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink>::get(),
                            "GetSink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Channels::CrossAppDomainSink, false>(nullptr, ___internal_method, domainID);
}
 int32_t ::System::Runtime::Remoting::Channels::CrossAppDomainSink::get_TargetDomainId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink>::get(),
                            "get_TargetDomainId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Runtime::Remoting::Channels::____System__Runtime__Remoting__Channels__CrossAppDomainSink__ProcessMessageRes ::System::Runtime::Remoting::Channels::CrossAppDomainSink::ProcessMessageInDomain(::ArrayW<uint8_t> arrRequest, ::System::Runtime::Remoting::Messaging::CADMethodCallMessage cadMsg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink>::get(),
                            "ProcessMessageInDomain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::CADMethodCallMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Channels::____System__Runtime__Remoting__Channels__CrossAppDomainSink__ProcessMessageRes, false>(nullptr, ___internal_method, arrRequest, cadMsg);
}
 ::System::Runtime::Remoting::Messaging::IMessage ::System::Runtime::Remoting::Channels::CrossAppDomainSink::SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage msgRequest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink>::get(),
                            "SyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage, false>(const_cast<void*>(instance), ___internal_method, msgRequest);
}
 ::System::Runtime::Remoting::Messaging::IMessageCtrl ::System::Runtime::Remoting::Channels::CrossAppDomainSink::AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage reqMsg, ::System::Runtime::Remoting::Messaging::IMessageSink replySink)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink>::get(),
                            "AsyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageCtrl, false>(const_cast<void*>(instance), ___internal_method, reqMsg, replySink);
}
 void ::System::Runtime::Remoting::Channels::CrossAppDomainSink::SendAsyncMessage(::bs_hook::Il2CppWrapperType data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink>::get(),
                            "SendAsyncMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data);
}
 void ::System::Runtime::Remoting::Channels::CrossAppDomainSink::_AsyncProcessMessage_b__10_0(::bs_hook::Il2CppWrapperType data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink>::get(),
                            "<AsyncProcessMessage>b__10_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data);
}
} // end anonymous namespace
