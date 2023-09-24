#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO {
class NullOutputStream;
}
// Type: Org.BouncyCastle.Utilities.IO::NullOutputStream
namespace Org::BouncyCastle::Utilities::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(484))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1810))
// CS Name: Org.BouncyCastle.Utilities.IO.NullOutputStream
class CORDL_TYPE NullOutputStream : public Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~NullOutputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "NullOutputStream", modifiers: " const&", def_value: None }]
constexpr NullOutputStream(NullOutputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NullOutputStream", modifiers: "&&", def_value: None }]
constexpr NullOutputStream(NullOutputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NullOutputStream(void* ptr) noexcept : Org::BouncyCastle::Utilities::IO::BaseOutputStream(ptr) {
}


  constexpr NullOutputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NullOutputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NullOutputStream& operator=(NullOutputStream&& o) noexcept = default;
  constexpr NullOutputStream& operator=(NullOutputStream const& o) noexcept = default;
                


// Methods

/// @brief Method WriteByte addr 0x10d39f4 size 0x4 virtual true final false
 void WriteByte(uint8_t b) ;

/// @brief Method Write addr 0x10d39f8 size 0x4 virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

static Org::BouncyCastle::Utilities::IO::NullOutputStream New_ctor() ;

/// @brief Method .ctor addr 0x10d39fc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::IO
NEED_NO_BOX(Org::BouncyCastle::Utilities::IO::NullOutputStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::IO::NullOutputStream, "Org.BouncyCastle.Utilities.IO", "NullOutputStream");
