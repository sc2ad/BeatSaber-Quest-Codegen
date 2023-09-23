#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class CertId;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class CertificateList;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class RevRepContent;
}
// Type: Org.BouncyCastle.Asn1.Cmp::RevRepContent
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(51))
// CS Name: Org.BouncyCastle.Asn1.Cmp.RevRepContent
class CORDL_TYPE RevRepContent : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~RevRepContent() = default;

// Ctor Parameters [CppParam { name: "", ty: "RevRepContent", modifiers: " const&", def_value: None }]
constexpr RevRepContent(RevRepContent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RevRepContent", modifiers: "&&", def_value: None }]
constexpr RevRepContent(RevRepContent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RevRepContent(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr RevRepContent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RevRepContent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RevRepContent& operator=(RevRepContent&& o) noexcept = default;
  constexpr RevRepContent& operator=(RevRepContent const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_status, put=__set_status))  status;

constexpr void __set_status(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_status() const;

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_revCerts, put=__set_revCerts))  revCerts;

constexpr void __set_revCerts(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_revCerts() const;

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_crls, put=__set_crls))  crls;

constexpr void __set_crls(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_crls() const;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit RevRepContent(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xde1b28 size 0xe0 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xddc790 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Cmp::RevRepContent GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetStatus addr 0xde1c08 size 0xf4 virtual true final false
 ::ArrayW<Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo> GetStatus() ;

/// @brief Method GetRevCerts addr 0xde1cfc size 0x100 virtual true final false
 ::ArrayW<Org::BouncyCastle::Asn1::Crmf::CertId> GetRevCerts() ;

/// @brief Method GetCrls addr 0xde1dfc size 0x100 virtual true final false
 ::ArrayW<Org::BouncyCastle::Asn1::X509::CertificateList> GetCrls() ;

/// @brief Method ToAsn1Object addr 0xde1efc size 0x12c virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cmp::RevRepContent);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cmp::RevRepContent, "Org.BouncyCastle.Asn1.Cmp", "RevRepContent");
