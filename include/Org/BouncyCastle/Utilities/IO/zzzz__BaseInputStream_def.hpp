#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::IO {
struct SeekOrigin;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO {
class BaseInputStream;
}
// Type: Org.BouncyCastle.Utilities.IO::BaseInputStream
namespace Org::BouncyCastle::Utilities::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(498))
// CS Name: Org.BouncyCastle.Utilities.IO.BaseInputStream
class CORDL_TYPE BaseInputStream : public System::IO::Stream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BaseInputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseInputStream", modifiers: " const&", def_value: None }]
constexpr BaseInputStream(BaseInputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseInputStream", modifiers: "&&", def_value: None }]
constexpr BaseInputStream(BaseInputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseInputStream(void* ptr) noexcept : System::IO::Stream(ptr) {
}


  constexpr BaseInputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseInputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseInputStream& operator=(BaseInputStream&& o) noexcept = default;
  constexpr BaseInputStream& operator=(BaseInputStream const& o) noexcept = default;
                


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

/// @brief Method get_CanRead addr 0x11347b8 size 0x10 virtual true final true
 bool get_CanRead() ;

/// @brief Method get_CanSeek addr 0x11347c8 size 0x8 virtual true final true
 bool get_CanSeek() ;

/// @brief Method get_CanWrite addr 0x11347d0 size 0x8 virtual true final true
 bool get_CanWrite() ;

/// @brief Method Close addr 0x11347d8 size 0x10 virtual true final false
 void Close() ;

/// @brief Method Flush addr 0x11347e8 size 0x4 virtual true final true
 void Flush() ;

/// @brief Method get_Length addr 0x11347ec size 0x40 virtual true final true
 int64_t get_Length() ;

/// @brief Method get_Position addr 0x113482c size 0x40 virtual true final true
 int64_t get_Position() ;

/// @brief Method set_Position addr 0x113486c size 0x40 virtual true final true
 void set_Position(int64_t value) ;

/// @brief Method Read addr 0x11348ac size 0x144 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method Seek addr 0x11349f0 size 0x40 virtual true final true
 int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) ;

/// @brief Method SetLength addr 0x1134a30 size 0x40 virtual true final true
 void SetLength(int64_t value) ;

/// @brief Method Write addr 0x1134a70 size 0x40 virtual true final true
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

// Ctor Parameters []
explicit BaseInputStream() ;

/// @brief Method .ctor addr 0x1134ab0 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::IO
NEED_NO_BOX(Org::BouncyCastle::Utilities::IO::BaseInputStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::IO::BaseInputStream, "Org.BouncyCastle.Utilities.IO", "BaseInputStream");
