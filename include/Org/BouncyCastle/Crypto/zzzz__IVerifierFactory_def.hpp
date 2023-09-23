#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Crypto {
class IStreamCalculator;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IVerifierFactory;
}
// Type: Org.BouncyCastle.Crypto::IVerifierFactory
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(993))
// CS Name: Org.BouncyCastle.Crypto.IVerifierFactory
class CORDL_TYPE IVerifierFactory : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IVerifierFactory() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IVerifierFactory(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_AlgorithmDetails))  AlgorithmDetails;


// Methods

/// @brief Method get_AlgorithmDetails addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType get_AlgorithmDetails() ;

/// @brief Method CreateCalculator addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::IStreamCalculator CreateCalculator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(Org::BouncyCastle::Crypto::IVerifierFactory);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::IVerifierFactory, "Org.BouncyCastle.Crypto", "IVerifierFactory");
