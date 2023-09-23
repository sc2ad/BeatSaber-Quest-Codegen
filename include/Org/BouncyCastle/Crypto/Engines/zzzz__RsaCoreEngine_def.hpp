#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IRsa;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class RsaCoreEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::RsaCoreEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(865))
// CS Name: Org.BouncyCastle.Crypto.Engines.RsaCoreEngine
class CORDL_TYPE RsaCoreEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IRsa
constexpr operator  Org::BouncyCastle::Crypto::IRsa() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RsaCoreEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaCoreEngine", modifiers: " const&", def_value: None }]
constexpr RsaCoreEngine(RsaCoreEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaCoreEngine", modifiers: "&&", def_value: None }]
constexpr RsaCoreEngine(RsaCoreEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RsaCoreEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RsaCoreEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RsaCoreEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RsaCoreEngine& operator=(RsaCoreEngine&& o) noexcept = default;
  constexpr RsaCoreEngine& operator=(RsaCoreEngine const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters __get_key() const;

 bool __declspec(property(get=__get_forEncryption, put=__set_forEncryption))  forEncryption;

constexpr void __set_forEncryption(bool value) ;

constexpr bool __get_forEncryption() const;

 int32_t __declspec(property(get=__get_bitSize, put=__set_bitSize))  bitSize;

constexpr void __set_bitSize(int32_t value) ;

constexpr int32_t __get_bitSize() const;


// Methods

/// @brief Method CheckInitialised addr 0xe54674 size 0x60 virtual false final false
 void CheckInitialised() ;

/// @brief Method Init addr 0xe546d4 size 0x160 virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetInputBlockSize addr 0xe54834 size 0x3c virtual true final false
 int32_t GetInputBlockSize() ;

/// @brief Method GetOutputBlockSize addr 0xe54870 size 0x3c virtual true final false
 int32_t GetOutputBlockSize() ;

/// @brief Method ConvertInput addr 0xe548ac size 0x110 virtual true final false
 Org::BouncyCastle::Math::BigInteger ConvertInput(::ArrayW<uint8_t> inBuf, int32_t inOff, int32_t inLen) ;

/// @brief Method ConvertOutput addr 0xe549bc size 0xc4 virtual true final false
 ::ArrayW<uint8_t> ConvertOutput(Org::BouncyCastle::Math::BigInteger result) ;

/// @brief Method ProcessBlock addr 0xe54a80 size 0x168 virtual true final false
 Org::BouncyCastle::Math::BigInteger ProcessBlock(Org::BouncyCastle::Math::BigInteger input) ;

// Ctor Parameters []
explicit RsaCoreEngine() ;

/// @brief Method .ctor addr 0xe538a0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::RsaCoreEngine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::RsaCoreEngine, "Org.BouncyCastle.Crypto.Engines", "RsaCoreEngine");
