#pragma once
#include "System/Runtime/Remoting/zzzz__RemotingServices_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryFormatter_def.hpp"
#include "System/Runtime/Remoting/zzzz__WellKnownClientTypeEntry_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodCallMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodMessage_def.hpp"
#include "System/Runtime/Remoting/zzzz__ClientActivatedIdentity_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Remoting/zzzz__ServerIdentity_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/Runtime/Remoting/zzzz__WellKnownObjectMode_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Runtime/Remoting/Proxies/zzzz__RealProxy_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodReturnMessage_def.hpp"
#include "System/Runtime/Remoting/zzzz__ActivatedClientTypeEntry_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Runtime/Remoting/zzzz__Identity_def.hpp"
#include "System/Runtime/Remoting/zzzz__ObjRef_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Runtime/Remoting/zzzz__ClientIdentity_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::System__Runtime__Remoting__RemotingServices__CACD._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::System__Runtime__Remoting__RemotingServices__CACD::*)()>(&System::Runtime::Remoting::System__Runtime__Remoting__RemotingServices__CACD::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2326544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::System__Runtime__Remoting__RemotingServices__CACD>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Remoting::System__Runtime__Remoting__RemotingServices__CACD::__set_d(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Runtime::Remoting::System__Runtime__Remoting__RemotingServices__CACD::__get_d() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::System__Runtime__Remoting__RemotingServices__CACD::__set_c(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Runtime::Remoting::System__Runtime__Remoting__RemotingServices__CACD::__get_c() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Runtime::Remoting::System__Runtime__Remoting__RemotingServices__CACD::System__Runtime__Remoting__RemotingServices__CACD()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Runtime__Remoting__RemotingServices__CACD>())) {}
 void System::Runtime::Remoting::System__Runtime__Remoting__RemotingServices__CACD::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::System__Runtime__Remoting__RemotingServices__CACD>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.InternalExecute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(System::Reflection::MethodBase, ::bs_hook::Il2CppWrapperType, ::ArrayW<::bs_hook::Il2CppWrapperType>, ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>>)>(&System::Runtime::Remoting::RemotingServices::InternalExecute)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2322a08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "InternalExecute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.GetVirtualMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodBase (*)(System::Type, System::Reflection::MethodBase)>(&System::Runtime::Remoting::RemotingServices::GetVirtualMethod)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2322a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "GetVirtualMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.IsTransparentProxy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::bs_hook::Il2CppWrapperType)>(&System::Runtime::Remoting::RemotingServices::IsTransparentProxy)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2322a10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "IsTransparentProxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.InternalExecuteMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMethodReturnMessage (*)(System::MarshalByRefObject, System::Runtime::Remoting::Messaging::IMethodCallMessage)>(&System::Runtime::Remoting::RemotingServices::InternalExecuteMessage)> {
  constexpr static std::size_t size = 0xa20;
  constexpr static std::size_t addrs = 0x2322a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "InternalExecuteMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::MarshalByRefObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMethodCallMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.Connect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(System::Type, ::StringW)>(&System::Runtime::Remoting::RemotingServices::Connect)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2323470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "Connect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.Connect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(System::Type, ::StringW, ::bs_hook::Il2CppWrapperType)>(&System::Runtime::Remoting::RemotingServices::Connect)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2323580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "Connect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.GetServerTypeForUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (*)(::StringW)>(&System::Runtime::Remoting::RemotingServices::GetServerTypeForUri)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2323620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "GetServerTypeForUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.Unmarshal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(System::Runtime::Remoting::ObjRef)>(&System::Runtime::Remoting::RemotingServices::Unmarshal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x231b394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "Unmarshal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::ObjRef>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.Unmarshal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(System::Runtime::Remoting::ObjRef, bool)>(&System::Runtime::Remoting::RemotingServices::Unmarshal)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2323928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "Unmarshal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::ObjRef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.Marshal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::ObjRef (*)(System::MarshalByRefObject)>(&System::Runtime::Remoting::RemotingServices::Marshal)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2323c70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "Marshal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::MarshalByRefObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.Marshal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::ObjRef (*)(System::MarshalByRefObject, ::StringW, System::Type)>(&System::Runtime::Remoting::RemotingServices::Marshal)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2323cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "Marshal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::MarshalByRefObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.NewUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::Runtime::Remoting::RemotingServices::NewUri)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x2323d7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "NewUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.GetRealProxy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Proxies::RealProxy (*)(::bs_hook::Il2CppWrapperType)>(&System::Runtime::Remoting::RemotingServices::GetRealProxy)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2323d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "GetRealProxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.GetMethodBaseFromMethodMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodBase (*)(System::Runtime::Remoting::Messaging::IMethodMessage)>(&System::Runtime::Remoting::RemotingServices::GetMethodBaseFromMethodMessage)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x232445c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "GetMethodBaseFromMethodMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMethodMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.GetMethodBaseFromName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodBase (*)(System::Type, ::StringW, ::ArrayW<System::Type>)>(&System::Runtime::Remoting::RemotingServices::GetMethodBaseFromName)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x232474c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "GetMethodBaseFromName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.FindInterfaceMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodBase (*)(System::Type, ::StringW, ::ArrayW<System::Type>)>(&System::Runtime::Remoting::RemotingServices::FindInterfaceMethod)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x232491c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "FindInterfaceMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType, System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Remoting::RemotingServices::GetObjectData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2324a4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.IsOneWay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Reflection::MethodBase)>(&System::Runtime::Remoting::RemotingServices::IsOneWay)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2324afc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "IsOneWay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.CreateClientProxy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(System::Runtime::Remoting::ActivatedClientTypeEntry, ::ArrayW<::bs_hook::Il2CppWrapperType>)>(&System::Runtime::Remoting::RemotingServices::CreateClientProxy)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2324b94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "CreateClientProxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::ActivatedClientTypeEntry>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.CreateClientProxy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(System::Type, ::StringW, ::ArrayW<::bs_hook::Il2CppWrapperType>)>(&System::Runtime::Remoting::RemotingServices::CreateClientProxy)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2324c90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "CreateClientProxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.CreateClientProxy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(System::Runtime::Remoting::WellKnownClientTypeEntry)>(&System::Runtime::Remoting::RemotingServices::CreateClientProxy)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2324eac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "CreateClientProxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::WellKnownClientTypeEntry>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.CreateClientProxyForContextBound
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(System::Type, ::ArrayW<::bs_hook::Il2CppWrapperType>)>(&System::Runtime::Remoting::RemotingServices::CreateClientProxyForContextBound)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2324f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "CreateClientProxyForContextBound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.GetIdentityForUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Identity (*)(::StringW)>(&System::Runtime::Remoting::RemotingServices::GetIdentityForUri)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x23236dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "GetIdentityForUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.RemoveAppNameFromUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Runtime::Remoting::RemotingServices::RemoveAppNameFromUri)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2325110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "RemoveAppNameFromUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.GetOrCreateClientIdentity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::ClientIdentity (*)(System::Runtime::Remoting::ObjRef, System::Type, ByRef<::bs_hook::Il2CppWrapperType>)>(&System::Runtime::Remoting::RemotingServices::GetOrCreateClientIdentity)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x2325204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "GetOrCreateClientIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::ObjRef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.GetClientChannelSinkChain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessageSink (*)(::StringW, ::bs_hook::Il2CppWrapperType, ByRef<::StringW>)>(&System::Runtime::Remoting::RemotingServices::GetClientChannelSinkChain)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2324dc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "GetClientChannelSinkChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.CreateContextBoundObjectIdentity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::ClientActivatedIdentity (*)(System::Type)>(&System::Runtime::Remoting::RemotingServices::CreateContextBoundObjectIdentity)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x23258d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "CreateContextBoundObjectIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.CreateClientActivatedServerIdentity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::ClientActivatedIdentity (*)(System::MarshalByRefObject, System::Type, ::StringW)>(&System::Runtime::Remoting::RemotingServices::CreateClientActivatedServerIdentity)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2324310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "CreateClientActivatedServerIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::MarshalByRefObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.CreateWellKnownServerIdentity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::ServerIdentity (*)(System::Type, ::StringW, System::Runtime::Remoting::WellKnownObjectMode)>(&System::Runtime::Remoting::RemotingServices::CreateWellKnownServerIdentity)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x231c740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "CreateWellKnownServerIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::WellKnownObjectMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.RegisterServerIdentity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Runtime::Remoting::ServerIdentity)>(&System::Runtime::Remoting::RemotingServices::RegisterServerIdentity)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x2324100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "RegisterServerIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::ServerIdentity>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.GetProxyForRemoteObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(System::Runtime::Remoting::ObjRef, System::Type)>(&System::Runtime::Remoting::RemotingServices::GetProxyForRemoteObject)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2323b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "GetProxyForRemoteObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::ObjRef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.GetRemoteObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(System::Runtime::Remoting::ObjRef, System::Type)>(&System::Runtime::Remoting::RemotingServices::GetRemoteObject)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x232350c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "GetRemoteObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::ObjRef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.SerializeCallData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::bs_hook::Il2CppWrapperType)>(&System::Runtime::Remoting::RemotingServices::SerializeCallData)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x232599c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "SerializeCallData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.DeserializeCallData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<uint8_t>)>(&System::Runtime::Remoting::RemotingServices::DeserializeCallData)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x2325ba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "DeserializeCallData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.SerializeExceptionData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(System::Exception)>(&System::Runtime::Remoting::RemotingServices::SerializeExceptionData)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2325df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "SerializeExceptionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.RegisterInternalChannels
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::Remoting::RemotingServices::RegisterInternalChannels)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23229b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "RegisterInternalChannels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.DisposeIdentity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Runtime::Remoting::Identity)>(&System::Runtime::Remoting::RemotingServices::DisposeIdentity)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x23256cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "DisposeIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Identity>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.GetMessageTargetIdentity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Identity (*)(System::Runtime::Remoting::Messaging::IMessage)>(&System::Runtime::Remoting::RemotingServices::GetMessageTargetIdentity)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x2325f68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "GetMessageTargetIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.SetMessageTargetIdentity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Runtime::Remoting::Messaging::IMessage, System::Runtime::Remoting::Identity)>(&System::Runtime::Remoting::RemotingServices::SetMessageTargetIdentity)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x23262a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "SetMessageTargetIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Identity>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.UpdateOutArgObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Reflection::ParameterInfo, ::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&System::Runtime::Remoting::RemotingServices::UpdateOutArgObject)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x23263b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "UpdateOutArgObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ParameterInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::RemotingServices.GetNormalizedUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Runtime::Remoting::RemotingServices::GetNormalizedUri)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2325098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "GetNormalizedUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Runtime::Remoting::RemotingServices::__set_uri_hash(System::Collections::Hashtable value)  {
::cordl_internals::setStaticField<System::Collections::Hashtable, "uri_hash", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get>(std::forward<System::Collections::Hashtable>(value));
}
 System::Collections::Hashtable System::Runtime::Remoting::RemotingServices::__get_uri_hash()  {
return ::cordl_internals::getStaticField<System::Collections::Hashtable, "uri_hash", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get>();
}
 void System::Runtime::Remoting::RemotingServices::__set__serializationFormatter(System::Runtime::Serialization::Formatters::Binary::BinaryFormatter value)  {
::cordl_internals::setStaticField<System::Runtime::Serialization::Formatters::Binary::BinaryFormatter, "_serializationFormatter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get>(std::forward<System::Runtime::Serialization::Formatters::Binary::BinaryFormatter>(value));
}
 System::Runtime::Serialization::Formatters::Binary::BinaryFormatter System::Runtime::Remoting::RemotingServices::__get__serializationFormatter()  {
return ::cordl_internals::getStaticField<System::Runtime::Serialization::Formatters::Binary::BinaryFormatter, "_serializationFormatter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get>();
}
 void System::Runtime::Remoting::RemotingServices::__set__deserializationFormatter(System::Runtime::Serialization::Formatters::Binary::BinaryFormatter value)  {
::cordl_internals::setStaticField<System::Runtime::Serialization::Formatters::Binary::BinaryFormatter, "_deserializationFormatter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get>(std::forward<System::Runtime::Serialization::Formatters::Binary::BinaryFormatter>(value));
}
 System::Runtime::Serialization::Formatters::Binary::BinaryFormatter System::Runtime::Remoting::RemotingServices::__get__deserializationFormatter()  {
return ::cordl_internals::getStaticField<System::Runtime::Serialization::Formatters::Binary::BinaryFormatter, "_deserializationFormatter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get>();
}
 void System::Runtime::Remoting::RemotingServices::__set_app_id(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "app_id", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Runtime::Remoting::RemotingServices::__get_app_id()  {
return ::cordl_internals::getStaticField<::StringW, "app_id", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get>();
}
 void System::Runtime::Remoting::RemotingServices::__set_app_id_lock(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setStaticField<::bs_hook::Il2CppWrapperType, "app_id_lock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get>(std::forward<::bs_hook::Il2CppWrapperType>(value));
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Remoting::RemotingServices::__get_app_id_lock()  {
return ::cordl_internals::getStaticField<::bs_hook::Il2CppWrapperType, "app_id_lock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get>();
}
 void System::Runtime::Remoting::RemotingServices::__set_next_id(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "next_id", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get>(std::forward<int32_t>(value));
}
 int32_t System::Runtime::Remoting::RemotingServices::__get_next_id()  {
return ::cordl_internals::getStaticField<int32_t, "next_id", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get>();
}
 void System::Runtime::Remoting::RemotingServices::__set_FieldSetterMethod(System::Reflection::MethodInfo value)  {
::cordl_internals::setStaticField<System::Reflection::MethodInfo, "FieldSetterMethod", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get>(std::forward<System::Reflection::MethodInfo>(value));
}
 System::Reflection::MethodInfo System::Runtime::Remoting::RemotingServices::__get_FieldSetterMethod()  {
return ::cordl_internals::getStaticField<System::Reflection::MethodInfo, "FieldSetterMethod", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get>();
}
 void System::Runtime::Remoting::RemotingServices::__set_FieldGetterMethod(System::Reflection::MethodInfo value)  {
::cordl_internals::setStaticField<System::Reflection::MethodInfo, "FieldGetterMethod", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get>(std::forward<System::Reflection::MethodInfo>(value));
}
 System::Reflection::MethodInfo System::Runtime::Remoting::RemotingServices::__get_FieldGetterMethod()  {
return ::cordl_internals::getStaticField<System::Reflection::MethodInfo, "FieldGetterMethod", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get>();
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Remoting::RemotingServices::InternalExecute(System::Reflection::MethodBase method, ::bs_hook::Il2CppWrapperType obj, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters, ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>> out_args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "InternalExecute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, method, obj, parameters, out_args);
}
 System::Reflection::MethodBase System::Runtime::Remoting::RemotingServices::GetVirtualMethod(System::Type type, System::Reflection::MethodBase method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "GetVirtualMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodBase, false>(nullptr, ___internal_method, type, method);
}
 bool System::Runtime::Remoting::RemotingServices::IsTransparentProxy(::bs_hook::Il2CppWrapperType proxy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "IsTransparentProxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, proxy);
}
 System::Runtime::Remoting::Messaging::IMethodReturnMessage System::Runtime::Remoting::RemotingServices::InternalExecuteMessage(System::MarshalByRefObject target, System::Runtime::Remoting::Messaging::IMethodCallMessage reqMsg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "InternalExecuteMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::MarshalByRefObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMethodCallMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMethodReturnMessage, false>(nullptr, ___internal_method, target, reqMsg);
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Remoting::RemotingServices::Connect(System::Type classToProxy, ::StringW url)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "Connect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, classToProxy, url);
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Remoting::RemotingServices::Connect(System::Type classToProxy, ::StringW url, ::bs_hook::Il2CppWrapperType data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "Connect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, classToProxy, url, data);
}
 System::Type System::Runtime::Remoting::RemotingServices::GetServerTypeForUri(::StringW URI)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "GetServerTypeForUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(nullptr, ___internal_method, URI);
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Remoting::RemotingServices::Unmarshal(System::Runtime::Remoting::ObjRef objectRef)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "Unmarshal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::ObjRef>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, objectRef);
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Remoting::RemotingServices::Unmarshal(System::Runtime::Remoting::ObjRef objectRef, bool fRefine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "Unmarshal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::ObjRef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, objectRef, fRefine);
}
 System::Runtime::Remoting::ObjRef System::Runtime::Remoting::RemotingServices::Marshal(System::MarshalByRefObject Obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "Marshal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::MarshalByRefObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::ObjRef, false>(nullptr, ___internal_method, Obj);
}
 System::Runtime::Remoting::ObjRef System::Runtime::Remoting::RemotingServices::Marshal(System::MarshalByRefObject Obj, ::StringW ObjURI, System::Type RequestedType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "Marshal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::MarshalByRefObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::ObjRef, false>(nullptr, ___internal_method, Obj, ObjURI, RequestedType);
}
 ::StringW System::Runtime::Remoting::RemotingServices::NewUri()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "NewUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 System::Runtime::Remoting::Proxies::RealProxy System::Runtime::Remoting::RemotingServices::GetRealProxy(::bs_hook::Il2CppWrapperType proxy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "GetRealProxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Proxies::RealProxy, false>(nullptr, ___internal_method, proxy);
}
 System::Reflection::MethodBase System::Runtime::Remoting::RemotingServices::GetMethodBaseFromMethodMessage(System::Runtime::Remoting::Messaging::IMethodMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "GetMethodBaseFromMethodMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMethodMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodBase, false>(nullptr, ___internal_method, msg);
}
 System::Reflection::MethodBase System::Runtime::Remoting::RemotingServices::GetMethodBaseFromName(System::Type type, ::StringW methodName, ::ArrayW<System::Type> signature)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "GetMethodBaseFromName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodBase, false>(nullptr, ___internal_method, type, methodName, signature);
}
 System::Reflection::MethodBase System::Runtime::Remoting::RemotingServices::FindInterfaceMethod(System::Type type, ::StringW methodName, ::ArrayW<System::Type> signature)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "FindInterfaceMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodBase, false>(nullptr, ___internal_method, type, methodName, signature);
}
 void System::Runtime::Remoting::RemotingServices::GetObjectData(::bs_hook::Il2CppWrapperType obj, System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj, info, context);
}
 bool System::Runtime::Remoting::RemotingServices::IsOneWay(System::Reflection::MethodBase method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "IsOneWay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, method);
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Remoting::RemotingServices::CreateClientProxy(System::Runtime::Remoting::ActivatedClientTypeEntry entry, ::ArrayW<::bs_hook::Il2CppWrapperType> activationAttributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "CreateClientProxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::ActivatedClientTypeEntry>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, entry, activationAttributes);
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Remoting::RemotingServices::CreateClientProxy(System::Type objectType, ::StringW url, ::ArrayW<::bs_hook::Il2CppWrapperType> activationAttributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "CreateClientProxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, objectType, url, activationAttributes);
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Remoting::RemotingServices::CreateClientProxy(System::Runtime::Remoting::WellKnownClientTypeEntry entry)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "CreateClientProxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::WellKnownClientTypeEntry>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, entry);
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Remoting::RemotingServices::CreateClientProxyForContextBound(System::Type type, ::ArrayW<::bs_hook::Il2CppWrapperType> activationAttributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "CreateClientProxyForContextBound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, type, activationAttributes);
}
 System::Runtime::Remoting::Identity System::Runtime::Remoting::RemotingServices::GetIdentityForUri(::StringW uri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "GetIdentityForUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Identity, false>(nullptr, ___internal_method, uri);
}
 ::StringW System::Runtime::Remoting::RemotingServices::RemoveAppNameFromUri(::StringW uri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "RemoveAppNameFromUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, uri);
}
 System::Runtime::Remoting::ClientIdentity System::Runtime::Remoting::RemotingServices::GetOrCreateClientIdentity(System::Runtime::Remoting::ObjRef objRef, System::Type proxyType, ByRef<::bs_hook::Il2CppWrapperType> clientProxy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "GetOrCreateClientIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::ObjRef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::ClientIdentity, false>(nullptr, ___internal_method, objRef, proxyType, clientProxy);
}
 System::Runtime::Remoting::Messaging::IMessageSink System::Runtime::Remoting::RemotingServices::GetClientChannelSinkChain(::StringW url, ::bs_hook::Il2CppWrapperType channelData, ByRef<::StringW> objectUri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "GetClientChannelSinkChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessageSink, false>(nullptr, ___internal_method, url, channelData, objectUri);
}
 System::Runtime::Remoting::ClientActivatedIdentity System::Runtime::Remoting::RemotingServices::CreateContextBoundObjectIdentity(System::Type objectType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "CreateContextBoundObjectIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::ClientActivatedIdentity, false>(nullptr, ___internal_method, objectType);
}
 System::Runtime::Remoting::ClientActivatedIdentity System::Runtime::Remoting::RemotingServices::CreateClientActivatedServerIdentity(System::MarshalByRefObject realObject, System::Type objectType, ::StringW objectUri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "CreateClientActivatedServerIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::MarshalByRefObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::ClientActivatedIdentity, false>(nullptr, ___internal_method, realObject, objectType, objectUri);
}
 System::Runtime::Remoting::ServerIdentity System::Runtime::Remoting::RemotingServices::CreateWellKnownServerIdentity(System::Type objectType, ::StringW objectUri, System::Runtime::Remoting::WellKnownObjectMode mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "CreateWellKnownServerIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::WellKnownObjectMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::ServerIdentity, false>(nullptr, ___internal_method, objectType, objectUri, mode);
}
 void System::Runtime::Remoting::RemotingServices::RegisterServerIdentity(System::Runtime::Remoting::ServerIdentity identity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "RegisterServerIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::ServerIdentity>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, identity);
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Remoting::RemotingServices::GetProxyForRemoteObject(System::Runtime::Remoting::ObjRef objref, System::Type classToProxy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "GetProxyForRemoteObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::ObjRef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, objref, classToProxy);
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Remoting::RemotingServices::GetRemoteObject(System::Runtime::Remoting::ObjRef objRef, System::Type proxyType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "GetRemoteObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::ObjRef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, objRef, proxyType);
}
 ::ArrayW<uint8_t> System::Runtime::Remoting::RemotingServices::SerializeCallData(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "SerializeCallData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, obj);
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Remoting::RemotingServices::DeserializeCallData(::ArrayW<uint8_t> array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "DeserializeCallData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, array);
}
 ::ArrayW<uint8_t> System::Runtime::Remoting::RemotingServices::SerializeExceptionData(System::Exception ex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "SerializeExceptionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, ex);
}
 void System::Runtime::Remoting::RemotingServices::RegisterInternalChannels()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "RegisterInternalChannels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void System::Runtime::Remoting::RemotingServices::DisposeIdentity(System::Runtime::Remoting::Identity ident)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "DisposeIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Identity>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ident);
}
 System::Runtime::Remoting::Identity System::Runtime::Remoting::RemotingServices::GetMessageTargetIdentity(System::Runtime::Remoting::Messaging::IMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "GetMessageTargetIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Identity, false>(nullptr, ___internal_method, msg);
}
 void System::Runtime::Remoting::RemotingServices::SetMessageTargetIdentity(System::Runtime::Remoting::Messaging::IMessage msg, System::Runtime::Remoting::Identity ident)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "SetMessageTargetIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Identity>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, msg, ident);
}
 bool System::Runtime::Remoting::RemotingServices::UpdateOutArgObject(System::Reflection::ParameterInfo pi, ::bs_hook::Il2CppWrapperType local, ::bs_hook::Il2CppWrapperType remote)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "UpdateOutArgObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ParameterInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pi, local, remote);
}
 ::StringW System::Runtime::Remoting::RemotingServices::GetNormalizedUri(::StringW uri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::RemotingServices>::get(),
                            "GetNormalizedUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, uri);
}
