#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class IKeyUnwrapper;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class IBlockResult;
}
namespace Org::BouncyCastle::Crypto {
class IKeyWrapper;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class RsaOaepWrapper;
}
// Type: Org.BouncyCastle.Crypto.Operators::RsaOaepWrapper
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(988))
// CS Name: Org.BouncyCastle.Crypto.Operators.RsaOaepWrapper
class CORDL_TYPE RsaOaepWrapper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IKeyWrapper
constexpr operator  Org::BouncyCastle::Crypto::IKeyWrapper() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Crypto::IKeyUnwrapper
constexpr operator  Org::BouncyCastle::Crypto::IKeyUnwrapper() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RsaOaepWrapper() = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaOaepWrapper", modifiers: " const&", def_value: None }]
constexpr RsaOaepWrapper(RsaOaepWrapper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaOaepWrapper", modifiers: "&&", def_value: None }]
constexpr RsaOaepWrapper(RsaOaepWrapper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RsaOaepWrapper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RsaOaepWrapper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RsaOaepWrapper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RsaOaepWrapper& operator=(RsaOaepWrapper&& o) noexcept = default;
  constexpr RsaOaepWrapper& operator=(RsaOaepWrapper const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_algId, put=__set_algId))  algId;

constexpr void __set_algId(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_algId() const;

 Org::BouncyCastle::Crypto::IAsymmetricBlockCipher __declspec(property(get=__get_engine, put=__set_engine))  engine;

constexpr void __set_engine(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::IAsymmetricBlockCipher __get_engine() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_AlgorithmDetails))  AlgorithmDetails;


// Methods

static Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper New_ctor(bool forWrapping, Org::BouncyCastle::Crypto::ICipherParameters parameters, Org::BouncyCastle::Asn1::DerObjectIdentifier digestOid) ;

/// @brief Method .ctor addr 0xe9c198 size 0x2a0 virtual false final false
 void _ctor(bool forWrapping, Org::BouncyCastle::Crypto::ICipherParameters parameters, Org::BouncyCastle::Asn1::DerObjectIdentifier digestOid) ;

/// @brief Method get_AlgorithmDetails addr 0xe9c438 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType get_AlgorithmDetails() ;

/// @brief Method Unwrap addr 0xe9c440 size 0x104 virtual true final true
 Org::BouncyCastle::Crypto::IBlockResult Unwrap(::ArrayW<uint8_t> cipherText, int32_t offset, int32_t length) ;

/// @brief Method Wrap addr 0xe9c544 size 0x104 virtual true final true
 Org::BouncyCastle::Crypto::IBlockResult Wrap(::ArrayW<uint8_t> keyData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper, "Org.BouncyCastle.Crypto.Operators", "RsaOaepWrapper");
