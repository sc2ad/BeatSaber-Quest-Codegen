#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class IDisposable;
}
namespace System {
class Version;
}
namespace System::Net::Http {
class HttpContent;
}
namespace System::Net::Http::Headers {
class HttpResponseHeaders;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Net {
struct HttpStatusCode;
}
// Forward declare root types
namespace System::Net::Http {
class HttpResponseMessage;
}
// Type: System.Net.Http::HttpResponseMessage
namespace System::Net::Http {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14815))
// CS Name: System.Net.Http.HttpResponseMessage
class CORDL_TYPE HttpResponseMessage : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~HttpResponseMessage() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpResponseMessage", modifiers: " const&", def_value: None }]
constexpr HttpResponseMessage(HttpResponseMessage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpResponseMessage", modifiers: "&&", def_value: None }]
constexpr HttpResponseMessage(HttpResponseMessage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpResponseMessage(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HttpResponseMessage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpResponseMessage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpResponseMessage& operator=(HttpResponseMessage&& o) noexcept = default;
  constexpr HttpResponseMessage& operator=(HttpResponseMessage const& o) noexcept = default;
                


// Fields

 System::Net::Http::Headers::HttpResponseHeaders __declspec(property(get=__get_headers, put=__set_headers))  headers;

constexpr void __set_headers(System::Net::Http::Headers::HttpResponseHeaders value) ;

constexpr System::Net::Http::Headers::HttpResponseHeaders __get_headers() const;

 ::StringW __declspec(property(get=__get_reasonPhrase, put=__set_reasonPhrase))  reasonPhrase;

constexpr void __set_reasonPhrase(::StringW value) ;

constexpr ::StringW __get_reasonPhrase() const;

 System::Net::HttpStatusCode __declspec(property(get=__get_statusCode, put=__set_statusCode))  statusCode;

constexpr void __set_statusCode(System::Net::HttpStatusCode value) ;

constexpr System::Net::HttpStatusCode __get_statusCode() const;

 System::Version __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(System::Version value) ;

constexpr System::Version __get_version() const;

 bool __declspec(property(get=__get_disposed, put=__set_disposed))  disposed;

constexpr void __set_disposed(bool value) ;

constexpr bool __get_disposed() const;

 System::Net::Http::HttpContent __declspec(property(get=__get__Content_k__BackingField, put=__set__Content_k__BackingField))  _Content_k__BackingField;

constexpr void __set__Content_k__BackingField(System::Net::Http::HttpContent value) ;

constexpr System::Net::Http::HttpContent __get__Content_k__BackingField() const;

 System::Net::Http::HttpRequestMessage __declspec(property(get=__get__RequestMessage_k__BackingField, put=__set__RequestMessage_k__BackingField))  _RequestMessage_k__BackingField;

constexpr void __set__RequestMessage_k__BackingField(System::Net::Http::HttpRequestMessage value) ;

constexpr System::Net::Http::HttpRequestMessage __get__RequestMessage_k__BackingField() const;


// Properties

 System::Net::Http::HttpContent __declspec(property(get=get_Content, put=set_Content))  Content;

 System::Net::Http::Headers::HttpResponseHeaders __declspec(property(get=get_Headers))  Headers;

 bool __declspec(property(get=get_IsSuccessStatusCode))  IsSuccessStatusCode;

 ::StringW __declspec(property(get=get_ReasonPhrase, put=set_ReasonPhrase))  ReasonPhrase;

 System::Net::Http::HttpRequestMessage __declspec(property(put=set_RequestMessage))  RequestMessage;

 System::Net::HttpStatusCode __declspec(property(get=get_StatusCode, put=set_StatusCode))  StatusCode;

 System::Version __declspec(property(get=get_Version))  Version;


// Methods

static System::Net::Http::HttpResponseMessage New_ctor(System::Net::HttpStatusCode statusCode) ;

/// @brief Method .ctor addr 0x269c95c size 0x2c virtual false final false
 void _ctor(System::Net::HttpStatusCode statusCode) ;

/// @brief Method get_Content addr 0x26a26f8 size 0x8 virtual false final false
 System::Net::Http::HttpContent get_Content() ;

/// @brief Method set_Content addr 0x26a2700 size 0x8 virtual false final false
 void set_Content(System::Net::Http::HttpContent value) ;

/// @brief Method get_Headers addr 0x269cac8 size 0x68 virtual false final false
 System::Net::Http::Headers::HttpResponseHeaders get_Headers() ;

/// @brief Method get_IsSuccessStatusCode addr 0x26a2768 size 0x14 virtual false final false
 bool get_IsSuccessStatusCode() ;

/// @brief Method get_ReasonPhrase addr 0x26a277c size 0x1c virtual false final false
 ::StringW get_ReasonPhrase() ;

/// @brief Method set_ReasonPhrase addr 0x26a2798 size 0x8 virtual false final false
 void set_ReasonPhrase(::StringW value) ;

/// @brief Method set_RequestMessage addr 0x26a27a0 size 0x8 virtual false final false
 void set_RequestMessage(System::Net::Http::HttpRequestMessage value) ;

/// @brief Method get_StatusCode addr 0x26a27a8 size 0x8 virtual false final false
 System::Net::HttpStatusCode get_StatusCode() ;

/// @brief Method set_StatusCode addr 0x26a26a8 size 0x50 virtual false final false
 void set_StatusCode(System::Net::HttpStatusCode value) ;

/// @brief Method get_Version addr 0x26a27b0 size 0x64 virtual false final false
 System::Version get_Version() ;

/// @brief Method Dispose addr 0x26a2814 size 0x10 virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x26a2824 size 0x34 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method EnsureSuccessStatusCode addr 0x26a0b70 size 0xb0 virtual false final false
 System::Net::Http::HttpResponseMessage EnsureSuccessStatusCode() ;

/// @brief Method ToString addr 0x26a2858 size 0x23c virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http
NEED_NO_BOX(System::Net::Http::HttpResponseMessage);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::HttpResponseMessage, "System.Net.Http", "HttpResponseMessage");
