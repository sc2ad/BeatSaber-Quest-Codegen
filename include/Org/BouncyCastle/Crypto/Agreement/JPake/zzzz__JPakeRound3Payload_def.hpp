#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
class JPakeRound3Payload;
}
// Type: Org.BouncyCastle.Crypto.Agreement.JPake::JPakeRound3Payload
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(719))
// CS Name: Org.BouncyCastle.Crypto.Agreement.JPake.JPakeRound3Payload
class CORDL_TYPE JPakeRound3Payload : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~JPakeRound3Payload() = default;

// Ctor Parameters [CppParam { name: "", ty: "JPakeRound3Payload", modifiers: " const&", def_value: None }]
constexpr JPakeRound3Payload(JPakeRound3Payload const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JPakeRound3Payload", modifiers: "&&", def_value: None }]
constexpr JPakeRound3Payload(JPakeRound3Payload&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JPakeRound3Payload(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JPakeRound3Payload& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JPakeRound3Payload& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JPakeRound3Payload& operator=(JPakeRound3Payload&& o) noexcept = default;
  constexpr JPakeRound3Payload& operator=(JPakeRound3Payload const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_participantId, put=__set_participantId))  participantId;

constexpr void __set_participantId(::StringW value) ;

constexpr ::StringW __get_participantId() const;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_macTag, put=__set_macTag))  macTag;

constexpr void __set_macTag(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_macTag() const;


// Properties

 ::StringW __declspec(property(get=get_ParticipantId))  ParticipantId;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_MacTag))  MacTag;


// Methods

// Ctor Parameters [CppParam { name: "participantId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "magTag", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit JPakeRound3Payload(::StringW participantId, ::Org::BouncyCastle::Math::BigInteger magTag) ;

/// @brief Method .ctor addr 0x1189ed8 size 0x2c virtual false final false
 void _ctor(::StringW participantId, ::Org::BouncyCastle::Math::BigInteger magTag) ;

/// @brief Method get_ParticipantId addr 0x118aa64 size 0x8 virtual true final false
 ::StringW get_ParticipantId() ;

/// @brief Method get_MacTag addr 0x118aa6c size 0x8 virtual true final false
 ::Org::BouncyCastle::Math::BigInteger get_MacTag() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Agreement::JPake
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload, "Org.BouncyCastle.Crypto.Agreement.JPake", "JPakeRound3Payload");
