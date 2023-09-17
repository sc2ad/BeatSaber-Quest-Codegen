#pragma once
#include "System/IO/zzzz__MemoryStream_impl.hpp"
#include "System/Net/zzzz__WebResponse_impl.hpp"
namespace {
#include "System/Net/zzzz__FtpWebResponse_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Net/zzzz__FtpStatusCode_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::Net::____System__Net__FtpWebResponse__EmptyStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__FtpWebResponse__EmptyStream::*)()>(&::System::Net::____System__Net__FtpWebResponse__EmptyStream::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2809628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__FtpWebResponse__EmptyStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::System::Net::____System__Net__FtpWebResponse__EmptyStream::____System__Net__FtpWebResponse__EmptyStream()  : ::System::IO::MemoryStream(THROW_UNLESS(::il2cpp_utils::New<____System__Net__FtpWebResponse__EmptyStream>())) {}
 void ::System::Net::____System__Net__FtpWebResponse__EmptyStream::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__FtpWebResponse__EmptyStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::System::Net::FtpWebResponse._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebResponse::*)(::System::IO::Stream, int64_t, ::System::Uri, ::System::Net::FtpStatusCode, ::StringW, ::System::DateTime, ::StringW, ::StringW, ::StringW)>(&::System::Net::FtpWebResponse::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2808ec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpStatusCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebResponse.UpdateStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebResponse::*)(::System::Net::FtpStatusCode, ::StringW, ::StringW)>(&::System::Net::FtpWebResponse::UpdateStatus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2807a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse>::get(),
                            "UpdateStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpStatusCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebResponse.GetResponseStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream (::System::Net::FtpWebResponse::*)()>(&::System::Net::FtpWebResponse::GetResponseStream)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x28095c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::FtpWebResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebResponse.SetResponseStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebResponse::*)(::System::IO::Stream)>(&::System::Net::FtpWebResponse::SetResponseStream)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2808e34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse>::get(),
                            "SetResponseStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebResponse.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebResponse::*)()>(&::System::Net::FtpWebResponse::Close)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x28096b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::FtpWebResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebResponse.get_Headers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebHeaderCollection (::System::Net::FtpWebResponse::*)()>(&::System::Net::FtpWebResponse::get_Headers)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2809798;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::FtpWebResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebResponse.get_ResponseUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri (::System::Net::FtpWebResponse::*)()>(&::System::Net::FtpWebResponse::get_ResponseUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28098b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::FtpWebResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebResponse.get_StatusCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::FtpStatusCode (::System::Net::FtpWebResponse::*)()>(&::System::Net::FtpWebResponse::get_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28098c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse>::get(),
                            "get_StatusCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::System::Net::FtpWebResponse::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::FtpWebResponse::__set__responseStream(::System::IO::Stream value)  {
::cordl_internals::setInstanceField<::System::IO::Stream, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::IO::Stream>(value));
}
constexpr ::System::IO::Stream ::System::Net::FtpWebResponse::__get__responseStream() const {
return ::cordl_internals::getInstanceField<::System::IO::Stream, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::FtpWebResponse::__set__contentLength(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t ::System::Net::FtpWebResponse::__get__contentLength() const {
return ::cordl_internals::getInstanceField<int64_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::FtpWebResponse::__set__responseUri(::System::Uri value)  {
::cordl_internals::setInstanceField<::System::Uri, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Uri>(value));
}
constexpr ::System::Uri ::System::Net::FtpWebResponse::__get__responseUri() const {
return ::cordl_internals::getInstanceField<::System::Uri, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::FtpWebResponse::__set__statusCode(::System::Net::FtpStatusCode value)  {
::cordl_internals::setInstanceField<::System::Net::FtpStatusCode, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::FtpStatusCode>(value));
}
constexpr ::System::Net::FtpStatusCode ::System::Net::FtpWebResponse::__get__statusCode() const {
return ::cordl_internals::getInstanceField<::System::Net::FtpStatusCode, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::FtpWebResponse::__set__statusLine(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Net::FtpWebResponse::__get__statusLine() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::FtpWebResponse::__set__ftpRequestHeaders(::System::Net::WebHeaderCollection value)  {
::cordl_internals::setInstanceField<::System::Net::WebHeaderCollection, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::WebHeaderCollection>(value));
}
constexpr ::System::Net::WebHeaderCollection ::System::Net::FtpWebResponse::__get__ftpRequestHeaders() const {
return ::cordl_internals::getInstanceField<::System::Net::WebHeaderCollection, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::FtpWebResponse::__set__lastModified(::System::DateTime value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime ::System::Net::FtpWebResponse::__get__lastModified() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::FtpWebResponse::__set__bannerMessage(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Net::FtpWebResponse::__get__bannerMessage() const {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::FtpWebResponse::__set__welcomeMessage(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Net::FtpWebResponse::__get__welcomeMessage() const {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::FtpWebResponse::__set__exitMessage(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Net::FtpWebResponse::__get__exitMessage() const {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "responseStream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "contentLength", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "responseUri", ty: "::System::Uri", modifiers: "", def_value: None }, CppParam { name: "statusCode", ty: "::System::Net::FtpStatusCode", modifiers: "", def_value: None }, CppParam { name: "statusLine", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "lastModified", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "bannerMessage", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "welcomeMessage", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "exitMessage", ty: "::StringW", modifiers: "", def_value: None }]
 ::System::Net::FtpWebResponse::FtpWebResponse(::System::IO::Stream responseStream, int64_t contentLength, ::System::Uri responseUri, ::System::Net::FtpStatusCode statusCode, ::StringW statusLine, ::System::DateTime lastModified, ::StringW bannerMessage, ::StringW welcomeMessage, ::StringW exitMessage)  : ::System::Net::WebResponse(THROW_UNLESS(::il2cpp_utils::New<FtpWebResponse>(responseStream, contentLength, responseUri, statusCode, statusLine, lastModified, bannerMessage, welcomeMessage, exitMessage))) {}
 void ::System::Net::FtpWebResponse::_ctor(::System::IO::Stream responseStream, int64_t contentLength, ::System::Uri responseUri, ::System::Net::FtpStatusCode statusCode, ::StringW statusLine, ::System::DateTime lastModified, ::StringW bannerMessage, ::StringW welcomeMessage, ::StringW exitMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpStatusCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, responseStream, contentLength, responseUri, statusCode, statusLine, lastModified, bannerMessage, welcomeMessage, exitMessage);
}
 void ::System::Net::FtpWebResponse::UpdateStatus(::System::Net::FtpStatusCode statusCode, ::StringW statusLine, ::StringW exitMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse>::get(),
                            "UpdateStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpStatusCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, statusCode, statusLine, exitMessage);
}
 ::System::IO::Stream ::System::Net::FtpWebResponse::GetResponseStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse>::get(),
                            "GetResponseStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::FtpWebResponse::SetResponseStream(::System::IO::Stream stream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse>::get(),
                            "SetResponseStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, stream);
}
 void ::System::Net::FtpWebResponse::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Net::WebHeaderCollection ::System::Net::FtpWebResponse::get_Headers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse>::get(),
                            "get_Headers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebHeaderCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Uri ::System::Net::FtpWebResponse::get_ResponseUri()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse>::get(),
                            "get_ResponseUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Uri, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Net::FtpStatusCode ::System::Net::FtpWebResponse::get_StatusCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse>::get(),
                            "get_StatusCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::FtpStatusCode, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
