#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
class JPakeRound1Payload;
}
// Type: Org.BouncyCastle.Crypto.Agreement.JPake::JPakeRound1Payload
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(717))
// CS Name: Org.BouncyCastle.Crypto.Agreement.JPake.JPakeRound1Payload
class CORDL_TYPE JPakeRound1Payload : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~JPakeRound1Payload() = default;

// Ctor Parameters [CppParam { name: "", ty: "JPakeRound1Payload", modifiers: " const&", def_value: None }]
constexpr JPakeRound1Payload(JPakeRound1Payload const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JPakeRound1Payload", modifiers: "&&", def_value: None }]
constexpr JPakeRound1Payload(JPakeRound1Payload&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JPakeRound1Payload(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JPakeRound1Payload& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JPakeRound1Payload& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JPakeRound1Payload& operator=(JPakeRound1Payload&& o) noexcept = default;
  constexpr JPakeRound1Payload& operator=(JPakeRound1Payload const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_participantId, put=__set_participantId))  participantId;

constexpr void __set_participantId(::StringW value) ;

constexpr ::StringW __get_participantId() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_gx1, put=__set_gx1))  gx1;

constexpr void __set_gx1(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_gx1() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_gx2, put=__set_gx2))  gx2;

constexpr void __set_gx2(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_gx2() const;

 ::ArrayW<Org::BouncyCastle::Math::BigInteger> __declspec(property(get=__get_knowledgeProofForX1, put=__set_knowledgeProofForX1))  knowledgeProofForX1;

constexpr void __set_knowledgeProofForX1(::ArrayW<Org::BouncyCastle::Math::BigInteger> value) ;

constexpr ::ArrayW<Org::BouncyCastle::Math::BigInteger> __get_knowledgeProofForX1() const;

 ::ArrayW<Org::BouncyCastle::Math::BigInteger> __declspec(property(get=__get_knowledgeProofForX2, put=__set_knowledgeProofForX2))  knowledgeProofForX2;

constexpr void __set_knowledgeProofForX2(::ArrayW<Org::BouncyCastle::Math::BigInteger> value) ;

constexpr ::ArrayW<Org::BouncyCastle::Math::BigInteger> __get_knowledgeProofForX2() const;


// Properties

 ::StringW __declspec(property(get=get_ParticipantId))  ParticipantId;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Gx1))  Gx1;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Gx2))  Gx2;

 ::ArrayW<Org::BouncyCastle::Math::BigInteger> __declspec(property(get=get_KnowledgeProofForX1))  KnowledgeProofForX1;

 ::ArrayW<Org::BouncyCastle::Math::BigInteger> __declspec(property(get=get_KnowledgeProofForX2))  KnowledgeProofForX2;


// Methods

// Ctor Parameters [CppParam { name: "participantId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "gx1", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "gx2", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "knowledgeProofForX1", ty: "::ArrayW<Org::BouncyCastle::Math::BigInteger>", modifiers: "", def_value: None }, CppParam { name: "knowledgeProofForX2", ty: "::ArrayW<Org::BouncyCastle::Math::BigInteger>", modifiers: "", def_value: None }]
explicit JPakeRound1Payload(::StringW participantId, Org::BouncyCastle::Math::BigInteger gx1, Org::BouncyCastle::Math::BigInteger gx2, ::ArrayW<Org::BouncyCastle::Math::BigInteger> knowledgeProofForX1, ::ArrayW<Org::BouncyCastle::Math::BigInteger> knowledgeProofForX2) ;

/// @brief Method .ctor addr 0x1188858 size 0x19c virtual false final false
 void _ctor(::StringW participantId, Org::BouncyCastle::Math::BigInteger gx1, Org::BouncyCastle::Math::BigInteger gx2, ::ArrayW<Org::BouncyCastle::Math::BigInteger> knowledgeProofForX1, ::ArrayW<Org::BouncyCastle::Math::BigInteger> knowledgeProofForX2) ;

/// @brief Method get_ParticipantId addr 0x118a8c8 size 0x8 virtual true final false
 ::StringW get_ParticipantId() ;

/// @brief Method get_Gx1 addr 0x118a8d0 size 0x8 virtual true final false
 Org::BouncyCastle::Math::BigInteger get_Gx1() ;

/// @brief Method get_Gx2 addr 0x118a8d8 size 0x8 virtual true final false
 Org::BouncyCastle::Math::BigInteger get_Gx2() ;

/// @brief Method get_KnowledgeProofForX1 addr 0x118a8e0 size 0x7c virtual true final false
 ::ArrayW<Org::BouncyCastle::Math::BigInteger> get_KnowledgeProofForX1() ;

/// @brief Method get_KnowledgeProofForX2 addr 0x118a95c size 0x7c virtual true final false
 ::ArrayW<Org::BouncyCastle::Math::BigInteger> get_KnowledgeProofForX2() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Agreement::JPake
NEED_NO_BOX(Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound1Payload);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound1Payload, "Org.BouncyCastle.Crypto.Agreement.JPake", "JPakeRound1Payload");
