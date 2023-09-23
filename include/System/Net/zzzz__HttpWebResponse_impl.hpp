#pragma once
#include "System/Net/zzzz__WebResponse_impl.hpp"
#include "System/Net/zzzz__HttpWebResponse_def.hpp"
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/Net/zzzz__CookieContainer_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Net/zzzz__WebResponseStream_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "System/Net/zzzz__CookieCollection_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
//  Writing Method size for method: System::Net::HttpWebResponse._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x283f608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpWebResponse._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)(System::Uri, ::StringW, System::Net::HttpStatusCode, System::Net::WebHeaderCollection)>(&System::Net::HttpWebResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x283f610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpStatusCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebHeaderCollection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpWebResponse._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)(System::Uri, ::StringW, System::Net::WebResponseStream, System::Net::CookieContainer)>(&System::Net::HttpWebResponse::_ctor)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x283ee4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebResponseStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::CookieContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpWebResponse._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Net::HttpWebResponse::_ctor)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x283f8d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpWebResponse.get_Headers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::WebHeaderCollection (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::get_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x283fc74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::HttpWebResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpWebResponse.get_ResponseUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Uri (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::get_ResponseUri)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x283fc7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::HttpWebResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpWebResponse.get_StatusCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::HttpStatusCode (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::get_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x283fd18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::HttpWebResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpWebResponse.get_StatusDescription
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::get_StatusDescription)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x283fd20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::HttpWebResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpWebResponse.GetResponseStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::GetResponseStream)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x283fd38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::HttpWebResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpWebResponse.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Net::HttpWebResponse::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x283fdd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpWebResponse.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Net::HttpWebResponse::GetObjectData)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x283fde0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::HttpWebResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpWebResponse.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::Close)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x283ffa0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::HttpWebResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpWebResponse.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x283ffd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpWebResponse.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)(bool)>(&System::Net::HttpWebResponse::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x283ffe0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::HttpWebResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpWebResponse.CheckDisposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::CheckDisposed)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x283fc94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                            "CheckDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpWebResponse.FillCookies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::FillCookies)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x283f6c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                            "FillCookies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr  System::Net::HttpWebResponse::operator System::Runtime::Serialization::ISerializable() const noexcept {
return System::Runtime::Serialization::ISerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  System::Net::HttpWebResponse::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpWebResponse::__set_uri(System::Uri value)  {
::cordl_internals::setInstanceField<System::Uri, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Uri>(value));
}
constexpr System::Uri System::Net::HttpWebResponse::__get_uri() const {
return ::cordl_internals::getInstanceField<System::Uri, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpWebResponse::__set_webHeaders(System::Net::WebHeaderCollection value)  {
::cordl_internals::setInstanceField<System::Net::WebHeaderCollection, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::WebHeaderCollection>(value));
}
constexpr System::Net::WebHeaderCollection System::Net::HttpWebResponse::__get_webHeaders() const {
return ::cordl_internals::getInstanceField<System::Net::WebHeaderCollection, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpWebResponse::__set_cookieCollection(System::Net::CookieCollection value)  {
::cordl_internals::setInstanceField<System::Net::CookieCollection, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::CookieCollection>(value));
}
constexpr System::Net::CookieCollection System::Net::HttpWebResponse::__get_cookieCollection() const {
return ::cordl_internals::getInstanceField<System::Net::CookieCollection, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpWebResponse::__set_method(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::HttpWebResponse::__get_method() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpWebResponse::__set_version(System::Version value)  {
::cordl_internals::setInstanceField<System::Version, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Version>(value));
}
constexpr System::Version System::Net::HttpWebResponse::__get_version() const {
return ::cordl_internals::getInstanceField<System::Version, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpWebResponse::__set_statusCode(System::Net::HttpStatusCode value)  {
::cordl_internals::setInstanceField<System::Net::HttpStatusCode, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::HttpStatusCode>(value));
}
constexpr System::Net::HttpStatusCode System::Net::HttpWebResponse::__get_statusCode() const {
return ::cordl_internals::getInstanceField<System::Net::HttpStatusCode, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpWebResponse::__set_statusDescription(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::HttpWebResponse::__get_statusDescription() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpWebResponse::__set_contentLength(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Net::HttpWebResponse::__get_contentLength() const {
return ::cordl_internals::getInstanceField<int64_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpWebResponse::__set_contentType(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::HttpWebResponse::__get_contentType() const {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpWebResponse::__set_cookie_container(System::Net::CookieContainer value)  {
::cordl_internals::setInstanceField<System::Net::CookieContainer, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::CookieContainer>(value));
}
constexpr System::Net::CookieContainer System::Net::HttpWebResponse::__get_cookie_container() const {
return ::cordl_internals::getInstanceField<System::Net::CookieContainer, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpWebResponse::__set_disposed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::HttpWebResponse::__get_disposed() const {
return ::cordl_internals::getInstanceField<bool, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpWebResponse::__set_stream(System::IO::Stream value)  {
::cordl_internals::setInstanceField<System::IO::Stream, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::Stream>(value));
}
constexpr System::IO::Stream System::Net::HttpWebResponse::__get_stream() const {
return ::cordl_internals::getInstanceField<System::IO::Stream, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Net::HttpWebResponse::HttpWebResponse()  : System::Net::WebResponse(THROW_UNLESS(::il2cpp_utils::New<HttpWebResponse>())) {}
 void System::Net::HttpWebResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "uri", ty: "System::Uri", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "status", ty: "System::Net::HttpStatusCode", modifiers: "", def_value: None }, CppParam { name: "headers", ty: "System::Net::WebHeaderCollection", modifiers: "", def_value: None }]
 System::Net::HttpWebResponse::HttpWebResponse(System::Uri uri, ::StringW method, System::Net::HttpStatusCode status, System::Net::WebHeaderCollection headers)  : System::Net::WebResponse(THROW_UNLESS(::il2cpp_utils::New<HttpWebResponse>(uri, method, status, headers))) {}
 void System::Net::HttpWebResponse::_ctor(System::Uri uri, ::StringW method, System::Net::HttpStatusCode status, System::Net::WebHeaderCollection headers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpStatusCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebHeaderCollection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, uri, method, status, headers);
}
// Ctor Parameters [CppParam { name: "uri", ty: "System::Uri", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "stream", ty: "System::Net::WebResponseStream", modifiers: "", def_value: None }, CppParam { name: "container", ty: "System::Net::CookieContainer", modifiers: "", def_value: None }]
 System::Net::HttpWebResponse::HttpWebResponse(System::Uri uri, ::StringW method, System::Net::WebResponseStream stream, System::Net::CookieContainer container)  : System::Net::WebResponse(THROW_UNLESS(::il2cpp_utils::New<HttpWebResponse>(uri, method, stream, container))) {}
 void System::Net::HttpWebResponse::_ctor(System::Uri uri, ::StringW method, System::Net::WebResponseStream stream, System::Net::CookieContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebResponseStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::CookieContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, uri, method, stream, container);
}
// Ctor Parameters [CppParam { name: "serializationInfo", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "streamingContext", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
 System::Net::HttpWebResponse::HttpWebResponse(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext)  : System::Net::WebResponse(THROW_UNLESS(::il2cpp_utils::New<HttpWebResponse>(serializationInfo, streamingContext))) {}
 void System::Net::HttpWebResponse::_ctor(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializationInfo, streamingContext);
}
 System::Net::WebHeaderCollection System::Net::HttpWebResponse::get_Headers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                            "get_Headers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::WebHeaderCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Uri System::Net::HttpWebResponse::get_ResponseUri()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                            "get_ResponseUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Uri, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::HttpStatusCode System::Net::HttpWebResponse::get_StatusCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                            "get_StatusCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::HttpStatusCode, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Net::HttpWebResponse::get_StatusDescription()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                            "get_StatusDescription",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IO::Stream System::Net::HttpWebResponse::GetResponseStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                            "GetResponseStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::HttpWebResponse::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializationInfo, streamingContext);
}
 void System::Net::HttpWebResponse::GetObjectData(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializationInfo, streamingContext);
}
 void System::Net::HttpWebResponse::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::HttpWebResponse::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::HttpWebResponse::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 void System::Net::HttpWebResponse::CheckDisposed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                            "CheckDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::HttpWebResponse::FillCookies()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpWebResponse>::get(),
                            "FillCookies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
