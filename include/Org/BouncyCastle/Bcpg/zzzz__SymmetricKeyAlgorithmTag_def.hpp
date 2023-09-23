#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
// Type: Org.BouncyCastle.Bcpg::SymmetricKeyAlgorithmTag
namespace Org::BouncyCastle::Bcpg {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(594))
// CS Name: Org.BouncyCastle.Bcpg.SymmetricKeyAlgorithmTag
struct CORDL_TYPE SymmetricKeyAlgorithmTag : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SymmetricKeyAlgorithmTag(int32_t value__) noexcept;


                    constexpr SymmetricKeyAlgorithmTag(SymmetricKeyAlgorithmTag const&) = default;
                    constexpr SymmetricKeyAlgorithmTag(SymmetricKeyAlgorithmTag&&) = default;
                    constexpr SymmetricKeyAlgorithmTag& operator=(SymmetricKeyAlgorithmTag const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SymmetricKeyAlgorithmTag& operator=(SymmetricKeyAlgorithmTag&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SymmetricKeyAlgorithmTag(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SymmetricKeyAlgorithmTag_Unwrapped : int32_t {
__Null = 0,
__Idea = 1,
__TripleDes = 2,
__Cast5 = 3,
__Blowfish = 4,
__Safer = 5,
__Des = 6,
__Aes128 = 7,
__Aes192 = 8,
__Aes256 = 9,
__Twofish = 10,
__Camellia128 = 11,
__Camellia192 = 12,
__Camellia256 = 13,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SymmetricKeyAlgorithmTag_Unwrapped () const noexcept {
return std::bit_cast<__SymmetricKeyAlgorithmTag_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Null offset 0
static Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Null;

/// @brief Field Idea offset 0
static Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Idea;

/// @brief Field TripleDes offset 0
static Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const TripleDes;

/// @brief Field Cast5 offset 0
static Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Cast5;

/// @brief Field Blowfish offset 0
static Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Blowfish;

/// @brief Field Safer offset 0
static Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Safer;

/// @brief Field Des offset 0
static Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Des;

/// @brief Field Aes128 offset 0
static Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Aes128;

/// @brief Field Aes192 offset 0
static Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Aes192;

/// @brief Field Aes256 offset 0
static Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Aes256;

/// @brief Field Twofish offset 0
static Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Twofish;

/// @brief Field Camellia128 offset 0
static Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Camellia128;

/// @brief Field Camellia192 offset 0
static Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Camellia192;

/// @brief Field Camellia256 offset 0
static Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Camellia256;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, "Org.BouncyCastle.Bcpg", "SymmetricKeyAlgorithmTag");
