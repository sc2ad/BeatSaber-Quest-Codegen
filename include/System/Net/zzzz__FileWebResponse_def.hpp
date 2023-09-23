#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
#include <cstdint>
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Net {
struct CloseExState;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Net {
class FileWebRequest;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::IO {
struct FileAccess;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Net {
class ICloseEx;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class FileWebResponse;
}
// Type: System.Net::FileWebResponse
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7948))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7988))
// CS Name: System.Net.FileWebResponse
class CORDL_TYPE FileWebResponse : public System::Net::WebResponse {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to System::Net::ICloseEx
constexpr operator  System::Net::ICloseEx() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~FileWebResponse() = default;

// Ctor Parameters [CppParam { name: "", ty: "FileWebResponse", modifiers: " const&", def_value: None }]
constexpr FileWebResponse(FileWebResponse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FileWebResponse", modifiers: "&&", def_value: None }]
constexpr FileWebResponse(FileWebResponse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FileWebResponse(void* ptr) noexcept : System::Net::WebResponse(ptr) {
}


  constexpr FileWebResponse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FileWebResponse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FileWebResponse& operator=(FileWebResponse&& o) noexcept = default;
  constexpr FileWebResponse& operator=(FileWebResponse const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_closed, put=__set_m_closed))  m_closed;

constexpr void __set_m_closed(bool value) ;

constexpr bool __get_m_closed() const;

 int64_t __declspec(property(get=__get_m_contentLength, put=__set_m_contentLength))  m_contentLength;

constexpr void __set_m_contentLength(int64_t value) ;

constexpr int64_t __get_m_contentLength() const;

 System::IO::FileAccess __declspec(property(get=__get_m_fileAccess, put=__set_m_fileAccess))  m_fileAccess;

constexpr void __set_m_fileAccess(System::IO::FileAccess value) ;

constexpr System::IO::FileAccess __get_m_fileAccess() const;

 System::Net::WebHeaderCollection __declspec(property(get=__get_m_headers, put=__set_m_headers))  m_headers;

constexpr void __set_m_headers(System::Net::WebHeaderCollection value) ;

constexpr System::Net::WebHeaderCollection __get_m_headers() const;

 System::IO::Stream __declspec(property(get=__get_m_stream, put=__set_m_stream))  m_stream;

constexpr void __set_m_stream(System::IO::Stream value) ;

constexpr System::IO::Stream __get_m_stream() const;

 System::Uri __declspec(property(get=__get_m_uri, put=__set_m_uri))  m_uri;

constexpr void __set_m_uri(System::Uri value) ;

constexpr System::Uri __get_m_uri() const;


// Properties

 System::Net::WebHeaderCollection __declspec(property(get=get_Headers))  Headers;

 System::Uri __declspec(property(get=get_ResponseUri))  ResponseUri;


// Methods

// Ctor Parameters [CppParam { name: "request", ty: "System::Net::FileWebRequest", modifiers: "", def_value: None }, CppParam { name: "uri", ty: "System::Uri", modifiers: "", def_value: None }, CppParam { name: "access", ty: "System::IO::FileAccess", modifiers: "", def_value: None }, CppParam { name: "asyncHint", ty: "bool", modifiers: "", def_value: None }]
explicit FileWebResponse(System::Net::FileWebRequest request, System::Uri uri, System::IO::FileAccess access, bool asyncHint) ;

/// @brief Method .ctor addr 0x2823ed4 size 0x2cc virtual false final false
 void _ctor(System::Net::FileWebRequest request, System::Uri uri, System::IO::FileAccess access, bool asyncHint) ;

// Ctor Parameters [CppParam { name: "serializationInfo", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "streamingContext", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit FileWebResponse(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method .ctor addr 0x2824e34 size 0x234 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x2825068 size 0xc virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method GetObjectData addr 0x2825074 size 0x190 virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method get_Headers addr 0x2825204 size 0x18 virtual true final false
 System::Net::WebHeaderCollection get_Headers() ;

/// @brief Method get_ResponseUri addr 0x28252a0 size 0x18 virtual true final false
 System::Uri get_ResponseUri() ;

/// @brief Method CheckDisposed addr 0x282521c size 0x84 virtual false final false
 void CheckDisposed() ;

/// @brief Method Close addr 0x28252b8 size 0x98 virtual true final false
 void Close() ;

/// @brief Method System.Net.ICloseEx.CloseEx addr 0x2825350 size 0x16c virtual true final true
 void System_Net_ICloseEx_CloseEx(System::Net::CloseExState closeState) ;

/// @brief Method GetResponseStream addr 0x28254bc size 0x54 virtual true final false
 System::IO::Stream GetResponseStream() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::FileWebResponse);
DEFINE_IL2CPP_ARG_TYPE(System::Net::FileWebResponse, "System.Net", "FileWebResponse");
