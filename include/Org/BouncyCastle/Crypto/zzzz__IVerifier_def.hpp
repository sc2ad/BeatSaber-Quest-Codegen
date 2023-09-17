#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IVerifier;
}
// Type: Org.BouncyCastle.Crypto::IVerifier
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1002))
// CS Name: Org.BouncyCastle.Crypto.IVerifier
class CORDL_TYPE IVerifier : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IVerifier() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IVerifier(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method IsVerified addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsVerified(::ArrayW<uint8_t> data) ;

/// @brief Method IsVerified addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsVerified(::ArrayW<uint8_t> source, int32_t off, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IVerifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IVerifier, "Org.BouncyCastle.Crypto", "IVerifier");
