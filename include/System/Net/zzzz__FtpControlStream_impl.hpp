#pragma once
#include "System/Net/zzzz__CommandStream_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "System/Net/zzzz__FtpControlStream_def.hpp"
#include "System/Net/zzzz__FtpStatusCode_def.hpp"
#include "System/zzzz__WeakReference_def.hpp"
#include "System/Net/zzzz__FtpLoginState_def.hpp"
#include "System/Net/zzzz__CommandStream_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Net/zzzz__FtpControlStream_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/zzzz__FtpWebRequest_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Net/zzzz__ResponseDescription_def.hpp"
#include "System/Net/zzzz__NetworkCredential_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/Net/zzzz__TriState_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/Sockets/zzzz__TcpClient_def.hpp"
#include "System/Net/zzzz__TlsStream_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::System__Net__FtpControlStream__GetPathOption::System__Net__FtpControlStream__GetPathOption(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Net::System__Net__FtpControlStream__GetPathOption::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::System__Net__FtpControlStream__GetPathOption::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Net::System__Net__FtpControlStream__GetPathOption  System::Net::System__Net__FtpControlStream__GetPathOption::Normal{0};
constexpr System::Net::System__Net__FtpControlStream__GetPathOption  System::Net::System__Net__FtpControlStream__GetPathOption::AssumeFilename{1};
constexpr System::Net::System__Net__FtpControlStream__GetPathOption  System::Net::System__Net__FtpControlStream__GetPathOption::AssumeNoFilename{2};
//  Writing Method size for method: System::Net::System__Net__FtpControlStream____c__DisplayClass31_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__FtpControlStream____c__DisplayClass31_0::*)()>(&System::Net::System__Net__FtpControlStream____c__DisplayClass31_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27fee1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__FtpControlStream____c__DisplayClass31_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__FtpControlStream____c__DisplayClass31_0._PipelineCallback_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__FtpControlStream____c__DisplayClass31_0::*)(System::IAsyncResult)>(&System::Net::System__Net__FtpControlStream____c__DisplayClass31_0::_PipelineCallback_b__0)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2801de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__FtpControlStream____c__DisplayClass31_0>::get(),
                            "<PipelineCallback>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::System__Net__FtpControlStream____c__DisplayClass31_0::__set___4__this(System::Net::FtpControlStream value)  {
