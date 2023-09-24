#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/Networking/zzzz__UploadHandler_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
#include "UnityEngine/Networking/zzzz__CertificateHandler_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandler_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod::Get{0};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod::Post{1};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod::Put{2};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod::Head{3};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod::Custom{4};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::OK{0};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::Unknown{1};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::SDKError{2};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::UnsupportedProtocol{3};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::MalformattedUrl{4};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::CannotResolveProxy{5};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::CannotResolveHost{6};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::CannotConnectToHost{7};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::AccessDenied{8};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::GenericHttpError{9};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::WriteError{10};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::ReadError{11};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::OutOfMemory{12};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::Timeout{13};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::HTTPPostError{14};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::SSLCannotConnect{15};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::Aborted{16};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::TooManyRedirects{17};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::ReceivedNoData{18};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::SSLNotSupported{19};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::FailedToSendData{20};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::FailedToReceiveData{21};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::SSLCertificateError{22};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::SSLCipherNotAvailable{23};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::SSLCACertError{24};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::UnrecognizedContentEncoding{25};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::LoginFailed{26};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::SSLShutdownFailed{27};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError::NoInternetConnection{28};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__Result::UnityEngine__Networking__UnityWebRequest__Result(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__Result::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__Result::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__Result  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__Result::InProgress{0};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__Result  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__Result::Success{1};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__Result  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__Result::ConnectionError{2};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__Result  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__Result::ProtocolError{3};
constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__Result  UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__Result::DataProcessingError{4};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.GetWebErrorString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError)>(&UnityEngine::Networking::UnityWebRequest::GetWebErrorString)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d354ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "GetWebErrorString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.GetHTTPStatusString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int64_t)>(&UnityEngine::Networking::UnityWebRequest::GetHTTPStatusString)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d354e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "GetHTTPStatusString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.get_disposeCertificateHandlerOnDispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Networking::UnityWebRequest::*)()>(&UnityEngine::Networking::UnityWebRequest::get_disposeCertificateHandlerOnDispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d35524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "get_disposeCertificateHandlerOnDispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.set_disposeCertificateHandlerOnDispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::UnityWebRequest::*)(bool)>(&UnityEngine::Networking::UnityWebRequest::set_disposeCertificateHandlerOnDispose)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d3552c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "set_disposeCertificateHandlerOnDispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.get_disposeDownloadHandlerOnDispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Networking::UnityWebRequest::*)()>(&UnityEngine::Networking::UnityWebRequest::get_disposeDownloadHandlerOnDispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d35538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "get_disposeDownloadHandlerOnDispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.set_disposeDownloadHandlerOnDispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::UnityWebRequest::*)(bool)>(&UnityEngine::Networking::UnityWebRequest::set_disposeDownloadHandlerOnDispose)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d35540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "set_disposeDownloadHandlerOnDispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.get_disposeUploadHandlerOnDispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Networking::UnityWebRequest::*)()>(&UnityEngine::Networking::UnityWebRequest::get_disposeUploadHandlerOnDispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3554c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "get_disposeUploadHandlerOnDispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.set_disposeUploadHandlerOnDispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::UnityWebRequest::*)(bool)>(&UnityEngine::Networking::UnityWebRequest::set_disposeUploadHandlerOnDispose)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d35554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "set_disposeUploadHandlerOnDispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)()>(&UnityEngine::Networking::UnityWebRequest::Create)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d35560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::UnityWebRequest::*)()>(&UnityEngine::Networking::UnityWebRequest::Release)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d35588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.InternalDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::UnityWebRequest::*)()>(&UnityEngine::Networking::UnityWebRequest::InternalDestroy)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2d355c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "InternalDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.InternalSetDefaults
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::UnityWebRequest::*)()>(&UnityEngine::Networking::UnityWebRequest::InternalSetDefaults)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d356bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "InternalSetDefaults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::UnityWebRequest::*)(::StringW, ::StringW, UnityEngine::Networking::DownloadHandler, UnityEngine::Networking::UploadHandler)>(&UnityEngine::Networking::UnityWebRequest::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2d356d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::DownloadHandler>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::UploadHandler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::UnityWebRequest::*)()>(&UnityEngine::Networking::UnityWebRequest::Finalize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2d35ba0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Networking::UnityWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::UnityWebRequest::*)()>(&UnityEngine::Networking::UnityWebRequest::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2d35c9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.DisposeHandlers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::UnityWebRequest::*)()>(&UnityEngine::Networking::UnityWebRequest::DisposeHandlers)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2d35c3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "DisposeHandlers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.BeginWebRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Networking::UnityWebRequestAsyncOperation (UnityEngine::Networking::UnityWebRequest::*)()>(&UnityEngine::Networking::UnityWebRequest::BeginWebRequest)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d35db0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "BeginWebRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.SendWebRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Networking::UnityWebRequestAsyncOperation (UnityEngine::Networking::UnityWebRequest::*)()>(&UnityEngine::Networking::UnityWebRequest::SendWebRequest)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d35dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "SendWebRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.Abort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::UnityWebRequest::*)()>(&UnityEngine::Networking::UnityWebRequest::Abort)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d35680;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "Abort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.SetMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError (UnityEngine::Networking::UnityWebRequest::*)(UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod)>(&UnityEngine::Networking::UnityWebRequest::SetMethod)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d35e34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "SetMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.InternalSetMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::UnityWebRequest::*)(UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod)>(&UnityEngine::Networking::UnityWebRequest::InternalSetMethod)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2d35e78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "InternalSetMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.SetCustomMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError (UnityEngine::Networking::UnityWebRequest::*)(::StringW)>(&UnityEngine::Networking::UnityWebRequest::SetCustomMethod)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d35fc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "SetCustomMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.InternalSetCustomMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::UnityWebRequest::*)(::StringW)>(&UnityEngine::Networking::UnityWebRequest::InternalSetCustomMethod)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2d36004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "InternalSetCustomMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.GetMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod (UnityEngine::Networking::UnityWebRequest::*)()>(&UnityEngine::Networking::UnityWebRequest::GetMethod)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d36110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "GetMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.GetCustomMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Networking::UnityWebRequest::*)()>(&UnityEngine::Networking::UnityWebRequest::GetCustomMethod)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d3614c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "GetCustomMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.get_method
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Networking::UnityWebRequest::*)()>(&UnityEngine::Networking::UnityWebRequest::get_method)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2d36188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "get_method",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.set_method
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::UnityWebRequest::*)(::StringW)>(&UnityEngine::Networking::UnityWebRequest::set_method)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2d357fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "set_method",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.GetError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError (UnityEngine::Networking::UnityWebRequest::*)()>(&UnityEngine::Networking::UnityWebRequest::GetError)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d36290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "GetError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.get_error
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Networking::UnityWebRequest::*)()>(&UnityEngine::Networking::UnityWebRequest::get_error)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2d362cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "get_error",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.get_url
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Networking::UnityWebRequest::*)()>(&UnityEngine::Networking::UnityWebRequest::get_url)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d364e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "get_url",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.set_url
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::UnityWebRequest::*)(::StringW)>(&UnityEngine::Networking::UnityWebRequest::set_url)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2d35774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "set_url",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.GetUrl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Networking::UnityWebRequest::*)()>(&UnityEngine::Networking::UnityWebRequest::GetUrl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d36524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "GetUrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.SetUrl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError (UnityEngine::Networking::UnityWebRequest::*)(::StringW)>(&UnityEngine::Networking::UnityWebRequest::SetUrl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d3666c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "SetUrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.InternalSetUrl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::UnityWebRequest::*)(::StringW)>(&UnityEngine::Networking::UnityWebRequest::InternalSetUrl)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2d36560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "InternalSetUrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.get_responseCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UnityEngine::Networking::UnityWebRequest::*)()>(&UnityEngine::Networking::UnityWebRequest::get_responseCode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d364ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "get_responseCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.IsExecuting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Networking::UnityWebRequest::*)()>(&UnityEngine::Networking::UnityWebRequest::IsExecuting)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d366b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "IsExecuting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.get_isModifiable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Networking::UnityWebRequest::*)()>(&UnityEngine::Networking::UnityWebRequest::get_isModifiable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d35f84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "get_isModifiable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.get_isDone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Networking::UnityWebRequest::*)()>(&UnityEngine::Networking::UnityWebRequest::get_isDone)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d366ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "get_isDone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.get_result
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__Result (UnityEngine::Networking::UnityWebRequest::*)()>(&UnityEngine::Networking::UnityWebRequest::get_result)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d36470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "get_result",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.GetDownloadProgress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::Networking::UnityWebRequest::*)()>(&UnityEngine::Networking::UnityWebRequest::GetDownloadProgress)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d36734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "GetDownloadProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.get_downloadProgress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::Networking::UnityWebRequest::*)()>(&UnityEngine::Networking::UnityWebRequest::get_downloadProgress)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2d36770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "get_downloadProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.get_downloadedBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (UnityEngine::Networking::UnityWebRequest::*)()>(&UnityEngine::Networking::UnityWebRequest::get_downloadedBytes)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d36814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "get_downloadedBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.SetRedirectLimitFromScripting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::UnityWebRequest::*)(int32_t)>(&UnityEngine::Networking::UnityWebRequest::SetRedirectLimitFromScripting)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d36850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "SetRedirectLimitFromScripting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.set_redirectLimit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::UnityWebRequest::*)(int32_t)>(&UnityEngine::Networking::UnityWebRequest::set_redirectLimit)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d36894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "set_redirectLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.SetUploadHandler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError (UnityEngine::Networking::UnityWebRequest::*)(UnityEngine::Networking::UploadHandler)>(&UnityEngine::Networking::UnityWebRequest::SetUploadHandler)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d368d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "SetUploadHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::UploadHandler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.get_uploadHandler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Networking::UploadHandler (UnityEngine::Networking::UnityWebRequest::*)()>(&UnityEngine::Networking::UnityWebRequest::get_uploadHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d35d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "get_uploadHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.set_uploadHandler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::UnityWebRequest::*)(UnityEngine::Networking::UploadHandler)>(&UnityEngine::Networking::UnityWebRequest::set_uploadHandler)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2d35a90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "set_uploadHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::UploadHandler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.SetDownloadHandler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError (UnityEngine::Networking::UnityWebRequest::*)(UnityEngine::Networking::DownloadHandler)>(&UnityEngine::Networking::UnityWebRequest::SetDownloadHandler)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d3691c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "SetDownloadHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::DownloadHandler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.get_downloadHandler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Networking::DownloadHandler (UnityEngine::Networking::UnityWebRequest::*)()>(&UnityEngine::Networking::UnityWebRequest::get_downloadHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d35d04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "get_downloadHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.set_downloadHandler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::UnityWebRequest::*)(UnityEngine::Networking::DownloadHandler)>(&UnityEngine::Networking::UnityWebRequest::set_downloadHandler)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2d35980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "set_downloadHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::DownloadHandler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.SetCertificateHandler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError (UnityEngine::Networking::UnityWebRequest::*)(UnityEngine::Networking::CertificateHandler)>(&UnityEngine::Networking::UnityWebRequest::SetCertificateHandler)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d36960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "SetCertificateHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::CertificateHandler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.get_certificateHandler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Networking::CertificateHandler (UnityEngine::Networking::UnityWebRequest::*)()>(&UnityEngine::Networking::UnityWebRequest::get_certificateHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d35d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "get_certificateHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.set_certificateHandler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::UnityWebRequest::*)(UnityEngine::Networking::CertificateHandler)>(&UnityEngine::Networking::UnityWebRequest::set_certificateHandler)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2d369a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "set_certificateHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::CertificateHandler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.SetTimeoutMsec
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError (UnityEngine::Networking::UnityWebRequest::*)(int32_t)>(&UnityEngine::Networking::UnityWebRequest::SetTimeoutMsec)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d36ab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "SetTimeoutMsec",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.set_timeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::UnityWebRequest::*)(int32_t)>(&UnityEngine::Networking::UnityWebRequest::set_timeout)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2d36af8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "set_timeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Networking::UnityWebRequest (*)(::StringW)>(&UnityEngine::Networking::UnityWebRequest::Get)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2d36c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.EscapeURL
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&UnityEngine::Networking::UnityWebRequest::EscapeURL)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d36d48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "EscapeURL",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequest.EscapeURL
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, System::Text::Encoding)>(&UnityEngine::Networking::UnityWebRequest::EscapeURL)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2d36d68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "EscapeURL",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  UnityEngine::Networking::UnityWebRequest::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Networking::UnityWebRequest::__set_m_Ptr(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t UnityEngine::Networking::UnityWebRequest::__get_m_Ptr() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Networking::UnityWebRequest::__set_m_DownloadHandler(UnityEngine::Networking::DownloadHandler value)  {
::cordl_internals::setInstanceField<UnityEngine::Networking::DownloadHandler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Networking::DownloadHandler>(value));
}
constexpr UnityEngine::Networking::DownloadHandler UnityEngine::Networking::UnityWebRequest::__get_m_DownloadHandler() const {
return ::cordl_internals::getInstanceField<UnityEngine::Networking::DownloadHandler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Networking::UnityWebRequest::__set_m_UploadHandler(UnityEngine::Networking::UploadHandler value)  {
::cordl_internals::setInstanceField<UnityEngine::Networking::UploadHandler, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Networking::UploadHandler>(value));
}
constexpr UnityEngine::Networking::UploadHandler UnityEngine::Networking::UnityWebRequest::__get_m_UploadHandler() const {
return ::cordl_internals::getInstanceField<UnityEngine::Networking::UploadHandler, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Networking::UnityWebRequest::__set_m_CertificateHandler(UnityEngine::Networking::CertificateHandler value)  {
::cordl_internals::setInstanceField<UnityEngine::Networking::CertificateHandler, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Networking::CertificateHandler>(value));
}
constexpr UnityEngine::Networking::CertificateHandler UnityEngine::Networking::UnityWebRequest::__get_m_CertificateHandler() const {
return ::cordl_internals::getInstanceField<UnityEngine::Networking::CertificateHandler, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Networking::UnityWebRequest::__set_m_Uri(System::Uri value)  {
::cordl_internals::setInstanceField<System::Uri, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Uri>(value));
}
constexpr System::Uri UnityEngine::Networking::UnityWebRequest::__get_m_Uri() const {
return ::cordl_internals::getInstanceField<System::Uri, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Networking::UnityWebRequest::__set__disposeCertificateHandlerOnDispose_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Networking::UnityWebRequest::__get__disposeCertificateHandlerOnDispose_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Networking::UnityWebRequest::__set__disposeDownloadHandlerOnDispose_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Networking::UnityWebRequest::__get__disposeDownloadHandlerOnDispose_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Networking::UnityWebRequest::__set__disposeUploadHandlerOnDispose_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Networking::UnityWebRequest::__get__disposeUploadHandlerOnDispose_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x3a>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW UnityEngine::Networking::UnityWebRequest::GetWebErrorString(UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError err)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "GetWebErrorString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, err);
}
 ::StringW UnityEngine::Networking::UnityWebRequest::GetHTTPStatusString(int64_t responseCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "GetHTTPStatusString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, responseCode);
}
 bool UnityEngine::Networking::UnityWebRequest::get_disposeCertificateHandlerOnDispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "get_disposeCertificateHandlerOnDispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Networking::UnityWebRequest::set_disposeCertificateHandlerOnDispose(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "set_disposeCertificateHandlerOnDispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::Networking::UnityWebRequest::get_disposeDownloadHandlerOnDispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "get_disposeDownloadHandlerOnDispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Networking::UnityWebRequest::set_disposeDownloadHandlerOnDispose(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "set_disposeDownloadHandlerOnDispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::Networking::UnityWebRequest::get_disposeUploadHandlerOnDispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "get_disposeUploadHandlerOnDispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Networking::UnityWebRequest::set_disposeUploadHandlerOnDispose(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "set_disposeUploadHandlerOnDispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::cordl_internals::intptr_t UnityEngine::Networking::UnityWebRequest::Create()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method);
}
 void UnityEngine::Networking::UnityWebRequest::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Networking::UnityWebRequest::InternalDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "InternalDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Networking::UnityWebRequest::InternalSetDefaults()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "InternalSetDefaults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Networking::UnityWebRequest UnityEngine::Networking::UnityWebRequest::New_ctor(::StringW url, ::StringW method, UnityEngine::Networking::DownloadHandler downloadHandler, UnityEngine::Networking::UploadHandler uploadHandler)  {
UnityEngine::Networking::UnityWebRequest o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::Networking::UnityWebRequest>(url, method, downloadHandler, uploadHandler))};
return o;
}
 void UnityEngine::Networking::UnityWebRequest::_ctor(::StringW url, ::StringW method, UnityEngine::Networking::DownloadHandler downloadHandler, UnityEngine::Networking::UploadHandler uploadHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::DownloadHandler>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::UploadHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, url, method, downloadHandler, uploadHandler);
}
 void UnityEngine::Networking::UnityWebRequest::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Networking::UnityWebRequest::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Networking::UnityWebRequest::DisposeHandlers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "DisposeHandlers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Networking::UnityWebRequestAsyncOperation UnityEngine::Networking::UnityWebRequest::BeginWebRequest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "BeginWebRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Networking::UnityWebRequestAsyncOperation, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Networking::UnityWebRequestAsyncOperation UnityEngine::Networking::UnityWebRequest::SendWebRequest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "SendWebRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Networking::UnityWebRequestAsyncOperation, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Networking::UnityWebRequest::Abort()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "Abort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetMethod(UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod methodType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "SetMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError, false>(const_cast<void*>(instance), ___internal_method, methodType);
}
 void UnityEngine::Networking::UnityWebRequest::InternalSetMethod(UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod methodType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "InternalSetMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, methodType);
}
 UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetCustomMethod(::StringW customMethodName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "SetCustomMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError, false>(const_cast<void*>(instance), ___internal_method, customMethodName);
}
 void UnityEngine::Networking::UnityWebRequest::InternalSetCustomMethod(::StringW customMethodName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "InternalSetCustomMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, customMethodName);
}
 UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod UnityEngine::Networking::UnityWebRequest::GetMethod()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "GetMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::Networking::UnityWebRequest::GetCustomMethod()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "GetCustomMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::Networking::UnityWebRequest::get_method()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "get_method",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Networking::UnityWebRequest::set_method(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "set_method",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::UnityWebRequest::GetError()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "GetError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::Networking::UnityWebRequest::get_error()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "get_error",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::Networking::UnityWebRequest::get_url()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "get_url",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Networking::UnityWebRequest::set_url(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "set_url",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW UnityEngine::Networking::UnityWebRequest::GetUrl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "GetUrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetUrl(::StringW url)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "SetUrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError, false>(const_cast<void*>(instance), ___internal_method, url);
}
 void UnityEngine::Networking::UnityWebRequest::InternalSetUrl(::StringW url)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "InternalSetUrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, url);
}
 int64_t UnityEngine::Networking::UnityWebRequest::get_responseCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "get_responseCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::Networking::UnityWebRequest::IsExecuting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "IsExecuting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::Networking::UnityWebRequest::get_isModifiable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "get_isModifiable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::Networking::UnityWebRequest::get_isDone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "get_isDone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__Result UnityEngine::Networking::UnityWebRequest::get_result()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "get_result",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__Result, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::Networking::UnityWebRequest::GetDownloadProgress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "GetDownloadProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::Networking::UnityWebRequest::get_downloadProgress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "get_downloadProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 uint64_t UnityEngine::Networking::UnityWebRequest::get_downloadedBytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "get_downloadedBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Networking::UnityWebRequest::SetRedirectLimitFromScripting(int32_t limit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "SetRedirectLimitFromScripting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, limit);
}
 void UnityEngine::Networking::UnityWebRequest::set_redirectLimit(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "set_redirectLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetUploadHandler(UnityEngine::Networking::UploadHandler uh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "SetUploadHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::UploadHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError, false>(const_cast<void*>(instance), ___internal_method, uh);
}
 UnityEngine::Networking::UploadHandler UnityEngine::Networking::UnityWebRequest::get_uploadHandler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "get_uploadHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Networking::UploadHandler, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Networking::UnityWebRequest::set_uploadHandler(UnityEngine::Networking::UploadHandler value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "set_uploadHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::UploadHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetDownloadHandler(UnityEngine::Networking::DownloadHandler dh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "SetDownloadHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::DownloadHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError, false>(const_cast<void*>(instance), ___internal_method, dh);
}
 UnityEngine::Networking::DownloadHandler UnityEngine::Networking::UnityWebRequest::get_downloadHandler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "get_downloadHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Networking::DownloadHandler, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Networking::UnityWebRequest::set_downloadHandler(UnityEngine::Networking::DownloadHandler value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "set_downloadHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::DownloadHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetCertificateHandler(UnityEngine::Networking::CertificateHandler ch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "SetCertificateHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::CertificateHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError, false>(const_cast<void*>(instance), ___internal_method, ch);
}
 UnityEngine::Networking::CertificateHandler UnityEngine::Networking::UnityWebRequest::get_certificateHandler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "get_certificateHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Networking::CertificateHandler, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Networking::UnityWebRequest::set_certificateHandler(UnityEngine::Networking::CertificateHandler value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "set_certificateHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::CertificateHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetTimeoutMsec(int32_t timeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "SetTimeoutMsec",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError, false>(const_cast<void*>(instance), ___internal_method, timeout);
}
 void UnityEngine::Networking::UnityWebRequest::set_timeout(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "set_timeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Networking::UnityWebRequest UnityEngine::Networking::UnityWebRequest::Get(::StringW uri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Networking::UnityWebRequest, false>(nullptr, ___internal_method, uri);
}
 ::StringW UnityEngine::Networking::UnityWebRequest::EscapeURL(::StringW s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "EscapeURL",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, s);
}
 ::StringW UnityEngine::Networking::UnityWebRequest::EscapeURL(::StringW s, System::Text::Encoding e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequest>::get(),
                            "EscapeURL",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, s, e);
}
