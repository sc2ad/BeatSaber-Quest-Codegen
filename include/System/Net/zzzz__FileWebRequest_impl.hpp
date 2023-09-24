#pragma once
#include "System/Net/zzzz__WebRequest_impl.hpp"
#include "System/Net/zzzz__FileWebRequest_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/IO/zzzz__FileAccess_def.hpp"
#include "System/Net/zzzz__LazyAsyncResult_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: System::Net::FileWebRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebRequest::*)(System::Uri)>(&System::Net::FileWebRequest::_ctor)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2821e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FileWebRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebRequest::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Net::FileWebRequest::_ctor)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x2821fc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FileWebRequest.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebRequest::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Net::FileWebRequest::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2822360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FileWebRequest.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebRequest::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Net::FileWebRequest::GetObjectData)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x282236c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FileWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FileWebRequest.get_Aborted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::FileWebRequest::*)()>(&System::Net::FileWebRequest::get_Aborted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28225fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "get_Aborted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FileWebRequest.set_ConnectionGroupName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebRequest::*)(::StringW)>(&System::Net::FileWebRequest::set_ConnectionGroupName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x282260c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FileWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FileWebRequest.get_ContentLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::FileWebRequest::*)()>(&System::Net::FileWebRequest::get_ContentLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2822614;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FileWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FileWebRequest.set_ContentLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebRequest::*)(int64_t)>(&System::Net::FileWebRequest::set_ContentLength)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x282261c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FileWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FileWebRequest.get_Credentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::ICredentials (System::Net::FileWebRequest::*)()>(&System::Net::FileWebRequest::get_Credentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28226a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FileWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FileWebRequest.set_Credentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebRequest::*)(System::Net::ICredentials)>(&System::Net::FileWebRequest::set_Credentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28226a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FileWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FileWebRequest.get_Headers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::WebHeaderCollection (System::Net::FileWebRequest::*)()>(&System::Net::FileWebRequest::get_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28226b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FileWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FileWebRequest.get_Method
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::FileWebRequest::*)()>(&System::Net::FileWebRequest::get_Method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28226b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FileWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FileWebRequest.set_Method
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebRequest::*)(::StringW)>(&System::Net::FileWebRequest::set_Method)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x28226c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FileWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FileWebRequest.set_PreAuthenticate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebRequest::*)(bool)>(&System::Net::FileWebRequest::set_PreAuthenticate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2822794;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FileWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FileWebRequest.get_Proxy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IWebProxy (System::Net::FileWebRequest::*)()>(&System::Net::FileWebRequest::get_Proxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28227a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FileWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FileWebRequest.set_Proxy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebRequest::*)(System::Net::IWebProxy)>(&System::Net::FileWebRequest::set_Proxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28227a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FileWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FileWebRequest.get_Timeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::FileWebRequest::*)()>(&System::Net::FileWebRequest::get_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28227b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FileWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FileWebRequest.set_Timeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebRequest::*)(int32_t)>(&System::Net::FileWebRequest::set_Timeout)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x28227b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FileWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FileWebRequest.get_RequestUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Uri (System::Net::FileWebRequest::*)()>(&System::Net::FileWebRequest::get_RequestUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2822840;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FileWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FileWebRequest.BeginGetRequestStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::Net::FileWebRequest::*)(System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::Net::FileWebRequest::BeginGetRequestStream)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x2822848;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FileWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FileWebRequest.BeginGetResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::Net::FileWebRequest::*)(System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::Net::FileWebRequest::BeginGetResponse)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x2822c8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FileWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FileWebRequest.CanGetRequestStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::FileWebRequest::*)()>(&System::Net::FileWebRequest::CanGetRequestStream)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2822c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "CanGetRequestStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FileWebRequest.EndGetRequestStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (System::Net::FileWebRequest::*)(System::IAsyncResult)>(&System::Net::FileWebRequest::EndGetRequestStream)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2822f6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FileWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FileWebRequest.EndGetResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::WebResponse (System::Net::FileWebRequest::*)(System::IAsyncResult)>(&System::Net::FileWebRequest::EndGetResponse)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2823270;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FileWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FileWebRequest.GetResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::WebResponse (System::Net::FileWebRequest::*)()>(&System::Net::FileWebRequest::GetResponse)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x2823574;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FileWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FileWebRequest.GetRequestStreamCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType)>(&System::Net::FileWebRequest::GetRequestStreamCallback)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x28238e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "GetRequestStreamCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FileWebRequest.GetResponseCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType)>(&System::Net::FileWebRequest::GetResponseCallback)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x2823bb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "GetResponseCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FileWebRequest.UnblockReader
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebRequest::*)()>(&System::Net::FileWebRequest::UnblockReader)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x28241a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "UnblockReader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FileWebRequest.get_UseDefaultCredentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::FileWebRequest::*)()>(&System::Net::FileWebRequest::get_UseDefaultCredentials)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2824278;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FileWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FileWebRequest.Abort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebRequest::*)()>(&System::Net::FileWebRequest::Abort)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x282429c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FileWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr  System::Net::FileWebRequest::operator System::Runtime::Serialization::ISerializable() const noexcept {
return System::Runtime::Serialization::ISerializable(::bs_hook::Il2CppWrapperType::instance);
}
 void System::Net::FileWebRequest::__set_s_GetRequestStreamCallback(System::Threading::WaitCallback value)  {
::cordl_internals::setStaticField<System::Threading::WaitCallback, "s_GetRequestStreamCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get>(std::forward<System::Threading::WaitCallback>(value));
}
 System::Threading::WaitCallback System::Net::FileWebRequest::__get_s_GetRequestStreamCallback()  {
return ::cordl_internals::getStaticField<System::Threading::WaitCallback, "s_GetRequestStreamCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get>();
}
 void System::Net::FileWebRequest::__set_s_GetResponseCallback(System::Threading::WaitCallback value)  {
::cordl_internals::setStaticField<System::Threading::WaitCallback, "s_GetResponseCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get>(std::forward<System::Threading::WaitCallback>(value));
}
 System::Threading::WaitCallback System::Net::FileWebRequest::__get_s_GetResponseCallback()  {
return ::cordl_internals::getStaticField<System::Threading::WaitCallback, "s_GetResponseCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get>();
}
constexpr void System::Net::FileWebRequest::__set_m_connectionGroupName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::FileWebRequest::__get_m_connectionGroupName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FileWebRequest::__set_m_contentLength(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Net::FileWebRequest::__get_m_contentLength() const {
return ::cordl_internals::getInstanceField<int64_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FileWebRequest::__set_m_credentials(System::Net::ICredentials value)  {
::cordl_internals::setInstanceField<System::Net::ICredentials, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::ICredentials>(value));
}
constexpr System::Net::ICredentials System::Net::FileWebRequest::__get_m_credentials() const {
return ::cordl_internals::getInstanceField<System::Net::ICredentials, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FileWebRequest::__set_m_fileAccess(System::IO::FileAccess value)  {
::cordl_internals::setInstanceField<System::IO::FileAccess, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::FileAccess>(value));
}
constexpr System::IO::FileAccess System::Net::FileWebRequest::__get_m_fileAccess() const {
return ::cordl_internals::getInstanceField<System::IO::FileAccess, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FileWebRequest::__set_m_headers(System::Net::WebHeaderCollection value)  {
::cordl_internals::setInstanceField<System::Net::WebHeaderCollection, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::WebHeaderCollection>(value));
}
constexpr System::Net::WebHeaderCollection System::Net::FileWebRequest::__get_m_headers() const {
return ::cordl_internals::getInstanceField<System::Net::WebHeaderCollection, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FileWebRequest::__set_m_method(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::FileWebRequest::__get_m_method() const {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FileWebRequest::__set_m_preauthenticate(bool value)  {
::cordl_internals::setInstanceField<bool, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::FileWebRequest::__get_m_preauthenticate() const {
return ::cordl_internals::getInstanceField<bool, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FileWebRequest::__set_m_proxy(System::Net::IWebProxy value)  {
::cordl_internals::setInstanceField<System::Net::IWebProxy, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::IWebProxy>(value));
}
constexpr System::Net::IWebProxy System::Net::FileWebRequest::__get_m_proxy() const {
return ::cordl_internals::getInstanceField<System::Net::IWebProxy, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FileWebRequest::__set_m_readerEvent(System::Threading::ManualResetEvent value)  {
::cordl_internals::setInstanceField<System::Threading::ManualResetEvent, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::ManualResetEvent>(value));
}
constexpr System::Threading::ManualResetEvent System::Net::FileWebRequest::__get_m_readerEvent() const {
return ::cordl_internals::getInstanceField<System::Threading::ManualResetEvent, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FileWebRequest::__set_m_readPending(bool value)  {
::cordl_internals::setInstanceField<bool, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::FileWebRequest::__get_m_readPending() const {
return ::cordl_internals::getInstanceField<bool, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FileWebRequest::__set_m_response(System::Net::WebResponse value)  {
::cordl_internals::setInstanceField<System::Net::WebResponse, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::WebResponse>(value));
}
constexpr System::Net::WebResponse System::Net::FileWebRequest::__get_m_response() const {
return ::cordl_internals::getInstanceField<System::Net::WebResponse, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FileWebRequest::__set_m_stream(System::IO::Stream value)  {
::cordl_internals::setInstanceField<System::IO::Stream, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::Stream>(value));
}
constexpr System::IO::Stream System::Net::FileWebRequest::__get_m_stream() const {
return ::cordl_internals::getInstanceField<System::IO::Stream, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FileWebRequest::__set_m_syncHint(bool value)  {
::cordl_internals::setInstanceField<bool, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::FileWebRequest::__get_m_syncHint() const {
return ::cordl_internals::getInstanceField<bool, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FileWebRequest::__set_m_timeout(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::FileWebRequest::__get_m_timeout() const {
return ::cordl_internals::getInstanceField<int32_t, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FileWebRequest::__set_m_uri(System::Uri value)  {
::cordl_internals::setInstanceField<System::Uri, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Uri>(value));
}
constexpr System::Uri System::Net::FileWebRequest::__get_m_uri() const {
return ::cordl_internals::getInstanceField<System::Uri, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FileWebRequest::__set_m_writePending(bool value)  {
::cordl_internals::setInstanceField<bool, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::FileWebRequest::__get_m_writePending() const {
return ::cordl_internals::getInstanceField<bool, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FileWebRequest::__set_m_writing(bool value)  {
::cordl_internals::setInstanceField<bool, 0xa9>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::FileWebRequest::__get_m_writing() const {
return ::cordl_internals::getInstanceField<bool, 0xa9>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FileWebRequest::__set_m_WriteAResult(System::Net::LazyAsyncResult value)  {
::cordl_internals::setInstanceField<System::Net::LazyAsyncResult, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::LazyAsyncResult>(value));
}
constexpr System::Net::LazyAsyncResult System::Net::FileWebRequest::__get_m_WriteAResult() const {
return ::cordl_internals::getInstanceField<System::Net::LazyAsyncResult, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FileWebRequest::__set_m_ReadAResult(System::Net::LazyAsyncResult value)  {
::cordl_internals::setInstanceField<System::Net::LazyAsyncResult, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::LazyAsyncResult>(value));
}
constexpr System::Net::LazyAsyncResult System::Net::FileWebRequest::__get_m_ReadAResult() const {
return ::cordl_internals::getInstanceField<System::Net::LazyAsyncResult, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FileWebRequest::__set_m_Aborted(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::FileWebRequest::__get_m_Aborted() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::FileWebRequest System::Net::FileWebRequest::New_ctor(System::Uri uri)  {
System::Net::FileWebRequest o{THROW_UNLESS(::il2cpp_utils::New<System::Net::FileWebRequest>(uri))};
return o;
}
 void System::Net::FileWebRequest::_ctor(System::Uri uri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, uri);
}
 System::Net::FileWebRequest System::Net::FileWebRequest::New_ctor(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext)  {
System::Net::FileWebRequest o{THROW_UNLESS(::il2cpp_utils::New<System::Net::FileWebRequest>(serializationInfo, streamingContext))};
return o;
}
 void System::Net::FileWebRequest::_ctor(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializationInfo, streamingContext);
}
 void System::Net::FileWebRequest::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializationInfo, streamingContext);
}
 void System::Net::FileWebRequest::GetObjectData(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializationInfo, streamingContext);
}
 bool System::Net::FileWebRequest::get_Aborted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "get_Aborted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::FileWebRequest::set_ConnectionGroupName(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "set_ConnectionGroupName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int64_t System::Net::FileWebRequest::get_ContentLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "get_ContentLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::FileWebRequest::set_ContentLength(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "set_ContentLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Net::ICredentials System::Net::FileWebRequest::get_Credentials()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "get_Credentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::ICredentials, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::FileWebRequest::set_Credentials(System::Net::ICredentials value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "set_Credentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ICredentials>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Net::WebHeaderCollection System::Net::FileWebRequest::get_Headers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "get_Headers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::WebHeaderCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Net::FileWebRequest::get_Method()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "get_Method",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::FileWebRequest::set_Method(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "set_Method",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::Net::FileWebRequest::set_PreAuthenticate(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "set_PreAuthenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Net::IWebProxy System::Net::FileWebRequest::get_Proxy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "get_Proxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::IWebProxy, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::FileWebRequest::set_Proxy(System::Net::IWebProxy value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "set_Proxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IWebProxy>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t System::Net::FileWebRequest::get_Timeout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "get_Timeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::FileWebRequest::set_Timeout(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "set_Timeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Uri System::Net::FileWebRequest::get_RequestUri()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "get_RequestUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Uri, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IAsyncResult System::Net::FileWebRequest::BeginGetRequestStream(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "BeginGetRequestStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, state);
}
 System::IAsyncResult System::Net::FileWebRequest::BeginGetResponse(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "BeginGetResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, state);
}
 bool System::Net::FileWebRequest::CanGetRequestStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "CanGetRequestStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IO::Stream System::Net::FileWebRequest::EndGetRequestStream(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "EndGetRequestStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method, asyncResult);
}
 System::Net::WebResponse System::Net::FileWebRequest::EndGetResponse(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "EndGetResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::WebResponse, false>(const_cast<void*>(instance), ___internal_method, asyncResult);
}
 System::Net::WebResponse System::Net::FileWebRequest::GetResponse()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "GetResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::WebResponse, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::FileWebRequest::GetRequestStreamCallback(::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "GetRequestStreamCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, state);
}
 void System::Net::FileWebRequest::GetResponseCallback(::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "GetResponseCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, state);
}
 void System::Net::FileWebRequest::UnblockReader()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "UnblockReader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::FileWebRequest::get_UseDefaultCredentials()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "get_UseDefaultCredentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::FileWebRequest::Abort()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FileWebRequest>::get(),
                            "Abort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
