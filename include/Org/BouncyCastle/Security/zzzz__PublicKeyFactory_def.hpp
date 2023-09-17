#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHPublicKeyParameters;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class PublicKeyFactory;
}
// Type: Org.BouncyCastle.Security::PublicKeyFactory
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1756))
// CS Name: Org.BouncyCastle.Security.PublicKeyFactory
class CORDL_TYPE PublicKeyFactory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PublicKeyFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "PublicKeyFactory", modifiers: " const&", def_value: None }]
constexpr PublicKeyFactory(PublicKeyFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PublicKeyFactory", modifiers: "&&", def_value: None }]
constexpr PublicKeyFactory(PublicKeyFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PublicKeyFactory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PublicKeyFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PublicKeyFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PublicKeyFactory& operator=(PublicKeyFactory&& o) noexcept = default;
  constexpr PublicKeyFactory& operator=(PublicKeyFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit PublicKeyFactory() ;

/// @brief Method .ctor addr 0x10b3430 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CreateKey addr 0x10b3438 size 0x1c virtual false final false
static ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter CreateKey(::ArrayW<uint8_t> keyInfoData) ;

/// @brief Method CreateKey addr 0x10b49d8 size 0x1c virtual false final false
static ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter CreateKey(::System::IO::Stream inStr) ;

/// @brief Method CreateKey addr 0x10b3454 size 0x1584 virtual false final false
static ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter CreateKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo keyInfo) ;

/// @brief Method GetRawKey addr 0x10b4c6c size 0x84 virtual false final false
static ::ArrayW<uint8_t> GetRawKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo keyInfo, int32_t expectedSize) ;

/// @brief Method IsPkcsDHParam addr 0x10b49f4 size 0x140 virtual false final false
static bool IsPkcsDHParam(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method ReadPkcsDHParam addr 0x10b4b34 size 0x138 virtual false final false
static ::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters ReadPkcsDHParam(::Org::BouncyCastle::Asn1::DerObjectIdentifier algOid, ::Org::BouncyCastle::Math::BigInteger y, ::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Security::PublicKeyFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::PublicKeyFactory, "Org.BouncyCastle.Security", "PublicKeyFactory");
