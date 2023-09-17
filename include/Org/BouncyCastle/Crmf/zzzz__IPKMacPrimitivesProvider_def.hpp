#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace {
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class IPKMacPrimitivesProvider;
}
// Type: Org.BouncyCastle.Crmf::IPKMacPrimitivesProvider
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(699))
// CS Name: Org.BouncyCastle.Crmf.IPKMacPrimitivesProvider
class CORDL_TYPE IPKMacPrimitivesProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IPKMacPrimitivesProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPKMacPrimitivesProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method CreateDigest addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Crypto::IDigest CreateDigest(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digestAlg) ;

/// @brief Method CreateMac addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Crypto::IMac CreateMac(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier macAlg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crmf
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider, "Org.BouncyCastle.Crmf", "IPKMacPrimitivesProvider");
