#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
// Type: Org.BouncyCastle.Bcpg::PublicKeyAlgorithmTag
namespace Org::BouncyCastle::Bcpg {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(580))
// CS Name: Org.BouncyCastle.Bcpg.PublicKeyAlgorithmTag
struct CORDL_TYPE PublicKeyAlgorithmTag : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PublicKeyAlgorithmTag(int32_t value__) noexcept;


                    constexpr PublicKeyAlgorithmTag(PublicKeyAlgorithmTag const&) = default;
                    constexpr PublicKeyAlgorithmTag(PublicKeyAlgorithmTag&&) = default;
                    constexpr PublicKeyAlgorithmTag& operator=(PublicKeyAlgorithmTag const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PublicKeyAlgorithmTag& operator=(PublicKeyAlgorithmTag&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PublicKeyAlgorithmTag(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PublicKeyAlgorithmTag_Unwrapped : int32_t {
__RsaGeneral = 1,
__RsaEncrypt = 2,
__RsaSign = 3,
__ElGamalEncrypt = 16,
__Dsa = 17,
__EC = 18,
__ECDH = 18,
__ECDsa = 19,
__ElGamalGeneral = 20,
__DiffieHellman = 21,
__EdDsa = 22,
__Experimental_1 = 100,
__Experimental_2 = 101,
__Experimental_3 = 102,
__Experimental_4 = 103,
__Experimental_5 = 104,
__Experimental_6 = 105,
__Experimental_7 = 106,
__Experimental_8 = 107,
__Experimental_9 = 108,
__Experimental_10 = 109,
__Experimental_11 = 110,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PublicKeyAlgorithmTag_Unwrapped () const noexcept {
return std::bit_cast<__PublicKeyAlgorithmTag_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field RsaGeneral offset 0
static Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const RsaGeneral;

/// @brief Field RsaEncrypt offset 0
static Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const RsaEncrypt;

/// @brief Field RsaSign offset 0
static Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const RsaSign;

/// @brief Field ElGamalEncrypt offset 0
static Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const ElGamalEncrypt;

/// @brief Field Dsa offset 0
static Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const Dsa;

/// @brief Field EC offset 0
static Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const EC;

/// @brief Field ECDH offset 0
static Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const ECDH;

/// @brief Field ECDsa offset 0
static Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const ECDsa;

/// @brief Field ElGamalGeneral offset 0
static Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const ElGamalGeneral;

/// @brief Field DiffieHellman offset 0
static Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const DiffieHellman;

/// @brief Field EdDsa offset 0
static Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const EdDsa;

/// @brief Field Experimental_1 offset 0
static Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const Experimental_1;

/// @brief Field Experimental_2 offset 0
static Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const Experimental_2;

/// @brief Field Experimental_3 offset 0
static Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const Experimental_3;

/// @brief Field Experimental_4 offset 0
static Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const Experimental_4;

/// @brief Field Experimental_5 offset 0
static Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const Experimental_5;

/// @brief Field Experimental_6 offset 0
static Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const Experimental_6;

/// @brief Field Experimental_7 offset 0
static Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const Experimental_7;

/// @brief Field Experimental_8 offset 0
static Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const Experimental_8;

/// @brief Field Experimental_9 offset 0
static Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const Experimental_9;

/// @brief Field Experimental_10 offset 0
static Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const Experimental_10;

/// @brief Field Experimental_11 offset 0
static Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const Experimental_11;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, "Org.BouncyCastle.Bcpg", "PublicKeyAlgorithmTag");
