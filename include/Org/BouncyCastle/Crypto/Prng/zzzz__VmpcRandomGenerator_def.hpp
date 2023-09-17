#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto::Prng {
class IRandomGenerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class VmpcRandomGenerator;
}
// Type: Org.BouncyCastle.Crypto.Prng::VmpcRandomGenerator
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1119))
// CS Name: Org.BouncyCastle.Crypto.Prng.VmpcRandomGenerator
class CORDL_TYPE VmpcRandomGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator
constexpr operator  ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~VmpcRandomGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "VmpcRandomGenerator", modifiers: " const&", def_value: None }]
constexpr VmpcRandomGenerator(VmpcRandomGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VmpcRandomGenerator", modifiers: "&&", def_value: None }]
constexpr VmpcRandomGenerator(VmpcRandomGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VmpcRandomGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr VmpcRandomGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VmpcRandomGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VmpcRandomGenerator& operator=(VmpcRandomGenerator&& o) noexcept = default;
  constexpr VmpcRandomGenerator& operator=(VmpcRandomGenerator const& o) noexcept = default;
                


// Fields

 uint8_t __declspec(property(get=__get_n, put=__set_n))  n;

constexpr void __set_n(uint8_t value) ;

constexpr uint8_t __get_n() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_P, put=__set_P))  P;

constexpr void __set_P(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_P() const;

 uint8_t __declspec(property(get=__get_s, put=__set_s))  s;

constexpr void __set_s(uint8_t value) ;

constexpr uint8_t __get_s() const;


// Methods

// Ctor Parameters []
explicit VmpcRandomGenerator() ;

/// @brief Method .ctor addr 0xeb6e8c size 0x90 virtual false final false
 void _ctor() ;

/// @brief Method AddSeedMaterial addr 0xeb6f1c size 0xd0 virtual true final false
 void AddSeedMaterial(::ArrayW<uint8_t> seed) ;

/// @brief Method AddSeedMaterial addr 0xeb6fec size 0x2c virtual true final false
 void AddSeedMaterial(int64_t seed) ;

/// @brief Method NextBytes addr 0xeb7018 size 0x24 virtual true final false
 void NextBytes(::ArrayW<uint8_t> bytes) ;

/// @brief Method NextBytes addr 0xeb703c size 0x210 virtual true final false
 void NextBytes(::ArrayW<uint8_t> bytes, int32_t start, int32_t len) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Prng
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator, "Org.BouncyCastle.Crypto.Prng", "VmpcRandomGenerator");
