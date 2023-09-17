#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::IO {
struct SeekOrigin;
}
namespace System {
template<typename T>
struct ReadOnlyMemory_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System::IO::Compression {
struct CompressionMode;
}
namespace System {
class IAsyncResult;
}
namespace System {
template<typename T>
struct Memory_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
struct ValueTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class AsyncCallback;
}
namespace System::IO {
class Stream;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System::IO::Compression {
class DeflateStream;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace System::IO::Compression {
class GZipStream;
}
// Type: System.IO.Compression::GZipStream
namespace System::IO::Compression {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8397))
// CS Name: System.IO.Compression.GZipStream
class CORDL_TYPE GZipStream : public ::System::IO::Stream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GZipStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "GZipStream", modifiers: " const&", def_value: None }]
constexpr GZipStream(GZipStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GZipStream", modifiers: "&&", def_value: None }]
constexpr GZipStream(GZipStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GZipStream(void* ptr) noexcept : ::System::IO::Stream(ptr) {
}


  constexpr GZipStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GZipStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GZipStream& operator=(GZipStream&& o) noexcept = default;
  constexpr GZipStream& operator=(GZipStream const& o) noexcept = default;
                


// Fields

 ::System::IO::Compression::DeflateStream __declspec(property(get=__get__deflateStream, put=__set__deflateStream))  _deflateStream;

constexpr void __set__deflateStream(::System::IO::Compression::DeflateStream value) ;

constexpr ::System::IO::Compression::DeflateStream __get__deflateStream() const;


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;


// Methods

// Ctor Parameters [CppParam { name: "stream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "::System::IO::Compression::CompressionMode", modifiers: "", def_value: None }]
explicit GZipStream(::System::IO::Stream stream, ::System::IO::Compression::CompressionMode mode) ;

/// @brief Method .ctor addr 0x27af348 size 0x8 virtual false final false
 void _ctor(::System::IO::Stream stream, ::System::IO::Compression::CompressionMode mode) ;

// Ctor Parameters [CppParam { name: "stream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "::System::IO::Compression::CompressionMode", modifiers: "", def_value: None }, CppParam { name: "leaveOpen", ty: "bool", modifiers: "", def_value: None }]
explicit GZipStream(::System::IO::Stream stream, ::System::IO::Compression::CompressionMode mode, bool leaveOpen) ;

/// @brief Method .ctor addr 0x27af350 size 0xb8 virtual false final false
 void _ctor(::System::IO::Stream stream, ::System::IO::Compression::CompressionMode mode, bool leaveOpen) ;

/// @brief Method get_CanRead addr 0x27af414 size 0x18 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanWrite addr 0x27af42c size 0x18 virtual true final false
 bool get_CanWrite() ;

/// @brief Method get_CanSeek addr 0x27af444 size 0x18 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_Length addr 0x27af45c size 0x50 virtual true final false
 int64_t get_Length() ;

/// @brief Method get_Position addr 0x27af4ac size 0x50 virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0x27af4fc size 0x50 virtual true final false
 void set_Position(int64_t value) ;

/// @brief Method Flush addr 0x27af54c size 0x24 virtual true final false
 void Flush() ;

/// @brief Method Seek addr 0x27af588 size 0x50 virtual true final false
 int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin) ;

/// @brief Method SetLength addr 0x27af5d8 size 0x50 virtual true final false
 void SetLength(int64_t value) ;

/// @brief Method ReadByte addr 0x27af628 size 0x24 virtual true final false
 int32_t ReadByte() ;

/// @brief Method BeginRead addr 0x27af64c size 0xb4 virtual true final false
 ::System::IAsyncResult BeginRead(::ArrayW<uint8_t> array, int32_t offset, int32_t count, ::System::AsyncCallback asyncCallback, ::bs_hook::Il2CppWrapperType asyncState) ;

/// @brief Method EndRead addr 0x27af700 size 0x48 virtual true final false
 int32_t EndRead(::System::IAsyncResult asyncResult) ;

/// @brief Method Read addr 0x27af748 size 0x24 virtual true final false
 int32_t Read(::ArrayW<uint8_t> array, int32_t offset, int32_t count) ;

/// @brief Method Read addr 0x27af76c size 0xec virtual true final false
 int32_t Read(::System::Span_1<uint8_t> buffer) ;

/// @brief Method BeginWrite addr 0x27af974 size 0xb4 virtual true final false
 ::System::IAsyncResult BeginWrite(::ArrayW<uint8_t> array, int32_t offset, int32_t count, ::System::AsyncCallback asyncCallback, ::bs_hook::Il2CppWrapperType asyncState) ;

/// @brief Method EndWrite addr 0x27afa28 size 0xc virtual true final false
 void EndWrite(::System::IAsyncResult asyncResult) ;

/// @brief Method Write addr 0x27afa34 size 0x24 virtual true final false
 void Write(::ArrayW<uint8_t> array, int32_t offset, int32_t count) ;

/// @brief Method Write addr 0x27afa58 size 0xec virtual true final false
 void Write(::System::ReadOnlySpan_1<uint8_t> buffer) ;

/// @brief Method Dispose addr 0x27afbc8 size 0xb8 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method ReadAsync addr 0x27afc80 size 0x24 virtual true final false
 ::System::Threading::Tasks::Task_1<int32_t> ReadAsync(::ArrayW<uint8_t> array, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method ReadAsync addr 0x27afca4 size 0xdc virtual true final false
 ::System::Threading::Tasks::ValueTask_1<int32_t> ReadAsync(::System::Memory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WriteAsync addr 0x27afd88 size 0x24 virtual true final false
 ::System::Threading::Tasks::Task WriteAsync(::ArrayW<uint8_t> array, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WriteAsync addr 0x27afdac size 0xdc virtual true final false
 ::System::Threading::Tasks::ValueTask WriteAsync(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method FlushAsync addr 0x27afe90 size 0x24 virtual true final false
 ::System::Threading::Tasks::Task FlushAsync(::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method CopyToAsync addr 0x27afeb4 size 0x24 virtual true final false
 ::System::Threading::Tasks::Task CopyToAsync(::System::IO::Stream destination, int32_t bufferSize, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method CheckDeflateStream addr 0x27af570 size 0x18 virtual false final false
 void CheckDeflateStream() ;

/// @brief Method ThrowStreamClosedException addr 0x27afed8 size 0x54 virtual false final false
static void ThrowStreamClosedException() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO::Compression
} // end anonymous namespace
NEED_NO_BOX(::System::IO::Compression::GZipStream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::GZipStream, "System.IO.Compression", "GZipStream");
