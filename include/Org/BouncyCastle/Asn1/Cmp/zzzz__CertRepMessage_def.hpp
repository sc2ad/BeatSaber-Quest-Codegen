#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Asn1::Cmp {
class CmpCertificate;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class CertResponse;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class CertRepMessage;
}
// Type: Org.BouncyCastle.Asn1.Cmp::CertRepMessage
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15))
// CS Name: Org.BouncyCastle.Asn1.Cmp.CertRepMessage
class CORDL_TYPE CertRepMessage : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CertRepMessage() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertRepMessage", modifiers: " const&", def_value: None }]
constexpr CertRepMessage(CertRepMessage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertRepMessage", modifiers: "&&", def_value: None }]
constexpr CertRepMessage(CertRepMessage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertRepMessage(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CertRepMessage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertRepMessage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertRepMessage& operator=(CertRepMessage&& o) noexcept = default;
  constexpr CertRepMessage& operator=(CertRepMessage const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_caPubs, put=__set_caPubs))  caPubs;

constexpr void __set_caPubs(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_caPubs() const;

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_response, put=__set_response))  response;

constexpr void __set_response(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_response() const;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit CertRepMessage(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdd7f14 size 0xf8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdd800c size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Cmp::CertRepMessage GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "caPubs", ty: "::ArrayW<Org::BouncyCastle::Asn1::Cmp::CmpCertificate>", modifiers: "", def_value: None }, CppParam { name: "response", ty: "::ArrayW<Org::BouncyCastle::Asn1::Cmp::CertResponse>", modifiers: "", def_value: None }]
explicit CertRepMessage(::ArrayW<Org::BouncyCastle::Asn1::Cmp::CmpCertificate> caPubs, ::ArrayW<Org::BouncyCastle::Asn1::Cmp::CertResponse> response) ;

/// @brief Method .ctor addr 0xdd8194 size 0xf4 virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Asn1::Cmp::CmpCertificate> caPubs, ::ArrayW<Org::BouncyCastle::Asn1::Cmp::CertResponse> response) ;

/// @brief Method GetCAPubs addr 0xdd8288 size 0xfc virtual true final false
 ::ArrayW<Org::BouncyCastle::Asn1::Cmp::CmpCertificate> GetCAPubs() ;

/// @brief Method GetResponse addr 0xdd8384 size 0xf4 virtual true final false
 ::ArrayW<Org::BouncyCastle::Asn1::Cmp::CertResponse> GetResponse() ;

/// @brief Method ToAsn1Object addr 0xdd8600 size 0xb8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cmp::CertRepMessage);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cmp::CertRepMessage, "Org.BouncyCastle.Asn1.Cmp", "CertRepMessage");
