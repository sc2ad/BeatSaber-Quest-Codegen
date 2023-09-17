#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::IO {
class Stream;
}
namespace System {
class IAsyncResult;
}
namespace System::Threading::Tasks {
template<typename TResult>
struct ValueTask_1;
}
namespace System::IO::Compression {
struct CompressionMode;
}
namespace System {
template<typename T>
struct ReadOnlyMemory_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
struct Memory_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
class AsyncCallback;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO::Compression {
class DeflateStreamNative;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
// Forward declare root types
namespace System::IO::Compression {
class DeflateStream;
}
namespace System::IO::Compression {
class ____System__IO__Compression__DeflateStream__ReadMethod;
}
namespace System::IO::Compression {
class ____System__IO__Compression__DeflateStream__WriteMethod;
}
// Type: ::ReadMethod
namespace System::IO::Compression {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8398))
// CS Name: System.IO.Compression.DeflateStream::ReadMethod
class CORDL_TYPE ____System__IO__Compression__DeflateStream__ReadMethod : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____System__IO__Compression__DeflateStream__ReadMethod() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__IO__Compression__DeflateStream__ReadMethod", modifiers: " const&", def_value: None }]
constexpr ____System__IO__Compression__DeflateStream__ReadMethod(____System__IO__Compression__DeflateStream__ReadMethod const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__IO__Compression__DeflateStream__ReadMethod", modifiers: "&&", def_value: None }]
constexpr ____System__IO__Compression__DeflateStream__ReadMethod(____System__IO__Compression__DeflateStream__ReadMethod&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__IO__Compression__DeflateStream__ReadMethod(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____System__IO__Compression__DeflateStream__ReadMethod& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__IO__Compression__DeflateStream__ReadMethod& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__IO__Compression__DeflateStream__ReadMethod& operator=(____System__IO__Compression__DeflateStream__ReadMethod&& o) noexcept = default;
  constexpr ____System__IO__Compression__DeflateStream__ReadMethod& operator=(____System__IO__Compression__DeflateStream__ReadMethod const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____System__IO__Compression__DeflateStream__ReadMethod(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x27b0d18 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x27b171c size 0x14 virtual true final false
 int32_t Invoke(::ArrayW<uint8_t> array, int32_t offset, int32_t count) ;

/// @brief Method BeginInvoke addr 0x27b0df0 size 0xa8 virtual true final false
 ::System::IAsyncResult BeginInvoke(::ArrayW<uint8_t> array, int32_t offset, int32_t count, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x27b13dc size 0x28 virtual true final false
 int32_t EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO::Compression
// Type: ::WriteMethod
namespace System::IO::Compression {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8399))
// CS Name: System.IO.Compression.DeflateStream::WriteMethod
class CORDL_TYPE ____System__IO__Compression__DeflateStream__WriteMethod : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____System__IO__Compression__DeflateStream__WriteMethod() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__IO__Compression__DeflateStream__WriteMethod", modifiers: " const&", def_value: None }]
constexpr ____System__IO__Compression__DeflateStream__WriteMethod(____System__IO__Compression__DeflateStream__WriteMethod const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__IO__Compression__DeflateStream__WriteMethod", modifiers: "&&", def_value: None }]
constexpr ____System__IO__Compression__DeflateStream__WriteMethod(____System__IO__Compression__DeflateStream__WriteMethod&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__IO__Compression__DeflateStream__WriteMethod(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____System__IO__Compression__DeflateStream__WriteMethod& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__IO__Compression__DeflateStream__WriteMethod& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__IO__Compression__DeflateStream__WriteMethod& operator=(____System__IO__Compression__DeflateStream__WriteMethod&& o) noexcept = default;
  constexpr ____System__IO__Compression__DeflateStream__WriteMethod& operator=(____System__IO__Compression__DeflateStream__WriteMethod const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____System__IO__Compression__DeflateStream__WriteMethod(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x27b1118 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x27b1730 size 0x14 virtual true final false
 void Invoke(::ArrayW<uint8_t> array, int32_t offset, int32_t count) ;

/// @brief Method BeginInvoke addr 0x27b11f0 size 0xa8 virtual true final false
 ::System::IAsyncResult BeginInvoke(::ArrayW<uint8_t> array, int32_t offset, int32_t count, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x27b154c size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO::Compression
// Type: System.IO.Compression::DeflateStream
namespace System::IO::Compression {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8400))
// CS Name: System.IO.Compression.DeflateStream
class CORDL_TYPE DeflateStream : public ::System::IO::Stream {
public:
// Declarations
using WriteMethod = ::System::IO::Compression::____System__IO__Compression__DeflateStream__WriteMethod;

using ReadMethod = ::System::IO::Compression::____System__IO__Compression__DeflateStream__ReadMethod;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~DeflateStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "DeflateStream", modifiers: " const&", def_value: None }]
constexpr DeflateStream(DeflateStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DeflateStream", modifiers: "&&", def_value: None }]
constexpr DeflateStream(DeflateStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DeflateStream(void* ptr) noexcept : ::System::IO::Stream(ptr) {
}


  constexpr DeflateStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DeflateStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DeflateStream& operator=(DeflateStream&& o) noexcept = default;
  constexpr DeflateStream& operator=(DeflateStream const& o) noexcept = default;
                


// Fields

 ::System::IO::Stream __declspec(property(get=__get_base_stream, put=__set_base_stream))  base_stream;

constexpr void __set_base_stream(::System::IO::Stream value) ;

constexpr ::System::IO::Stream __get_base_stream() const;

 ::System::IO::Compression::CompressionMode __declspec(property(get=__get_mode, put=__set_mode))  mode;

constexpr void __set_mode(::System::IO::Compression::CompressionMode value) ;

constexpr ::System::IO::Compression::CompressionMode __get_mode() const;

 bool __declspec(property(get=__get_leaveOpen, put=__set_leaveOpen))  leaveOpen;

constexpr void __set_leaveOpen(bool value) ;

constexpr bool __get_leaveOpen() const;

 bool __declspec(property(get=__get_disposed, put=__set_disposed))  disposed;

constexpr void __set_disposed(bool value) ;

constexpr bool __get_disposed() const;

 ::System::IO::Compression::DeflateStreamNative __declspec(property(get=__get_native, put=__set_native))  native;

constexpr void __set_native(::System::IO::Compression::DeflateStreamNative value) ;

constexpr ::System::IO::Compression::DeflateStreamNative __get_native() const;


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;


// Methods

// Ctor Parameters [CppParam { name: "stream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "::System::IO::Compression::CompressionMode", modifiers: "", def_value: None }]
explicit DeflateStream(::System::IO::Stream stream, ::System::IO::Compression::CompressionMode mode) ;

/// @brief Method .ctor addr 0x27aff2c size 0xc virtual false final false
 void _ctor(::System::IO::Stream stream, ::System::IO::Compression::CompressionMode mode) ;

// Ctor Parameters [CppParam { name: "stream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "::System::IO::Compression::CompressionMode", modifiers: "", def_value: None }, CppParam { name: "leaveOpen", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "windowsBits", ty: "int32_t", modifiers: "", def_value: None }]
explicit DeflateStream(::System::IO::Stream stream, ::System::IO::Compression::CompressionMode mode, bool leaveOpen, int32_t windowsBits) ;

/// @brief Method .ctor addr 0x27af408 size 0xc virtual false final false
 void _ctor(::System::IO::Stream stream, ::System::IO::Compression::CompressionMode mode, bool leaveOpen, int32_t windowsBits) ;

// Ctor Parameters [CppParam { name: "compressedStream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "::System::IO::Compression::CompressionMode", modifiers: "", def_value: None }, CppParam { name: "leaveOpen", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "gzip", ty: "bool", modifiers: "", def_value: None }]
explicit DeflateStream(::System::IO::Stream compressedStream, ::System::IO::Compression::CompressionMode mode, bool leaveOpen, bool gzip) ;

/// @brief Method .ctor addr 0x27aff38 size 0x16c virtual false final false
 void _ctor(::System::IO::Stream compressedStream, ::System::IO::Compression::CompressionMode mode, bool leaveOpen, bool gzip) ;

/// @brief Method Finalize addr 0x27b01d8 size 0xa4 virtual true final false
 void Finalize() ;

/// @brief Method Dispose addr 0x27b027c size 0xb8 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method ReadInternal addr 0x27b0438 size 0x48 virtual false final false
 int32_t ReadInternal(::ArrayW<uint8_t> array, int32_t offset, int32_t count) ;

/// @brief Method ReadAsyncMemory addr 0x27afd80 size 0x8 virtual false final false
 ::System::Threading::Tasks::ValueTask_1<int32_t> ReadAsyncMemory(::System::Memory_1<uint8_t> destination, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method ReadCore addr 0x27af858 size 0x11c virtual false final false
 int32_t ReadCore(::System::Span_1<uint8_t> destination) ;

/// @brief Method Read addr 0x27b04f8 size 0x1ec virtual true final false
 int32_t Read(::ArrayW<uint8_t> array, int32_t offset, int32_t count) ;

/// @brief Method WriteInternal addr 0x27b06e4 size 0x44 virtual false final false
 void WriteInternal(::ArrayW<uint8_t> array, int32_t offset, int32_t count) ;

/// @brief Method WriteAsyncMemory addr 0x27afe88 size 0x8 virtual false final false
 ::System::Threading::Tasks::ValueTask WriteAsyncMemory(::System::ReadOnlyMemory_1<uint8_t> source, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WriteCore addr 0x27afb44 size 0x84 virtual false final false
 void WriteCore(::System::ReadOnlySpan_1<uint8_t> source) ;

/// @brief Method Write addr 0x27b0794 size 0x1f8 virtual true final false
 void Write(::ArrayW<uint8_t> array, int32_t offset, int32_t count) ;

/// @brief Method Flush addr 0x27b098c size 0xb8 virtual true final false
 void Flush() ;

/// @brief Method BeginRead addr 0x27b0a98 size 0x280 virtual true final false
 ::System::IAsyncResult BeginRead(::ArrayW<uint8_t> array, int32_t offset, int32_t count, ::System::AsyncCallback asyncCallback, ::bs_hook::Il2CppWrapperType asyncState) ;

/// @brief Method BeginWrite addr 0x27b0e98 size 0x280 virtual true final false
 ::System::IAsyncResult BeginWrite(::ArrayW<uint8_t> array, int32_t offset, int32_t count, ::System::AsyncCallback asyncCallback, ::bs_hook::Il2CppWrapperType asyncState) ;

/// @brief Method EndRead addr 0x27b1298 size 0x144 virtual true final false
 int32_t EndRead(::System::IAsyncResult asyncResult) ;

/// @brief Method EndWrite addr 0x27b1404 size 0x148 virtual true final false
 void EndWrite(::System::IAsyncResult asyncResult) ;

/// @brief Method Seek addr 0x27b1558 size 0x40 virtual true final false
 int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin) ;

/// @brief Method SetLength addr 0x27b1598 size 0x40 virtual true final false
 void SetLength(int64_t value) ;

/// @brief Method get_CanRead addr 0x27b15d8 size 0x3c virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanSeek addr 0x27b1614 size 0x8 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_CanWrite addr 0x27b161c size 0x40 virtual true final false
 bool get_CanWrite() ;

/// @brief Method get_Length addr 0x27b165c size 0x40 virtual true final false
 int64_t get_Length() ;

/// @brief Method get_Position addr 0x27b169c size 0x40 virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0x27b16dc size 0x40 virtual true final false
 void set_Position(int64_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO::Compression
} // end anonymous namespace
NEED_NO_BOX(::System::IO::Compression::DeflateStream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::DeflateStream, "System.IO.Compression", "DeflateStream");
NEED_NO_BOX(::System::IO::Compression::____System__IO__Compression__DeflateStream__ReadMethod);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::____System__IO__Compression__DeflateStream__ReadMethod, "System.IO.Compression", "DeflateStream/ReadMethod");
NEED_NO_BOX(::System::IO::Compression::____System__IO__Compression__DeflateStream__WriteMethod);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::____System__IO__Compression__DeflateStream__WriteMethod, "System.IO.Compression", "DeflateStream/WriteMethod");
