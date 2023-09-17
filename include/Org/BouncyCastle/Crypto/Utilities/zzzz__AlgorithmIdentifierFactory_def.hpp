#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Utilities {
class AlgorithmIdentifierFactory;
}
// Type: Org.BouncyCastle.Crypto.Utilities::AlgorithmIdentifierFactory
namespace Org::BouncyCastle::Crypto::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1336))
// CS Name: Org.BouncyCastle.Crypto.Utilities.AlgorithmIdentifierFactory
class CORDL_TYPE AlgorithmIdentifierFactory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AlgorithmIdentifierFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "AlgorithmIdentifierFactory", modifiers: " const&", def_value: None }]
constexpr AlgorithmIdentifierFactory(AlgorithmIdentifierFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AlgorithmIdentifierFactory", modifiers: "&&", def_value: None }]
constexpr AlgorithmIdentifierFactory(AlgorithmIdentifierFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AlgorithmIdentifierFactory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AlgorithmIdentifierFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AlgorithmIdentifierFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AlgorithmIdentifierFactory& operator=(AlgorithmIdentifierFactory&& o) noexcept = default;
  constexpr AlgorithmIdentifierFactory& operator=(AlgorithmIdentifierFactory const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IDEA_CBC, put=__set_IDEA_CBC))  IDEA_CBC;

static void __set_IDEA_CBC(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IDEA_CBC() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_CAST5_CBC, put=__set_CAST5_CBC))  CAST5_CBC;

static void __set_CAST5_CBC(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_CAST5_CBC() ;

static ::ArrayW<int16_t> __declspec(property(get=__get_rc2Table, put=__set_rc2Table))  rc2Table;

static void __set_rc2Table(::ArrayW<int16_t> value) ;

static ::ArrayW<int16_t> __get_rc2Table() ;


// Methods

/// @brief Method GenerateEncryptionAlgID addr 0xf32f64 size 0x55c virtual false final false
static ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier GenerateEncryptionAlgID(::Org::BouncyCastle::Asn1::DerObjectIdentifier encryptionOID, int32_t keySize, ::Org::BouncyCastle::Security::SecureRandom random) ;

// Ctor Parameters []
explicit AlgorithmIdentifierFactory() ;

/// @brief Method .ctor addr 0xf335e4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Utilities
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory, "Org.BouncyCastle.Crypto.Utilities", "AlgorithmIdentifierFactory");
