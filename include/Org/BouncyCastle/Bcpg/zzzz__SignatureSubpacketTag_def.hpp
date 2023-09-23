#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
struct SignatureSubpacketTag;
}
// Type: Org.BouncyCastle.Bcpg::SignatureSubpacketTag
namespace Org::BouncyCastle::Bcpg {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(591))
// CS Name: Org.BouncyCastle.Bcpg.SignatureSubpacketTag
struct CORDL_TYPE SignatureSubpacketTag : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SignatureSubpacketTag(int32_t value__) noexcept;


                    constexpr SignatureSubpacketTag(SignatureSubpacketTag const&) = default;
                    constexpr SignatureSubpacketTag(SignatureSubpacketTag&&) = default;
                    constexpr SignatureSubpacketTag& operator=(SignatureSubpacketTag const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SignatureSubpacketTag& operator=(SignatureSubpacketTag&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SignatureSubpacketTag(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SignatureSubpacketTag_Unwrapped : int32_t {
__CreationTime = 2,
__ExpireTime = 3,
__Exportable = 4,
__TrustSig = 5,
__RegExp = 6,
__Revocable = 7,
__KeyExpireTime = 9,
__Placeholder = 10,
__PreferredSymmetricAlgorithms = 11,
__RevocationKey = 12,
__IssuerKeyId = 16,
__NotationData = 20,
__PreferredHashAlgorithms = 21,
__PreferredCompressionAlgorithms = 22,
__KeyServerPreferences = 23,
__PreferredKeyServer = 24,
__PrimaryUserId = 25,
__PolicyUrl = 26,
__KeyFlags = 27,
__SignerUserId = 28,
__RevocationReason = 29,
__Features = 30,
__SignatureTarget = 31,
__EmbeddedSignature = 32,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SignatureSubpacketTag_Unwrapped () const noexcept {
return std::bit_cast<__SignatureSubpacketTag_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field CreationTime offset 0
static Org::BouncyCastle::Bcpg::SignatureSubpacketTag const CreationTime;

/// @brief Field ExpireTime offset 0
static Org::BouncyCastle::Bcpg::SignatureSubpacketTag const ExpireTime;

/// @brief Field Exportable offset 0
static Org::BouncyCastle::Bcpg::SignatureSubpacketTag const Exportable;

/// @brief Field TrustSig offset 0
static Org::BouncyCastle::Bcpg::SignatureSubpacketTag const TrustSig;

/// @brief Field RegExp offset 0
static Org::BouncyCastle::Bcpg::SignatureSubpacketTag const RegExp;

/// @brief Field Revocable offset 0
static Org::BouncyCastle::Bcpg::SignatureSubpacketTag const Revocable;

/// @brief Field KeyExpireTime offset 0
static Org::BouncyCastle::Bcpg::SignatureSubpacketTag const KeyExpireTime;

/// @brief Field Placeholder offset 0
static Org::BouncyCastle::Bcpg::SignatureSubpacketTag const Placeholder;

/// @brief Field PreferredSymmetricAlgorithms offset 0
static Org::BouncyCastle::Bcpg::SignatureSubpacketTag const PreferredSymmetricAlgorithms;

/// @brief Field RevocationKey offset 0
static Org::BouncyCastle::Bcpg::SignatureSubpacketTag const RevocationKey;

/// @brief Field IssuerKeyId offset 0
static Org::BouncyCastle::Bcpg::SignatureSubpacketTag const IssuerKeyId;

/// @brief Field NotationData offset 0
static Org::BouncyCastle::Bcpg::SignatureSubpacketTag const NotationData;

/// @brief Field PreferredHashAlgorithms offset 0
static Org::BouncyCastle::Bcpg::SignatureSubpacketTag const PreferredHashAlgorithms;

/// @brief Field PreferredCompressionAlgorithms offset 0
static Org::BouncyCastle::Bcpg::SignatureSubpacketTag const PreferredCompressionAlgorithms;

/// @brief Field KeyServerPreferences offset 0
static Org::BouncyCastle::Bcpg::SignatureSubpacketTag const KeyServerPreferences;

/// @brief Field PreferredKeyServer offset 0
static Org::BouncyCastle::Bcpg::SignatureSubpacketTag const PreferredKeyServer;

/// @brief Field PrimaryUserId offset 0
static Org::BouncyCastle::Bcpg::SignatureSubpacketTag const PrimaryUserId;

/// @brief Field PolicyUrl offset 0
static Org::BouncyCastle::Bcpg::SignatureSubpacketTag const PolicyUrl;

/// @brief Field KeyFlags offset 0
static Org::BouncyCastle::Bcpg::SignatureSubpacketTag const KeyFlags;

/// @brief Field SignerUserId offset 0
static Org::BouncyCastle::Bcpg::SignatureSubpacketTag const SignerUserId;

/// @brief Field RevocationReason offset 0
static Org::BouncyCastle::Bcpg::SignatureSubpacketTag const RevocationReason;

/// @brief Field Features offset 0
static Org::BouncyCastle::Bcpg::SignatureSubpacketTag const Features;

/// @brief Field SignatureTarget offset 0
static Org::BouncyCastle::Bcpg::SignatureSubpacketTag const SignatureTarget;

/// @brief Field EmbeddedSignature offset 0
static Org::BouncyCastle::Bcpg::SignatureSubpacketTag const EmbeddedSignature;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::SignatureSubpacketTag, "Org.BouncyCastle.Bcpg", "SignatureSubpacketTag");
