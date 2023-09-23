#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System::Text {
class Encoder;
}
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace System::IO {
class StreamWriter;
}
// Type: System.IO::StreamWriter
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3572))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3566))
// CS Name: System.IO.StreamWriter
class CORDL_TYPE StreamWriter : public System::IO::TextWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~StreamWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "StreamWriter", modifiers: " const&", def_value: None }]
constexpr StreamWriter(StreamWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StreamWriter", modifiers: "&&", def_value: None }]
constexpr StreamWriter(StreamWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StreamWriter(void* ptr) noexcept : System::IO::TextWriter(ptr) {
}


  constexpr StreamWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StreamWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StreamWriter& operator=(StreamWriter&& o) noexcept = default;
  constexpr StreamWriter& operator=(StreamWriter const& o) noexcept = default;
                


// Fields

static System::IO::StreamWriter __declspec(property(get=__get_Null, put=__set_Null))  Null;

static void __set_Null(System::IO::StreamWriter value) ;

static System::IO::StreamWriter __get_Null() ;

 System::IO::Stream __declspec(property(get=__get__stream, put=__set__stream))  _stream;

constexpr void __set__stream(System::IO::Stream value) ;

constexpr System::IO::Stream __get__stream() const;

 System::Text::Encoding __declspec(property(get=__get__encoding, put=__set__encoding))  _encoding;

constexpr void __set__encoding(System::Text::Encoding value) ;

constexpr System::Text::Encoding __get__encoding() const;

 System::Text::Encoder __declspec(property(get=__get__encoder, put=__set__encoder))  _encoder;

constexpr void __set__encoder(System::Text::Encoder value) ;

constexpr System::Text::Encoder __get__encoder() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__byteBuffer, put=__set__byteBuffer))  _byteBuffer;

constexpr void __set__byteBuffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__byteBuffer() const;

 ::ArrayW<char16_t> __declspec(property(get=__get__charBuffer, put=__set__charBuffer))  _charBuffer;

