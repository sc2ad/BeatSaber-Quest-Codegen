#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
class Uri;
}
namespace System::Text {
class Encoding;
}
namespace UnityEngine::Networking {
class UploadHandler;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Networking {
class CertificateHandler;
}
namespace UnityEngine::Networking {
class DownloadHandler;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
// Forward declare root types
namespace UnityEngine::Networking {
struct UnityEngine__Networking__UnityWebRequest__Result;
}
namespace UnityEngine::Networking {
struct UnityEngine__Networking__UnityWebRequest__UnityWebRequestError;
}
namespace UnityEngine::Networking {
struct UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Type: ::UnityWebRequestMethod
namespace UnityEngine::Networking {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15552))
// CS Name: UnityEngine.Networking.UnityWebRequest::UnityWebRequestMethod
struct CORDL_TYPE UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod(int32_t value__) noexcept;


                    constexpr UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod(UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod const&) = default;
                    constexpr UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod(UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod&&) = default;
                    constexpr UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod& operator=(UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod& operator=(UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod_Unwrapped : int32_t {
__Get = 0,
__Post = 1,
__Put = 2,
__Head = 3,
__Custom = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Get offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod const Get;

/// @brief Field Post offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod const Post;

/// @brief Field Put offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod const Put;

/// @brief Field Head offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod const Head;

/// @brief Field Custom offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod const Custom;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Networking
// Type: ::UnityWebRequestError
namespace UnityEngine::Networking {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15553))
// CS Name: UnityEngine.Networking.UnityWebRequest::UnityWebRequestError
struct CORDL_TYPE UnityEngine__Networking__UnityWebRequest__UnityWebRequestError : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__Networking__UnityWebRequest__UnityWebRequestError(int32_t value__) noexcept;


                    constexpr UnityEngine__Networking__UnityWebRequest__UnityWebRequestError(UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const&) = default;
                    constexpr UnityEngine__Networking__UnityWebRequest__UnityWebRequestError(UnityEngine__Networking__UnityWebRequest__UnityWebRequestError&&) = default;
                    constexpr UnityEngine__Networking__UnityWebRequest__UnityWebRequestError& operator=(UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Networking__UnityWebRequest__UnityWebRequestError& operator=(UnityEngine__Networking__UnityWebRequest__UnityWebRequestError&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Networking__UnityWebRequest__UnityWebRequestError(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__Networking__UnityWebRequest__UnityWebRequestError_Unwrapped : int32_t {
__OK = 0,
__Unknown = 1,
__SDKError = 2,
__UnsupportedProtocol = 3,
__MalformattedUrl = 4,
__CannotResolveProxy = 5,
__CannotResolveHost = 6,
__CannotConnectToHost = 7,
__AccessDenied = 8,
__GenericHttpError = 9,
__WriteError = 10,
__ReadError = 11,
__OutOfMemory = 12,
__Timeout = 13,
__HTTPPostError = 14,
__SSLCannotConnect = 15,
__Aborted = 16,
__TooManyRedirects = 17,
__ReceivedNoData = 18,
__SSLNotSupported = 19,
__FailedToSendData = 20,
__FailedToReceiveData = 21,
__SSLCertificateError = 22,
__SSLCipherNotAvailable = 23,
__SSLCACertError = 24,
__UnrecognizedContentEncoding = 25,
__LoginFailed = 26,
__SSLShutdownFailed = 27,
__NoInternetConnection = 28,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__Networking__UnityWebRequest__UnityWebRequestError_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__Networking__UnityWebRequest__UnityWebRequestError_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field OK offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const OK;

/// @brief Field Unknown offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const Unknown;

/// @brief Field SDKError offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const SDKError;

/// @brief Field UnsupportedProtocol offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const UnsupportedProtocol;

/// @brief Field MalformattedUrl offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const MalformattedUrl;

/// @brief Field CannotResolveProxy offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const CannotResolveProxy;

/// @brief Field CannotResolveHost offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const CannotResolveHost;

/// @brief Field CannotConnectToHost offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const CannotConnectToHost;

/// @brief Field AccessDenied offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const AccessDenied;

/// @brief Field GenericHttpError offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const GenericHttpError;

/// @brief Field WriteError offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const WriteError;

/// @brief Field ReadError offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const ReadError;

/// @brief Field OutOfMemory offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const OutOfMemory;

/// @brief Field Timeout offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const Timeout;

/// @brief Field HTTPPostError offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const HTTPPostError;

/// @brief Field SSLCannotConnect offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const SSLCannotConnect;

/// @brief Field Aborted offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const Aborted;

/// @brief Field TooManyRedirects offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const TooManyRedirects;

/// @brief Field ReceivedNoData offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const ReceivedNoData;

/// @brief Field SSLNotSupported offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const SSLNotSupported;

/// @brief Field FailedToSendData offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const FailedToSendData;

/// @brief Field FailedToReceiveData offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const FailedToReceiveData;

/// @brief Field SSLCertificateError offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const SSLCertificateError;

/// @brief Field SSLCipherNotAvailable offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const SSLCipherNotAvailable;

/// @brief Field SSLCACertError offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const SSLCACertError;

/// @brief Field UnrecognizedContentEncoding offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const UnrecognizedContentEncoding;

/// @brief Field LoginFailed offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const LoginFailed;

/// @brief Field SSLShutdownFailed offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const SSLShutdownFailed;

/// @brief Field NoInternetConnection offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError const NoInternetConnection;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Networking
// Type: ::Result
namespace UnityEngine::Networking {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15554))
// CS Name: UnityEngine.Networking.UnityWebRequest::Result
struct CORDL_TYPE UnityEngine__Networking__UnityWebRequest__Result : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__Networking__UnityWebRequest__Result(int32_t value__) noexcept;


                    constexpr UnityEngine__Networking__UnityWebRequest__Result(UnityEngine__Networking__UnityWebRequest__Result const&) = default;
                    constexpr UnityEngine__Networking__UnityWebRequest__Result(UnityEngine__Networking__UnityWebRequest__Result&&) = default;
                    constexpr UnityEngine__Networking__UnityWebRequest__Result& operator=(UnityEngine__Networking__UnityWebRequest__Result const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Networking__UnityWebRequest__Result& operator=(UnityEngine__Networking__UnityWebRequest__Result&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Networking__UnityWebRequest__Result(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__Networking__UnityWebRequest__Result_Unwrapped : int32_t {
__InProgress = 0,
__Success = 1,
__ConnectionError = 2,
__ProtocolError = 3,
__DataProcessingError = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__Networking__UnityWebRequest__Result_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__Networking__UnityWebRequest__Result_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field InProgress offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__Result const InProgress;

/// @brief Field Success offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__Result const Success;

/// @brief Field ConnectionError offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__Result const ConnectionError;

/// @brief Field ProtocolError offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__Result const ProtocolError;

/// @brief Field DataProcessingError offset 0
static UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__Result const DataProcessingError;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Networking
// Type: UnityEngine.Networking::UnityWebRequest
namespace UnityEngine::Networking {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15555))
// CS Name: UnityEngine.Networking.UnityWebRequest
class CORDL_TYPE UnityWebRequest : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Result = UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__Result;

using UnityWebRequestError = UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError;

using UnityWebRequestMethod = UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~UnityWebRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequest", modifiers: " const&", def_value: None }]
constexpr UnityWebRequest(UnityWebRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequest", modifiers: "&&", def_value: None }]
constexpr UnityWebRequest(UnityWebRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityWebRequest(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityWebRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityWebRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityWebRequest& operator=(UnityWebRequest&& o) noexcept = default;
  constexpr UnityWebRequest& operator=(UnityWebRequest const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;

 UnityEngine::Networking::DownloadHandler __declspec(property(get=__get_m_DownloadHandler, put=__set_m_DownloadHandler))  m_DownloadHandler;

constexpr void __set_m_DownloadHandler(UnityEngine::Networking::DownloadHandler value) ;

constexpr UnityEngine::Networking::DownloadHandler __get_m_DownloadHandler() const;

 UnityEngine::Networking::UploadHandler __declspec(property(get=__get_m_UploadHandler, put=__set_m_UploadHandler))  m_UploadHandler;

constexpr void __set_m_UploadHandler(UnityEngine::Networking::UploadHandler value) ;

constexpr UnityEngine::Networking::UploadHandler __get_m_UploadHandler() const;

 UnityEngine::Networking::CertificateHandler __declspec(property(get=__get_m_CertificateHandler, put=__set_m_CertificateHandler))  m_CertificateHandler;

constexpr void __set_m_CertificateHandler(UnityEngine::Networking::CertificateHandler value) ;

constexpr UnityEngine::Networking::CertificateHandler __get_m_CertificateHandler() const;

 System::Uri __declspec(property(get=__get_m_Uri, put=__set_m_Uri))  m_Uri;

constexpr void __set_m_Uri(System::Uri value) ;

constexpr System::Uri __get_m_Uri() const;

/// @brief Field kHttpVerbGET offset 0
static constexpr ::ConstString  kHttpVerbGET{u"GET"};

/// @brief Field kHttpVerbHEAD offset 0
static constexpr ::ConstString  kHttpVerbHEAD{u"HEAD"};

/// @brief Field kHttpVerbPOST offset 0
static constexpr ::ConstString  kHttpVerbPOST{u"POST"};

/// @brief Field kHttpVerbPUT offset 0
static constexpr ::ConstString  kHttpVerbPUT{u"PUT"};

/// @brief Field kHttpVerbCREATE offset 0
static constexpr ::ConstString  kHttpVerbCREATE{u"CREATE"};

/// @brief Field kHttpVerbDELETE offset 0
static constexpr ::ConstString  kHttpVerbDELETE{u"DELETE"};

 bool __declspec(property(get=__get__disposeCertificateHandlerOnDispose_k__BackingField, put=__set__disposeCertificateHandlerOnDispose_k__BackingField))  _disposeCertificateHandlerOnDispose_k__BackingField;

constexpr void __set__disposeCertificateHandlerOnDispose_k__BackingField(bool value) ;

constexpr bool __get__disposeCertificateHandlerOnDispose_k__BackingField() const;

 bool __declspec(property(get=__get__disposeDownloadHandlerOnDispose_k__BackingField, put=__set__disposeDownloadHandlerOnDispose_k__BackingField))  _disposeDownloadHandlerOnDispose_k__BackingField;

constexpr void __set__disposeDownloadHandlerOnDispose_k__BackingField(bool value) ;

constexpr bool __get__disposeDownloadHandlerOnDispose_k__BackingField() const;

 bool __declspec(property(get=__get__disposeUploadHandlerOnDispose_k__BackingField, put=__set__disposeUploadHandlerOnDispose_k__BackingField))  _disposeUploadHandlerOnDispose_k__BackingField;

constexpr void __set__disposeUploadHandlerOnDispose_k__BackingField(bool value) ;

constexpr bool __get__disposeUploadHandlerOnDispose_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_disposeCertificateHandlerOnDispose, put=set_disposeCertificateHandlerOnDispose))  disposeCertificateHandlerOnDispose;

 bool __declspec(property(get=get_disposeDownloadHandlerOnDispose, put=set_disposeDownloadHandlerOnDispose))  disposeDownloadHandlerOnDispose;

 bool __declspec(property(get=get_disposeUploadHandlerOnDispose, put=set_disposeUploadHandlerOnDispose))  disposeUploadHandlerOnDispose;

 ::StringW __declspec(property(get=get_method, put=set_method))  method;

 ::StringW __declspec(property(get=get_error))  error;

 ::StringW __declspec(property(get=get_url, put=set_url))  url;

 int64_t __declspec(property(get=get_responseCode))  responseCode;

 bool __declspec(property(get=get_isModifiable))  isModifiable;

 bool __declspec(property(get=get_isDone))  isDone;

 UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__Result __declspec(property(get=get_result))  result;

 float_t __declspec(property(get=get_downloadProgress))  downloadProgress;

 uint64_t __declspec(property(get=get_downloadedBytes))  downloadedBytes;

 int32_t __declspec(property(put=set_redirectLimit))  redirectLimit;

 UnityEngine::Networking::UploadHandler __declspec(property(get=get_uploadHandler, put=set_uploadHandler))  uploadHandler;

 UnityEngine::Networking::DownloadHandler __declspec(property(get=get_downloadHandler, put=set_downloadHandler))  downloadHandler;

 UnityEngine::Networking::CertificateHandler __declspec(property(get=get_certificateHandler, put=set_certificateHandler))  certificateHandler;

 int32_t __declspec(property(put=set_timeout))  timeout;


// Methods

/// @brief Method GetWebErrorString addr 0x2d354ac size 0x3c virtual false final false
static ::StringW GetWebErrorString(UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError err) ;

/// @brief Method GetHTTPStatusString addr 0x2d354e8 size 0x3c virtual false final false
static ::StringW GetHTTPStatusString(int64_t responseCode) ;

/// @brief Method get_disposeCertificateHandlerOnDispose addr 0x2d35524 size 0x8 virtual false final false
 bool get_disposeCertificateHandlerOnDispose() ;

/// @brief Method set_disposeCertificateHandlerOnDispose addr 0x2d3552c size 0xc virtual false final false
 void set_disposeCertificateHandlerOnDispose(bool value) ;

/// @brief Method get_disposeDownloadHandlerOnDispose addr 0x2d35538 size 0x8 virtual false final false
 bool get_disposeDownloadHandlerOnDispose() ;

/// @brief Method set_disposeDownloadHandlerOnDispose addr 0x2d35540 size 0xc virtual false final false
 void set_disposeDownloadHandlerOnDispose(bool value) ;

/// @brief Method get_disposeUploadHandlerOnDispose addr 0x2d3554c size 0x8 virtual false final false
 bool get_disposeUploadHandlerOnDispose() ;

/// @brief Method set_disposeUploadHandlerOnDispose addr 0x2d35554 size 0xc virtual false final false
 void set_disposeUploadHandlerOnDispose(bool value) ;

/// @brief Method Create addr 0x2d35560 size 0x28 virtual false final false
static ::cordl_internals::intptr_t Create() ;

/// @brief Method Release addr 0x2d35588 size 0x3c virtual false final false
 void Release() ;

/// @brief Method InternalDestroy addr 0x2d355c4 size 0xbc virtual false final false
 void InternalDestroy() ;

/// @brief Method InternalSetDefaults addr 0x2d356bc size 0x14 virtual false final false
 void InternalSetDefaults() ;

// Ctor Parameters [CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "downloadHandler", ty: "UnityEngine::Networking::DownloadHandler", modifiers: "", def_value: None }, CppParam { name: "uploadHandler", ty: "UnityEngine::Networking::UploadHandler", modifiers: "", def_value: None }]
explicit UnityWebRequest(::StringW url, ::StringW method, UnityEngine::Networking::DownloadHandler downloadHandler, UnityEngine::Networking::UploadHandler uploadHandler) ;

/// @brief Method .ctor addr 0x2d356d0 size 0xa4 virtual false final false
 void _ctor(::StringW url, ::StringW method, UnityEngine::Networking::DownloadHandler downloadHandler, UnityEngine::Networking::UploadHandler uploadHandler) ;

/// @brief Method Finalize addr 0x2d35ba0 size 0x9c virtual true final false
 void Finalize() ;

/// @brief Method Dispose addr 0x2d35c9c size 0x68 virtual true final true
 void Dispose() ;

/// @brief Method DisposeHandlers addr 0x2d35c3c size 0x60 virtual false final false
 void DisposeHandlers() ;

/// @brief Method BeginWebRequest addr 0x2d35db0 size 0x3c virtual false final false
 UnityEngine::Networking::UnityWebRequestAsyncOperation BeginWebRequest() ;

/// @brief Method SendWebRequest addr 0x2d35dec size 0x48 virtual false final false
 UnityEngine::Networking::UnityWebRequestAsyncOperation SendWebRequest() ;

/// @brief Method Abort addr 0x2d35680 size 0x3c virtual false final false
 void Abort() ;

/// @brief Method SetMethod addr 0x2d35e34 size 0x44 virtual false final false
 UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError SetMethod(UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod methodType) ;

/// @brief Method InternalSetMethod addr 0x2d35e78 size 0x10c virtual false final false
 void InternalSetMethod(UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod methodType) ;

/// @brief Method SetCustomMethod addr 0x2d35fc0 size 0x44 virtual false final false
 UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError SetCustomMethod(::StringW customMethodName) ;

/// @brief Method InternalSetCustomMethod addr 0x2d36004 size 0x10c virtual false final false
 void InternalSetCustomMethod(::StringW customMethodName) ;

/// @brief Method GetMethod addr 0x2d36110 size 0x3c virtual false final false
 UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod GetMethod() ;

/// @brief Method GetCustomMethod addr 0x2d3614c size 0x3c virtual false final false
 ::StringW GetCustomMethod() ;

/// @brief Method get_method addr 0x2d36188 size 0x108 virtual false final false
 ::StringW get_method() ;

/// @brief Method set_method addr 0x2d357fc size 0x184 virtual false final false
 void set_method(::StringW value) ;

/// @brief Method GetError addr 0x2d36290 size 0x3c virtual false final false
 UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError GetError() ;

/// @brief Method get_error addr 0x2d362cc size 0x1a4 virtual false final false
 ::StringW get_error() ;

/// @brief Method get_url addr 0x2d364e8 size 0x3c virtual false final false
 ::StringW get_url() ;

/// @brief Method set_url addr 0x2d35774 size 0x88 virtual false final false
 void set_url(::StringW value) ;

/// @brief Method GetUrl addr 0x2d36524 size 0x3c virtual false final false
 ::StringW GetUrl() ;

/// @brief Method SetUrl addr 0x2d3666c size 0x44 virtual false final false
 UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError SetUrl(::StringW url) ;

/// @brief Method InternalSetUrl addr 0x2d36560 size 0x10c virtual false final false
 void InternalSetUrl(::StringW url) ;

/// @brief Method get_responseCode addr 0x2d364ac size 0x3c virtual false final false
 int64_t get_responseCode() ;

/// @brief Method IsExecuting addr 0x2d366b0 size 0x3c virtual false final false
 bool IsExecuting() ;

/// @brief Method get_isModifiable addr 0x2d35f84 size 0x3c virtual false final false
 bool get_isModifiable() ;

/// @brief Method get_isDone addr 0x2d366ec size 0x48 virtual false final false
 bool get_isDone() ;

/// @brief Method get_result addr 0x2d36470 size 0x3c virtual false final false
 UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__Result get_result() ;

/// @brief Method GetDownloadProgress addr 0x2d36734 size 0x3c virtual false final false
 float_t GetDownloadProgress() ;

/// @brief Method get_downloadProgress addr 0x2d36770 size 0xa4 virtual false final false
 float_t get_downloadProgress() ;

/// @brief Method get_downloadedBytes addr 0x2d36814 size 0x3c virtual false final false
 uint64_t get_downloadedBytes() ;

/// @brief Method SetRedirectLimitFromScripting addr 0x2d36850 size 0x44 virtual false final false
 void SetRedirectLimitFromScripting(int32_t limit) ;

/// @brief Method set_redirectLimit addr 0x2d36894 size 0x44 virtual false final false
 void set_redirectLimit(int32_t value) ;

/// @brief Method SetUploadHandler addr 0x2d368d8 size 0x44 virtual false final false
 UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError SetUploadHandler(UnityEngine::Networking::UploadHandler uh) ;

/// @brief Method get_uploadHandler addr 0x2d35d0c size 0x8 virtual false final false
 UnityEngine::Networking::UploadHandler get_uploadHandler() ;

/// @brief Method set_uploadHandler addr 0x2d35a90 size 0x110 virtual false final false
 void set_uploadHandler(UnityEngine::Networking::UploadHandler value) ;

/// @brief Method SetDownloadHandler addr 0x2d3691c size 0x44 virtual false final false
 UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError SetDownloadHandler(UnityEngine::Networking::DownloadHandler dh) ;

/// @brief Method get_downloadHandler addr 0x2d35d04 size 0x8 virtual false final false
 UnityEngine::Networking::DownloadHandler get_downloadHandler() ;

/// @brief Method set_downloadHandler addr 0x2d35980 size 0x110 virtual false final false
 void set_downloadHandler(UnityEngine::Networking::DownloadHandler value) ;

/// @brief Method SetCertificateHandler addr 0x2d36960 size 0x44 virtual false final false
 UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError SetCertificateHandler(UnityEngine::Networking::CertificateHandler ch) ;

/// @brief Method get_certificateHandler addr 0x2d35d14 size 0x8 virtual false final false
 UnityEngine::Networking::CertificateHandler get_certificateHandler() ;

/// @brief Method set_certificateHandler addr 0x2d369a4 size 0x110 virtual false final false
 void set_certificateHandler(UnityEngine::Networking::CertificateHandler value) ;

/// @brief Method SetTimeoutMsec addr 0x2d36ab4 size 0x44 virtual false final false
 UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError SetTimeoutMsec(int32_t timeout) ;

/// @brief Method set_timeout addr 0x2d36af8 size 0x15c virtual false final false
 void set_timeout(int32_t value) ;

/// @brief Method Get addr 0x2d36c54 size 0xa8 virtual false final false
static UnityEngine::Networking::UnityWebRequest Get(::StringW uri) ;

/// @brief Method EscapeURL addr 0x2d36d48 size 0x20 virtual false final false
static ::StringW EscapeURL(::StringW s) ;

/// @brief Method EscapeURL addr 0x2d36d68 size 0xd8 virtual false final false
static ::StringW EscapeURL(::StringW s, System::Text::Encoding e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Networking
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__Result, "UnityEngine.Networking", "UnityWebRequest/Result");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestError, "UnityEngine.Networking", "UnityWebRequest/UnityWebRequestError");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__UnityWebRequestMethod, "UnityEngine.Networking", "UnityWebRequest/UnityWebRequestMethod");
NEED_NO_BOX(UnityEngine::Networking::UnityWebRequest);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::UnityWebRequest, "UnityEngine.Networking", "UnityWebRequest");
