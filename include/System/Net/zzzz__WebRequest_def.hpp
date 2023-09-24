#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Net {
class IWebRequestCreate;
}
namespace System {
class Uri;
}
namespace System::Security::Principal {
class WindowsIdentity;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::IO {
class Stream;
}
namespace System::Net {
class WebResponse;
}
namespace System::Net {
class ICredentials;
}
namespace System::Security::Principal {
struct TokenImpersonationLevel;
}
namespace System::Net::Cache {
class RequestCacheBinding;
}
namespace System::Net::Cache {
class RequestCacheProtocol;
}
namespace System::Net {
class System__Net__WebRequest__DesignerWebRequestCreate;
}
namespace System::Net {
class System__Net__WebRequest____c__DisplayClass79_0;
}
namespace System::Net {
class System__Net__WebRequest____c__DisplayClass78_0;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace System::Net::Security {
struct AuthenticationLevel;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Net::Cache {
class RequestCachePolicy;
}
namespace System::Net {
class System__Net__TimerThread__Queue;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Net {
class System__Net__WebRequest__DesignerWebRequestCreate;
}
namespace System::Net {
class System__Net__WebRequest____c__DisplayClass78_0;
}
namespace System::Net {
class System__Net__WebRequest____c__DisplayClass79_0;
}
namespace System::Net {
class WebRequest;
}
// Type: ::DesignerWebRequestCreate
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7944))
// CS Name: System.Net.WebRequest::DesignerWebRequestCreate
class CORDL_TYPE System__Net__WebRequest__DesignerWebRequestCreate : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Net::IWebRequestCreate
constexpr operator  System::Net::IWebRequestCreate() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Net__WebRequest__DesignerWebRequestCreate() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__WebRequest__DesignerWebRequestCreate", modifiers: " const&", def_value: None }]
constexpr System__Net__WebRequest__DesignerWebRequestCreate(System__Net__WebRequest__DesignerWebRequestCreate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__WebRequest__DesignerWebRequestCreate", modifiers: "&&", def_value: None }]
constexpr System__Net__WebRequest__DesignerWebRequestCreate(System__Net__WebRequest__DesignerWebRequestCreate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__WebRequest__DesignerWebRequestCreate(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__WebRequest__DesignerWebRequestCreate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__WebRequest__DesignerWebRequestCreate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__WebRequest__DesignerWebRequestCreate& operator=(System__Net__WebRequest__DesignerWebRequestCreate&& o) noexcept = default;
  constexpr System__Net__WebRequest__DesignerWebRequestCreate& operator=(System__Net__WebRequest__DesignerWebRequestCreate const& o) noexcept = default;
                


// Methods

/// @brief Method Create addr 0x2812fa0 size 0x54 virtual true final true
 System::Net::WebRequest Create(System::Uri uri) ;

static System::Net::System__Net__WebRequest__DesignerWebRequestCreate New_ctor() ;

/// @brief Method .ctor addr 0x2812da0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<>c__DisplayClass78_0
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7945))
// CS Name: System.Net.WebRequest::<>c__DisplayClass78_0
class CORDL_TYPE System__Net__WebRequest____c__DisplayClass78_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Net__WebRequest____c__DisplayClass78_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__WebRequest____c__DisplayClass78_0", modifiers: " const&", def_value: None }]
constexpr System__Net__WebRequest____c__DisplayClass78_0(System__Net__WebRequest____c__DisplayClass78_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__WebRequest____c__DisplayClass78_0", modifiers: "&&", def_value: None }]
constexpr System__Net__WebRequest____c__DisplayClass78_0(System__Net__WebRequest____c__DisplayClass78_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__WebRequest____c__DisplayClass78_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__WebRequest____c__DisplayClass78_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__WebRequest____c__DisplayClass78_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__WebRequest____c__DisplayClass78_0& operator=(System__Net__WebRequest____c__DisplayClass78_0&& o) noexcept = default;
  constexpr System__Net__WebRequest____c__DisplayClass78_0& operator=(System__Net__WebRequest____c__DisplayClass78_0 const& o) noexcept = default;
                


// Fields

 System::Security::Principal::WindowsIdentity __declspec(property(get=__get_currentUser, put=__set_currentUser))  currentUser;

constexpr void __set_currentUser(System::Security::Principal::WindowsIdentity value) ;

constexpr System::Security::Principal::WindowsIdentity __get_currentUser() const;

 System::Net::WebRequest __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Net::WebRequest value) ;

constexpr System::Net::WebRequest __get___4__this() const;


// Methods

static System::Net::System__Net__WebRequest____c__DisplayClass78_0 New_ctor() ;

/// @brief Method .ctor addr 0x28125a0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetRequestStreamAsync>b__1 addr 0x2812ff4 size 0x3b4 virtual false final false
 System::Threading::Tasks::Task_1<System::IO::Stream> _GetRequestStreamAsync_b__1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<>c__DisplayClass79_0
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7946))
// CS Name: System.Net.WebRequest::<>c__DisplayClass79_0
class CORDL_TYPE System__Net__WebRequest____c__DisplayClass79_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Net__WebRequest____c__DisplayClass79_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__WebRequest____c__DisplayClass79_0", modifiers: " const&", def_value: None }]
constexpr System__Net__WebRequest____c__DisplayClass79_0(System__Net__WebRequest____c__DisplayClass79_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__WebRequest____c__DisplayClass79_0", modifiers: "&&", def_value: None }]
constexpr System__Net__WebRequest____c__DisplayClass79_0(System__Net__WebRequest____c__DisplayClass79_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__WebRequest____c__DisplayClass79_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__WebRequest____c__DisplayClass79_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__WebRequest____c__DisplayClass79_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__WebRequest____c__DisplayClass79_0& operator=(System__Net__WebRequest____c__DisplayClass79_0&& o) noexcept = default;
  constexpr System__Net__WebRequest____c__DisplayClass79_0& operator=(System__Net__WebRequest____c__DisplayClass79_0 const& o) noexcept = default;
                


// Fields

 System::Security::Principal::WindowsIdentity __declspec(property(get=__get_currentUser, put=__set_currentUser))  currentUser;

constexpr void __set_currentUser(System::Security::Principal::WindowsIdentity value) ;

constexpr System::Security::Principal::WindowsIdentity __get_currentUser() const;

 System::Net::WebRequest __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Net::WebRequest value) ;

constexpr System::Net::WebRequest __get___4__this() const;


// Methods

static System::Net::System__Net__WebRequest____c__DisplayClass79_0 New_ctor() ;

/// @brief Method .ctor addr 0x2812880 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetResponseAsync>b__1 addr 0x28133a8 size 0x3b4 virtual false final false
 System::Threading::Tasks::Task_1<System::Net::WebResponse> _GetResponseAsync_b__1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::WebRequest
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7947))
// CS Name: System.Net.WebRequest
class CORDL_TYPE WebRequest : public System::MarshalByRefObject {
public:
// Declarations
using __c__DisplayClass79_0 = System::Net::System__Net__WebRequest____c__DisplayClass79_0;

using __c__DisplayClass78_0 = System::Net::System__Net__WebRequest____c__DisplayClass78_0;

using DesignerWebRequestCreate = System::Net::System__Net__WebRequest__DesignerWebRequestCreate;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~WebRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "WebRequest", modifiers: " const&", def_value: None }]
constexpr WebRequest(WebRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WebRequest", modifiers: "&&", def_value: None }]
constexpr WebRequest(WebRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WebRequest(void* ptr) noexcept : System::MarshalByRefObject(ptr) {
}


  constexpr WebRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WebRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WebRequest& operator=(WebRequest&& o) noexcept = default;
  constexpr WebRequest& operator=(WebRequest const& o) noexcept = default;
                


// Fields

static System::Collections::ArrayList __declspec(property(get=__get_s_PrefixList, put=__set_s_PrefixList))  s_PrefixList;

static void __set_s_PrefixList(System::Collections::ArrayList value) ;

static System::Collections::ArrayList __get_s_PrefixList() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_s_InternalSyncObject, put=__set_s_InternalSyncObject))  s_InternalSyncObject;

