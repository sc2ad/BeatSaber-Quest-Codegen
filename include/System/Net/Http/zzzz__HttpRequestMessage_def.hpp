#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Net::Http {
class HttpMethod;
}
namespace System::Net::Http::Headers {
class HttpRequestHeaders;
}
namespace System {
class Version;
}
namespace System::Net::Http {
class HttpContent;
}
namespace System {
class Uri;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Net::Http {
class HttpRequestMessage;
}
// Type: System.Net.Http::HttpRequestMessage
namespace System::Net::Http {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14814))
// CS Name: System.Net.Http.HttpRequestMessage
class CORDL_TYPE HttpRequestMessage : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~HttpRequestMessage() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpRequestMessage", modifiers: " const&", def_value: None }]
constexpr HttpRequestMessage(HttpRequestMessage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpRequestMessage", modifiers: "&&", def_value: None }]
constexpr HttpRequestMessage(HttpRequestMessage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpRequestMessage(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HttpRequestMessage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpRequestMessage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpRequestMessage& operator=(HttpRequestMessage&& o) noexcept = default;
  constexpr HttpRequestMessage& operator=(HttpRequestMessage const& o) noexcept = default;
                


// Fields

 ::System::Net::Http::Headers::HttpRequestHeaders __declspec(property(get=__get_headers, put=__set_headers))  headers;

constexpr void __set_headers(::System::Net::Http::Headers::HttpRequestHeaders value) ;

constexpr ::System::Net::Http::Headers::HttpRequestHeaders __get_headers() const;

 ::System::Net::Http::HttpMethod __declspec(property(get=__get_method, put=__set_method))  method;

constexpr void __set_method(::System::Net::Http::HttpMethod value) ;

constexpr ::System::Net::Http::HttpMethod __get_method() const;

 ::System::Version __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(::System::Version value) ;

constexpr ::System::Version __get_version() const;

 ::System::Uri __declspec(property(get=__get_uri, put=__set_uri))  uri;

constexpr void __set_uri(::System::Uri value) ;

constexpr ::System::Uri __get_uri() const;

 bool __declspec(property(get=__get_is_used, put=__set_is_used))  is_used;

constexpr void __set_is_used(bool value) ;

constexpr bool __get_is_used() const;

 bool __declspec(property(get=__get_disposed, put=__set_disposed))  disposed;

constexpr void __set_disposed(bool value) ;

constexpr bool __get_disposed() const;

 ::System::Net::Http::HttpContent __declspec(property(get=__get__Content_k__BackingField, put=__set__Content_k__BackingField))  _Content_k__BackingField;

constexpr void __set__Content_k__BackingField(::System::Net::Http::HttpContent value) ;

constexpr ::System::Net::Http::HttpContent __get__Content_k__BackingField() const;


// Properties

 ::System::Net::Http::HttpContent __declspec(property(get=get_Content, put=set_Content))  Content;

 ::System::Net::Http::Headers::HttpRequestHeaders __declspec(property(get=get_Headers))  Headers;

 ::System::Net::Http::HttpMethod __declspec(property(get=get_Method, put=set_Method))  Method;

 ::System::Uri __declspec(property(get=get_RequestUri, put=set_RequestUri))  RequestUri;

 ::System::Version __declspec(property(get=get_Version))  Version;


// Methods

// Ctor Parameters []
explicit HttpRequestMessage() ;

/// @brief Method .ctor addr 0x26a203c size 0x9c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "method", ty: "::System::Net::Http::HttpMethod", modifiers: "", def_value: None }, CppParam { name: "requestUri", ty: "::StringW", modifiers: "", def_value: None }]
explicit HttpRequestMessage(::System::Net::Http::HttpMethod method, ::StringW requestUri) ;

/// @brief Method .ctor addr 0x26a20d8 size 0x94 virtual false final false
 void _ctor(::System::Net::Http::HttpMethod method, ::StringW requestUri) ;

// Ctor Parameters [CppParam { name: "method", ty: "::System::Net::Http::HttpMethod", modifiers: "", def_value: None }, CppParam { name: "requestUri", ty: "::System::Uri", modifiers: "", def_value: None }]
explicit HttpRequestMessage(::System::Net::Http::HttpMethod method, ::System::Uri requestUri) ;

/// @brief Method .ctor addr 0x269f6e4 size 0x3c virtual false final false
 void _ctor(::System::Net::Http::HttpMethod method, ::System::Uri requestUri) ;

/// @brief Method get_Content addr 0x26a221c size 0x8 virtual false final false
 ::System::Net::Http::HttpContent get_Content() ;

/// @brief Method set_Content addr 0x26a2224 size 0x8 virtual false final false
 void set_Content(::System::Net::Http::HttpContent value) ;

/// @brief Method get_Headers addr 0x269c310 size 0x68 virtual false final false
 ::System::Net::Http::Headers::HttpRequestHeaders get_Headers() ;

/// @brief Method get_Method addr 0x26a228c size 0x8 virtual false final false
 ::System::Net::Http::HttpMethod get_Method() ;

/// @brief Method set_Method addr 0x26a216c size 0xb0 virtual false final false
 void set_Method(::System::Net::Http::HttpMethod value) ;

/// @brief Method get_RequestUri addr 0x26a2294 size 0x8 virtual false final false
 ::System::Uri get_RequestUri() ;

/// @brief Method set_RequestUri addr 0x269cbe0 size 0xe4 virtual false final false
 void set_RequestUri(::System::Uri value) ;

/// @brief Method IsAllowedAbsoluteUri addr 0x26a229c size 0x14c virtual false final false
static bool IsAllowedAbsoluteUri(::System::Uri uri) ;

/// @brief Method get_Version addr 0x269c2ac size 0x64 virtual false final false
 ::System::Version get_Version() ;

/// @brief Method Dispose addr 0x26a23e8 size 0x10 virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x26a23f8 size 0x34 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method SetIsUsed addr 0x269faa8 size 0x20 virtual false final false
 bool SetIsUsed() ;

/// @brief Method ToString addr 0x26a242c size 0x27c virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http
} // end anonymous namespace
NEED_NO_BOX(::System::Net::Http::HttpRequestMessage);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpRequestMessage, "System.Net.Http", "HttpRequestMessage");
