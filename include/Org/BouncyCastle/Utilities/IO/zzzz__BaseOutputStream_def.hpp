#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::IO {
struct SeekOrigin;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO {
class BaseOutputStream;
}
// Type: Org.BouncyCastle.Utilities.IO::BaseOutputStream
namespace Org::BouncyCastle::Utilities::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(484))
// CS Name: Org.BouncyCastle.Utilities.IO.BaseOutputStream
class CORDL_TYPE BaseOutputStream : public ::System::IO::Stream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BaseOutputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseOutputStream", modifiers: " const&", def_value: None }]
constexpr BaseOutputStream(BaseOutputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseOutputStream", modifiers: "&&", def_value: None }]
constexpr BaseOutputStream(BaseOutputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseOutputStream(void* ptr) noexcept : ::System::IO::Stream(ptr) {
}


  constexpr BaseOutputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseOutputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseOutputStream& operator=(BaseOutputStream&& o) noexcept = default;
  constexpr BaseOutputStream& operator=(BaseOutputStream const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_closed, put=__set_closed))  closed;

constexpr void __set_closed(bool value) ;

constexpr bool __get_closed() const;


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;


// Methods

/// @brief Method get_CanRead addr 0x1132380 size 0x8 virtual true final true
 bool get_CanRead() ;

/// @brief Method get_CanSeek addr 0x1132388 size 0x8 virtual true final true
 bool get_CanSeek() ;

/// @brief Method get_CanWrite addr 0x1132390 size 0x10 virtual true final true
 bool get_CanWrite() ;

/// @brief Method Close addr 0x1132370 size 0x10 virtual true final false
 void Close() ;

/// @brief Method Flush addr 0x11323a0 size 0x4 virtual true final false
 void Flush() ;

/// @brief Method get_Length addr 0x11323a4 size 0x40 virtual true final true
 int64_t get_Length() ;

/// @brief Method get_Position addr 0x11323e4 size 0x40 virtual true final true
 int64_t get_Position() ;

/// @brief Method set_Position addr 0x1132424 size 0x40 virtual true final true
 void set_Position(int64_t value) ;

/// @brief Method Read addr 0x1132464 size 0x40 virtual true final true
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method Seek addr 0x11324a4 size 0x40 virtual true final true
 int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin) ;

/// @brief Method SetLength addr 0x11324e4 size 0x40 virtual true final true
 void SetLength(int64_t value) ;

/// @brief Method Write addr 0x1132524 size 0x80 virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method Write addr 0x11325a4 size 0x28 virtual true final false
 void Write(::ArrayW<uint8_t> buffer) ;

/// @brief Method WriteByte addr 0x11325cc size 0x8c virtual true final false
 void WriteByte(uint8_t b) ;

// Ctor Parameters []
explicit BaseOutputStream() ;

/// @brief Method .ctor addr 0x1132148 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::IO
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::BaseOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::BaseOutputStream, "Org.BouncyCastle.Utilities.IO", "BaseOutputStream");
