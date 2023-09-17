#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
namespace Org::BouncyCastle::Crypto {
class IMacDerivationFunction;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class KdfCounterBytesGenerator;
}
// Type: Org.BouncyCastle.Crypto.Generators::KdfCounterBytesGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(910))
// CS Name: Org.BouncyCastle.Crypto.Generators.KdfCounterBytesGenerator
class CORDL_TYPE KdfCounterBytesGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IMacDerivationFunction
constexpr operator  ::Org::BouncyCastle::Crypto::IMacDerivationFunction() const noexcept;

/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IDerivationFunction
constexpr operator  ::Org::BouncyCastle::Crypto::IDerivationFunction() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~KdfCounterBytesGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "KdfCounterBytesGenerator", modifiers: " const&", def_value: None }]
constexpr KdfCounterBytesGenerator(KdfCounterBytesGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KdfCounterBytesGenerator", modifiers: "&&", def_value: None }]
constexpr KdfCounterBytesGenerator(KdfCounterBytesGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KdfCounterBytesGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KdfCounterBytesGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KdfCounterBytesGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KdfCounterBytesGenerator& operator=(KdfCounterBytesGenerator&& o) noexcept = default;
  constexpr KdfCounterBytesGenerator& operator=(KdfCounterBytesGenerator const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_IntegerMax, put=__set_IntegerMax))  IntegerMax;

static void __set_IntegerMax(::Org::BouncyCastle::Math::BigInteger value) ;

static ::Org::BouncyCastle::Math::BigInteger __get_IntegerMax() ;

static ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_Two, put=__set_Two))  Two;

static void __set_Two(::Org::BouncyCastle::Math::BigInteger value) ;

static ::Org::BouncyCastle::Math::BigInteger __get_Two() ;

 ::Org::BouncyCastle::Crypto::IMac __declspec(property(get=__get_prf, put=__set_prf))  prf;

constexpr void __set_prf(::Org::BouncyCastle::Crypto::IMac value) ;

constexpr ::Org::BouncyCastle::Crypto::IMac __get_prf() const;

 int32_t __declspec(property(get=__get_h, put=__set_h))  h;

constexpr void __set_h(int32_t value) ;

constexpr int32_t __get_h() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_fixedInputDataCtrPrefix, put=__set_fixedInputDataCtrPrefix))  fixedInputDataCtrPrefix;

constexpr void __set_fixedInputDataCtrPrefix(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_fixedInputDataCtrPrefix() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_fixedInputData_afterCtr, put=__set_fixedInputData_afterCtr))  fixedInputData_afterCtr;

constexpr void __set_fixedInputData_afterCtr(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_fixedInputData_afterCtr() const;

 int32_t __declspec(property(get=__get_maxSizeExcl, put=__set_maxSizeExcl))  maxSizeExcl;

constexpr void __set_maxSizeExcl(int32_t value) ;

constexpr int32_t __get_maxSizeExcl() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_ios, put=__set_ios))  ios;

constexpr void __set_ios(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_ios() const;

 int32_t __declspec(property(get=__get_generatedBytes, put=__set_generatedBytes))  generatedBytes;

constexpr void __set_generatedBytes(int32_t value) ;

constexpr int32_t __get_generatedBytes() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_k, put=__set_k))  k;

constexpr void __set_k(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_k() const;


// Properties

 ::Org::BouncyCastle::Crypto::IDigest __declspec(property(get=get_Digest))  Digest;


// Methods

// Ctor Parameters [CppParam { name: "prf", ty: "::Org::BouncyCastle::Crypto::IMac", modifiers: "", def_value: None }]
explicit KdfCounterBytesGenerator(::Org::BouncyCastle::Crypto::IMac prf) ;

/// @brief Method .ctor addr 0xe71218 size 0xe0 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::IMac prf) ;

/// @brief Method Init addr 0xe712f8 size 0x2a4 virtual true final true
 void Init(::Org::BouncyCastle::Crypto::IDerivationParameters param) ;

/// @brief Method GetMac addr 0xe7159c size 0x8 virtual true final true
 ::Org::BouncyCastle::Crypto::IMac GetMac() ;

/// @brief Method get_Digest addr 0xe715a4 size 0x88 virtual true final true
 ::Org::BouncyCastle::Crypto::IDigest get_Digest() ;

/// @brief Method GenerateBytes addr 0xe7162c size 0x208 virtual true final true
 int32_t GenerateBytes(::ArrayW<uint8_t> output, int32_t outOff, int32_t length) ;

/// @brief Method generateNext addr 0xe71834 size 0x338 virtual false final false
 void generateNext() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::KdfCounterBytesGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::KdfCounterBytesGenerator, "Org.BouncyCastle.Crypto.Generators", "KdfCounterBytesGenerator");
