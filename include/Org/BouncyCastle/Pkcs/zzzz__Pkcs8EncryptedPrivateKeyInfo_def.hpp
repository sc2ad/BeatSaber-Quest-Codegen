#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1::Pkcs {
class EncryptedPrivateKeyInfo;
}
namespace Org::BouncyCastle::Crypto {
class IDecryptorBuilderProvider;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class PrivateKeyInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class Pkcs8EncryptedPrivateKeyInfo;
}
// Type: Org.BouncyCastle.Pkcs::Pkcs8EncryptedPrivateKeyInfo
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1703))
// CS Name: Org.BouncyCastle.Pkcs.Pkcs8EncryptedPrivateKeyInfo
class CORDL_TYPE Pkcs8EncryptedPrivateKeyInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Pkcs8EncryptedPrivateKeyInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs8EncryptedPrivateKeyInfo", modifiers: " const&", def_value: None }]
constexpr Pkcs8EncryptedPrivateKeyInfo(Pkcs8EncryptedPrivateKeyInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs8EncryptedPrivateKeyInfo", modifiers: "&&", def_value: None }]
constexpr Pkcs8EncryptedPrivateKeyInfo(Pkcs8EncryptedPrivateKeyInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Pkcs8EncryptedPrivateKeyInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Pkcs8EncryptedPrivateKeyInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Pkcs8EncryptedPrivateKeyInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Pkcs8EncryptedPrivateKeyInfo& operator=(Pkcs8EncryptedPrivateKeyInfo&& o) noexcept = default;
  constexpr Pkcs8EncryptedPrivateKeyInfo& operator=(Pkcs8EncryptedPrivateKeyInfo const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo __declspec(property(get=__get_encryptedPrivateKeyInfo, put=__set_encryptedPrivateKeyInfo))  encryptedPrivateKeyInfo;

constexpr void __set_encryptedPrivateKeyInfo(::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo value) ;

constexpr ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo __get_encryptedPrivateKeyInfo() const;


// Methods

/// @brief Method parseBytes addr 0x105a62c size 0x120 virtual false final false
static ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo parseBytes(::ArrayW<uint8_t> pkcs8Encoding) ;

// Ctor Parameters [CppParam { name: "encryptedPrivateKeyInfo", ty: "::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo", modifiers: "", def_value: None }]
explicit Pkcs8EncryptedPrivateKeyInfo(::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo encryptedPrivateKeyInfo) ;

/// @brief Method .ctor addr 0x105a754 size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo encryptedPrivateKeyInfo) ;

// Ctor Parameters [CppParam { name: "encryptedPrivateKeyInfo", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit Pkcs8EncryptedPrivateKeyInfo(::ArrayW<uint8_t> encryptedPrivateKeyInfo) ;

/// @brief Method .ctor addr 0x105a77c size 0x34 virtual false final false
 void _ctor(::ArrayW<uint8_t> encryptedPrivateKeyInfo) ;

/// @brief Method ToAsn1Structure addr 0x105a7b0 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo ToAsn1Structure() ;

/// @brief Method GetEncryptedData addr 0x105a7b8 size 0x1c virtual false final false
 ::ArrayW<uint8_t> GetEncryptedData() ;

/// @brief Method GetEncoded addr 0x105a7d4 size 0x1c virtual false final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method DecryptPrivateKeyInfo addr 0x105a7f0 size 0x3c4 virtual false final false
 ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo DecryptPrivateKeyInfo(::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider inputDecryptorProvider) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkcs
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo, "Org.BouncyCastle.Pkcs", "Pkcs8EncryptedPrivateKeyInfo");
