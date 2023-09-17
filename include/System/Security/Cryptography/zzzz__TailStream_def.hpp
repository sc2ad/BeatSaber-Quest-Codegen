#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::IO {
struct SeekOrigin;
}
// Forward declare root types
namespace System::Security::Cryptography {
class TailStream;
}
// Type: System.Security.Cryptography::TailStream
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2940))
// CS Name: System.Security.Cryptography.TailStream
class CORDL_TYPE TailStream : public ::System::IO::Stream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~TailStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "TailStream", modifiers: " const&", def_value: None }]
constexpr TailStream(TailStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TailStream", modifiers: "&&", def_value: None }]
constexpr TailStream(TailStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TailStream(void* ptr) noexcept : ::System::IO::Stream(ptr) {
}


  constexpr TailStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TailStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TailStream& operator=(TailStream&& o) noexcept = default;
  constexpr TailStream& operator=(TailStream const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get__Buffer, put=__set__Buffer))  _Buffer;

constexpr void __set__Buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__Buffer() const;

 int32_t __declspec(property(get=__get__BufferSize, put=__set__BufferSize))  _BufferSize;

constexpr void __set__BufferSize(int32_t value) ;

constexpr int32_t __get__BufferSize() const;

 int32_t __declspec(property(get=__get__BufferIndex, put=__set__BufferIndex))  _BufferIndex;

constexpr void __set__BufferIndex(int32_t value) ;

constexpr int32_t __get__BufferIndex() const;

 bool __declspec(property(get=__get__BufferFull, put=__set__BufferFull))  _BufferFull;

constexpr void __set__BufferFull(bool value) ;

constexpr bool __get__BufferFull() const;


// Properties

 ::ArrayW<uint8_t> __declspec(property(get=get_Buffer))  Buffer;

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;


// Methods

// Ctor Parameters [CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit TailStream(int32_t bufferSize) ;

/// @brief Method .ctor addr 0x22f44c0 size 0x90 virtual false final false
 void _ctor(int32_t bufferSize) ;

/// @brief Method Clear addr 0x22f47fc size 0x10 virtual false final false
 void Clear() ;

/// @brief Method Dispose addr 0x22f480c size 0xc0 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method get_Buffer addr 0x22f469c size 0x78 virtual false final false
 ::ArrayW<uint8_t> get_Buffer() ;

/// @brief Method get_CanRead addr 0x22f48cc size 0x8 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanSeek addr 0x22f48d4 size 0x8 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_CanWrite addr 0x22f48dc size 0x10 virtual true final false
 bool get_CanWrite() ;

/// @brief Method get_Length addr 0x22f48ec size 0x60 virtual true final false
 int64_t get_Length() ;

/// @brief Method get_Position addr 0x22f494c size 0x60 virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0x22f49ac size 0x60 virtual true final false
 void set_Position(int64_t value) ;

/// @brief Method Flush addr 0x22f4a0c size 0x4 virtual true final false
 void Flush() ;

/// @brief Method Seek addr 0x22f4a10 size 0x60 virtual true final false
 int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin) ;

/// @brief Method SetLength addr 0x22f4a70 size 0x60 virtual true final false
 void SetLength(int64_t value) ;

/// @brief Method Read addr 0x22f4ad0 size 0x60 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method Write addr 0x22f4b30 size 0x174 virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::TailStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::TailStream, "System.Security.Cryptography", "TailStream");
