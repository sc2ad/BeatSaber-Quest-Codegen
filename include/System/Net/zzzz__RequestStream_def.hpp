#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System {
class AsyncCallback;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace System::Net {
class RequestStream;
}
// Type: System.Net::RequestStream
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8049))
// CS Name: System.Net.RequestStream
class CORDL_TYPE RequestStream : public ::System::IO::Stream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~RequestStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "RequestStream", modifiers: " const&", def_value: None }]
constexpr RequestStream(RequestStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RequestStream", modifiers: "&&", def_value: None }]
constexpr RequestStream(RequestStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RequestStream(void* ptr) noexcept : ::System::IO::Stream(ptr) {
}


  constexpr RequestStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RequestStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RequestStream& operator=(RequestStream&& o) noexcept = default;
  constexpr RequestStream& operator=(RequestStream const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buffer() const;

 int32_t __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(int32_t value) ;

constexpr int32_t __get_offset() const;

 int32_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(int32_t value) ;

constexpr int32_t __get_length() const;

 int64_t __declspec(property(get=__get_remaining_body, put=__set_remaining_body))  remaining_body;

constexpr void __set_remaining_body(int64_t value) ;

constexpr int64_t __get_remaining_body() const;

 bool __declspec(property(get=__get_disposed, put=__set_disposed))  disposed;

constexpr void __set_disposed(bool value) ;

constexpr bool __get_disposed() const;

 ::System::IO::Stream __declspec(property(get=__get_stream, put=__set_stream))  stream;

constexpr void __set_stream(::System::IO::Stream value) ;

constexpr ::System::IO::Stream __get_stream() const;


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;


// Methods

// Ctor Parameters [CppParam { name: "stream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
explicit RequestStream(::System::IO::Stream stream, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t length) ;

/// @brief Method .ctor addr 0x2843050 size 0x8 virtual false final false
 void _ctor(::System::IO::Stream stream, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t length) ;

// Ctor Parameters [CppParam { name: "stream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "contentlength", ty: "int64_t", modifiers: "", def_value: None }]
explicit RequestStream(::System::IO::Stream stream, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t length, int64_t contentlength) ;

/// @brief Method .ctor addr 0x2843058 size 0x98 virtual false final false
 void _ctor(::System::IO::Stream stream, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t length, int64_t contentlength) ;

/// @brief Method get_CanRead addr 0x28430f0 size 0x8 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanSeek addr 0x28430f8 size 0x8 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_CanWrite addr 0x2843100 size 0x8 virtual true final false
 bool get_CanWrite() ;

/// @brief Method get_Length addr 0x2843108 size 0x40 virtual true final false
 int64_t get_Length() ;

/// @brief Method get_Position addr 0x2843148 size 0x40 virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0x2843188 size 0x40 virtual true final false
 void set_Position(int64_t value) ;

/// @brief Method Close addr 0x28431c8 size 0xc virtual true final false
 void Close() ;

/// @brief Method Flush addr 0x28431d4 size 0x4 virtual true final false
 void Flush() ;

/// @brief Method FillFromBuffer addr 0x28431d8 size 0x29c virtual false final false
 int32_t FillFromBuffer(::ArrayW<uint8_t> buffer, int32_t off, int32_t count) ;

/// @brief Method Read addr 0x2843474 size 0x11c virtual true final false
 int32_t Read(ByRef<::ArrayW<uint8_t>> buffer, int32_t offset, int32_t count) ;

/// @brief Method BeginRead addr 0x2843590 size 0x20c virtual true final false
 ::System::IAsyncResult BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::AsyncCallback cback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndRead addr 0x284379c size 0x29c virtual true final false
 int32_t EndRead(::System::IAsyncResult ares) ;

/// @brief Method Seek addr 0x2843a38 size 0x40 virtual true final false
 int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin) ;

/// @brief Method SetLength addr 0x2843a78 size 0x40 virtual true final false
 void SetLength(int64_t value) ;

/// @brief Method Write addr 0x2843ab8 size 0x40 virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method BeginWrite addr 0x2843af8 size 0x40 virtual true final false
 ::System::IAsyncResult BeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::AsyncCallback cback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndWrite addr 0x2843b38 size 0x40 virtual true final false
 void EndWrite(::System::IAsyncResult async_result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::RequestStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::RequestStream, "System.Net", "RequestStream");
