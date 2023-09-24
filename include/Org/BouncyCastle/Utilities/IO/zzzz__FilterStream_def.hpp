#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace System::IO {
struct SeekOrigin;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO {
class FilterStream;
}
// Type: Org.BouncyCastle.Utilities.IO::FilterStream
namespace Org::BouncyCastle::Utilities::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(452))
// CS Name: Org.BouncyCastle.Utilities.IO.FilterStream
class CORDL_TYPE FilterStream : public System::IO::Stream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~FilterStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "FilterStream", modifiers: " const&", def_value: None }]
constexpr FilterStream(FilterStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FilterStream", modifiers: "&&", def_value: None }]
constexpr FilterStream(FilterStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FilterStream(void* ptr) noexcept : System::IO::Stream(ptr) {
}


  constexpr FilterStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FilterStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FilterStream& operator=(FilterStream&& o) noexcept = default;
  constexpr FilterStream& operator=(FilterStream const& o) noexcept = default;
                


// Fields

 System::IO::Stream __declspec(property(get=__get_s, put=__set_s))  s;

constexpr void __set_s(System::IO::Stream value) ;

constexpr System::IO::Stream __get_s() const;


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;


// Methods

static Org::BouncyCastle::Utilities::IO::FilterStream New_ctor(System::IO::Stream s) ;

/// @brief Method .ctor addr 0x1128bf8 size 0x6c virtual false final false
 void _ctor(System::IO::Stream s) ;

/// @brief Method get_CanRead addr 0x1128c64 size 0x20 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanSeek addr 0x1128c84 size 0x20 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_CanWrite addr 0x1128ca4 size 0x20 virtual true final false
 bool get_CanWrite() ;

/// @brief Method get_Length addr 0x1128cc4 size 0x20 virtual true final false
 int64_t get_Length() ;

/// @brief Method get_Position addr 0x1128ce4 size 0x20 virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0x1128d04 size 0x24 virtual true final false
 void set_Position(int64_t value) ;

/// @brief Method Close addr 0x1128d28 size 0x68 virtual true final false
 void Close() ;

/// @brief Method Flush addr 0x1128d90 size 0x24 virtual true final false
 void Flush() ;

/// @brief Method Seek addr 0x1128db4 size 0x24 virtual true final false
 int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) ;

/// @brief Method SetLength addr 0x1128dd8 size 0x24 virtual true final false
 void SetLength(int64_t value) ;

/// @brief Method Read addr 0x1128dfc size 0x24 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method ReadByte addr 0x1128e20 size 0x24 virtual true final false
 int32_t ReadByte() ;

/// @brief Method Write addr 0x1128e44 size 0x24 virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method WriteByte addr 0x1128e68 size 0x24 virtual true final false
 void WriteByte(uint8_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::IO
NEED_NO_BOX(Org::BouncyCastle::Utilities::IO::FilterStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::IO::FilterStream, "Org.BouncyCastle.Utilities.IO", "FilterStream");
