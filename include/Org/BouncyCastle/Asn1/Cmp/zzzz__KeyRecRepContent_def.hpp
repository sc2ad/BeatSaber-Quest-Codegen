#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class CertifiedKeyPair;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class CmpCertificate;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class KeyRecRepContent;
}
// Type: Org.BouncyCastle.Asn1.Cmp::KeyRecRepContent
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(26))
// CS Name: Org.BouncyCastle.Asn1.Cmp.KeyRecRepContent
class CORDL_TYPE KeyRecRepContent : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~KeyRecRepContent() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyRecRepContent", modifiers: " const&", def_value: None }]
constexpr KeyRecRepContent(KeyRecRepContent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyRecRepContent", modifiers: "&&", def_value: None }]
constexpr KeyRecRepContent(KeyRecRepContent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyRecRepContent(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr KeyRecRepContent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyRecRepContent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyRecRepContent& operator=(KeyRecRepContent&& o) noexcept = default;
  constexpr KeyRecRepContent& operator=(KeyRecRepContent const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo __declspec(property(get=__get_status, put=__set_status))  status;

constexpr void __set_status(Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo value) ;

constexpr Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo __get_status() const;

 Org::BouncyCastle::Asn1::Cmp::CmpCertificate __declspec(property(get=__get_newSigCert, put=__set_newSigCert))  newSigCert;

constexpr void __set_newSigCert(Org::BouncyCastle::Asn1::Cmp::CmpCertificate value) ;

constexpr Org::BouncyCastle::Asn1::Cmp::CmpCertificate __get_newSigCert() const;

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_caCerts, put=__set_caCerts))  caCerts;

constexpr void __set_caCerts(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_caCerts() const;

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_keyPairHist, put=__set_keyPairHist))  keyPairHist;

constexpr void __set_keyPairHist(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_keyPairHist() const;


// Properties

 Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo __declspec(property(get=get_Status))  Status;

 Org::BouncyCastle::Asn1::Cmp::CmpCertificate __declspec(property(get=get_NewSigCert))  NewSigCert;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit KeyRecRepContent(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xddaeb4 size 0x19c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xddb050 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_Status addr 0xddb1d8 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo get_Status() ;

/// @brief Method get_NewSigCert addr 0xddb1e0 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Cmp::CmpCertificate get_NewSigCert() ;

/// @brief Method GetCACerts addr 0xddb1e8 size 0xfc virtual true final false
 ::ArrayW<Org::BouncyCastle::Asn1::Cmp::CmpCertificate> GetCACerts() ;

/// @brief Method GetKeyPairHist addr 0xddb2e4 size 0xfc virtual true final false
 ::ArrayW<Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair> GetKeyPairHist() ;

/// @brief Method ToAsn1Object addr 0xddb3e0 size 0x144 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent, "Org.BouncyCastle.Asn1.Cmp", "KeyRecRepContent");
