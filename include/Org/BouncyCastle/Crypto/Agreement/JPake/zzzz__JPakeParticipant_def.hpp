#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
class JPakePrimeOrderGroup;
}
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
class JPakeRound1Payload;
}
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
class JPakeRound3Payload;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
class JPakeRound2Payload;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
class JPakeParticipant;
}
// Type: Org.BouncyCastle.Crypto.Agreement.JPake::JPakeParticipant
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(714))
// CS Name: Org.BouncyCastle.Crypto.Agreement.JPake.JPakeParticipant
class CORDL_TYPE JPakeParticipant : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~JPakeParticipant() = default;

// Ctor Parameters [CppParam { name: "", ty: "JPakeParticipant", modifiers: " const&", def_value: None }]
constexpr JPakeParticipant(JPakeParticipant const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JPakeParticipant", modifiers: "&&", def_value: None }]
constexpr JPakeParticipant(JPakeParticipant&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JPakeParticipant(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JPakeParticipant& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JPakeParticipant& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JPakeParticipant& operator=(JPakeParticipant&& o) noexcept = default;
  constexpr JPakeParticipant& operator=(JPakeParticipant const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_STATE_INITIALIZED, put=__set_STATE_INITIALIZED))  STATE_INITIALIZED;

static void __set_STATE_INITIALIZED(int32_t value) ;

static int32_t __get_STATE_INITIALIZED() ;

static int32_t __declspec(property(get=__get_STATE_ROUND_1_CREATED, put=__set_STATE_ROUND_1_CREATED))  STATE_ROUND_1_CREATED;

static void __set_STATE_ROUND_1_CREATED(int32_t value) ;

static int32_t __get_STATE_ROUND_1_CREATED() ;

static int32_t __declspec(property(get=__get_STATE_ROUND_1_VALIDATED, put=__set_STATE_ROUND_1_VALIDATED))  STATE_ROUND_1_VALIDATED;

static void __set_STATE_ROUND_1_VALIDATED(int32_t value) ;

static int32_t __get_STATE_ROUND_1_VALIDATED() ;

static int32_t __declspec(property(get=__get_STATE_ROUND_2_CREATED, put=__set_STATE_ROUND_2_CREATED))  STATE_ROUND_2_CREATED;

static void __set_STATE_ROUND_2_CREATED(int32_t value) ;

static int32_t __get_STATE_ROUND_2_CREATED() ;

static int32_t __declspec(property(get=__get_STATE_ROUND_2_VALIDATED, put=__set_STATE_ROUND_2_VALIDATED))  STATE_ROUND_2_VALIDATED;

static void __set_STATE_ROUND_2_VALIDATED(int32_t value) ;

static int32_t __get_STATE_ROUND_2_VALIDATED() ;

static int32_t __declspec(property(get=__get_STATE_KEY_CALCULATED, put=__set_STATE_KEY_CALCULATED))  STATE_KEY_CALCULATED;

static void __set_STATE_KEY_CALCULATED(int32_t value) ;

static int32_t __get_STATE_KEY_CALCULATED() ;

static int32_t __declspec(property(get=__get_STATE_ROUND_3_CREATED, put=__set_STATE_ROUND_3_CREATED))  STATE_ROUND_3_CREATED;

static void __set_STATE_ROUND_3_CREATED(int32_t value) ;

static int32_t __get_STATE_ROUND_3_CREATED() ;

static int32_t __declspec(property(get=__get_STATE_ROUND_3_VALIDATED, put=__set_STATE_ROUND_3_VALIDATED))  STATE_ROUND_3_VALIDATED;

static void __set_STATE_ROUND_3_VALIDATED(int32_t value) ;

static int32_t __get_STATE_ROUND_3_VALIDATED() ;

 ::StringW __declspec(property(get=__get_participantId, put=__set_participantId))  participantId;

constexpr void __set_participantId(::StringW value) ;

constexpr ::StringW __get_participantId() const;

 ::ArrayW<char16_t> __declspec(property(get=__get_password, put=__set_password))  password;

constexpr void __set_password(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_password() const;

 ::Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_digest, put=__set_digest))  digest;

constexpr void __set_digest(::Org::BouncyCastle::Crypto::IDigest value) ;

constexpr ::Org::BouncyCastle::Crypto::IDigest __get_digest() const;

 ::Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom value) ;

constexpr ::Org::BouncyCastle::Security::SecureRandom __get_random() const;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_p, put=__set_p))  p;

