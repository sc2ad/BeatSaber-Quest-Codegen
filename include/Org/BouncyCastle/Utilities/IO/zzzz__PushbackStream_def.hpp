#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__FilterStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO {
class PushbackStream;
}
// Type: Org.BouncyCastle.Utilities.IO::PushbackStream
namespace Org::BouncyCastle::Utilities::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(452))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1811))
// CS Name: Org.BouncyCastle.Utilities.IO.PushbackStream
class CORDL_TYPE PushbackStream : public ::Org::BouncyCastle::Utilities::IO::FilterStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~PushbackStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "PushbackStream", modifiers: " const&", def_value: None }]
constexpr PushbackStream(PushbackStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PushbackStream", modifiers: "&&", def_value: None }]
constexpr PushbackStream(PushbackStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PushbackStream(void* ptr) noexcept : ::Org::BouncyCastle::Utilities::IO::FilterStream(ptr) {
}


  constexpr PushbackStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PushbackStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PushbackStream& operator=(PushbackStream&& o) noexcept = default;
  constexpr PushbackStream& operator=(PushbackStream const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_buf, put=__set_buf))  buf;

constexpr void __set_buf(int32_t value) ;

constexpr int32_t __get_buf() const;


// Methods

// Ctor Parameters [CppParam { name: "s", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
explicit PushbackStream(::System::IO::Stream s) ;

/// @brief Method .ctor addr 0x10d3a04 size 0x10 virtual false final false
 void _ctor(::System::IO::Stream s) ;

/// @brief Method ReadByte addr 0x10d3a14 size 0x24 virtual true final false
 int32_t ReadByte() ;

/// @brief Method Read addr 0x10d3a38 size 0x60 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method Unread addr 0x10d3a98 size 0x6c virtual true final false
 void Unread(int32_t b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::IO
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::PushbackStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::PushbackStream, "Org.BouncyCastle.Utilities.IO", "PushbackStream");
