#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1::Cms {
class SignerInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class ISignerInfoGenerator;
}
// Type: Org.BouncyCastle.Cms::ISignerInfoGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(657))
// CS Name: Org.BouncyCastle.Cms.ISignerInfoGenerator
class CORDL_TYPE ISignerInfoGenerator : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISignerInfoGenerator() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISignerInfoGenerator(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Generate addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Asn1::Cms::SignerInfo Generate(::Org::BouncyCastle::Asn1::DerObjectIdentifier contentType, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digestAlgorithm, ::ArrayW<uint8_t> calculatedDigest) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Cms::ISignerInfoGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::ISignerInfoGenerator, "Org.BouncyCastle.Cms", "ISignerInfoGenerator");