constexpr void __set__charBuffer(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get__charBuffer() const;

 int32_t __declspec(property(get=__get__charPos, put=__set__charPos))  _charPos;

constexpr void __set__charPos(int32_t value) ;

constexpr int32_t __get__charPos() const;

 int32_t __declspec(property(get=__get__charLen, put=__set__charLen))  _charLen;

constexpr void __set__charLen(int32_t value) ;

constexpr int32_t __get__charLen() const;

 bool __declspec(property(get=__get__autoFlush, put=__set__autoFlush))  _autoFlush;

constexpr void __set__autoFlush(bool value) ;

constexpr bool __get__autoFlush() const;

 bool __declspec(property(get=__get__haveWrittenPreamble, put=__set__haveWrittenPreamble))  _haveWrittenPreamble;

constexpr void __set__haveWrittenPreamble(bool value) ;

constexpr bool __get__haveWrittenPreamble() const;

 bool __declspec(property(get=__get__closable, put=__set__closable))  _closable;

constexpr void __set__closable(bool value) ;

constexpr bool __get__closable() const;

 System::Threading::Tasks::Task __declspec(property(get=__get__asyncWriteTask, put=__set__asyncWriteTask))  _asyncWriteTask;

constexpr void __set__asyncWriteTask(System::Threading::Tasks::Task value) ;

constexpr System::Threading::Tasks::Task __get__asyncWriteTask() const;


// Properties

static System::Text::Encoding __declspec(property(get=get_UTF8NoBOM))  UTF8NoBOM;

 bool __declspec(property(put=set_AutoFlush))  AutoFlush;

 bool __declspec(property(get=get_LeaveOpen))  LeaveOpen;

 System::Text::Encoding __declspec(property(get=get_Encoding))  Encoding;


// Methods

/// @brief Method CheckAsyncTaskInProgress addr 0x2395588 size 0x64 virtual false final false
 void CheckAsyncTaskInProgress() ;

/// @brief Method ThrowAsyncIOInProgress addr 0x23955ec size 0x50 virtual false final false
static void ThrowAsyncIOInProgress() ;

/// @brief Method get_UTF8NoBOM addr 0x239563c size 0x50 virtual false final false
static System::Text::Encoding get_UTF8NoBOM() ;

// Ctor Parameters []
explicit StreamWriter() ;

/// @brief Method .ctor addr 0x239568c size 0xbc virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit StreamWriter(System::IO::Stream stream) ;

/// @brief Method .ctor addr 0x23957d0 size 0x74 virtual false final false
 void _ctor(System::IO::Stream stream) ;

// Ctor Parameters [CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "encoding", ty: "System::Text::Encoding", modifiers: "", def_value: None }]
explicit StreamWriter(System::IO::Stream stream, System::Text::Encoding encoding) ;

/// @brief Method .ctor addr 0x2395a5c size 0xc virtual false final false
 void _ctor(System::IO::Stream stream, System::Text::Encoding encoding) ;

// Ctor Parameters [CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "encoding", ty: "System::Text::Encoding", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit StreamWriter(System::IO::Stream stream, System::Text::Encoding encoding, int32_t bufferSize) ;

/// @brief Method .ctor addr 0x2395a68 size 0x8 virtual false final false
 void _ctor(System::IO::Stream stream, System::Text::Encoding encoding, int32_t bufferSize) ;

// Ctor Parameters [CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "encoding", ty: "System::Text::Encoding", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "leaveOpen", ty: "bool", modifiers: "", def_value: None }]
explicit StreamWriter(System::IO::Stream stream, System::Text::Encoding encoding, int32_t bufferSize, bool leaveOpen) ;

/// @brief Method .ctor addr 0x2395844 size 0x218 virtual false final false
 void _ctor(System::IO::Stream stream, System::Text::Encoding encoding, int32_t bufferSize, bool leaveOpen) ;

// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }]
explicit StreamWriter(::StringW path) ;

/// @brief Method .ctor addr 0x2395ba8 size 0x74 virtual false final false
 void _ctor(::StringW path) ;

// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "append", ty: "bool", modifiers: "", def_value: None }]
explicit StreamWriter(::StringW path, bool append) ;

/// @brief Method .ctor addr 0x2395e6c size 0x78 virtual false final false
 void _ctor(::StringW path, bool append) ;

// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "append", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "encoding", ty: "System::Text::Encoding", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit StreamWriter(::StringW path, bool append, System::Text::Encoding encoding, int32_t bufferSize) ;

/// @brief Method .ctor addr 0x2395c1c size 0x250 virtual false final false
 void _ctor(::StringW path, bool append, System::Text::Encoding encoding, int32_t bufferSize) ;

/// @brief Method Init addr 0x2395a70 size 0x138 virtual false final false
 void Init(System::IO::Stream streamArg, System::Text::Encoding encodingArg, int32_t bufferSize, bool shouldLeaveOpen) ;

/// @brief Method Close addr 0x2395f60 size 0x6c virtual true final false
 void Close() ;

/// @brief Method Dispose addr 0x2395fcc size 0x94 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Flush addr 0x23961e0 size 0x20 virtual true final false
 void Flush() ;

/// @brief Method Flush addr 0x2396060 size 0x180 virtual false final false
 void Flush(bool flushStream, bool flushEncoder) ;

/// @brief Method set_AutoFlush addr 0x2396200 size 0x44 virtual true final false
 void set_AutoFlush(bool value) ;

/// @brief Method get_LeaveOpen addr 0x2396244 size 0x10 virtual false final false
 bool get_LeaveOpen() ;

/// @brief Method get_Encoding addr 0x2396254 size 0x8 virtual true final false
 System::Text::Encoding get_Encoding() ;

/// @brief Method Write addr 0x239625c size 0x8c virtual true final false
 void Write(char16_t value) ;

/// @brief Method Write addr 0x23962e8 size 0x268 virtual true final false
 void Write(::ArrayW<char16_t> buffer) ;

/// @brief Method Write addr 0x2396550 size 0x3d8 virtual true final false
 void Write(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteSpan addr 0x2396928 size 0x2c8 virtual false final false
 void WriteSpan(System::ReadOnlySpan_1<char16_t> buffer, bool appendNewLine) ;

/// @brief Method Write addr 0x2396bf0 size 0x26c virtual true final false
 void Write(::StringW value) ;

/// @brief Method WriteLine addr 0x2396e5c size 0x2fc virtual true final false
 void WriteLine(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
NEED_NO_BOX(System::IO::StreamWriter);
DEFINE_IL2CPP_ARG_TYPE(System::IO::StreamWriter, "System.IO", "StreamWriter");
