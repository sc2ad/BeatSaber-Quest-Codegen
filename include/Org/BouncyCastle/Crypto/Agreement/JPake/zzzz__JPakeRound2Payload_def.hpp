#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
class JPakeRound2Payload;
}
// Type: Org.BouncyCastle.Crypto.Agreement.JPake::JPakeRound2Payload
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(718))
// CS Name: Org.BouncyCastle.Crypto.Agreement.JPake.JPakeRound2Payload
class CORDL_TYPE JPakeRound2Payload : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~JPakeRound2Payload() = default;

// Ctor Parameters [CppParam { name: "", ty: "JPakeRound2Payload", modifiers: " const&", def_value: None }]
constexpr JPakeRound2Payload(JPakeRound2Payload const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JPakeRound2Payload", modifiers: "&&", def_value: None }]
constexpr JPakeRound2Payload(JPakeRound2Payload&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JPakeRound2Payload(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JPakeRound2Payload& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JPakeRound2Payload& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JPakeRound2Payload& operator=(JPakeRound2Payload&& o) noexcept = default;
  constexpr JPakeRound2Payload& operator=(JPakeRound2Payload const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_participantId, put=__set_participantId))  participantId;

constexpr void __set_participantId(::StringW value) ;

constexpr ::StringW __get_participantId() const;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_a, put=__set_a))  a;

constexpr void __set_a(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_a() const;

 ::ArrayW<::Org::BouncyCastle::Math::BigInteger> __declspec(property(get=__get_knowledgeProofForX2s, put=__set_knowledgeProofForX2s))  knowledgeProofForX2s;

constexpr void __set_knowledgeProofForX2s(::ArrayW<::Org::BouncyCastle::Math::BigInteger> value) ;

constexpr ::ArrayW<::Org::BouncyCastle::Math::BigInteger> __get_knowledgeProofForX2s() const;


// Properties

 ::StringW __declspec(property(get=get_ParticipantId))  ParticipantId;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_A))  A;

 ::ArrayW<::Org::BouncyCastle::Math::BigInteger> __declspec(property(get=get_KnowledgeProofForX2s))  KnowledgeProofForX2s;


// Methods

// Ctor Parameters [CppParam { name: "participantId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "a", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "knowledgeProofForX2s", ty: "::ArrayW<::Org::BouncyCastle::Math::BigInteger>", modifiers: "", def_value: None }]
explicit JPakeRound2Payload(::StringW participantId, ::Org::BouncyCastle::Math::BigInteger a, ::ArrayW<::Org::BouncyCastle::Math::BigInteger> knowledgeProofForX2s) ;

/// @brief Method .ctor addr 0x11892e4 size 0x120 virtual false final false
 void _ctor(::StringW participantId, ::Org::BouncyCastle::Math::BigInteger a, ::ArrayW<::Org::BouncyCastle::Math::BigInteger> knowledgeProofForX2s) ;

/// @brief Method get_ParticipantId addr 0x118a9d8 size 0x8 virtual true final false
 ::StringW get_ParticipantId() ;

/// @brief Method get_A addr 0x118a9e0 size 0x8 virtual true final false
 ::Org::BouncyCastle::Math::BigInteger get_A() ;

/// @brief Method get_KnowledgeProofForX2s addr 0x118a9e8 size 0x7c virtual true final false
 ::ArrayW<::Org::BouncyCastle::Math::BigInteger> get_KnowledgeProofForX2s() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Agreement::JPake
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload, "Org.BouncyCastle.Crypto.Agreement.JPake", "JPakeRound2Payload");
