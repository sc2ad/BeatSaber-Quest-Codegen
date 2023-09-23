#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Null;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509SignatureUtilities;
}
// Type: Org.BouncyCastle.X509::X509SignatureUtilities
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1868))
// CS Name: Org.BouncyCastle.X509.X509SignatureUtilities
class CORDL_TYPE X509SignatureUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~X509SignatureUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509SignatureUtilities", modifiers: " const&", def_value: None }]
constexpr X509SignatureUtilities(X509SignatureUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509SignatureUtilities", modifiers: "&&", def_value: None }]
constexpr X509SignatureUtilities(X509SignatureUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509SignatureUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509SignatureUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509SignatureUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509SignatureUtilities& operator=(X509SignatureUtilities&& o) noexcept = default;
  constexpr X509SignatureUtilities& operator=(X509SignatureUtilities const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::Asn1Null __declspec(property(get=__get_derNull, put=__set_derNull))  derNull;

static void __set_derNull(Org::BouncyCastle::Asn1::Asn1Null value) ;

static Org::BouncyCastle::Asn1::Asn1Null __get_derNull() ;


// Methods

/// @brief Method SetSignatureParameters addr 0x10f4da0 size 0x7c virtual false final false
static void SetSignatureParameters(Org::BouncyCastle::Crypto::ISigner signature, Org::BouncyCastle::Asn1::Asn1Encodable parameters) ;

/// @brief Method GetSignatureName addr 0x10ed3b8 size 0x2e4 virtual false final false
static ::StringW GetSignatureName(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier sigAlgId) ;

/// @brief Method GetDigestAlgName addr 0x10f4e1c size 0x370 virtual false final false
static ::StringW GetDigestAlgName(Org::BouncyCastle::Asn1::DerObjectIdentifier digestAlgOID) ;

// Ctor Parameters []
explicit X509SignatureUtilities() ;

/// @brief Method .ctor addr 0x10f5204 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509
NEED_NO_BOX(Org::BouncyCastle::X509::X509SignatureUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::X509SignatureUtilities, "Org.BouncyCastle.X509", "X509SignatureUtilities");