::cordl_internals::setInstanceField<System::Net::FtpControlStream, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::FtpControlStream>(value));
}
constexpr System::Net::FtpControlStream System::Net::System__Net__FtpControlStream____c__DisplayClass31_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<System::Net::FtpControlStream, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::System__Net__FtpControlStream____c__DisplayClass31_0::__set_tlsStream(System::Net::TlsStream value)  {
::cordl_internals::setInstanceField<System::Net::TlsStream, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::TlsStream>(value));
}
constexpr System::Net::TlsStream System::Net::System__Net__FtpControlStream____c__DisplayClass31_0::__get_tlsStream() const {
return ::cordl_internals::getInstanceField<System::Net::TlsStream, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::System__Net__FtpControlStream____c__DisplayClass31_0 System::Net::System__Net__FtpControlStream____c__DisplayClass31_0::New_ctor()  {
System::Net::System__Net__FtpControlStream____c__DisplayClass31_0 o{THROW_UNLESS(::il2cpp_utils::New<System::Net::System__Net__FtpControlStream____c__DisplayClass31_0>())};
return o;
}
 void System::Net::System__Net__FtpControlStream____c__DisplayClass31_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__FtpControlStream____c__DisplayClass31_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::System__Net__FtpControlStream____c__DisplayClass31_0::_PipelineCallback_b__0(System::IAsyncResult ar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__FtpControlStream____c__DisplayClass31_0>::get(),
                            "<PipelineCallback>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ar);
}
//  Writing Method size for method: System::Net::FtpControlStream.get_Credentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::NetworkCredential (System::Net::FtpControlStream::*)()>(&System::Net::FtpControlStream::get_Credentials)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x27fd61c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "get_Credentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.set_Credentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpControlStream::*)(System::Net::NetworkCredential)>(&System::Net::FtpControlStream::set_Credentials)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x27fd6c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "set_Credentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::NetworkCredential>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpControlStream::*)(System::Net::Sockets::TcpClient)>(&System::Net::FtpControlStream::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x27fd744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::TcpClient>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.AbortConnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpControlStream::*)()>(&System::Net::FtpControlStream::AbortConnect)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x27fd7d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "AbortConnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.AcceptCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IAsyncResult)>(&System::Net::FtpControlStream::AcceptCallback)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x27fd85c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "AcceptCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.ConnectCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IAsyncResult)>(&System::Net::FtpControlStream::ConnectCallback)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x27fdc58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "ConnectCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.SSLHandshakeCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IAsyncResult)>(&System::Net::FtpControlStream::SSLHandshakeCallback)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x27fde08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "SSLHandshakeCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.QueueOrCreateFtpDataStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::System__Net__CommandStream__PipelineInstruction (System::Net::FtpControlStream::*)(ByRef<System::IO::Stream>)>(&System::Net::FtpControlStream::QueueOrCreateFtpDataStream)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x27fdfcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "QueueOrCreateFtpDataStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::IO::Stream>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.ClearState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpControlStream::*)()>(&System::Net::FtpControlStream::ClearState)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x27fe560;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FtpControlStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.PipelineCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::System__Net__CommandStream__PipelineInstruction (System::Net::FtpControlStream::*)(System::Net::System__Net__CommandStream__PipelineEntry, System::Net::ResponseDescription, bool, ByRef<System::IO::Stream>)>(&System::Net::FtpControlStream::PipelineCallback)> {
  constexpr static std::size_t size = 0x82c;
  constexpr static std::size_t addrs = 0x27fe5f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FtpControlStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                                  42
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.BuildCommandsList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Net::System__Net__CommandStream__PipelineEntry> (System::Net::FtpControlStream::*)(System::Net::WebRequest)>(&System::Net::FtpControlStream::BuildCommandsList)> {
  constexpr static std::size_t size = 0xdd8;
  constexpr static std::size_t addrs = 0x27ffe44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FtpControlStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                                  41
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.QueueOrCreateDataConection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::System__Net__CommandStream__PipelineInstruction (System::Net::FtpControlStream::*)(System::Net::System__Net__CommandStream__PipelineEntry, System::Net::ResponseDescription, bool, ByRef<System::IO::Stream>, ByRef<bool>)>(&System::Net::FtpControlStream::QueueOrCreateDataConection)> {
  constexpr static std::size_t size = 0x664;
  constexpr static std::size_t addrs = 0x27fee24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "QueueOrCreateDataConection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::System__Net__CommandStream__PipelineEntry>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ResponseDescription>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::IO::Stream>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.GetPathInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Net::System__Net__FtpControlStream__GetPathOption, System::Uri, ByRef<::StringW>, ByRef<::StringW>, ByRef<::StringW>)>(&System::Net::FtpControlStream::GetPathInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2800d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "GetPathInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::System__Net__FtpControlStream__GetPathOption>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.FormatAddress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::FtpControlStream::*)(System::Net::IPAddress, int32_t)>(&System::Net::FtpControlStream::FormatAddress)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2801674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "FormatAddress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.FormatAddressV6
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::FtpControlStream::*)(System::Net::IPAddress, int32_t)>(&System::Net::FtpControlStream::FormatAddressV6)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2801798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "FormatAddressV6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.get_ContentLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::FtpControlStream::*)()>(&System::Net::FtpControlStream::get_ContentLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28018a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "get_ContentLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.get_LastModified
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::Net::FtpControlStream::*)()>(&System::Net::FtpControlStream::get_LastModified)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28018b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "get_LastModified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.get_ResponseUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Uri (System::Net::FtpControlStream::*)()>(&System::Net::FtpControlStream::get_ResponseUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28018b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "get_ResponseUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.get_BannerMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::FtpControlStream::*)()>(&System::Net::FtpControlStream::get_BannerMessage)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x28018c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "get_BannerMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.get_WelcomeMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::FtpControlStream::*)()>(&System::Net::FtpControlStream::get_WelcomeMessage)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x28018d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "get_WelcomeMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.get_ExitMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::FtpControlStream::*)()>(&System::Net::FtpControlStream::get_ExitMessage)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x28018f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "get_ExitMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.GetContentLengthFrom213Response
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::FtpControlStream::*)(::StringW)>(&System::Net::FtpControlStream::GetContentLengthFrom213Response)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x27ff8f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "GetContentLengthFrom213Response",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.GetLastModifiedFrom213Response
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::Net::FtpControlStream::*)(::StringW)>(&System::Net::FtpControlStream::GetLastModifiedFrom213Response)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x27ffa34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "GetLastModifiedFrom213Response",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.TryUpdateResponseUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpControlStream::*)(::StringW, System::Net::FtpWebRequest)>(&System::Net::FtpControlStream::TryUpdateResponseUri)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x27ff580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "TryUpdateResponseUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::FtpWebRequest>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.TryUpdateContentLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpControlStream::*)(::StringW)>(&System::Net::FtpControlStream::TryUpdateContentLength)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x27ff488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "TryUpdateContentLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.GetLoginDirectory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::FtpControlStream::*)(::StringW)>(&System::Net::FtpControlStream::GetLoginDirectory)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x27ffd94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "GetLoginDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.GetPortV4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::FtpControlStream::*)(::StringW)>(&System::Net::FtpControlStream::GetPortV4)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2801240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "GetPortV4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.GetPortV6
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::FtpControlStream::*)(::StringW)>(&System::Net::FtpControlStream::GetPortV6)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2801434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "GetPortV6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.CreateFtpListenerSocket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpControlStream::*)(System::Net::FtpWebRequest)>(&System::Net::FtpControlStream::CreateFtpListenerSocket)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2800ed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "CreateFtpListenerSocket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::FtpWebRequest>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.GetPortCommandLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::FtpControlStream::*)(System::Net::FtpWebRequest)>(&System::Net::FtpControlStream::GetPortCommandLine)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x280104c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "GetPortCommandLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::FtpWebRequest>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.FormatFtpCommand
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::FtpControlStream::*)(::StringW, ::StringW)>(&System::Net::FtpControlStream::FormatFtpCommand)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2800c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "FormatFtpCommand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.CreateFtpDataSocket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Sockets::Socket (System::Net::FtpControlStream::*)(System::Net::FtpWebRequest, System::Net::Sockets::Socket)>(&System::Net::FtpControlStream::CreateFtpDataSocket)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x28015f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "CreateFtpDataSocket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::FtpWebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::Socket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.CheckValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::FtpControlStream::*)(System::Net::ResponseDescription, ByRef<int32_t>, ByRef<int32_t>)>(&System::Net::FtpControlStream::CheckValid)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x2801908;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::FtpControlStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                                  43
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::FtpControlStream.IsFtpDataStreamWriteable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::TriState (System::Net::FtpControlStream::*)()>(&System::Net::FtpControlStream::IsFtpDataStreamWriteable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x27fe268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "IsFtpDataStreamWriteable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::FtpControlStream::__set__dataSocket(System::Net::Sockets::Socket value)  {
::cordl_internals::setInstanceField<System::Net::Sockets::Socket, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Sockets::Socket>(value));
}
constexpr System::Net::Sockets::Socket System::Net::FtpControlStream::__get__dataSocket() const {
return ::cordl_internals::getInstanceField<System::Net::Sockets::Socket, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpControlStream::__set__passiveEndPoint(System::Net::IPEndPoint value)  {
::cordl_internals::setInstanceField<System::Net::IPEndPoint, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::IPEndPoint>(value));
}
constexpr System::Net::IPEndPoint System::Net::FtpControlStream::__get__passiveEndPoint() const {
return ::cordl_internals::getInstanceField<System::Net::IPEndPoint, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpControlStream::__set__tlsStream(System::Net::TlsStream value)  {
::cordl_internals::setInstanceField<System::Net::TlsStream, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::TlsStream>(value));
}
constexpr System::Net::TlsStream System::Net::FtpControlStream::__get__tlsStream() const {
return ::cordl_internals::getInstanceField<System::Net::TlsStream, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpControlStream::__set__bannerMessage(System::Text::StringBuilder value)  {
::cordl_internals::setInstanceField<System::Text::StringBuilder, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Text::StringBuilder>(value));
}
constexpr System::Text::StringBuilder System::Net::FtpControlStream::__get__bannerMessage() const {
return ::cordl_internals::getInstanceField<System::Text::StringBuilder, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpControlStream::__set__welcomeMessage(System::Text::StringBuilder value)  {
::cordl_internals::setInstanceField<System::Text::StringBuilder, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Text::StringBuilder>(value));
}
constexpr System::Text::StringBuilder System::Net::FtpControlStream::__get__welcomeMessage() const {
return ::cordl_internals::getInstanceField<System::Text::StringBuilder, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpControlStream::__set__exitMessage(System::Text::StringBuilder value)  {
::cordl_internals::setInstanceField<System::Text::StringBuilder, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Text::StringBuilder>(value));
}
constexpr System::Text::StringBuilder System::Net::FtpControlStream::__get__exitMessage() const {
return ::cordl_internals::getInstanceField<System::Text::StringBuilder, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpControlStream::__set__credentials(System::WeakReference value)  {
::cordl_internals::setInstanceField<System::WeakReference, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::WeakReference>(value));
}
constexpr System::WeakReference System::Net::FtpControlStream::__get__credentials() const {
return ::cordl_internals::getInstanceField<System::WeakReference, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpControlStream::__set__currentTypeSetting(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::FtpControlStream::__get__currentTypeSetting() const {
return ::cordl_internals::getInstanceField<::StringW, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpControlStream::__set__contentLength(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Net::FtpControlStream::__get__contentLength() const {
return ::cordl_internals::getInstanceField<int64_t, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpControlStream::__set__lastModified(System::DateTime value)  {
::cordl_internals::setInstanceField<System::DateTime, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::DateTime>(value));
}
constexpr System::DateTime System::Net::FtpControlStream::__get__lastModified() const {
return ::cordl_internals::getInstanceField<System::DateTime, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpControlStream::__set__dataHandshakeStarted(bool value)  {
::cordl_internals::setInstanceField<bool, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::FtpControlStream::__get__dataHandshakeStarted() const {
return ::cordl_internals::getInstanceField<bool, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpControlStream::__set__loginDirectory(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::FtpControlStream::__get__loginDirectory() const {
return ::cordl_internals::getInstanceField<::StringW, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpControlStream::__set__establishedServerDirectory(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::FtpControlStream::__get__establishedServerDirectory() const {
return ::cordl_internals::getInstanceField<::StringW, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpControlStream::__set__requestedServerDirectory(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::FtpControlStream::__get__requestedServerDirectory() const {
return ::cordl_internals::getInstanceField<::StringW, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpControlStream::__set__responseUri(System::Uri value)  {
::cordl_internals::setInstanceField<System::Uri, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Uri>(value));
}
constexpr System::Uri System::Net::FtpControlStream::__get__responseUri() const {
return ::cordl_internals::getInstanceField<System::Uri, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpControlStream::__set__loginState(System::Net::FtpLoginState value)  {
::cordl_internals::setInstanceField<System::Net::FtpLoginState, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::FtpLoginState>(value));
}
constexpr System::Net::FtpLoginState System::Net::FtpControlStream::__get__loginState() const {
return ::cordl_internals::getInstanceField<System::Net::FtpLoginState, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpControlStream::__set_StatusCode(System::Net::FtpStatusCode value)  {
::cordl_internals::setInstanceField<System::Net::FtpStatusCode, 0x104>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::FtpStatusCode>(value));
}
constexpr System::Net::FtpStatusCode System::Net::FtpControlStream::__get_StatusCode() const {
return ::cordl_internals::getInstanceField<System::Net::FtpStatusCode, 0x104>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::FtpControlStream::__set_StatusLine(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::FtpControlStream::__get_StatusLine() const {
return ::cordl_internals::getInstanceField<::StringW, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Net::FtpControlStream::__set_s_acceptCallbackDelegate(System::AsyncCallback value)  {
::cordl_internals::setStaticField<System::AsyncCallback, "s_acceptCallbackDelegate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get>(std::forward<System::AsyncCallback>(value));
}
 System::AsyncCallback System::Net::FtpControlStream::__get_s_acceptCallbackDelegate()  {
return ::cordl_internals::getStaticField<System::AsyncCallback, "s_acceptCallbackDelegate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get>();
}
 void System::Net::FtpControlStream::__set_s_connectCallbackDelegate(System::AsyncCallback value)  {
::cordl_internals::setStaticField<System::AsyncCallback, "s_connectCallbackDelegate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get>(std::forward<System::AsyncCallback>(value));
}
 System::AsyncCallback System::Net::FtpControlStream::__get_s_connectCallbackDelegate()  {
return ::cordl_internals::getStaticField<System::AsyncCallback, "s_connectCallbackDelegate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get>();
}
 void System::Net::FtpControlStream::__set_s_SSLHandshakeCallback(System::AsyncCallback value)  {
::cordl_internals::setStaticField<System::AsyncCallback, "s_SSLHandshakeCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get>(std::forward<System::AsyncCallback>(value));
}
 System::AsyncCallback System::Net::FtpControlStream::__get_s_SSLHandshakeCallback()  {
return ::cordl_internals::getStaticField<System::AsyncCallback, "s_SSLHandshakeCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get>();
}
 System::Net::NetworkCredential System::Net::FtpControlStream::get_Credentials()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "get_Credentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::NetworkCredential, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::FtpControlStream::set_Credentials(System::Net::NetworkCredential value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "set_Credentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::NetworkCredential>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Net::FtpControlStream System::Net::FtpControlStream::New_ctor(System::Net::Sockets::TcpClient client)  {
System::Net::FtpControlStream o{THROW_UNLESS(::il2cpp_utils::New<System::Net::FtpControlStream>(client))};
return o;
}
 void System::Net::FtpControlStream::_ctor(System::Net::Sockets::TcpClient client)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::TcpClient>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, client);
}
 void System::Net::FtpControlStream::AbortConnect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "AbortConnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::FtpControlStream::AcceptCallback(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "AcceptCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asyncResult);
}
 void System::Net::FtpControlStream::ConnectCallback(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "ConnectCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asyncResult);
}
 void System::Net::FtpControlStream::SSLHandshakeCallback(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "SSLHandshakeCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asyncResult);
}
 System::Net::System__Net__CommandStream__PipelineInstruction System::Net::FtpControlStream::QueueOrCreateFtpDataStream(ByRef<System::IO::Stream> stream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "QueueOrCreateFtpDataStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::IO::Stream>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::System__Net__CommandStream__PipelineInstruction, false>(const_cast<void*>(instance), ___internal_method, stream);
}
 void System::Net::FtpControlStream::ClearState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "ClearState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::System__Net__CommandStream__PipelineInstruction System::Net::FtpControlStream::PipelineCallback(System::Net::System__Net__CommandStream__PipelineEntry entry, System::Net::ResponseDescription response, bool timeout, ByRef<System::IO::Stream> stream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "PipelineCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::System__Net__CommandStream__PipelineEntry>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ResponseDescription>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::IO::Stream>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::System__Net__CommandStream__PipelineInstruction, false>(const_cast<void*>(instance), ___internal_method, entry, response, timeout, stream);
}
 ::ArrayW<System::Net::System__Net__CommandStream__PipelineEntry> System::Net::FtpControlStream::BuildCommandsList(System::Net::WebRequest req)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "BuildCommandsList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebRequest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Net::System__Net__CommandStream__PipelineEntry>, false>(const_cast<void*>(instance), ___internal_method, req);
}
 System::Net::System__Net__CommandStream__PipelineInstruction System::Net::FtpControlStream::QueueOrCreateDataConection(System::Net::System__Net__CommandStream__PipelineEntry entry, System::Net::ResponseDescription response, bool timeout, ByRef<System::IO::Stream> stream, ByRef<bool> isSocketReady)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "QueueOrCreateDataConection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::System__Net__CommandStream__PipelineEntry>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ResponseDescription>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::IO::Stream>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::System__Net__CommandStream__PipelineInstruction, false>(const_cast<void*>(instance), ___internal_method, entry, response, timeout, stream, isSocketReady);
}
 void System::Net::FtpControlStream::GetPathInfo(System::Net::System__Net__FtpControlStream__GetPathOption pathOption, System::Uri uri, ByRef<::StringW> path, ByRef<::StringW> directory, ByRef<::StringW> filename)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "GetPathInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::System__Net__FtpControlStream__GetPathOption>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pathOption, uri, path, directory, filename);
}
 ::StringW System::Net::FtpControlStream::FormatAddress(System::Net::IPAddress address, int32_t Port)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "FormatAddress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, address, Port);
}
 ::StringW System::Net::FtpControlStream::FormatAddressV6(System::Net::IPAddress address, int32_t port)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "FormatAddressV6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, address, port);
}
 int64_t System::Net::FtpControlStream::get_ContentLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "get_ContentLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::DateTime System::Net::FtpControlStream::get_LastModified()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "get_LastModified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Uri System::Net::FtpControlStream::get_ResponseUri()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "get_ResponseUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Uri, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Net::FtpControlStream::get_BannerMessage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "get_BannerMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Net::FtpControlStream::get_WelcomeMessage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "get_WelcomeMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Net::FtpControlStream::get_ExitMessage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "get_ExitMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t System::Net::FtpControlStream::GetContentLengthFrom213Response(::StringW responseString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "GetContentLengthFrom213Response",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method, responseString);
}
 System::DateTime System::Net::FtpControlStream::GetLastModifiedFrom213Response(::StringW str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "GetLastModifiedFrom213Response",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(const_cast<void*>(instance), ___internal_method, str);
}
 void System::Net::FtpControlStream::TryUpdateResponseUri(::StringW str, System::Net::FtpWebRequest request)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "TryUpdateResponseUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::FtpWebRequest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, str, request);
}
 void System::Net::FtpControlStream::TryUpdateContentLength(::StringW str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "TryUpdateContentLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, str);
}
 ::StringW System::Net::FtpControlStream::GetLoginDirectory(::StringW str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "GetLoginDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, str);
}
 int32_t System::Net::FtpControlStream::GetPortV4(::StringW responseString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "GetPortV4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, responseString);
}
 int32_t System::Net::FtpControlStream::GetPortV6(::StringW responseString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "GetPortV6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, responseString);
}
 void System::Net::FtpControlStream::CreateFtpListenerSocket(System::Net::FtpWebRequest request)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "CreateFtpListenerSocket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::FtpWebRequest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, request);
}
 ::StringW System::Net::FtpControlStream::GetPortCommandLine(System::Net::FtpWebRequest request)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "GetPortCommandLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::FtpWebRequest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, request);
}
 ::StringW System::Net::FtpControlStream::FormatFtpCommand(::StringW command, ::StringW parameter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "FormatFtpCommand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, command, parameter);
}
 System::Net::Sockets::Socket System::Net::FtpControlStream::CreateFtpDataSocket(System::Net::FtpWebRequest request, System::Net::Sockets::Socket templateSocket)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "CreateFtpDataSocket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::FtpWebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::Socket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Sockets::Socket, false>(const_cast<void*>(instance), ___internal_method, request, templateSocket);
}
 bool System::Net::FtpControlStream::CheckValid(System::Net::ResponseDescription response, ByRef<int32_t> validThrough, ByRef<int32_t> completeLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "CheckValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ResponseDescription>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, response, validThrough, completeLength);
}
 System::Net::TriState System::Net::FtpControlStream::IsFtpDataStreamWriteable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::FtpControlStream>::get(),
                            "IsFtpDataStreamWriteable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::TriState, false>(const_cast<void*>(instance), ___internal_method);
}
