#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Zlib {
class Adler32;
}
// Type: Org.BouncyCastle.Utilities.Zlib::Adler32
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1817))
// CS Name: Org.BouncyCastle.Utilities.Zlib.Adler32
class CORDL_TYPE Adler32 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Adler32() = default;

// Ctor Parameters [CppParam { name: "", ty: "Adler32", modifiers: " const&", def_value: None }]
constexpr Adler32(Adler32 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Adler32", modifiers: "&&", def_value: None }]
constexpr Adler32(Adler32&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Adler32(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Adler32& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Adler32& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Adler32& operator=(Adler32&& o) noexcept = default;
  constexpr Adler32& operator=(Adler32 const& o) noexcept = default;
                


// Fields

/// @brief Field BASE offset 0
static constexpr int32_t  BASE{65521};

/// @brief Field NMAX offset 0
static constexpr int32_t  NMAX{5552};


// Methods

/// @brief Method adler32 addr 0x10d4968 size 0x32c virtual false final false
 int64_t adler32(int64_t adler, ::ArrayW<uint8_t> buf, int32_t index, int32_t len) ;

// Ctor Parameters []
explicit Adler32() ;

/// @brief Method .ctor addr 0x10d4c94 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Zlib
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Zlib::Adler32);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Zlib::Adler32, "Org.BouncyCastle.Utilities.Zlib", "Adler32");
