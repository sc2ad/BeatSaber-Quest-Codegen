#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__InvalidOperationException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Net {
struct WebExceptionInternalStatus;
}
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Net {
struct WebExceptionStatus;
}
namespace System::Net {
class WebResponse;
}
// Forward declare root types
namespace System::Net {
class WebException;
}
// Type: System.Net::WebException
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2426))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7936))
// CS Name: System.Net.WebException
class CORDL_TYPE WebException : public ::System::InvalidOperationException {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr operator  ::System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~WebException() = default;

// Ctor Parameters [CppParam { name: "", ty: "WebException", modifiers: " const&", def_value: None }]
constexpr WebException(WebException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WebException", modifiers: "&&", def_value: None }]
constexpr WebException(WebException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WebException(void* ptr) noexcept : ::System::InvalidOperationException(ptr) {
}


  constexpr WebException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WebException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WebException& operator=(WebException&& o) noexcept = default;
  constexpr WebException& operator=(WebException const& o) noexcept = default;
                


// Fields

 ::System::Net::WebExceptionStatus __declspec(property(get=__get_m_Status, put=__set_m_Status))  m_Status;

constexpr void __set_m_Status(::System::Net::WebExceptionStatus value) ;

constexpr ::System::Net::WebExceptionStatus __get_m_Status() const;

 ::System::Net::WebResponse __declspec(property(get=__get_m_Response, put=__set_m_Response))  m_Response;

constexpr void __set_m_Response(::System::Net::WebResponse value) ;

constexpr ::System::Net::WebResponse __get_m_Response() const;

 ::System::Net::WebExceptionInternalStatus __declspec(property(get=__get_m_InternalStatus, put=__set_m_InternalStatus))  m_InternalStatus;

constexpr void __set_m_InternalStatus(::System::Net::WebExceptionInternalStatus value) ;

constexpr ::System::Net::WebExceptionInternalStatus __get_m_InternalStatus() const;


// Properties

 ::System::Net::WebExceptionStatus __declspec(property(get=get_Status))  Status;

 ::System::Net::WebResponse __declspec(property(get=get_Response))  Response;


// Methods

// Ctor Parameters []
explicit WebException() ;

/// @brief Method .ctor addr 0x280e204 size 0x10 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit WebException(::StringW message) ;

/// @brief Method .ctor addr 0x280c9f0 size 0x14 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "::System::Exception", modifiers: "", def_value: None }]
explicit WebException(::StringW message, ::System::Exception innerException) ;

/// @brief Method .ctor addr 0x280e214 size 0x10 virtual false final false
 void _ctor(::StringW message, ::System::Exception innerException) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "status", ty: "::System::Net::WebExceptionStatus", modifiers: "", def_value: None }]
explicit WebException(::StringW message, ::System::Net::WebExceptionStatus status) ;

/// @brief Method .ctor addr 0x280cbdc size 0x14 virtual false final false
 void _ctor(::StringW message, ::System::Net::WebExceptionStatus status) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "status", ty: "::System::Net::WebExceptionStatus", modifiers: "", def_value: None }, CppParam { name: "internalStatus", ty: "::System::Net::WebExceptionInternalStatus", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "::System::Exception", modifiers: "", def_value: None }]
explicit WebException(::StringW message, ::System::Net::WebExceptionStatus status, ::System::Net::WebExceptionInternalStatus internalStatus, ::System::Exception innerException) ;

/// @brief Method .ctor addr 0x280e238 size 0x1c virtual false final false
 void _ctor(::StringW message, ::System::Net::WebExceptionStatus status, ::System::Net::WebExceptionInternalStatus internalStatus, ::System::Exception innerException) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "::System::Exception", modifiers: "", def_value: None }, CppParam { name: "status", ty: "::System::Net::WebExceptionStatus", modifiers: "", def_value: None }, CppParam { name: "response", ty: "::System::Net::WebResponse", modifiers: "", def_value: None }]
explicit WebException(::StringW message, ::System::Exception innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse response) ;

/// @brief Method .ctor addr 0x280e224 size 0x14 virtual false final false
 void _ctor(::StringW message, ::System::Exception innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse response) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "::System::Exception", modifiers: "", def_value: None }, CppParam { name: "status", ty: "::System::Net::WebExceptionStatus", modifiers: "", def_value: None }, CppParam { name: "response", ty: "::System::Net::WebResponse", modifiers: "", def_value: None }]
explicit WebException(::StringW message, ::StringW data, ::System::Exception innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse response) ;

/// @brief Method .ctor addr 0x280e26c size 0xe0 virtual false final false
 void _ctor(::StringW message, ::StringW data, ::System::Exception innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse response) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "::System::Exception", modifiers: "", def_value: None }, CppParam { name: "status", ty: "::System::Net::WebExceptionStatus", modifiers: "", def_value: None }, CppParam { name: "response", ty: "::System::Net::WebResponse", modifiers: "", def_value: None }, CppParam { name: "internalStatus", ty: "::System::Net::WebExceptionInternalStatus", modifiers: "", def_value: None }]
explicit WebException(::StringW message, ::System::Exception innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse response, ::System::Net::WebExceptionInternalStatus internalStatus) ;

/// @brief Method .ctor addr 0x280e254 size 0x18 virtual false final false
 void _ctor(::StringW message, ::System::Exception innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse response, ::System::Net::WebExceptionInternalStatus internalStatus) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "::System::Exception", modifiers: "", def_value: None }, CppParam { name: "status", ty: "::System::Net::WebExceptionStatus", modifiers: "", def_value: None }, CppParam { name: "response", ty: "::System::Net::WebResponse", modifiers: "", def_value: None }, CppParam { name: "internalStatus", ty: "::System::Net::WebExceptionInternalStatus", modifiers: "", def_value: None }]
explicit WebException(::StringW message, ::StringW data, ::System::Exception innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse response, ::System::Net::WebExceptionInternalStatus internalStatus) ;

/// @brief Method .ctor addr 0x280e34c size 0xf0 virtual false final false
 void _ctor(::StringW message, ::StringW data, ::System::Exception innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse response, ::System::Net::WebExceptionInternalStatus internalStatus) ;

// Ctor Parameters [CppParam { name: "serializationInfo", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "streamingContext", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit WebException(::System::Runtime::Serialization::SerializationInfo serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method .ctor addr 0x280e43c size 0x10 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x280e44c size 0xc virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method GetObjectData addr 0x280e458 size 0x8 virtual true final false
 void GetObjectData(::System::Runtime::Serialization::SerializationInfo serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method get_Status addr 0x280e460 size 0x8 virtual false final false
 ::System::Net::WebExceptionStatus get_Status() ;

/// @brief Method get_Response addr 0x280e468 size 0x8 virtual false final false
 ::System::Net::WebResponse get_Response() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::WebException);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebException, "System.Net", "WebException");
