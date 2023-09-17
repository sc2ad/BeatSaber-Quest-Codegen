#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Runtime::InteropServices {
class SafeBuffer;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
struct ValueTask_1;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System::IO {
struct FileAccess;
}
namespace System {
template<typename T>
struct Memory_1;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System {
template<typename T>
struct ReadOnlyMemory_1;
}
// Forward declare root types
namespace System::IO {
class UnmanagedMemoryStream;
}
// Type: System.IO::UnmanagedMemoryStream
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3573))
// CS Name: System.IO.UnmanagedMemoryStream
class CORDL_TYPE UnmanagedMemoryStream : public ::System::IO::Stream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~UnmanagedMemoryStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnmanagedMemoryStream", modifiers: " const&", def_value: None }]
constexpr UnmanagedMemoryStream(UnmanagedMemoryStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnmanagedMemoryStream", modifiers: "&&", def_value: None }]
constexpr UnmanagedMemoryStream(UnmanagedMemoryStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnmanagedMemoryStream(void* ptr) noexcept : ::System::IO::Stream(ptr) {
}


  constexpr UnmanagedMemoryStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnmanagedMemoryStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnmanagedMemoryStream& operator=(UnmanagedMemoryStream&& o) noexcept = default;
  constexpr UnmanagedMemoryStream& operator=(UnmanagedMemoryStream const& o) noexcept = default;
                


// Fields

 ::System::Runtime::InteropServices::SafeBuffer __declspec(property(get=__get__buffer, put=__set__buffer))  _buffer;

constexpr void __set__buffer(::System::Runtime::InteropServices::SafeBuffer value) ;

constexpr ::System::Runtime::InteropServices::SafeBuffer __get__buffer() const;

 void* __declspec(property(get=__get__mem, put=__set__mem))  _mem;

constexpr void __set__mem(void* value) ;

constexpr void* __get__mem() const;

 int64_t __declspec(property(get=__get__length, put=__set__length))  _length;

constexpr void __set__length(int64_t value) ;

constexpr int64_t __get__length() const;

 int64_t __declspec(property(get=__get__capacity, put=__set__capacity))  _capacity;

constexpr void __set__capacity(int64_t value) ;

constexpr int64_t __get__capacity() const;

 int64_t __declspec(property(get=__get__position, put=__set__position))  _position;

constexpr void __set__position(int64_t value) ;

constexpr int64_t __get__position() const;

 int64_t __declspec(property(get=__get__offset, put=__set__offset))  _offset;

constexpr void __set__offset(int64_t value) ;

constexpr int64_t __get__offset() const;

 ::System::IO::FileAccess __declspec(property(get=__get__access, put=__set__access))  _access;

constexpr void __set__access(::System::IO::FileAccess value) ;

constexpr ::System::IO::FileAccess __get__access() const;

 bool __declspec(property(get=__get__isOpen, put=__set__isOpen))  _isOpen;

constexpr void __set__isOpen(bool value) ;

constexpr bool __get__isOpen() const;

 ::System::Threading::Tasks::Task_1<int32_t> __declspec(property(get=__get__lastReadTask, put=__set__lastReadTask))  _lastReadTask;

constexpr void __set__lastReadTask(::System::Threading::Tasks::Task_1<int32_t> value) ;

constexpr ::System::Threading::Tasks::Task_1<int32_t> __get__lastReadTask() const;


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;

 void* __declspec(property(get=get_PositionPointer))  PositionPointer;


// Methods

// Ctor Parameters []
explicit UnmanagedMemoryStream() ;

/// @brief Method .ctor addr 0x2392f34 size 0x64 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "pointer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "capacity", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "access", ty: "::System::IO::FileAccess", modifiers: "", def_value: None }]
explicit UnmanagedMemoryStream(void* pointer, int64_t length, int64_t capacity, ::System::IO::FileAccess access) ;

/// @brief Method .ctor addr 0x23983e8 size 0x90 virtual false final false
 void _ctor(void* pointer, int64_t length, int64_t capacity, ::System::IO::FileAccess access) ;

/// @brief Method Initialize addr 0x2392f98 size 0x208 virtual false final false
 void Initialize(void* pointer, int64_t length, int64_t capacity, ::System::IO::FileAccess access) ;

/// @brief Method get_CanRead addr 0x2398478 size 0x1c virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanSeek addr 0x2398494 size 0x8 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_CanWrite addr 0x239849c size 0x1c virtual true final false
 bool get_CanWrite() ;

/// @brief Method Dispose addr 0x23937c4 size 0x14 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method EnsureNotClosed addr 0x23984b8 size 0x34 virtual false final false
 void EnsureNotClosed() ;

/// @brief Method EnsureReadable addr 0x23984ec size 0x3c virtual false final false
 void EnsureReadable() ;

/// @brief Method EnsureWriteable addr 0x2398528 size 0x3c virtual false final false
 void EnsureWriteable() ;

/// @brief Method Flush addr 0x2398564 size 0x4 virtual true final false
 void Flush() ;

/// @brief Method FlushAsync addr 0x2398568 size 0x174 virtual true final false
 ::System::Threading::Tasks::Task FlushAsync(::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method get_Length addr 0x23986dc size 0x1c virtual true final false
 int64_t get_Length() ;

/// @brief Method get_Position addr 0x23986f8 size 0x48 virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0x2398740 size 0xa8 virtual true final false
 void set_Position(int64_t value) ;

/// @brief Method get_PositionPointer addr 0x23987e8 size 0xc0 virtual false final false
 void* get_PositionPointer() ;

/// @brief Method Read addr 0x23988a8 size 0x1c0 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method Read addr 0x2398a68 size 0xe4 virtual true final false
 int32_t Read(::System::Span_1<uint8_t> buffer) ;

/// @brief Method ReadCore addr 0x23931a4 size 0x22c virtual false final false
 int32_t ReadCore(::System::Span_1<uint8_t> buffer) ;

/// @brief Method ReadAsync addr 0x2398b4c size 0x310 virtual true final false
 ::System::Threading::Tasks::Task_1<int32_t> ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method ReadAsync addr 0x2398e5c size 0x294 virtual true final false
 ::System::Threading::Tasks::ValueTask_1<int32_t> ReadAsync(::System::Memory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method ReadByte addr 0x23990f0 size 0x160 virtual true final false
 int32_t ReadByte() ;

/// @brief Method Seek addr 0x2399250 size 0x110 virtual true final false
 int64_t Seek(int64_t offset, ::System::IO::SeekOrigin loc) ;

/// @brief Method SetLength addr 0x2399360 size 0x190 virtual true final false
 void SetLength(int64_t value) ;

/// @brief Method Write addr 0x23994f0 size 0x1ec virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method Write addr 0x23996dc size 0xe4 virtual true final false
 void Write(::System::ReadOnlySpan_1<uint8_t> buffer) ;

/// @brief Method WriteCore addr 0x23933d4 size 0x2fc virtual false final false
 void WriteCore(::System::ReadOnlySpan_1<uint8_t> buffer) ;

/// @brief Method WriteAsync addr 0x23997c0 size 0x2c0 virtual true final false
 ::System::Threading::Tasks::Task WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WriteAsync addr 0x2399a80 size 0x214 virtual true final false
 ::System::Threading::Tasks::ValueTask WriteAsync(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WriteByte addr 0x2399c94 size 0x228 virtual true final false
 void WriteByte(uint8_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
} // end anonymous namespace
NEED_NO_BOX(::System::IO::UnmanagedMemoryStream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::UnmanagedMemoryStream, "System.IO", "UnmanagedMemoryStream");
