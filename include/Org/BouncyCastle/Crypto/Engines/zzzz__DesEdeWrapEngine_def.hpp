#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Parameters {
class ParametersWithIV;
}
namespace Org::BouncyCastle::Crypto {
class IWrapper;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto::Modes {
class CbcBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class DesEdeWrapEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::DesEdeWrapEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(841))
// CS Name: Org.BouncyCastle.Crypto.Engines.DesEdeWrapEngine
class CORDL_TYPE DesEdeWrapEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IWrapper
constexpr operator  Org::BouncyCastle::Crypto::IWrapper() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~DesEdeWrapEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "DesEdeWrapEngine", modifiers: " const&", def_value: None }]
constexpr DesEdeWrapEngine(DesEdeWrapEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DesEdeWrapEngine", modifiers: "&&", def_value: None }]
constexpr DesEdeWrapEngine(DesEdeWrapEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DesEdeWrapEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DesEdeWrapEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DesEdeWrapEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DesEdeWrapEngine& operator=(DesEdeWrapEngine&& o) noexcept = default;
  constexpr DesEdeWrapEngine& operator=(DesEdeWrapEngine const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Modes::CbcBlockCipher __declspec(property(get=__get_engine, put=__set_engine))  engine;

constexpr void __set_engine(Org::BouncyCastle::Crypto::Modes::CbcBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::Modes::CbcBlockCipher __get_engine() const;

 Org::BouncyCastle::Crypto::Parameters::KeyParameter __declspec(property(get=__get_param, put=__set_param))  param;

constexpr void __set_param(Org::BouncyCastle::Crypto::Parameters::KeyParameter value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::KeyParameter __get_param() const;

 Org::BouncyCastle::Crypto::Parameters::ParametersWithIV __declspec(property(get=__get_paramPlusIV, put=__set_paramPlusIV))  paramPlusIV;

constexpr void __set_paramPlusIV(Org::BouncyCastle::Crypto::Parameters::ParametersWithIV value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::ParametersWithIV __get_paramPlusIV() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_iv, put=__set_iv))  iv;

constexpr void __set_iv(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_iv() const;

 bool __declspec(property(get=__get_forWrapping, put=__set_forWrapping))  forWrapping;

constexpr void __set_forWrapping(bool value) ;

constexpr bool __get_forWrapping() const;

static ::ArrayW<uint8_t> __declspec(property(get=__get_IV2, put=__set_IV2))  IV2;

static void __set_IV2(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_IV2() ;

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_sha1, put=__set_sha1))  sha1;

constexpr void __set_sha1(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_sha1() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_digest, put=__set_digest))  digest;

constexpr void __set_digest(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_digest() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method Init addr 0xe3f94c size 0x39c virtual true final false
 void Init(bool forWrapping, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xe3fce8 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Wrap addr 0xe3fd28 size 0x338 virtual true final false
 ::ArrayW<uint8_t> Wrap(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method Unwrap addr 0xe40288 size 0x430 virtual true final false
 ::ArrayW<uint8_t> Unwrap(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method CalculateCmsKeyChecksum addr 0xe40060 size 0x180 virtual false final false
 ::ArrayW<uint8_t> CalculateCmsKeyChecksum(::ArrayW<uint8_t> key) ;

/// @brief Method CheckCmsKeyChecksum addr 0xe406b8 size 0x80 virtual false final false
 bool CheckCmsKeyChecksum(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> checksum) ;

/// @brief Method reverse addr 0xe401e0 size 0xa8 virtual false final false
static ::ArrayW<uint8_t> reverse(::ArrayW<uint8_t> bs) ;

// Ctor Parameters []
explicit DesEdeWrapEngine() ;

/// @brief Method .ctor addr 0xe407cc size 0x8c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine, "Org.BouncyCastle.Crypto.Engines", "DesEdeWrapEngine");
