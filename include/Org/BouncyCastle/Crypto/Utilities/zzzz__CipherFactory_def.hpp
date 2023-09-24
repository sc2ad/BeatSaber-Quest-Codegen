#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class BufferedBlockCipher;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Utilities {
class CipherFactory;
}
// Type: Org.BouncyCastle.Crypto.Utilities::CipherFactory
namespace Org::BouncyCastle::Crypto::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1337))
// CS Name: Org.BouncyCastle.Crypto.Utilities.CipherFactory
class CORDL_TYPE CipherFactory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CipherFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "CipherFactory", modifiers: " const&", def_value: None }]
constexpr CipherFactory(CipherFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CipherFactory", modifiers: "&&", def_value: None }]
constexpr CipherFactory(CipherFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CipherFactory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CipherFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CipherFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CipherFactory& operator=(CipherFactory&& o) noexcept = default;
  constexpr CipherFactory& operator=(CipherFactory const& o) noexcept = default;
                


// Fields

static ::ArrayW<int16_t> __declspec(property(get=__get_rc2Ekb, put=__set_rc2Ekb))  rc2Ekb;

static void __set_rc2Ekb(::ArrayW<int16_t> value) ;

static ::ArrayW<int16_t> __get_rc2Ekb() ;


// Methods

static Org::BouncyCastle::Crypto::Utilities::CipherFactory New_ctor() ;

/// @brief Method .ctor addr 0xf335ec size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CreateContentCipher addr 0xf335f4 size 0x758 virtual false final false
static ::bs_hook::Il2CppWrapperType CreateContentCipher(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters encKey, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier encryptionAlgID) ;

/// @brief Method CreateCipher addr 0xf33d4c size 0x3b8 virtual false final false
static Org::BouncyCastle::Crypto::BufferedBlockCipher CreateCipher(Org::BouncyCastle::Asn1::DerObjectIdentifier algorithm) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Utilities
NEED_NO_BOX(Org::BouncyCastle::Crypto::Utilities::CipherFactory);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Utilities::CipherFactory, "Org.BouncyCastle.Crypto.Utilities", "CipherFactory");
