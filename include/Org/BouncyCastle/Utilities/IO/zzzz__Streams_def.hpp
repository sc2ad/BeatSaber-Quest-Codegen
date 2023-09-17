#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::IO {
class MemoryStream;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO {
class Streams;
}
// Type: Org.BouncyCastle.Utilities.IO::Streams
namespace Org::BouncyCastle::Utilities::IO {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1813))
// CS Name: Org.BouncyCastle.Utilities.IO.Streams
class CORDL_TYPE Streams : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Streams() = default;

// Ctor Parameters [CppParam { name: "", ty: "Streams", modifiers: " const&", def_value: None }]
constexpr Streams(Streams const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Streams", modifiers: "&&", def_value: None }]
constexpr Streams(Streams&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Streams(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Streams& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Streams& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Streams& operator=(Streams&& o) noexcept = default;
  constexpr Streams& operator=(Streams const& o) noexcept = default;
                


// Fields

/// @brief Field BufferSize offset 0
static constexpr int32_t  BufferSize{512};


// Methods

// Ctor Parameters []
explicit Streams() ;

/// @brief Method .ctor addr 0x10d3b1c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Drain addr 0x10d3b24 size 0x84 virtual false final false
static void Drain(::System::IO::Stream inStr) ;

/// @brief Method ReadAll addr 0x10d3ba8 size 0x78 virtual false final false
static ::ArrayW<uint8_t> ReadAll(::System::IO::Stream inStr) ;

/// @brief Method ReadAllLimited addr 0x10d3d00 size 0x88 virtual false final false
static ::ArrayW<uint8_t> ReadAllLimited(::System::IO::Stream inStr, int32_t limit) ;

/// @brief Method ReadFully addr 0x10d3ed0 size 0x1c virtual false final false
static int32_t ReadFully(::System::IO::Stream inStr, ::ArrayW<uint8_t> buf) ;

/// @brief Method ReadFully addr 0x10d3eec size 0x80 virtual false final false
static int32_t ReadFully(::System::IO::Stream inStr, ::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method PipeAll addr 0x10d3c20 size 0xe0 virtual false final false
static void PipeAll(::System::IO::Stream inStr, ::System::IO::Stream outStr) ;

/// @brief Method PipeAllLimited addr 0x10d3d88 size 0x148 virtual false final false
static int64_t PipeAllLimited(::System::IO::Stream inStr, int64_t limit, ::System::IO::Stream outStr) ;

/// @brief Method WriteBufTo addr 0x10d3f6c size 0x20 virtual false final false
static void WriteBufTo(::System::IO::MemoryStream buf, ::System::IO::Stream output) ;

/// @brief Method WriteBufTo addr 0x10d3f8c size 0xb4 virtual false final false
static int32_t WriteBufTo(::System::IO::MemoryStream buf, ::ArrayW<uint8_t> output, int32_t offset) ;

/// @brief Method WriteZeroes addr 0x10d4040 size 0xb0 virtual false final false
static void WriteZeroes(::System::IO::Stream outStr, int64_t count) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::IO
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::Streams);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::Streams, "Org.BouncyCastle.Utilities.IO", "Streams");
