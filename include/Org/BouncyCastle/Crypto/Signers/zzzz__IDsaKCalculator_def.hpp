#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class IDsaKCalculator;
}
// Type: Org.BouncyCastle.Crypto.Signers::IDsaKCalculator
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1142))
// CS Name: Org.BouncyCastle.Crypto.Signers.IDsaKCalculator
class CORDL_TYPE IDsaKCalculator : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IDsaKCalculator() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDsaKCalculator(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_IsDeterministic))  IsDeterministic;


// Methods

/// @brief Method get_IsDeterministic addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsDeterministic() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(Org::BouncyCastle::Math::BigInteger n, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(Org::BouncyCastle::Math::BigInteger n, Org::BouncyCastle::Math::BigInteger d, ::ArrayW<uint8_t> message) ;

/// @brief Method NextK addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::BigInteger NextK() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(Org::BouncyCastle::Crypto::Signers::IDsaKCalculator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::IDsaKCalculator, "Org.BouncyCastle.Crypto.Signers", "IDsaKCalculator");
