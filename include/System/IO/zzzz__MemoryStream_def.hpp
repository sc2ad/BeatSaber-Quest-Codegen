#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System {
template<typename T>
struct Memory_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct ReadOnlyMemory_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::IO {
struct SeekOrigin;
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
struct Span_1;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace System::IO {
class MemoryStream;
}
// Type: System.IO::MemoryStream
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3558))
// CS Name: System.IO.MemoryStream
class CORDL_TYPE MemoryStream : public System::IO::Stream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~MemoryStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryStream", modifiers: " const&", def_value: None }]
constexpr MemoryStream(MemoryStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryStream", modifiers: "&&", def_value: None }]
constexpr MemoryStream(MemoryStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemoryStream(void* ptr) noexcept : System::IO::Stream(ptr) {
}


  constexpr MemoryStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemoryStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemoryStream& operator=(MemoryStream&& o) noexcept = default;
  constexpr MemoryStream& operator=(MemoryStream const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get__buffer, put=__set__buffer))  _buffer;

constexpr void __set__buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__buffer() const;

 int32_t __declspec(property(get=__get__origin, put=__set__origin))  _origin;

constexpr void __set__origin(int32_t value) ;

constexpr int32_t __get__origin() const;

 int32_t __declspec(property(get=__get__position, put=__set__position))  _position;

constexpr void __set__position(int32_t value) ;

constexpr int32_t __get__position() const;

 int32_t __declspec(property(get=__get__length, put=__set__length))  _length;

constexpr void __set__length(int32_t value) ;

constexpr int32_t __get__length() const;

 int32_t __declspec(property(get=__get__capacity, put=__set__capacity))  _capacity;

constexpr void __set__capacity(int32_t value) ;

constexpr int32_t __get__capacity() const;

 bool __declspec(property(get=__get__expandable, put=__set__expandable))  _expandable;

constexpr void __set__expandable(bool value) ;

constexpr bool __get__expandable() const;

 bool __declspec(property(get=__get__writable, put=__set__writable))  _writable;

constexpr void __set__writable(bool value) ;

constexpr bool __get__writable() const;

 bool __declspec(property(get=__get__exposable, put=__set__exposable))  _exposable;

constexpr void __set__exposable(bool value) ;

constexpr bool __get__exposable() const;

 bool __declspec(property(get=__get__isOpen, put=__set__isOpen))  _isOpen;

constexpr void __set__isOpen(bool value) ;

constexpr bool __get__isOpen() const;

 System::Threading::Tasks::Task_1<int32_t> __declspec(property(get=__get__lastReadTask, put=__set__lastReadTask))  _lastReadTask;

constexpr void __set__lastReadTask(System::Threading::Tasks::Task_1<int32_t> value) ;

constexpr System::Threading::Tasks::Task_1<int32_t> __get__lastReadTask() const;


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 int32_t __declspec(property(get=get_Capacity, put=set_Capacity))  Capacity;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;


// Methods

// Ctor Parameters []
explicit MemoryStream() ;

/// @brief Method .ctor addr 0x238fa6c size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit MemoryStream(int32_t capacity) ;

/// @brief Method .ctor addr 0x238fa74 size 0x160 virtual false final false
 void _ctor(int32_t capacity) ;

// Ctor Parameters [CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit MemoryStream(::ArrayW<uint8_t> buffer) ;

/// @brief Method .ctor addr 0x238fbd4 size 0x8 virtual false final false
 void _ctor(::ArrayW<uint8_t> buffer) ;

// Ctor Parameters [CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "writable", ty: "bool", modifiers: "", def_value: None }]
explicit MemoryStream(::ArrayW<uint8_t> buffer, bool writable) ;

/// @brief Method .ctor addr 0x238fbdc size 0xf0 virtual false final false
 void _ctor(::ArrayW<uint8_t> buffer, bool writable) ;

// Ctor Parameters [CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }]
explicit MemoryStream(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) ;

/// @brief Method .ctor addr 0x238fccc size 0xc virtual false final false
 void _ctor(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) ;

// Ctor Parameters [CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "writable", ty: "bool", modifiers: "", def_value: None }]
explicit MemoryStream(::ArrayW<uint8_t> buffer, int32_t index, int32_t count, bool writable) ;

/// @brief Method .ctor addr 0x238feb0 size 0xc virtual false final false
 void _ctor(::ArrayW<uint8_t> buffer, int32_t index, int32_t count, bool writable) ;

// Ctor Parameters [CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "writable", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "publiclyVisible", ty: "bool", modifiers: "", def_value: None }]
explicit MemoryStream(::ArrayW<uint8_t> buffer, int32_t index, int32_t count, bool writable, bool publiclyVisible) ;

/// @brief Method .ctor addr 0x238fcd8 size 0x1d8 virtual false final false
 void _ctor(::ArrayW<uint8_t> buffer, int32_t index, int32_t count, bool writable, bool publiclyVisible) ;

/// @brief Method get_CanRead addr 0x238febc size 0x8 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanSeek addr 0x238fec4 size 0x8 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_CanWrite addr 0x238fecc size 0x8 virtual true final false
 bool get_CanWrite() ;

/// @brief Method EnsureNotClosed addr 0x238fed4 size 0x34 virtual false final false
 void EnsureNotClosed() ;

/// @brief Method EnsureWriteable addr 0x238ff08 size 0x3c virtual false final false
 void EnsureWriteable() ;

/// @brief Method Dispose addr 0x238ff44 size 0x1c virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method EnsureCapacity addr 0x238ff60 size 0xb0 virtual false final false
 bool EnsureCapacity(int32_t value) ;

/// @brief Method Flush addr 0x2390010 size 0x4 virtual true final false
 void Flush() ;

/// @brief Method FlushAsync addr 0x2390014 size 0x174 virtual true final false
 System::Threading::Tasks::Task FlushAsync(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method GetBuffer addr 0x2390188 size 0x64 virtual true final false
 ::ArrayW<uint8_t> GetBuffer() ;

/// @brief Method InternalGetBuffer addr 0x23901ec size 0x8 virtual false final false
 ::ArrayW<uint8_t> InternalGetBuffer() ;

/// @brief Method InternalGetPosition addr 0x23901f4 size 0x8 virtual false final false
 int32_t InternalGetPosition() ;

/// @brief Method InternalReadInt32 addr 0x23901fc size 0xb8 virtual false final false
 int32_t InternalReadInt32() ;

/// @brief Method InternalEmulateRead addr 0x23902b4 size 0x3c virtual false final false
 int32_t InternalEmulateRead(int32_t count) ;

/// @brief Method get_Capacity addr 0x23902f0 size 0x20 virtual true final false
 int32_t get_Capacity() ;

/// @brief Method set_Capacity addr 0x2390310 size 0x180 virtual true final false
 void set_Capacity(int32_t value) ;

/// @brief Method get_Length addr 0x2390490 size 0x24 virtual true final false
 int64_t get_Length() ;

/// @brief Method get_Position addr 0x23904b4 size 0x20 virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0x23904d4 size 0xd0 virtual true final false
 void set_Position(int64_t value) ;

/// @brief Method Read addr 0x23905a4 size 0x1f4 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method Read addr 0x2390798 size 0x1fc virtual true final false
 int32_t Read(System::Span_1<uint8_t> buffer) ;

/// @brief Method ReadAsync addr 0x2390994 size 0x368 virtual true final false
 System::Threading::Tasks::Task_1<int32_t> ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method ReadAsync addr 0x2390cfc size 0x2dc virtual true final false
 System::Threading::Tasks::ValueTask_1<int32_t> ReadAsync(System::Memory_1<uint8_t> buffer, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method ReadByte addr 0x2390fd8 size 0x58 virtual true final false
 int32_t ReadByte() ;

/// @brief Method CopyToAsync addr 0x2391030 size 0x328 virtual true final false
 System::Threading::Tasks::Task CopyToAsync(System::IO::Stream destination, int32_t bufferSize, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Seek addr 0x2391598 size 0x158 virtual true final false
 int64_t Seek(int64_t offset, System::IO::SeekOrigin loc) ;

/// @brief Method SetLength addr 0x23916f0 size 0xe0 virtual true final false
 void SetLength(int64_t value) ;

/// @brief Method ToArray addr 0x23917d0 size 0xdc virtual true final false
 ::ArrayW<uint8_t> ToArray() ;

/// @brief Method Write addr 0x23918ac size 0x298 virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method Write addr 0x2391b44 size 0x254 virtual true final false
 void Write(System::ReadOnlySpan_1<uint8_t> buffer) ;

/// @brief Method WriteAsync addr 0x2391d98 size 0x308 virtual true final false
 System::Threading::Tasks::Task WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WriteAsync addr 0x23920a0 size 0x25c virtual true final false
 System::Threading::Tasks::ValueTask WriteAsync(System::ReadOnlyMemory_1<uint8_t> buffer, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WriteByte addr 0x23922fc size 0xbc virtual true final false
 void WriteByte(uint8_t value) ;

/// @brief Method WriteTo addr 0x23923b8 size 0xa4 virtual true final false
 void WriteTo(System::IO::Stream stream) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
NEED_NO_BOX(System::IO::MemoryStream);
DEFINE_IL2CPP_ARG_TYPE(System::IO::MemoryStream, "System.IO", "MemoryStream");
