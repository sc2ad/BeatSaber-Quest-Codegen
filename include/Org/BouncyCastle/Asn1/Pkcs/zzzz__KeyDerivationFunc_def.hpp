#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class KeyDerivationFunc;
}
// Type: Org.BouncyCastle.Asn1.Pkcs::KeyDerivationFunc
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(235))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(238))
// CS Name: Org.BouncyCastle.Asn1.Pkcs.KeyDerivationFunc
class CORDL_TYPE KeyDerivationFunc : public Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~KeyDerivationFunc() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyDerivationFunc", modifiers: " const&", def_value: None }]
constexpr KeyDerivationFunc(KeyDerivationFunc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyDerivationFunc", modifiers: "&&", def_value: None }]
constexpr KeyDerivationFunc(KeyDerivationFunc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyDerivationFunc(void* ptr) noexcept : Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier(ptr) {
}


  constexpr KeyDerivationFunc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyDerivationFunc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyDerivationFunc& operator=(KeyDerivationFunc&& o) noexcept = default;
  constexpr KeyDerivationFunc& operator=(KeyDerivationFunc const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xefad34 size 0x4 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

static Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc New_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier id, Org::BouncyCastle::Asn1::Asn1Encodable parameters) ;

/// @brief Method .ctor addr 0xefad38 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier id, Org::BouncyCastle::Asn1::Asn1Encodable parameters) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc, "Org.BouncyCastle.Asn1.Pkcs", "KeyDerivationFunc");
