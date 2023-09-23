#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Prng {
class IRandomGenerator;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class DigestRandomGenerator;
}
// Type: Org.BouncyCastle.Crypto.Prng::DigestRandomGenerator
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1107))
// CS Name: Org.BouncyCastle.Crypto.Prng.DigestRandomGenerator
class CORDL_TYPE DigestRandomGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Prng::IRandomGenerator
constexpr operator  Org::BouncyCastle::Crypto::Prng::IRandomGenerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~DigestRandomGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "DigestRandomGenerator", modifiers: " const&", def_value: None }]
constexpr DigestRandomGenerator(DigestRandomGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DigestRandomGenerator", modifiers: "&&", def_value: None }]
constexpr DigestRandomGenerator(DigestRandomGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DigestRandomGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DigestRandomGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DigestRandomGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DigestRandomGenerator& operator=(DigestRandomGenerator&& o) noexcept = default;
  constexpr DigestRandomGenerator& operator=(DigestRandomGenerator const& o) noexcept = default;
                


// Fields

/// @brief Field CYCLE_COUNT offset 0
static constexpr int64_t  CYCLE_COUNT{10};

 int64_t __declspec(property(get=__get_stateCounter, put=__set_stateCounter))  stateCounter;

constexpr void __set_stateCounter(int64_t value) ;

constexpr int64_t __get_stateCounter() const;

 int64_t __declspec(property(get=__get_seedCounter, put=__set_seedCounter))  seedCounter;

constexpr void __set_seedCounter(int64_t value) ;

constexpr int64_t __get_seedCounter() const;

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_digest, put=__set_digest))  digest;

constexpr void __set_digest(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_digest() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_state, put=__set_state))  state;

constexpr void __set_state(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_state() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_seed, put=__set_seed))  seed;

constexpr void __set_seed(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_seed() const;


// Methods

// Ctor Parameters [CppParam { name: "digest", ty: "Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }]
explicit DigestRandomGenerator(Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method .ctor addr 0xeb3ef0 size 0x168 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method AddSeedMaterial addr 0xeb4058 size 0xc8 virtual true final true
 void AddSeedMaterial(::ArrayW<uint8_t> inSeed) ;

/// @brief Method AddSeedMaterial addr 0xeb428c size 0xc8 virtual true final true
 void AddSeedMaterial(int64_t rSeed) ;

/// @brief Method NextBytes addr 0xeb444c size 0x1c virtual true final true
 void NextBytes(::ArrayW<uint8_t> bytes) ;

/// @brief Method NextBytes addr 0xeb4468 size 0x168 virtual true final true
 void NextBytes(::ArrayW<uint8_t> bytes, int32_t start, int32_t len) ;

/// @brief Method CycleSeed addr 0xeb4644 size 0x34 virtual false final false
 void CycleSeed() ;

/// @brief Method GenerateState addr 0xeb45d0 size 0x74 virtual false final false
 void GenerateState() ;

/// @brief Method DigestAddCounter addr 0xeb4354 size 0xf8 virtual false final false
 void DigestAddCounter(int64_t seedVal) ;

/// @brief Method DigestUpdate addr 0xeb4120 size 0xbc virtual false final false
 void DigestUpdate(::ArrayW<uint8_t> inSeed) ;

/// @brief Method DigestDoFinal addr 0xeb41dc size 0xb0 virtual false final false
 void DigestDoFinal(::ArrayW<uint8_t> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator, "Org.BouncyCastle.Crypto.Prng", "DigestRandomGenerator");
