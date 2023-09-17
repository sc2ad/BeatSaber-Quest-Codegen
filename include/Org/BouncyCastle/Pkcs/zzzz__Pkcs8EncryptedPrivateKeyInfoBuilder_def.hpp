#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class ICipherBuilder;
}
namespace Org::BouncyCastle::Pkcs {
class Pkcs8EncryptedPrivateKeyInfo;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class PrivateKeyInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class Pkcs8EncryptedPrivateKeyInfoBuilder;
}
// Type: Org.BouncyCastle.Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1704))
// CS Name: Org.BouncyCastle.Pkcs.Pkcs8EncryptedPrivateKeyInfoBuilder
class CORDL_TYPE Pkcs8EncryptedPrivateKeyInfoBuilder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Pkcs8EncryptedPrivateKeyInfoBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs8EncryptedPrivateKeyInfoBuilder", modifiers: " const&", def_value: None }]
constexpr Pkcs8EncryptedPrivateKeyInfoBuilder(Pkcs8EncryptedPrivateKeyInfoBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs8EncryptedPrivateKeyInfoBuilder", modifiers: "&&", def_value: None }]
constexpr Pkcs8EncryptedPrivateKeyInfoBuilder(Pkcs8EncryptedPrivateKeyInfoBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Pkcs8EncryptedPrivateKeyInfoBuilder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Pkcs8EncryptedPrivateKeyInfoBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Pkcs8EncryptedPrivateKeyInfoBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Pkcs8EncryptedPrivateKeyInfoBuilder& operator=(Pkcs8EncryptedPrivateKeyInfoBuilder&& o) noexcept = default;
  constexpr Pkcs8EncryptedPrivateKeyInfoBuilder& operator=(Pkcs8EncryptedPrivateKeyInfoBuilder const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo __declspec(property(get=__get_privateKeyInfo, put=__set_privateKeyInfo))  privateKeyInfo;

constexpr void __set_privateKeyInfo(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo value) ;

constexpr ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo __get_privateKeyInfo() const;


// Methods

// Ctor Parameters [CppParam { name: "privateKeyInfo", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit Pkcs8EncryptedPrivateKeyInfoBuilder(::ArrayW<uint8_t> privateKeyInfo) ;

/// @brief Method .ctor addr 0x105ac24 size 0x38 virtual false final false
 void _ctor(::ArrayW<uint8_t> privateKeyInfo) ;

// Ctor Parameters [CppParam { name: "privateKeyInfo", ty: "::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo", modifiers: "", def_value: None }]
explicit Pkcs8EncryptedPrivateKeyInfoBuilder(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo privateKeyInfo) ;

/// @brief Method .ctor addr 0x105ac5c size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo privateKeyInfo) ;

/// @brief Method Build addr 0x105ac84 size 0x400 virtual false final false
 ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo Build(::Org::BouncyCastle::Crypto::ICipherBuilder encryptor) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkcs
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder, "Org.BouncyCastle.Pkcs", "Pkcs8EncryptedPrivateKeyInfoBuilder");
