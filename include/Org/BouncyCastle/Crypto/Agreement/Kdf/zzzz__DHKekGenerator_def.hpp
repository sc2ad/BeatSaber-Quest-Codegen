#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::Kdf {
class DHKekGenerator;
}
// Type: Org.BouncyCastle.Crypto.Agreement.Kdf::DHKekGenerator
namespace Org::BouncyCastle::Crypto::Agreement::Kdf {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(725))
// CS Name: Org.BouncyCastle.Crypto.Agreement.Kdf.DHKekGenerator
class CORDL_TYPE DHKekGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IDerivationFunction
constexpr operator  Org::BouncyCastle::Crypto::IDerivationFunction() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~DHKekGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "DHKekGenerator", modifiers: " const&", def_value: None }]
constexpr DHKekGenerator(DHKekGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DHKekGenerator", modifiers: "&&", def_value: None }]
constexpr DHKekGenerator(DHKekGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DHKekGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DHKekGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DHKekGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DHKekGenerator& operator=(DHKekGenerator&& o) noexcept = default;
  constexpr DHKekGenerator& operator=(DHKekGenerator const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_digest, put=__set_digest))  digest;

constexpr void __set_digest(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_digest() const;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_algorithm, put=__set_algorithm))  algorithm;

constexpr void __set_algorithm(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_algorithm() const;

 int32_t __declspec(property(get=__get_keySize, put=__set_keySize))  keySize;

constexpr void __set_keySize(int32_t value) ;

constexpr int32_t __get_keySize() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_z, put=__set_z))  z;

constexpr void __set_z(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_z() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_partyAInfo, put=__set_partyAInfo))  partyAInfo;

constexpr void __set_partyAInfo(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_partyAInfo() const;


// Properties

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=get_Digest))  Digest;


// Methods

// Ctor Parameters [CppParam { name: "digest", ty: "Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }]
explicit DHKekGenerator(Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method .ctor addr 0x118bc48 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method Init addr 0x118bc70 size 0x98 virtual true final false
 void Init(Org::BouncyCastle::Crypto::IDerivationParameters param) ;

/// @brief Method get_Digest addr 0x118bd08 size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::IDigest get_Digest() ;

/// @brief Method GenerateBytes addr 0x118bd10 size 0x6b0 virtual true final false
 int32_t GenerateBytes(::ArrayW<uint8_t> outBytes, int32_t outOff, int32_t len) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Agreement::Kdf
NEED_NO_BOX(Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator, "Org.BouncyCastle.Crypto.Agreement.Kdf", "DHKekGenerator");
