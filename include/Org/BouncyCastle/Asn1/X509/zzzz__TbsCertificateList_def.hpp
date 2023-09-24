#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace GlobalNamespace {
class Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Time;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::X509 {
class CrlEntry;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace GlobalNamespace {
class Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration;
}
namespace Org::BouncyCastle::Asn1::X509 {
class TbsCertificateList;
}
// Type: ::RevokedCertificatesEnumerator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(391))
// CS Name: Org.BouncyCastle.Asn1.X509.TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator
class CORDL_TYPE Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator(Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator(Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator& operator=(Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator&& o) noexcept = default;
  constexpr Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator& operator=(Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator const& o) noexcept = default;
                


// Fields

 System::Collections::IEnumerator __declspec(property(get=__get_e, put=__set_e))  e;

constexpr void __set_e(System::Collections::IEnumerator value) ;

constexpr System::Collections::IEnumerator __get_e() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Current))  Current;


// Methods

static GlobalNamespace::Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator New_ctor(System::Collections::IEnumerator e) ;

/// @brief Method .ctor addr 0x110fac8 size 0x28 virtual false final false
 void _ctor(System::Collections::IEnumerator e) ;

/// @brief Method MoveNext addr 0x110faf0 size 0xa0 virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x110fb90 size 0xa4 virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x110fc34 size 0xe8 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RevokedCertificatesEnumeration
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(392))
// CS Name: Org.BouncyCastle.Asn1.X509.TbsCertificateList::RevokedCertificatesEnumeration
class CORDL_TYPE Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using RevokedCertificatesEnumerator = GlobalNamespace::Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration(Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration(Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration& operator=(Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration&& o) noexcept = default;
  constexpr Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration& operator=(Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration const& o) noexcept = default;
                


// Fields

 System::Collections::IEnumerable __declspec(property(get=__get_en, put=__set_en))  en;

constexpr void __set_en(System::Collections::IEnumerable value) ;

constexpr System::Collections::IEnumerable __get_en() const;


// Methods

static Org::BouncyCastle::Asn1::X509::Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration New_ctor(System::Collections::IEnumerable en) ;

/// @brief Method .ctor addr 0x110f9b0 size 0x28 virtual false final false
 void _ctor(System::Collections::IEnumerable en) ;

/// @brief Method GetEnumerator addr 0x110f9e8 size 0xe0 virtual true final true
 System::Collections::IEnumerator GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
// Type: Org.BouncyCastle.Asn1.X509::TbsCertificateList
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(393))
// CS Name: Org.BouncyCastle.Asn1.X509.TbsCertificateList
class CORDL_TYPE TbsCertificateList : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
using RevokedCertificatesEnumeration = Org::BouncyCastle::Asn1::X509::Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~TbsCertificateList() = default;

// Ctor Parameters [CppParam { name: "", ty: "TbsCertificateList", modifiers: " const&", def_value: None }]
constexpr TbsCertificateList(TbsCertificateList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TbsCertificateList", modifiers: "&&", def_value: None }]
constexpr TbsCertificateList(TbsCertificateList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TbsCertificateList(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr TbsCertificateList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TbsCertificateList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TbsCertificateList& operator=(TbsCertificateList&& o) noexcept = default;
  constexpr TbsCertificateList& operator=(TbsCertificateList const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_seq, put=__set_seq))  seq;

constexpr void __set_seq(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_seq() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_version() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_signature, put=__set_signature))  signature;

constexpr void __set_signature(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_signature() const;

 Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=__get_issuer, put=__set_issuer))  issuer;

constexpr void __set_issuer(Org::BouncyCastle::Asn1::X509::X509Name value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509Name __get_issuer() const;

 Org::BouncyCastle::Asn1::X509::Time __declspec(property(get=__get_thisUpdate, put=__set_thisUpdate))  thisUpdate;

constexpr void __set_thisUpdate(Org::BouncyCastle::Asn1::X509::Time value) ;

constexpr Org::BouncyCastle::Asn1::X509::Time __get_thisUpdate() const;

 Org::BouncyCastle::Asn1::X509::Time __declspec(property(get=__get_nextUpdate, put=__set_nextUpdate))  nextUpdate;

constexpr void __set_nextUpdate(Org::BouncyCastle::Asn1::X509::Time value) ;

constexpr Org::BouncyCastle::Asn1::X509::Time __get_nextUpdate() const;

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_revokedCertificates, put=__set_revokedCertificates))  revokedCertificates;

constexpr void __set_revokedCertificates(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_revokedCertificates() const;

 Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=__get_crlExtensions, put=__set_crlExtensions))  crlExtensions;

constexpr void __set_crlExtensions(Org::BouncyCastle::Asn1::X509::X509Extensions value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509Extensions __get_crlExtensions() const;


// Properties

 int32_t __declspec(property(get=get_Version))  Version;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_VersionNumber))  VersionNumber;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_Signature))  Signature;

 Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=get_Issuer))  Issuer;

 Org::BouncyCastle::Asn1::X509::Time __declspec(property(get=get_ThisUpdate))  ThisUpdate;

 Org::BouncyCastle::Asn1::X509::Time __declspec(property(get=get_NextUpdate))  NextUpdate;

 Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=get_Extensions))  Extensions;


// Methods

/// @brief Method GetInstance addr 0x110f0ec size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::X509::TbsCertificateList GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0x110f104 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::X509::TbsCertificateList GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::X509::TbsCertificateList New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x110f28c size 0x4ec virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_Version addr 0x110f778 size 0x24 virtual false final false
 int32_t get_Version() ;

/// @brief Method get_VersionNumber addr 0x110f79c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerInteger get_VersionNumber() ;

/// @brief Method get_Signature addr 0x110f7a4 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_Signature() ;

/// @brief Method get_Issuer addr 0x110f7ac size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::X509Name get_Issuer() ;

/// @brief Method get_ThisUpdate addr 0x110f7b4 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::Time get_ThisUpdate() ;

/// @brief Method get_NextUpdate addr 0x110f7bc size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::Time get_NextUpdate() ;

/// @brief Method GetRevokedCertificates addr 0x110f7c4 size 0x14c virtual false final false
 ::ArrayW<Org::BouncyCastle::Asn1::X509::CrlEntry> GetRevokedCertificates() ;

/// @brief Method GetRevokedCertificateEnumeration addr 0x110f910 size 0xa0 virtual false final false
 System::Collections::IEnumerable GetRevokedCertificateEnumeration() ;

/// @brief Method get_Extensions addr 0x110f9d8 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::X509Extensions get_Extensions() ;

/// @brief Method ToAsn1Object addr 0x110f9e0 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(GlobalNamespace::Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator, "Org.BouncyCastle.Asn1.X509", "TbsCertificateList/RevokedCertificatesEnumeration/RevokedCertificatesEnumerator");
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::Org__BouncyCastle__Asn1__X509__TbsCertificateList__RevokedCertificatesEnumeration, "Org.BouncyCastle.Asn1.X509", "TbsCertificateList/RevokedCertificatesEnumeration");
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::TbsCertificateList);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::TbsCertificateList, "Org.BouncyCastle.Asn1.X509", "TbsCertificateList");
