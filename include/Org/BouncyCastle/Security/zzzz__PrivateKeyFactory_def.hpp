#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class PrivateKeyInfo;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class EncryptedPrivateKeyInfo;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class PrivateKeyFactory;
}
// Type: Org.BouncyCastle.Security::PrivateKeyFactory
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1755))
// CS Name: Org.BouncyCastle.Security.PrivateKeyFactory
class CORDL_TYPE PrivateKeyFactory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PrivateKeyFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "PrivateKeyFactory", modifiers: " const&", def_value: None }]
constexpr PrivateKeyFactory(PrivateKeyFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PrivateKeyFactory", modifiers: "&&", def_value: None }]
constexpr PrivateKeyFactory(PrivateKeyFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PrivateKeyFactory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PrivateKeyFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PrivateKeyFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PrivateKeyFactory& operator=(PrivateKeyFactory&& o) noexcept = default;
  constexpr PrivateKeyFactory& operator=(PrivateKeyFactory const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Security::PrivateKeyFactory New_ctor() ;

/// @brief Method .ctor addr 0x10b0e08 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CreateKey addr 0x10b0e10 size 0x1c virtual false final false
static Org::BouncyCastle::Crypto::AsymmetricKeyParameter CreateKey(::ArrayW<uint8_t> privateKeyInfoData) ;

/// @brief Method CreateKey addr 0x10b22b4 size 0x1c virtual false final false
static Org::BouncyCastle::Crypto::AsymmetricKeyParameter CreateKey(System::IO::Stream inStr) ;

/// @brief Method CreateKey addr 0x10b0e2c size 0x1488 virtual false final false
static Org::BouncyCastle::Crypto::AsymmetricKeyParameter CreateKey(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo keyInfo) ;

/// @brief Method GetRawKey addr 0x10b22d0 size 0x98 virtual false final false
static ::ArrayW<uint8_t> GetRawKey(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo keyInfo, int32_t expectedSize) ;

/// @brief Method DecryptKey addr 0x10b2368 size 0x14 virtual false final false
static Org::BouncyCastle::Crypto::AsymmetricKeyParameter DecryptKey(::ArrayW<char16_t> passPhrase, Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo encInfo) ;

/// @brief Method DecryptKey addr 0x10b237c size 0x24 virtual false final false
static Org::BouncyCastle::Crypto::AsymmetricKeyParameter DecryptKey(::ArrayW<char16_t> passPhrase, ::ArrayW<uint8_t> encryptedPrivateKeyInfoData) ;

/// @brief Method DecryptKey addr 0x10b23cc size 0x24 virtual false final false
static Org::BouncyCastle::Crypto::AsymmetricKeyParameter DecryptKey(::ArrayW<char16_t> passPhrase, System::IO::Stream encryptedPrivateKeyInfoStream) ;

/// @brief Method DecryptKey addr 0x10b23a0 size 0x2c virtual false final false
static Org::BouncyCastle::Crypto::AsymmetricKeyParameter DecryptKey(::ArrayW<char16_t> passPhrase, Org::BouncyCastle::Asn1::Asn1Object asn1Object) ;

/// @brief Method EncryptKey addr 0x10b23f0 size 0x20 virtual false final false
static ::ArrayW<uint8_t> EncryptKey(Org::BouncyCastle::Asn1::DerObjectIdentifier algorithm, ::ArrayW<char16_t> passPhrase, ::ArrayW<uint8_t> salt, int32_t iterationCount, Org::BouncyCastle::Crypto::AsymmetricKeyParameter key) ;

/// @brief Method EncryptKey addr 0x10b2410 size 0x1020 virtual false final false
static ::ArrayW<uint8_t> EncryptKey(::StringW algorithm, ::ArrayW<char16_t> passPhrase, ::ArrayW<uint8_t> salt, int32_t iterationCount, Org::BouncyCastle::Crypto::AsymmetricKeyParameter key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security
NEED_NO_BOX(Org::BouncyCastle::Security::PrivateKeyFactory);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::PrivateKeyFactory, "Org.BouncyCastle.Security", "PrivateKeyFactory");
