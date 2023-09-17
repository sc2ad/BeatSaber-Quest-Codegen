#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::Kdf {
class ECDHKekGenerator;
}
// Type: Org.BouncyCastle.Crypto.Agreement.Kdf::ECDHKekGenerator
namespace Org::BouncyCastle::Crypto::Agreement::Kdf {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(726))
// CS Name: Org.BouncyCastle.Crypto.Agreement.Kdf.ECDHKekGenerator
class CORDL_TYPE ECDHKekGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IDerivationFunction
constexpr operator  ::Org::BouncyCastle::Crypto::IDerivationFunction() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ECDHKekGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECDHKekGenerator", modifiers: " const&", def_value: None }]
constexpr ECDHKekGenerator(ECDHKekGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECDHKekGenerator", modifiers: "&&", def_value: None }]
constexpr ECDHKekGenerator(ECDHKekGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECDHKekGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ECDHKekGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECDHKekGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECDHKekGenerator& operator=(ECDHKekGenerator&& o) noexcept = default;
  constexpr ECDHKekGenerator& operator=(ECDHKekGenerator const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::IDerivationFunction __declspec(property(get=__get_kdf, put=__set_kdf))  kdf;

constexpr void __set_kdf(::Org::BouncyCastle::Crypto::IDerivationFunction value) ;

constexpr ::Org::BouncyCastle::Crypto::IDerivationFunction __get_kdf() const;

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_algorithm, put=__set_algorithm))  algorithm;

constexpr void __set_algorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_algorithm() const;

 int32_t __declspec(property(get=__get_keySize, put=__set_keySize))  keySize;

constexpr void __set_keySize(int32_t value) ;

constexpr int32_t __get_keySize() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_z, put=__set_z))  z;

constexpr void __set_z(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_z() const;


// Properties

 ::Org::BouncyCastle::Crypto::IDigest __declspec(property(get=get_Digest))  Digest;


// Methods

// Ctor Parameters [CppParam { name: "digest", ty: "::Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }]
explicit ECDHKekGenerator(::Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method .ctor addr 0x118c3c0 size 0x7c virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method Init addr 0x118c43c size 0x98 virtual true final false
 void Init(::Org::BouncyCastle::Crypto::IDerivationParameters param) ;

/// @brief Method get_Digest addr 0x118c4d4 size 0xa4 virtual true final false
 ::Org::BouncyCastle::Crypto::IDigest get_Digest() ;

/// @brief Method GenerateBytes addr 0x118c578 size 0x318 virtual true final false
 int32_t GenerateBytes(::ArrayW<uint8_t> outBytes, int32_t outOff, int32_t len) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Agreement::Kdf
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator, "Org.BouncyCastle.Crypto.Agreement.Kdf", "ECDHKekGenerator");