static void __set_s_InternalSyncObject(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_s_InternalSyncObject() ;

static System::Net::System__Net__TimerThread__Queue __declspec(property(get=__get_s_DefaultTimerQueue, put=__set_s_DefaultTimerQueue))  s_DefaultTimerQueue;

static void __set_s_DefaultTimerQueue(System::Net::System__Net__TimerThread__Queue value) ;

static System::Net::System__Net__TimerThread__Queue __get_s_DefaultTimerQueue() ;

 System::Net::Security::AuthenticationLevel __declspec(property(get=__get_m_AuthenticationLevel, put=__set_m_AuthenticationLevel))  m_AuthenticationLevel;

constexpr void __set_m_AuthenticationLevel(System::Net::Security::AuthenticationLevel value) ;

constexpr System::Net::Security::AuthenticationLevel __get_m_AuthenticationLevel() const;

 System::Security::Principal::TokenImpersonationLevel __declspec(property(get=__get_m_ImpersonationLevel, put=__set_m_ImpersonationLevel))  m_ImpersonationLevel;

constexpr void __set_m_ImpersonationLevel(System::Security::Principal::TokenImpersonationLevel value) ;

constexpr System::Security::Principal::TokenImpersonationLevel __get_m_ImpersonationLevel() const;

 System::Net::Cache::RequestCachePolicy __declspec(property(get=__get_m_CachePolicy, put=__set_m_CachePolicy))  m_CachePolicy;

constexpr void __set_m_CachePolicy(System::Net::Cache::RequestCachePolicy value) ;

constexpr System::Net::Cache::RequestCachePolicy __get_m_CachePolicy() const;

 System::Net::Cache::RequestCacheProtocol __declspec(property(get=__get_m_CacheProtocol, put=__set_m_CacheProtocol))  m_CacheProtocol;

constexpr void __set_m_CacheProtocol(System::Net::Cache::RequestCacheProtocol value) ;

constexpr System::Net::Cache::RequestCacheProtocol __get_m_CacheProtocol() const;

 System::Net::Cache::RequestCacheBinding __declspec(property(get=__get_m_CacheBinding, put=__set_m_CacheBinding))  m_CacheBinding;

constexpr void __set_m_CacheBinding(System::Net::Cache::RequestCacheBinding value) ;

constexpr System::Net::Cache::RequestCacheBinding __get_m_CacheBinding() const;

static System::Net::System__Net__WebRequest__DesignerWebRequestCreate __declspec(property(get=__get_webRequestCreate, put=__set_webRequestCreate))  webRequestCreate;

static void __set_webRequestCreate(System::Net::System__Net__WebRequest__DesignerWebRequestCreate value) ;

static System::Net::System__Net__WebRequest__DesignerWebRequestCreate __get_webRequestCreate() ;

static System::Net::IWebProxy __declspec(property(get=__get_s_DefaultWebProxy, put=__set_s_DefaultWebProxy))  s_DefaultWebProxy;

static void __set_s_DefaultWebProxy(System::Net::IWebProxy value) ;

static System::Net::IWebProxy __get_s_DefaultWebProxy() ;

static bool __declspec(property(get=__get_s_DefaultWebProxyInitialized, put=__set_s_DefaultWebProxyInitialized))  s_DefaultWebProxyInitialized;

static void __set_s_DefaultWebProxyInitialized(bool value) ;

static bool __get_s_DefaultWebProxyInitialized() ;


// Properties

static ::bs_hook::Il2CppWrapperType __declspec(property(get=get_InternalSyncObject))  InternalSyncObject;

static System::Collections::ArrayList __declspec(property(get=get_PrefixList))  PrefixList;

static System::Net::Cache::RequestCachePolicy __declspec(property(get=get_DefaultCachePolicy))  DefaultCachePolicy;

 System::Net::Cache::RequestCachePolicy __declspec(property(put=set_CachePolicy))  CachePolicy;

 ::StringW __declspec(property(get=get_Method, put=set_Method))  Method;

 System::Uri __declspec(property(get=get_RequestUri))  RequestUri;

 ::StringW __declspec(property(put=set_ConnectionGroupName))  ConnectionGroupName;

 System::Net::WebHeaderCollection __declspec(property(get=get_Headers))  Headers;

 int64_t __declspec(property(get=get_ContentLength, put=set_ContentLength))  ContentLength;

 System::Net::ICredentials __declspec(property(get=get_Credentials, put=set_Credentials))  Credentials;

 bool __declspec(property(get=get_UseDefaultCredentials))  UseDefaultCredentials;

 System::Net::IWebProxy __declspec(property(get=get_Proxy, put=set_Proxy))  Proxy;

 bool __declspec(property(put=set_PreAuthenticate))  PreAuthenticate;

 int32_t __declspec(property(get=get_Timeout, put=set_Timeout))  Timeout;

 System::Net::Cache::RequestCacheProtocol __declspec(property(get=get_CacheProtocol, put=set_CacheProtocol))  CacheProtocol;

static System::Net::IWebProxy __declspec(property(get=get_InternalDefaultWebProxy))  InternalDefaultWebProxy;


// Methods

/// @brief Method get_InternalSyncObject addr 0x28115d8 size 0xd4 virtual false final false
static ::bs_hook::Il2CppWrapperType get_InternalSyncObject() ;

/// @brief Method Create addr 0x28116ac size 0x298 virtual false final false
static System::Net::WebRequest Create(System::Uri requestUri, bool useUriBase) ;

/// @brief Method Create addr 0x2811ad8 size 0xdc virtual false final false
static System::Net::WebRequest Create(::StringW requestUriString) ;

/// @brief Method Create addr 0x2811bb4 size 0xdc virtual false final false
static System::Net::WebRequest Create(System::Uri requestUri) ;

/// @brief Method get_PrefixList addr 0x2811944 size 0x194 virtual false final false
static System::Collections::ArrayList get_PrefixList() ;

/// @brief Method PopulatePrefixList addr 0x2811c90 size 0x234 virtual false final false
static System::Collections::ArrayList PopulatePrefixList() ;

static System::Net::WebRequest New_ctor() ;

/// @brief Method .ctor addr 0x2811ecc size 0x24 virtual false final false
 void _ctor() ;

static System::Net::WebRequest New_ctor(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method .ctor addr 0x2811ef0 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x2811ef8 size 0xc virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method GetObjectData addr 0x2811f04 size 0x4 virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method get_DefaultCachePolicy addr 0x2811f08 size 0x84 virtual false final false
static System::Net::Cache::RequestCachePolicy get_DefaultCachePolicy() ;

/// @brief Method set_CachePolicy addr 0x2811f8c size 0x4 virtual true final false
 void set_CachePolicy(System::Net::Cache::RequestCachePolicy value) ;

/// @brief Method InternalSetCachePolicy addr 0x2811f90 size 0xb8 virtual false final false
 void InternalSetCachePolicy(System::Net::Cache::RequestCachePolicy policy) ;

/// @brief Method get_Method addr 0x2812048 size 0x24 virtual true final false
 ::StringW get_Method() ;

/// @brief Method set_Method addr 0x281206c size 0x24 virtual true final false
 void set_Method(::StringW value) ;

/// @brief Method get_RequestUri addr 0x2812090 size 0x24 virtual true final false
 System::Uri get_RequestUri() ;

/// @brief Method set_ConnectionGroupName addr 0x28120b4 size 0x24 virtual true final false
 void set_ConnectionGroupName(::StringW value) ;

/// @brief Method get_Headers addr 0x28120d8 size 0x24 virtual true final false
 System::Net::WebHeaderCollection get_Headers() ;

/// @brief Method get_ContentLength addr 0x28120fc size 0x24 virtual true final false
 int64_t get_ContentLength() ;

/// @brief Method set_ContentLength addr 0x2812120 size 0x24 virtual true final false
 void set_ContentLength(int64_t value) ;

/// @brief Method get_Credentials addr 0x2812144 size 0x24 virtual true final false
 System::Net::ICredentials get_Credentials() ;

/// @brief Method set_Credentials addr 0x2812168 size 0x24 virtual true final false
 void set_Credentials(System::Net::ICredentials value) ;

/// @brief Method get_UseDefaultCredentials addr 0x281218c size 0x24 virtual true final false
 bool get_UseDefaultCredentials() ;

/// @brief Method get_Proxy addr 0x28121b0 size 0x24 virtual true final false
 System::Net::IWebProxy get_Proxy() ;

/// @brief Method set_Proxy addr 0x28121d4 size 0x24 virtual true final false
 void set_Proxy(System::Net::IWebProxy value) ;

/// @brief Method set_PreAuthenticate addr 0x28121f8 size 0x24 virtual true final false
 void set_PreAuthenticate(bool value) ;

/// @brief Method get_Timeout addr 0x281221c size 0x24 virtual true final false
 int32_t get_Timeout() ;

/// @brief Method set_Timeout addr 0x2812240 size 0x24 virtual true final false
 void set_Timeout(int32_t value) ;

/// @brief Method GetResponse addr 0x2812264 size 0x24 virtual true final false
 System::Net::WebResponse GetResponse() ;

/// @brief Method BeginGetResponse addr 0x2812288 size 0x24 virtual true final false
 System::IAsyncResult BeginGetResponse(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndGetResponse addr 0x28122ac size 0x24 virtual true final false
 System::Net::WebResponse EndGetResponse(System::IAsyncResult asyncResult) ;

/// @brief Method BeginGetRequestStream addr 0x28122d0 size 0x24 virtual true final false
 System::IAsyncResult BeginGetRequestStream(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndGetRequestStream addr 0x28122f4 size 0x24 virtual true final false
 System::IO::Stream EndGetRequestStream(System::IAsyncResult asyncResult) ;

/// @brief Method GetRequestStreamAsync addr 0x2812318 size 0x288 virtual true final false
 System::Threading::Tasks::Task_1<System::IO::Stream> GetRequestStreamAsync() ;

/// @brief Method GetResponseAsync addr 0x28125f8 size 0x288 virtual true final false
 System::Threading::Tasks::Task_1<System::Net::WebResponse> GetResponseAsync() ;

/// @brief Method SafeCaptureIdenity addr 0x28125a8 size 0x50 virtual false final false
 System::Security::Principal::WindowsIdentity SafeCaptureIdenity() ;

/// @brief Method Abort addr 0x2812888 size 0x24 virtual true final false
 void Abort() ;

/// @brief Method get_CacheProtocol addr 0x28128ac size 0x8 virtual false final false
 System::Net::Cache::RequestCacheProtocol get_CacheProtocol() ;

/// @brief Method set_CacheProtocol addr 0x28128b4 size 0x8 virtual false final false
 void set_CacheProtocol(System::Net::Cache::RequestCacheProtocol value) ;

/// @brief Method get_InternalDefaultWebProxy addr 0x28128bc size 0x1cc virtual false final false
static System::Net::IWebProxy get_InternalDefaultWebProxy() ;

/// @brief Method <GetRequestStreamAsync>b__78_0 addr 0x2812da8 size 0xfc virtual false final false
 System::Threading::Tasks::Task_1<System::IO::Stream> _GetRequestStreamAsync_b__78_0() ;

/// @brief Method <GetResponseAsync>b__79_0 addr 0x2812ea4 size 0xfc virtual false final false
 System::Threading::Tasks::Task_1<System::Net::WebResponse> _GetResponseAsync_b__79_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::System__Net__WebRequest__DesignerWebRequestCreate);
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__WebRequest__DesignerWebRequestCreate, "System.Net", "WebRequest/DesignerWebRequestCreate");
NEED_NO_BOX(System::Net::System__Net__WebRequest____c__DisplayClass78_0);
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__WebRequest____c__DisplayClass78_0, "System.Net", "WebRequest/<>c__DisplayClass78_0");
NEED_NO_BOX(System::Net::System__Net__WebRequest____c__DisplayClass79_0);
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__WebRequest____c__DisplayClass79_0, "System.Net", "WebRequest/<>c__DisplayClass79_0");
NEED_NO_BOX(System::Net::WebRequest);
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebRequest, "System.Net", "WebRequest");