constexpr void __set_p(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_p() const;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_q, put=__set_q))  q;

constexpr void __set_q(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_q() const;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_g, put=__set_g))  g;

constexpr void __set_g(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_g() const;

 ::StringW __declspec(property(get=__get_partnerParticipantId, put=__set_partnerParticipantId))  partnerParticipantId;

constexpr void __set_partnerParticipantId(::StringW value) ;

constexpr ::StringW __get_partnerParticipantId() const;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_x1, put=__set_x1))  x1;

constexpr void __set_x1(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_x1() const;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_x2, put=__set_x2))  x2;

constexpr void __set_x2(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_x2() const;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_gx1, put=__set_gx1))  gx1;

constexpr void __set_gx1(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_gx1() const;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_gx2, put=__set_gx2))  gx2;

constexpr void __set_gx2(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_gx2() const;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_gx3, put=__set_gx3))  gx3;

constexpr void __set_gx3(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_gx3() const;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_gx4, put=__set_gx4))  gx4;

constexpr void __set_gx4(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_gx4() const;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_b, put=__set_b))  b;

constexpr void __set_b(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_b() const;

 int32_t __declspec(property(get=__get_state, put=__set_state))  state;

constexpr void __set_state(int32_t value) ;

constexpr int32_t __get_state() const;


// Properties

 int32_t __declspec(property(get=get_State))  State;


// Methods

// Ctor Parameters [CppParam { name: "participantId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "password", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None }]
explicit JPakeParticipant(::StringW participantId, ::ArrayW<char16_t> password) ;

/// @brief Method .ctor addr 0x1187f60 size 0x78 virtual false final false
 void _ctor(::StringW participantId, ::ArrayW<char16_t> password) ;

// Ctor Parameters [CppParam { name: "participantId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "password", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None }, CppParam { name: "group", ty: "::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup", modifiers: "", def_value: None }]
explicit JPakeParticipant(::StringW participantId, ::ArrayW<char16_t> password, ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup group) ;

/// @brief Method .ctor addr 0x1187fd8 size 0xbc virtual false final false
 void _ctor(::StringW participantId, ::ArrayW<char16_t> password, ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup group) ;

// Ctor Parameters [CppParam { name: "participantId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "password", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None }, CppParam { name: "group", ty: "::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup", modifiers: "", def_value: None }, CppParam { name: "digest", ty: "::Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }, CppParam { name: "random", ty: "::Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit JPakeParticipant(::StringW participantId, ::ArrayW<char16_t> password, ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup group, ::Org::BouncyCastle::Crypto::IDigest digest, ::Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method .ctor addr 0x1188094 size 0x23c virtual false final false
 void _ctor(::StringW participantId, ::ArrayW<char16_t> password, ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup group, ::Org::BouncyCastle::Crypto::IDigest digest, ::Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method get_State addr 0x1188324 size 0x8 virtual true final false
 int32_t get_State() ;

/// @brief Method CreateRound1PayloadToSend addr 0x118832c size 0x228 virtual true final false
 ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound1Payload CreateRound1PayloadToSend() ;

/// @brief Method ValidateRound1PayloadReceived addr 0x11889f4 size 0x23c virtual true final false
 void ValidateRound1PayloadReceived(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound1Payload round1PayloadReceived) ;

/// @brief Method CreateRound2PayloadToSend addr 0x1188f8c size 0x224 virtual true final false
 ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload CreateRound2PayloadToSend() ;

/// @brief Method ValidateRound2PayloadReceived addr 0x1189404 size 0x230 virtual true final false
 void ValidateRound2PayloadReceived(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload round2PayloadReceived) ;

/// @brief Method CalculateKeyingMaterial addr 0x1189890 size 0x19c virtual true final false
 ::Org::BouncyCastle::Math::BigInteger CalculateKeyingMaterial() ;

/// @brief Method CreateRound3PayloadToSend addr 0x1189ac8 size 0x1ec virtual true final false
 ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload CreateRound3PayloadToSend(::Org::BouncyCastle::Math::BigInteger keyingMaterial) ;

/// @brief Method ValidateRound3PayloadReceived addr 0x1189f04 size 0x218 virtual true final false
 void ValidateRound3PayloadReceived(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload round3PayloadReceived, ::Org::BouncyCastle::Math::BigInteger keyingMaterial) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Agreement::JPake
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant, "Org.BouncyCastle.Crypto.Agreement.JPake", "JPakeParticipant");
