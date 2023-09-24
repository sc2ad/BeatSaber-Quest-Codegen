#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__Win32Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Net {
class EndPoint;
}
namespace System::Net::Sockets {
struct SocketError;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Net::Sockets {
class SocketException;
}
// Type: System.Net.Sockets::SocketException
namespace System::Net::Sockets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8343))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8187))
// CS Name: System.Net.Sockets.SocketException
class CORDL_TYPE SocketException : public System::ComponentModel::Win32Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~SocketException() = default;

// Ctor Parameters [CppParam { name: "", ty: "SocketException", modifiers: " const&", def_value: None }]
constexpr SocketException(SocketException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SocketException", modifiers: "&&", def_value: None }]
constexpr SocketException(SocketException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SocketException(void* ptr) noexcept : System::ComponentModel::Win32Exception(ptr) {
}


  constexpr SocketException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SocketException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SocketException& operator=(SocketException&& o) noexcept = default;
  constexpr SocketException& operator=(SocketException const& o) noexcept = default;
                


// Fields

 System::Net::EndPoint __declspec(property(get=__get_m_EndPoint, put=__set_m_EndPoint))  m_EndPoint;

constexpr void __set_m_EndPoint(System::Net::EndPoint value) ;

constexpr System::Net::EndPoint __get_m_EndPoint() const;


// Properties

 int32_t __declspec(property(get=get_ErrorCode))  ErrorCode;

 ::StringW __declspec(property(get=get_Message))  Message;

 System::Net::Sockets::SocketError __declspec(property(get=get_SocketErrorCode))  SocketErrorCode;


// Methods

/// @brief Method WSAGetLastError_icall addr 0x2769b18 size 0x4 virtual false final false
static int32_t WSAGetLastError_icall() ;

static System::Net::Sockets::SocketException New_ctor() ;

/// @brief Method .ctor addr 0x2769b1c size 0x20 virtual false final false
 void _ctor() ;

static System::Net::Sockets::SocketException New_ctor(int32_t error, ::StringW message) ;

/// @brief Method .ctor addr 0x2769b3c size 0x8 virtual false final false
 void _ctor(int32_t error, ::StringW message) ;

static System::Net::Sockets::SocketException New_ctor(int32_t errorCode) ;

/// @brief Method .ctor addr 0x2767d80 size 0x8 virtual false final false
 void _ctor(int32_t errorCode) ;

static System::Net::Sockets::SocketException New_ctor(System::Net::Sockets::SocketError socketError) ;

/// @brief Method .ctor addr 0x27692c4 size 0x8 virtual false final false
 void _ctor(System::Net::Sockets::SocketError socketError) ;

static System::Net::Sockets::SocketException New_ctor(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method .ctor addr 0x2769b44 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method get_ErrorCode addr 0x2769b4c size 0x8 virtual true final false
 int32_t get_ErrorCode() ;

/// @brief Method get_Message addr 0x2769b54 size 0x90 virtual true final false
 ::StringW get_Message() ;

/// @brief Method get_SocketErrorCode addr 0x2767a04 size 0x8 virtual false final false
 System::Net::Sockets::SocketError get_SocketErrorCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
NEED_NO_BOX(System::Net::Sockets::SocketException);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::SocketException, "System.Net.Sockets", "SocketException");
