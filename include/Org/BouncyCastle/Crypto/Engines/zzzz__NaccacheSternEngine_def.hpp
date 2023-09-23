#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class NaccacheSternKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class NaccacheSternEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::NaccacheSternEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(851))
// CS Name: Org.BouncyCastle.Crypto.Engines.NaccacheSternEngine
class CORDL_TYPE NaccacheSternEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IAsymmetricBlockCipher
constexpr operator  Org::BouncyCastle::Crypto::IAsymmetricBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~NaccacheSternEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "NaccacheSternEngine", modifiers: " const&", def_value: None }]
constexpr NaccacheSternEngine(NaccacheSternEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NaccacheSternEngine", modifiers: "&&", def_value: None }]
constexpr NaccacheSternEngine(NaccacheSternEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NaccacheSternEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NaccacheSternEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NaccacheSternEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NaccacheSternEngine& operator=(NaccacheSternEngine&& o) noexcept = default;
  constexpr NaccacheSternEngine& operator=(NaccacheSternEngine const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_forEncryption, put=__set_forEncryption))  forEncryption;

constexpr void __set_forEncryption(bool value) ;

constexpr bool __get_forEncryption() const;

 Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters __get_key() const;

 ::ArrayW<System::Collections::IList> __declspec(property(get=__get_lookup, put=__set_lookup))  lookup;

constexpr void __set_lookup(::ArrayW<System::Collections::IList> value) ;

constexpr ::ArrayW<System::Collections::IList> __get_lookup() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 bool __declspec(property(put=set_Debug))  Debug;


// Methods

/// @brief Method get_AlgorithmName addr 0xe49fec size 0x40 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xe4a02c size 0x58c virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method set_Debug addr 0xe4a5b8 size 0x4 virtual true final false
 void set_Debug(bool value) ;

/// @brief Method GetInputBlockSize addr 0xe4a5bc size 0x54 virtual true final false
 int32_t GetInputBlockSize() ;

/// @brief Method GetOutputBlockSize addr 0xe4a610 size 0x54 virtual true final false
 int32_t GetOutputBlockSize() ;

/// @brief Method ProcessBlock addr 0xe4a664 size 0x8fc virtual true final false
 ::ArrayW<uint8_t> ProcessBlock(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t length) ;

/// @brief Method Encrypt addr 0xe4b344 size 0xd8 virtual true final false
 ::ArrayW<uint8_t> Encrypt(Org::BouncyCastle::Math::BigInteger plain) ;

/// @brief Method AddCryptedBlocks addr 0xe4b41c size 0x204 virtual true final false
 ::ArrayW<uint8_t> AddCryptedBlocks(::ArrayW<uint8_t> block1, ::ArrayW<uint8_t> block2) ;

/// @brief Method ProcessData addr 0xe4b620 size 0x218 virtual true final false
 ::ArrayW<uint8_t> ProcessData(::ArrayW<uint8_t> data) ;

/// @brief Method chineseRemainder addr 0xe4af60 size 0x3e4 virtual false final false
static Org::BouncyCastle::Math::BigInteger chineseRemainder(System::Collections::IList congruences, System::Collections::IList primes) ;

// Ctor Parameters []
explicit NaccacheSternEngine() ;

/// @brief Method .ctor addr 0xe4b838 size 0xc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine, "Org.BouncyCastle.Crypto.Engines", "NaccacheSternEngine");
