#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Prng {
class IRandomGenerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class ReversedWindowGenerator;
}
// Type: Org.BouncyCastle.Crypto.Prng::ReversedWindowGenerator
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1110))
// CS Name: Org.BouncyCastle.Crypto.Prng.ReversedWindowGenerator
class CORDL_TYPE ReversedWindowGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Prng::IRandomGenerator
constexpr operator  Org::BouncyCastle::Crypto::Prng::IRandomGenerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ReversedWindowGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReversedWindowGenerator", modifiers: " const&", def_value: None }]
constexpr ReversedWindowGenerator(ReversedWindowGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReversedWindowGenerator", modifiers: "&&", def_value: None }]
constexpr ReversedWindowGenerator(ReversedWindowGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReversedWindowGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ReversedWindowGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReversedWindowGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReversedWindowGenerator& operator=(ReversedWindowGenerator&& o) noexcept = default;
  constexpr ReversedWindowGenerator& operator=(ReversedWindowGenerator const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Prng::IRandomGenerator __declspec(property(get=__get_generator, put=__set_generator))  generator;

constexpr void __set_generator(Org::BouncyCastle::Crypto::Prng::IRandomGenerator value) ;

constexpr Org::BouncyCastle::Crypto::Prng::IRandomGenerator __get_generator() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_window, put=__set_window))  window;

constexpr void __set_window(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_window() const;

 int32_t __declspec(property(get=__get_windowCount, put=__set_windowCount))  windowCount;

constexpr void __set_windowCount(int32_t value) ;

constexpr int32_t __get_windowCount() const;


// Methods

static Org::BouncyCastle::Crypto::Prng::ReversedWindowGenerator New_ctor(Org::BouncyCastle::Crypto::Prng::IRandomGenerator generator, int32_t windowSize) ;

/// @brief Method .ctor addr 0xeb47dc size 0x114 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Prng::IRandomGenerator generator, int32_t windowSize) ;

/// @brief Method AddSeedMaterial addr 0xeb48f0 size 0x134 virtual true final false
 void AddSeedMaterial(::ArrayW<uint8_t> seed) ;

/// @brief Method AddSeedMaterial addr 0xeb4a24 size 0x138 virtual true final false
 void AddSeedMaterial(int64_t seed) ;

/// @brief Method NextBytes addr 0xeb4b5c size 0x1c virtual true final false
 void NextBytes(::ArrayW<uint8_t> bytes) ;

/// @brief Method NextBytes addr 0xeb4d98 size 0x4 virtual true final false
 void NextBytes(::ArrayW<uint8_t> bytes, int32_t start, int32_t len) ;

/// @brief Method doNextBytes addr 0xeb4b78 size 0x220 virtual false final false
 void doNextBytes(::ArrayW<uint8_t> bytes, int32_t start, int32_t len) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(Org::BouncyCastle::Crypto::Prng::ReversedWindowGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Prng::ReversedWindowGenerator, "Org.BouncyCastle.Crypto.Prng", "ReversedWindowGenerator");
