#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
struct PacketTag;
}
// Type: Org.BouncyCastle.Bcpg::PacketTag
namespace Org::BouncyCastle::Bcpg {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(579))
// CS Name: Org.BouncyCastle.Bcpg.PacketTag
struct CORDL_TYPE PacketTag : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PacketTag(int32_t value__) noexcept;


                    constexpr PacketTag(PacketTag const&) = default;
                    constexpr PacketTag(PacketTag&&) = default;
                    constexpr PacketTag& operator=(PacketTag const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PacketTag& operator=(PacketTag&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PacketTag(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PacketTag_Unwrapped : int32_t {
__Reserved = 0,
__PublicKeyEncryptedSession = 1,
__Signature = 2,
__SymmetricKeyEncryptedSessionKey = 3,
__OnePassSignature = 4,
__SecretKey = 5,
__PublicKey = 6,
__SecretSubkey = 7,
__CompressedData = 8,
__SymmetricKeyEncrypted = 9,
__Marker = 10,
__LiteralData = 11,
__Trust = 12,
__UserId = 13,
__PublicSubkey = 14,
__UserAttribute = 17,
__SymmetricEncryptedIntegrityProtected = 18,
__ModificationDetectionCode = 19,
__Experimental1 = 60,
__Experimental2 = 61,
__Experimental3 = 62,
__Experimental4 = 63,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PacketTag_Unwrapped () const noexcept {
return std::bit_cast<__PacketTag_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Reserved offset 0
static Org::BouncyCastle::Bcpg::PacketTag const Reserved;

/// @brief Field PublicKeyEncryptedSession offset 0
static Org::BouncyCastle::Bcpg::PacketTag const PublicKeyEncryptedSession;

/// @brief Field Signature offset 0
static Org::BouncyCastle::Bcpg::PacketTag const Signature;

/// @brief Field SymmetricKeyEncryptedSessionKey offset 0
static Org::BouncyCastle::Bcpg::PacketTag const SymmetricKeyEncryptedSessionKey;

/// @brief Field OnePassSignature offset 0
static Org::BouncyCastle::Bcpg::PacketTag const OnePassSignature;

/// @brief Field SecretKey offset 0
static Org::BouncyCastle::Bcpg::PacketTag const SecretKey;

/// @brief Field PublicKey offset 0
static Org::BouncyCastle::Bcpg::PacketTag const PublicKey;

/// @brief Field SecretSubkey offset 0
static Org::BouncyCastle::Bcpg::PacketTag const SecretSubkey;

/// @brief Field CompressedData offset 0
static Org::BouncyCastle::Bcpg::PacketTag const CompressedData;

/// @brief Field SymmetricKeyEncrypted offset 0
static Org::BouncyCastle::Bcpg::PacketTag const SymmetricKeyEncrypted;

/// @brief Field Marker offset 0
static Org::BouncyCastle::Bcpg::PacketTag const Marker;

/// @brief Field LiteralData offset 0
static Org::BouncyCastle::Bcpg::PacketTag const LiteralData;

/// @brief Field Trust offset 0
static Org::BouncyCastle::Bcpg::PacketTag const Trust;

/// @brief Field UserId offset 0
static Org::BouncyCastle::Bcpg::PacketTag const UserId;

/// @brief Field PublicSubkey offset 0
static Org::BouncyCastle::Bcpg::PacketTag const PublicSubkey;

/// @brief Field UserAttribute offset 0
static Org::BouncyCastle::Bcpg::PacketTag const UserAttribute;

/// @brief Field SymmetricEncryptedIntegrityProtected offset 0
static Org::BouncyCastle::Bcpg::PacketTag const SymmetricEncryptedIntegrityProtected;

/// @brief Field ModificationDetectionCode offset 0
static Org::BouncyCastle::Bcpg::PacketTag const ModificationDetectionCode;

/// @brief Field Experimental1 offset 0
static Org::BouncyCastle::Bcpg::PacketTag const Experimental1;

/// @brief Field Experimental2 offset 0
static Org::BouncyCastle::Bcpg::PacketTag const Experimental2;

/// @brief Field Experimental3 offset 0
static Org::BouncyCastle::Bcpg::PacketTag const Experimental3;

/// @brief Field Experimental4 offset 0
static Org::BouncyCastle::Bcpg::PacketTag const Experimental4;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::PacketTag, "Org.BouncyCastle.Bcpg", "PacketTag");
