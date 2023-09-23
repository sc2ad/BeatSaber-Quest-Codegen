#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IBasicAgreement;
}
// Type: Org.BouncyCastle.Crypto::IBasicAgreement
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(733))
// CS Name: Org.BouncyCastle.Crypto.IBasicAgreement
class CORDL_TYPE IBasicAgreement : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IBasicAgreement() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IBasicAgreement(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetFieldSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetFieldSize() ;

/// @brief Method CalculateAgreement addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::BigInteger CalculateAgreement(Org::BouncyCastle::Crypto::ICipherParameters pubKey) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(Org::BouncyCastle::Crypto::IBasicAgreement);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::IBasicAgreement, "Org.BouncyCastle.Crypto", "IBasicAgreement");
