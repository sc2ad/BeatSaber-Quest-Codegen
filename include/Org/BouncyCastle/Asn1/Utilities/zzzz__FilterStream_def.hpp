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
namespace Org::BouncyCastle::Asn1::Utilities {
class FilterStream;
}
// Type: Org.BouncyCastle.Asn1.Utilities::FilterStream
namespace Org::BouncyCastle::Asn1::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(322))
// CS Name: Org.BouncyCastle.Asn1.Utilities.FilterStream
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

// Ctor Parameters [CppParam { name: "s", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit FilterStream(System::IO::Stream s) ;

/// @brief Method .ctor addr 0xff163c size 0x6c virtual false final false
 void _ctor(System::IO::Stream s) ;

/// @brief Method get_CanRead addr 0xff16a8 size 0x20 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanSeek addr 0xff16c8 size 0x20 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_CanWrite addr 0xff16e8 size 0x20 virtual true final false
 bool get_CanWrite() ;

/// @brief Method get_Length addr 0xff1708 size 0x20 virtual true final false
 int64_t get_Length() ;

/// @brief Method get_Position addr 0xff1728 size 0x20 virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0xff1748 size 0x24 virtual true final false
 void set_Position(int64_t value) ;

/// @brief Method Close addr 0xff176c size 0x68 virtual true final false
 void Close() ;

/// @brief Method Flush addr 0xff17d4 size 0x24 virtual true final false
 void Flush() ;

/// @brief Method Seek addr 0xff17f8 size 0x24 virtual true final false
 int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) ;

/// @brief Method SetLength addr 0xff181c size 0x24 virtual true final false
 void SetLength(int64_t value) ;

/// @brief Method Read addr 0xff1840 size 0x24 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method ReadByte addr 0xff1864 size 0x24 virtual true final false
 int32_t ReadByte() ;

/// @brief Method Write addr 0xff1888 size 0x24 virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method WriteByte addr 0xff18ac size 0x24 virtual true final false
 void WriteByte(uint8_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Utilities
NEED_NO_BOX(Org::BouncyCastle::Asn1::Utilities::FilterStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Utilities::FilterStream, "Org.BouncyCastle.Asn1.Utilities", "FilterStream");
