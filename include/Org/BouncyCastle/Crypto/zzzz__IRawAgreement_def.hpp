#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IRawAgreement;
}
// Type: Org.BouncyCastle.Crypto::IRawAgreement
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(742))
// CS Name: Org.BouncyCastle.Crypto.IRawAgreement
class CORDL_TYPE IRawAgreement : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IRawAgreement() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IRawAgreement(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_AgreementSize))  AgreementSize;


// Methods

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AgreementSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_AgreementSize() ;

/// @brief Method CalculateAgreement addr 0x0 size 0xffffffffffffffff virtual true final false
 void CalculateAgreement(Org::BouncyCastle::Crypto::ICipherParameters publicKey, ::ArrayW<uint8_t> buf, int32_t off) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(Org::BouncyCastle::Crypto::IRawAgreement);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::IRawAgreement, "Org.BouncyCastle.Crypto", "IRawAgreement");
