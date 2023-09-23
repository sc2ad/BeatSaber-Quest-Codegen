#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::Pkcs {
class EncryptedPrivateKeyInfo;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class PrivateKeyInfo;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class PrivateKeyInfoFactory;
}
// Type: Org.BouncyCastle.Pkcs::PrivateKeyInfoFactory
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1707))
// CS Name: Org.BouncyCastle.Pkcs.PrivateKeyInfoFactory
class CORDL_TYPE PrivateKeyInfoFactory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PrivateKeyInfoFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "PrivateKeyInfoFactory", modifiers: " const&", def_value: None }]
constexpr PrivateKeyInfoFactory(PrivateKeyInfoFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PrivateKeyInfoFactory", modifiers: "&&", def_value: None }]
constexpr PrivateKeyInfoFactory(PrivateKeyInfoFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PrivateKeyInfoFactory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PrivateKeyInfoFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PrivateKeyInfoFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PrivateKeyInfoFactory& operator=(PrivateKeyInfoFactory&& o) noexcept = default;
  constexpr PrivateKeyInfoFactory& operator=(PrivateKeyInfoFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit PrivateKeyInfoFactory() ;

/// @brief Method .ctor addr 0x105b0f4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CreatePrivateKeyInfo addr 0x105b0fc size 0x8 virtual false final false
static Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo CreatePrivateKeyInfo(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey) ;

/// @brief Method CreatePrivateKeyInfo addr 0x105b104 size 0xfa8 virtual false final false
static Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo CreatePrivateKeyInfo(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, Org::BouncyCastle::Asn1::Asn1Set attributes) ;

/// @brief Method CreatePrivateKeyInfo addr 0x105c1b8 size 0xc virtual false final false
static Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo CreatePrivateKeyInfo(::ArrayW<char16_t> passPhrase, Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo encInfo) ;

/// @brief Method CreatePrivateKeyInfo addr 0x105c1c4 size 0x21c virtual false final false
static Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo CreatePrivateKeyInfo(::ArrayW<char16_t> passPhrase, bool wrongPkcs12Zero, Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo encInfo) ;

/// @brief Method ExtractBytes addr 0x105c0ac size 0x10c virtual false final false
static void ExtractBytes(::ArrayW<uint8_t> encKey, int32_t size, int32_t offSet, Org::BouncyCastle::Math::BigInteger bI) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkcs
NEED_NO_BOX(Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory, "Org.BouncyCastle.Pkcs", "PrivateKeyInfoFactory");
