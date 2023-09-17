#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoder;
}
namespace System::Text {
class Encoding;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::IO {
class BinaryWriter;
}
// Type: System.IO::BinaryWriter
namespace System::IO {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3607))
// CS Name: System.IO.BinaryWriter
class CORDL_TYPE BinaryWriter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~BinaryWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryWriter", modifiers: " const&", def_value: None }]
constexpr BinaryWriter(BinaryWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryWriter", modifiers: "&&", def_value: None }]
constexpr BinaryWriter(BinaryWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BinaryWriter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BinaryWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BinaryWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BinaryWriter& operator=(BinaryWriter&& o) noexcept = default;
  constexpr BinaryWriter& operator=(BinaryWriter const& o) noexcept = default;
                


// Fields

static ::System::IO::BinaryWriter __declspec(property(get=__get_Null, put=__set_Null))  Null;

static void __set_Null(::System::IO::BinaryWriter value) ;

static ::System::IO::BinaryWriter __get_Null() ;

 ::System::IO::Stream __declspec(property(get=__get_OutStream, put=__set_OutStream))  OutStream;

constexpr void __set_OutStream(::System::IO::Stream value) ;

constexpr ::System::IO::Stream __get_OutStream() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__buffer, put=__set__buffer))  _buffer;

constexpr void __set__buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__buffer() const;

 ::System::Text::Encoding __declspec(property(get=__get__encoding, put=__set__encoding))  _encoding;

constexpr void __set__encoding(::System::Text::Encoding value) ;

constexpr ::System::Text::Encoding __get__encoding() const;

 ::System::Text::Encoder __declspec(property(get=__get__encoder, put=__set__encoder))  _encoder;

constexpr void __set__encoder(::System::Text::Encoder value) ;

constexpr ::System::Text::Encoder __get__encoder() const;

 bool __declspec(property(get=__get__leaveOpen, put=__set__leaveOpen))  _leaveOpen;

constexpr void __set__leaveOpen(bool value) ;

constexpr bool __get__leaveOpen() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__largeByteBuffer, put=__set__largeByteBuffer))  _largeByteBuffer;

constexpr void __set__largeByteBuffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__largeByteBuffer() const;

 int32_t __declspec(property(get=__get__maxChars, put=__set__maxChars))  _maxChars;

constexpr void __set__maxChars(int32_t value) ;

constexpr int32_t __get__maxChars() const;


// Methods

// Ctor Parameters []
explicit BinaryWriter() ;

/// @brief Method .ctor addr 0x23ca0e8 size 0xec virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "output", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
explicit BinaryWriter(::System::IO::Stream output) ;

/// @brief Method .ctor addr 0x23ca1d4 size 0x80 virtual false final false
 void _ctor(::System::IO::Stream output) ;

// Ctor Parameters [CppParam { name: "output", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "encoding", ty: "::System::Text::Encoding", modifiers: "", def_value: None }]
explicit BinaryWriter(::System::IO::Stream output, ::System::Text::Encoding encoding) ;

/// @brief Method .ctor addr 0x23ca3cc size 0x8 virtual false final false
 void _ctor(::System::IO::Stream output, ::System::Text::Encoding encoding) ;

// Ctor Parameters [CppParam { name: "output", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "encoding", ty: "::System::Text::Encoding", modifiers: "", def_value: None }, CppParam { name: "leaveOpen", ty: "bool", modifiers: "", def_value: None }]
explicit BinaryWriter(::System::IO::Stream output, ::System::Text::Encoding encoding, bool leaveOpen) ;

/// @brief Method .ctor addr 0x23ca254 size 0x178 virtual false final false
 void _ctor(::System::IO::Stream output, ::System::Text::Encoding encoding, bool leaveOpen) ;

/// @brief Method Close addr 0x23ca3d4 size 0x10 virtual true final false
 void Close() ;

/// @brief Method Dispose addr 0x23ca3e4 size 0x48 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Dispose addr 0x23ca42c size 0x10 virtual true final true
 void Dispose() ;

/// @brief Method Flush addr 0x23ca43c size 0x24 virtual true final false
 void Flush() ;

/// @brief Method Write addr 0x23ca460 size 0x50 virtual true final false
 void Write(bool value) ;

/// @brief Method Write addr 0x23ca4b0 size 0x24 virtual true final false
 void Write(uint8_t value) ;

/// @brief Method Write addr 0x23ca4d4 size 0x24 virtual true final false
 void Write(int8_t value) ;

/// @brief Method Write addr 0x23ca4f8 size 0x7c virtual true final false
 void Write(::ArrayW<uint8_t> buffer) ;

/// @brief Method Write addr 0x23ca574 size 0x24 virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) ;

/// @brief Method Write addr 0x23ca598 size 0x12c virtual true final false
 void Write(char16_t ch) ;

/// @brief Method Write addr 0x23ca6c4 size 0xa8 virtual true final false
 void Write(::ArrayW<char16_t> chars) ;

/// @brief Method Write addr 0x23ca76c size 0x3c virtual true final false
 void Write(double_t value) ;

/// @brief Method Write addr 0x23ca7a8 size 0x68 virtual true final false
 void Write(int16_t value) ;

/// @brief Method Write addr 0x23ca810 size 0x68 virtual true final false
 void Write(uint16_t value) ;

/// @brief Method Write addr 0x23ca878 size 0xa0 virtual true final false
 void Write(int32_t value) ;

/// @brief Method Write addr 0x23ca918 size 0xa0 virtual true final false
 void Write(uint32_t value) ;

/// @brief Method Write addr 0x23ca9b8 size 0x110 virtual true final false
 void Write(int64_t value) ;

/// @brief Method Write addr 0x23caac8 size 0x110 virtual true final false
 void Write(uint64_t value) ;

/// @brief Method Write addr 0x23cabd8 size 0x3c virtual true final false
 void Write(float_t value) ;

/// @brief Method Write addr 0x23cac14 size 0x2b4 virtual true final false
 void Write(::StringW value) ;

/// @brief Method Write7BitEncodedInt addr 0x23caec8 size 0x60 virtual false final false
 void Write7BitEncodedInt(int32_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
} // end anonymous namespace
NEED_NO_BOX(::System::IO::BinaryWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::BinaryWriter, "System.IO", "BinaryWriter");
