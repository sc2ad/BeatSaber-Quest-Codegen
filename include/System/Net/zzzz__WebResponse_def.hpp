#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
namespace System {
class IDisposable;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System {
class Uri;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Net {
class WebResponse;
}
// Type: System.Net::WebResponse
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7948))
// CS Name: System.Net.WebResponse
class CORDL_TYPE WebResponse : public System::MarshalByRefObject {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~WebResponse() = default;

// Ctor Parameters [CppParam { name: "", ty: "WebResponse", modifiers: " const&", def_value: None }]
constexpr WebResponse(WebResponse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WebResponse", modifiers: "&&", def_value: None }]
constexpr WebResponse(WebResponse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WebResponse(void* ptr) noexcept : System::MarshalByRefObject(ptr) {
}


  constexpr WebResponse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WebResponse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WebResponse& operator=(WebResponse&& o) noexcept = default;
  constexpr WebResponse& operator=(WebResponse const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_IsFromCache, put=__set_m_IsFromCache))  m_IsFromCache;

constexpr void __set_m_IsFromCache(bool value) ;

constexpr bool __get_m_IsFromCache() const;


// Properties

 bool __declspec(property(get=get_IsFromCache))  IsFromCache;

 System::Uri __declspec(property(get=get_ResponseUri))  ResponseUri;

 System::Net::WebHeaderCollection __declspec(property(get=get_Headers))  Headers;


// Methods

static System::Net::WebResponse New_ctor() ;

/// @brief Method .ctor addr 0x281375c size 0x8 virtual false final false
 void _ctor() ;

static System::Net::WebResponse New_ctor(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method .ctor addr 0x2813764 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x281376c size 0xc virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method GetObjectData addr 0x2813778 size 0x4 virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method Close addr 0x281377c size 0x4 virtual true final false
 void Close() ;

/// @brief Method Dispose addr 0x2813780 size 0x6c virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x28137ec size 0x8c virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method get_IsFromCache addr 0x2813878 size 0x8 virtual true final false
 bool get_IsFromCache() ;

/// @brief Method GetResponseStream addr 0x2813880 size 0x24 virtual true final false
 System::IO::Stream GetResponseStream() ;

/// @brief Method get_ResponseUri addr 0x28138a4 size 0x24 virtual true final false
 System::Uri get_ResponseUri() ;

/// @brief Method get_Headers addr 0x28138c8 size 0x24 virtual true final false
 System::Net::WebHeaderCollection get_Headers() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::WebResponse);
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebResponse, "System.Net", "WebResponse");
