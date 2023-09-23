#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace System {
class AsyncCallback;
}
namespace System::Net {
class HttpListenerResponse;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System {
class IAsyncResult;
}
namespace System::IO {
class MemoryStream;
}
// Forward declare root types
namespace System::Net {
class ResponseStream;
}
// Type: System.Net::ResponseStream
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8050))
// CS Name: System.Net.ResponseStream
class CORDL_TYPE ResponseStream : public System::IO::Stream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ResponseStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResponseStream", modifiers: " const&", def_value: None }]
constexpr ResponseStream(ResponseStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResponseStream", modifiers: "&&", def_value: None }]
constexpr ResponseStream(ResponseStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResponseStream(void* ptr) noexcept : System::IO::Stream(ptr) {
}


  constexpr ResponseStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResponseStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResponseStream& operator=(ResponseStream&& o) noexcept = default;
  constexpr ResponseStream& operator=(ResponseStream const& o) noexcept = default;
                


// Fields

 System::Net::HttpListenerResponse __declspec(property(get=__get_response, put=__set_response))  response;

constexpr void __set_response(System::Net::HttpListenerResponse value) ;

constexpr System::Net::HttpListenerResponse __get_response() const;

 bool __declspec(property(get=__get_ignore_errors, put=__set_ignore_errors))  ignore_errors;

constexpr void __set_ignore_errors(bool value) ;

constexpr bool __get_ignore_errors() const;

 bool __declspec(property(get=__get_disposed, put=__set_disposed))  disposed;

constexpr void __set_disposed(bool value) ;

constexpr bool __get_disposed() const;

 bool __declspec(property(get=__get_trailer_sent, put=__set_trailer_sent))  trailer_sent;

constexpr void __set_trailer_sent(bool value) ;

constexpr bool __get_trailer_sent() const;

 System::IO::Stream __declspec(property(get=__get_stream, put=__set_stream))  stream;

constexpr void __set_stream(System::IO::Stream value) ;

constexpr System::IO::Stream __get_stream() const;

static ::ArrayW<uint8_t> __declspec(property(get=__get_crlf, put=__set_crlf))  crlf;

static void __set_crlf(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_crlf() ;


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;


// Methods

// Ctor Parameters [CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "response", ty: "System::Net::HttpListenerResponse", modifiers: "", def_value: None }, CppParam { name: "ignore_errors", ty: "bool", modifiers: "", def_value: None }]
explicit ResponseStream(System::IO::Stream stream, System::Net::HttpListenerResponse response, bool ignore_errors) ;

/// @brief Method .ctor addr 0x2843b78 size 0x84 virtual false final false
 void _ctor(System::IO::Stream stream, System::Net::HttpListenerResponse response, bool ignore_errors) ;

/// @brief Method get_CanRead addr 0x2843bfc size 0x8 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanSeek addr 0x2843c04 size 0x8 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_CanWrite addr 0x2843c0c size 0x8 virtual true final false
 bool get_CanWrite() ;

/// @brief Method get_Length addr 0x2843c14 size 0x40 virtual true final false
 int64_t get_Length() ;

/// @brief Method get_Position addr 0x2843c54 size 0x40 virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0x2843c94 size 0x40 virtual true final false
 void set_Position(int64_t value) ;

/// @brief Method Close addr 0x2843cd4 size 0x260 virtual true final false
 void Close() ;

/// @brief Method GetHeaders addr 0x2843f34 size 0x15c virtual false final false
 System::IO::MemoryStream GetHeaders(bool closing) ;

/// @brief Method Flush addr 0x284423c size 0x4 virtual true final false
 void Flush() ;

/// @brief Method GetChunkSizeBytes addr 0x2844090 size 0xf0 virtual false final false
static ::ArrayW<uint8_t> GetChunkSizeBytes(int32_t size, bool final) ;

/// @brief Method InternalWrite addr 0x2844180 size 0xbc virtual false final false
 void InternalWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method Write addr 0x2844240 size 0x300 virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method BeginWrite addr 0x2844540 size 0x23c virtual true final false
 System::IAsyncResult BeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback cback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndWrite addr 0x284477c size 0x22c virtual true final false
 void EndWrite(System::IAsyncResult ares) ;

/// @brief Method Read addr 0x28449a8 size 0x40 virtual true final false
 int32_t Read(ByRef<::ArrayW<uint8_t>> buffer, int32_t offset, int32_t count) ;

/// @brief Method BeginRead addr 0x28449e8 size 0x40 virtual true final false
 System::IAsyncResult BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback cback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndRead addr 0x2844a28 size 0x40 virtual true final false
 int32_t EndRead(System::IAsyncResult ares) ;

/// @brief Method Seek addr 0x2844a68 size 0x40 virtual true final false
 int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) ;

/// @brief Method SetLength addr 0x2844aa8 size 0x40 virtual true final false
 void SetLength(int64_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::ResponseStream);
DEFINE_IL2CPP_ARG_TYPE(System::Net::ResponseStream, "System.Net", "ResponseStream");
