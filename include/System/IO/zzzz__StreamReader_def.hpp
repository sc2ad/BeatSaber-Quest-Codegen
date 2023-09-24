#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::IO {
class System__IO__StreamReader__NullStreamReader;
}
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoding;
}
namespace System::Text {
class Decoder;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::IO {
class StreamReader;
}
// Type: System.IO::StreamReader
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3569))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3565))
// CS Name: System.IO.StreamReader
class CORDL_TYPE StreamReader : public System::IO::TextReader {
public:
// Declarations
using NullStreamReader = System::IO::System__IO__StreamReader__NullStreamReader;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~StreamReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "StreamReader", modifiers: " const&", def_value: None }]
constexpr StreamReader(StreamReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StreamReader", modifiers: "&&", def_value: None }]
constexpr StreamReader(StreamReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StreamReader(void* ptr) noexcept : System::IO::TextReader(ptr) {
}


  constexpr StreamReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StreamReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StreamReader& operator=(StreamReader&& o) noexcept = default;
  constexpr StreamReader& operator=(StreamReader const& o) noexcept = default;
                


// Fields

static System::IO::StreamReader __declspec(property(get=__get_Null, put=__set_Null))  Null;

static void __set_Null(System::IO::StreamReader value) ;

static System::IO::StreamReader __get_Null() ;

 System::IO::Stream __declspec(property(get=__get__stream, put=__set__stream))  _stream;

constexpr void __set__stream(System::IO::Stream value) ;

constexpr System::IO::Stream __get__stream() const;

 System::Text::Encoding __declspec(property(get=__get__encoding, put=__set__encoding))  _encoding;

constexpr void __set__encoding(System::Text::Encoding value) ;

constexpr System::Text::Encoding __get__encoding() const;

 System::Text::Decoder __declspec(property(get=__get__decoder, put=__set__decoder))  _decoder;

constexpr void __set__decoder(System::Text::Decoder value) ;

constexpr System::Text::Decoder __get__decoder() const;

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

 int32_t __declspec(property(get=__get__byteLen, put=__set__byteLen))  _byteLen;

constexpr void __set__byteLen(int32_t value) ;

constexpr int32_t __get__byteLen() const;

 int32_t __declspec(property(get=__get__bytePos, put=__set__bytePos))  _bytePos;

constexpr void __set__bytePos(int32_t value) ;

constexpr int32_t __get__bytePos() const;

 int32_t __declspec(property(get=__get__maxCharsPerBuffer, put=__set__maxCharsPerBuffer))  _maxCharsPerBuffer;

constexpr void __set__maxCharsPerBuffer(int32_t value) ;

constexpr int32_t __get__maxCharsPerBuffer() const;

 bool __declspec(property(get=__get__detectEncoding, put=__set__detectEncoding))  _detectEncoding;

constexpr void __set__detectEncoding(bool value) ;

constexpr bool __get__detectEncoding() const;

 bool __declspec(property(get=__get__checkPreamble, put=__set__checkPreamble))  _checkPreamble;

constexpr void __set__checkPreamble(bool value) ;

constexpr bool __get__checkPreamble() const;

 bool __declspec(property(get=__get__isBlocked, put=__set__isBlocked))  _isBlocked;

constexpr void __set__isBlocked(bool value) ;

constexpr bool __get__isBlocked() const;

 bool __declspec(property(get=__get__closable, put=__set__closable))  _closable;

constexpr void __set__closable(bool value) ;

constexpr bool __get__closable() const;

 System::Threading::Tasks::Task __declspec(property(get=__get__asyncReadTask, put=__set__asyncReadTask))  _asyncReadTask;

constexpr void __set__asyncReadTask(System::Threading::Tasks::Task value) ;

constexpr System::Threading::Tasks::Task __get__asyncReadTask() const;


// Properties

 System::Text::Encoding __declspec(property(get=get_CurrentEncoding))  CurrentEncoding;

 System::IO::Stream __declspec(property(get=get_BaseStream))  BaseStream;

 bool __declspec(property(get=get_LeaveOpen))  LeaveOpen;

 bool __declspec(property(get=get_EndOfStream))  EndOfStream;


// Methods

/// @brief Method CheckAsyncTaskInProgress addr 0x23937d8 size 0x64 virtual false final false
 void CheckAsyncTaskInProgress() ;

/// @brief Method ThrowAsyncIOInProgress addr 0x239383c size 0x50 virtual false final false
static void ThrowAsyncIOInProgress() ;

static System::IO::StreamReader New_ctor() ;

/// @brief Method .ctor addr 0x239388c size 0xbc virtual false final false
 void _ctor() ;

static System::IO::StreamReader New_ctor(System::IO::Stream stream) ;

/// @brief Method .ctor addr 0x2393950 size 0x3c virtual false final false
 void _ctor(System::IO::Stream stream) ;

static System::IO::StreamReader New_ctor(System::IO::Stream stream, bool detectEncodingFromByteOrderMarks) ;

/// @brief Method .ctor addr 0x239398c size 0x40 virtual false final false
 void _ctor(System::IO::Stream stream, bool detectEncodingFromByteOrderMarks) ;

static System::IO::StreamReader New_ctor(System::IO::Stream stream, System::Text::Encoding encoding) ;

/// @brief Method .ctor addr 0x2393bf4 size 0x10 virtual false final false
 void _ctor(System::IO::Stream stream, System::Text::Encoding encoding) ;

static System::IO::StreamReader New_ctor(System::IO::Stream stream, System::Text::Encoding encoding, bool detectEncodingFromByteOrderMarks) ;

/// @brief Method .ctor addr 0x2393c04 size 0x10 virtual false final false
 void _ctor(System::IO::Stream stream, System::Text::Encoding encoding, bool detectEncodingFromByteOrderMarks) ;

static System::IO::StreamReader New_ctor(System::IO::Stream stream, System::Text::Encoding encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize, bool leaveOpen) ;

/// @brief Method .ctor addr 0x23939cc size 0x228 virtual false final false
 void _ctor(System::IO::Stream stream, System::Text::Encoding encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize, bool leaveOpen) ;

static System::IO::StreamReader New_ctor(::StringW path) ;

/// @brief Method .ctor addr 0x2393d3c size 0x38 virtual false final false
 void _ctor(::StringW path) ;

static System::IO::StreamReader New_ctor(::StringW path, bool detectEncodingFromByteOrderMarks) ;

/// @brief Method .ctor addr 0x2393d74 size 0x3c virtual false final false
 void _ctor(::StringW path, bool detectEncodingFromByteOrderMarks) ;

static System::IO::StreamReader New_ctor(::StringW path, System::Text::Encoding encoding) ;

/// @brief Method .ctor addr 0x2393ffc size 0xc virtual false final false
 void _ctor(::StringW path, System::Text::Encoding encoding) ;

static System::IO::StreamReader New_ctor(::StringW path, System::Text::Encoding encoding, bool detectEncodingFromByteOrderMarks) ;

/// @brief Method .ctor addr 0x2394008 size 0xc virtual false final false
 void _ctor(::StringW path, System::Text::Encoding encoding, bool detectEncodingFromByteOrderMarks) ;

static System::IO::StreamReader New_ctor(::StringW path, System::Text::Encoding encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize) ;

/// @brief Method .ctor addr 0x2393db0 size 0x24c virtual false final false
 void _ctor(::StringW path, System::Text::Encoding encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize) ;

/// @brief Method Init addr 0x2393c14 size 0x128 virtual false final false
 void Init(System::IO::Stream stream, System::Text::Encoding encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize, bool leaveOpen) ;

/// @brief Method Init addr 0x2394014 size 0x10 virtual false final false
 void Init(System::IO::Stream stream) ;

/// @brief Method Close addr 0x2394024 size 0x10 virtual true final false
 void Close() ;

/// @brief Method Dispose addr 0x2394034 size 0xd0 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method get_CurrentEncoding addr 0x2394114 size 0x8 virtual true final false
 System::Text::Encoding get_CurrentEncoding() ;

/// @brief Method get_BaseStream addr 0x239411c size 0x8 virtual true final false
 System::IO::Stream get_BaseStream() ;

/// @brief Method get_LeaveOpen addr 0x2394104 size 0x10 virtual false final false
 bool get_LeaveOpen() ;

/// @brief Method get_EndOfStream addr 0x2394124 size 0x9c virtual false final false
 bool get_EndOfStream() ;

/// @brief Method Peek addr 0x23941c0 size 0xc8 virtual true final false
 int32_t Peek() ;

/// @brief Method Read addr 0x2394288 size 0xc8 virtual true final false
 int32_t Read() ;

/// @brief Method Read addr 0x2394350 size 0x1c0 virtual true final false
 int32_t Read(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method ReadSpan addr 0x2394510 size 0x268 virtual false final false
 int32_t ReadSpan(System::Span_1<char16_t> buffer) ;

/// @brief Method ReadToEnd addr 0x2394a88 size 0x11c virtual true final false
 ::StringW ReadToEnd() ;

/// @brief Method CompressBuffer addr 0x2394ba4 size 0x44 virtual false final false
 void CompressBuffer(int32_t n) ;

/// @brief Method DetectEncoding addr 0x2394be8 size 0x2b8 virtual false final false
 void DetectEncoding() ;

/// @brief Method IsPreamble addr 0x2394ea0 size 0x130 virtual false final false
 bool IsPreamble() ;

/// @brief Method ReadBuffer addr 0x2394fd0 size 0x16c virtual true final false
 int32_t ReadBuffer() ;

/// @brief Method ReadBuffer addr 0x2394778 size 0x310 virtual false final false
 int32_t ReadBuffer(System::Span_1<char16_t> userBuffer, ByRef<bool> readToUserBuffer) ;

/// @brief Method ReadLine addr 0x239513c size 0x260 virtual true final false
 ::StringW ReadLine() ;

/// @brief Method DataAvailable addr 0x239539c size 0x10 virtual false final false
 bool DataAvailable() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
NEED_NO_BOX(System::IO::StreamReader);
DEFINE_IL2CPP_ARG_TYPE(System::IO::StreamReader, "System.IO", "StreamReader");
