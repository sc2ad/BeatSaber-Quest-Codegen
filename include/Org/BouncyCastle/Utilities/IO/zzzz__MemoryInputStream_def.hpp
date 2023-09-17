#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO {
class MemoryInputStream;
}
// Type: Org.BouncyCastle.Utilities.IO::MemoryInputStream
namespace Org::BouncyCastle::Utilities::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1808))
// CS Name: Org.BouncyCastle.Utilities.IO.MemoryInputStream
class CORDL_TYPE MemoryInputStream : public ::System::IO::MemoryStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~MemoryInputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryInputStream", modifiers: " const&", def_value: None }]
constexpr MemoryInputStream(MemoryInputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryInputStream", modifiers: "&&", def_value: None }]
constexpr MemoryInputStream(MemoryInputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemoryInputStream(void* ptr) noexcept : ::System::IO::MemoryStream(ptr) {
}


  constexpr MemoryInputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemoryInputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemoryInputStream& operator=(MemoryInputStream&& o) noexcept = default;
  constexpr MemoryInputStream& operator=(MemoryInputStream const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_CanWrite))  CanWrite;


// Methods

// Ctor Parameters [CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit MemoryInputStream(::ArrayW<uint8_t> buffer) ;

/// @brief Method .ctor addr 0x10d39d0 size 0xc virtual false final false
 void _ctor(::ArrayW<uint8_t> buffer) ;

/// @brief Method get_CanWrite addr 0x10d39dc size 0x8 virtual true final true
 bool get_CanWrite() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::IO
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::MemoryInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::MemoryInputStream, "Org.BouncyCastle.Utilities.IO", "MemoryInputStream");
