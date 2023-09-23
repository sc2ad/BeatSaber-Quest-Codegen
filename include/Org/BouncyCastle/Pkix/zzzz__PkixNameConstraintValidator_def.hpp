#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralSubtree;
}
namespace System::Collections {
class ICollection;
}
namespace Org::BouncyCastle::Asn1::X509 {
class OtherName;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixNameConstraintValidator;
}
// Type: Org.BouncyCastle.Pkix::PkixNameConstraintValidator
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1726))
// CS Name: Org.BouncyCastle.Pkix.PkixNameConstraintValidator
class CORDL_TYPE PkixNameConstraintValidator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~PkixNameConstraintValidator() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixNameConstraintValidator", modifiers: " const&", def_value: None }]
constexpr PkixNameConstraintValidator(PkixNameConstraintValidator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixNameConstraintValidator", modifiers: "&&", def_value: None }]
constexpr PkixNameConstraintValidator(PkixNameConstraintValidator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkixNameConstraintValidator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PkixNameConstraintValidator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkixNameConstraintValidator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkixNameConstraintValidator& operator=(PkixNameConstraintValidator&& o) noexcept = default;
  constexpr PkixNameConstraintValidator& operator=(PkixNameConstraintValidator const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SerialNumberOid, put=__set_SerialNumberOid))  SerialNumberOid;

static void __set_SerialNumberOid(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SerialNumberOid() ;

 Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_excludedSubtreesDN, put=__set_excludedSubtreesDN))  excludedSubtreesDN;

constexpr void __set_excludedSubtreesDN(Org::BouncyCastle::Utilities::Collections::ISet value) ;

constexpr Org::BouncyCastle::Utilities::Collections::ISet __get_excludedSubtreesDN() const;

 Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_excludedSubtreesDNS, put=__set_excludedSubtreesDNS))  excludedSubtreesDNS;

constexpr void __set_excludedSubtreesDNS(Org::BouncyCastle::Utilities::Collections::ISet value) ;

constexpr Org::BouncyCastle::Utilities::Collections::ISet __get_excludedSubtreesDNS() const;

 Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_excludedSubtreesEmail, put=__set_excludedSubtreesEmail))  excludedSubtreesEmail;

constexpr void __set_excludedSubtreesEmail(Org::BouncyCastle::Utilities::Collections::ISet value) ;

constexpr Org::BouncyCastle::Utilities::Collections::ISet __get_excludedSubtreesEmail() const;

 Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_excludedSubtreesURI, put=__set_excludedSubtreesURI))  excludedSubtreesURI;

constexpr void __set_excludedSubtreesURI(Org::BouncyCastle::Utilities::Collections::ISet value) ;

constexpr Org::BouncyCastle::Utilities::Collections::ISet __get_excludedSubtreesURI() const;

 Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_excludedSubtreesIP, put=__set_excludedSubtreesIP))  excludedSubtreesIP;

constexpr void __set_excludedSubtreesIP(Org::BouncyCastle::Utilities::Collections::ISet value) ;

constexpr Org::BouncyCastle::Utilities::Collections::ISet __get_excludedSubtreesIP() const;

 Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_excludedSubtreesOtherName, put=__set_excludedSubtreesOtherName))  excludedSubtreesOtherName;

constexpr void __set_excludedSubtreesOtherName(Org::BouncyCastle::Utilities::Collections::ISet value) ;

constexpr Org::BouncyCastle::Utilities::Collections::ISet __get_excludedSubtreesOtherName() const;

 Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_permittedSubtreesDN, put=__set_permittedSubtreesDN))  permittedSubtreesDN;

constexpr void __set_permittedSubtreesDN(Org::BouncyCastle::Utilities::Collections::ISet value) ;

constexpr Org::BouncyCastle::Utilities::Collections::ISet __get_permittedSubtreesDN() const;

 Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_permittedSubtreesDNS, put=__set_permittedSubtreesDNS))  permittedSubtreesDNS;

constexpr void __set_permittedSubtreesDNS(Org::BouncyCastle::Utilities::Collections::ISet value) ;

constexpr Org::BouncyCastle::Utilities::Collections::ISet __get_permittedSubtreesDNS() const;

 Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_permittedSubtreesEmail, put=__set_permittedSubtreesEmail))  permittedSubtreesEmail;

constexpr void __set_permittedSubtreesEmail(Org::BouncyCastle::Utilities::Collections::ISet value) ;

constexpr Org::BouncyCastle::Utilities::Collections::ISet __get_permittedSubtreesEmail() const;

 Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_permittedSubtreesURI, put=__set_permittedSubtreesURI))  permittedSubtreesURI;

constexpr void __set_permittedSubtreesURI(Org::BouncyCastle::Utilities::Collections::ISet value) ;

constexpr Org::BouncyCastle::Utilities::Collections::ISet __get_permittedSubtreesURI() const;

 Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_permittedSubtreesIP, put=__set_permittedSubtreesIP))  permittedSubtreesIP;

constexpr void __set_permittedSubtreesIP(Org::BouncyCastle::Utilities::Collections::ISet value) ;

constexpr Org::BouncyCastle::Utilities::Collections::ISet __get_permittedSubtreesIP() const;

 Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_permittedSubtreesOtherName, put=__set_permittedSubtreesOtherName))  permittedSubtreesOtherName;

constexpr void __set_permittedSubtreesOtherName(Org::BouncyCastle::Utilities::Collections::ISet value) ;

constexpr Org::BouncyCastle::Utilities::Collections::ISet __get_permittedSubtreesOtherName() const;


// Methods

// Ctor Parameters []
explicit PkixNameConstraintValidator() ;

/// @brief Method .ctor addr 0x106aa54 size 0xf4 virtual false final false
 void _ctor() ;

/// @brief Method WithinDNSubtree addr 0x1079d84 size 0x3bc virtual false final false
static bool WithinDNSubtree(Org::BouncyCastle::Asn1::Asn1Sequence dns, Org::BouncyCastle::Asn1::Asn1Sequence subtree) ;

/// @brief Method CheckPermittedDN addr 0x107a140 size 0x10 virtual false final false
 void CheckPermittedDN(Org::BouncyCastle::Asn1::Asn1Sequence dn) ;

/// @brief Method CheckExcludedDN addr 0x107a270 size 0x10 virtual false final false
 void CheckExcludedDN(Org::BouncyCastle::Asn1::Asn1Sequence dn) ;

/// @brief Method IntersectDN addr 0x107a2dc size 0x7d4 virtual false final false
 Org::BouncyCastle::Utilities::Collections::ISet IntersectDN(Org::BouncyCastle::Utilities::Collections::ISet permitted, Org::BouncyCastle::Utilities::Collections::ISet dns) ;

/// @brief Method UnionDN addr 0x107aab0 size 0x5e4 virtual false final false
 Org::BouncyCastle::Utilities::Collections::ISet UnionDN(Org::BouncyCastle::Utilities::Collections::ISet excluded, Org::BouncyCastle::Asn1::Asn1Sequence dn) ;

/// @brief Method IntersectOtherName addr 0x107b094 size 0x698 virtual false final false
 Org::BouncyCastle::Utilities::Collections::ISet IntersectOtherName(Org::BouncyCastle::Utilities::Collections::ISet permitted, Org::BouncyCastle::Utilities::Collections::ISet otherNames) ;

/// @brief Method IntersectOtherName addr 0x107b72c size 0xd8 virtual false final false
 void IntersectOtherName(Org::BouncyCastle::Asn1::X509::OtherName otherName1, Org::BouncyCastle::Asn1::X509::OtherName otherName2, Org::BouncyCastle::Utilities::Collections::ISet intersect) ;

/// @brief Method UnionOtherName addr 0x107b804 size 0xf0 virtual false final false
 Org::BouncyCastle::Utilities::Collections::ISet UnionOtherName(Org::BouncyCastle::Utilities::Collections::ISet permitted, Org::BouncyCastle::Asn1::X509::OtherName otherName) ;

/// @brief Method IntersectEmail addr 0x107b8f4 size 0x6b8 virtual false final false
 Org::BouncyCastle::Utilities::Collections::ISet IntersectEmail(Org::BouncyCastle::Utilities::Collections::ISet permitted, Org::BouncyCastle::Utilities::Collections::ISet emails) ;

/// @brief Method UnionEmail addr 0x107c55c size 0x438 virtual false final false
 Org::BouncyCastle::Utilities::Collections::ISet UnionEmail(Org::BouncyCastle::Utilities::Collections::ISet excluded, ::StringW email) ;

/// @brief Method IntersectIP addr 0x107d2d4 size 0x780 virtual false final false
 Org::BouncyCastle::Utilities::Collections::ISet IntersectIP(Org::BouncyCastle::Utilities::Collections::ISet permitted, Org::BouncyCastle::Utilities::Collections::ISet ips) ;

/// @brief Method UnionIP addr 0x107dc94 size 0x4a8 virtual false final false
 Org::BouncyCastle::Utilities::Collections::ISet UnionIP(Org::BouncyCastle::Utilities::Collections::ISet excluded, ::ArrayW<uint8_t> ip) ;

/// @brief Method UnionIPRange addr 0x107e13c size 0x174 virtual false final false
 Org::BouncyCastle::Utilities::Collections::ISet UnionIPRange(::ArrayW<uint8_t> ipWithSubmask1, ::ArrayW<uint8_t> ipWithSubmask2) ;

/// @brief Method IntersectIPRange addr 0x107da54 size 0x240 virtual false final false
 Org::BouncyCastle::Utilities::Collections::ISet IntersectIPRange(::ArrayW<uint8_t> ipWithSubmask1, ::ArrayW<uint8_t> ipWithSubmask2) ;

/// @brief Method IpWithSubnetMask addr 0x107e9e0 size 0xa4 virtual false final false
 ::ArrayW<uint8_t> IpWithSubnetMask(::ArrayW<uint8_t> ip, ::ArrayW<uint8_t> subnetMask) ;

/// @brief Method ExtractIPsAndSubnetMasks addr 0x107e2b0 size 0x1fc virtual false final false
 ::ArrayW<::ArrayW<uint8_t>> ExtractIPsAndSubnetMasks(::ArrayW<uint8_t> ipWithSubmask1, ::ArrayW<uint8_t> ipWithSubmask2) ;

/// @brief Method MinMaxIPs addr 0x107e4ac size 0x2bc virtual false final false
 ::ArrayW<::ArrayW<uint8_t>> MinMaxIPs(::ArrayW<uint8_t> ip1, ::ArrayW<uint8_t> subnetmask1, ::ArrayW<uint8_t> ip2, ::ArrayW<uint8_t> subnetmask2) ;

/// @brief Method IsOtherNameConstrained addr 0x107ea84 size 0x1c virtual false final false
 bool IsOtherNameConstrained(Org::BouncyCastle::Asn1::X509::OtherName constraint, Org::BouncyCastle::Asn1::X509::OtherName otherName) ;

/// @brief Method IsOtherNameConstrained addr 0x107eaa0 size 0x324 virtual false final false
 bool IsOtherNameConstrained(Org::BouncyCastle::Utilities::Collections::ISet constraints, Org::BouncyCastle::Asn1::X509::OtherName otherName) ;

/// @brief Method CheckPermittedOtherName addr 0x107edc4 size 0x60 virtual false final false
 void CheckPermittedOtherName(Org::BouncyCastle::Utilities::Collections::ISet permitted, Org::BouncyCastle::Asn1::X509::OtherName name) ;

/// @brief Method CheckExcludedOtherName addr 0x107ee8c size 0x5c virtual false final false
 void CheckExcludedOtherName(Org::BouncyCastle::Utilities::Collections::ISet excluded, Org::BouncyCastle::Asn1::X509::OtherName name) ;

/// @brief Method IsEmailConstrained addr 0x107eee8 size 0x164 virtual false final false
 bool IsEmailConstrained(::StringW constraint, ::StringW email) ;

/// @brief Method IsEmailConstrained addr 0x107f240 size 0x354 virtual false final false
 bool IsEmailConstrained(Org::BouncyCastle::Utilities::Collections::ISet constraints, ::StringW email) ;

/// @brief Method CheckPermittedEmail addr 0x107f594 size 0x120 virtual false final false
 void CheckPermittedEmail(Org::BouncyCastle::Utilities::Collections::ISet permitted, ::StringW email) ;

/// @brief Method CheckExcludedEmail addr 0x107f6b4 size 0x5c virtual false final false
 void CheckExcludedEmail(Org::BouncyCastle::Utilities::Collections::ISet excluded, ::StringW email) ;

/// @brief Method IsDnsConstrained addr 0x107f710 size 0x80 virtual false final false
 bool IsDnsConstrained(::StringW constraint, ::StringW dns) ;

/// @brief Method IsDnsConstrained addr 0x107f790 size 0x33c virtual false final false
 bool IsDnsConstrained(Org::BouncyCastle::Utilities::Collections::ISet constraints, ::StringW dns) ;

/// @brief Method CheckPermittedDns addr 0x107facc size 0x110 virtual false final false
 void CheckPermittedDns(Org::BouncyCastle::Utilities::Collections::ISet permitted, ::StringW dns) ;

/// @brief Method CheckExcludedDns addr 0x107fbdc size 0x5c virtual false final false
 void CheckExcludedDns(Org::BouncyCastle::Utilities::Collections::ISet excluded, ::StringW dns) ;

/// @brief Method IsDirectoryConstrained addr 0x107fc38 size 0x34c virtual false final false
 bool IsDirectoryConstrained(Org::BouncyCastle::Utilities::Collections::ISet constraints, Org::BouncyCastle::Asn1::Asn1Sequence directory) ;

/// @brief Method CheckPermittedDirectory addr 0x107a150 size 0x120 virtual false final false
 void CheckPermittedDirectory(Org::BouncyCastle::Utilities::Collections::ISet permitted, Org::BouncyCastle::Asn1::Asn1Sequence directory) ;

/// @brief Method CheckExcludedDirectory addr 0x107a280 size 0x5c virtual false final false
 void CheckExcludedDirectory(Org::BouncyCastle::Utilities::Collections::ISet excluded, Org::BouncyCastle::Asn1::Asn1Sequence directory) ;

/// @brief Method IsUriConstrained addr 0x107ff84 size 0xec virtual false final false
 bool IsUriConstrained(::StringW constraint, ::StringW uri) ;

/// @brief Method IsUriConstrained addr 0x108020c size 0x33c virtual false final false
 bool IsUriConstrained(Org::BouncyCastle::Utilities::Collections::ISet constraints, ::StringW uri) ;

/// @brief Method CheckPermittedUri addr 0x1080548 size 0x110 virtual false final false
 void CheckPermittedUri(Org::BouncyCastle::Utilities::Collections::ISet permitted, ::StringW uri) ;

/// @brief Method CheckExcludedUri addr 0x1080658 size 0x5c virtual false final false
 void CheckExcludedUri(Org::BouncyCastle::Utilities::Collections::ISet excluded, ::StringW uri) ;

/// @brief Method IsIPConstrained addr 0x10806b4 size 0x1b8 virtual false final false
 bool IsIPConstrained(::ArrayW<uint8_t> constraint, ::ArrayW<uint8_t> ip) ;

/// @brief Method IsIPConstrained addr 0x108086c size 0x35c virtual false final false
 bool IsIPConstrained(Org::BouncyCastle::Utilities::Collections::ISet constraints, ::ArrayW<uint8_t> ip) ;

/// @brief Method CheckPermittedIP addr 0x1080bc8 size 0x110 virtual false final false
 void CheckPermittedIP(Org::BouncyCastle::Utilities::Collections::ISet permitted, ::ArrayW<uint8_t> ip) ;

/// @brief Method CheckExcludedIP addr 0x1080cd8 size 0x5c virtual false final false
 void CheckExcludedIP(Org::BouncyCastle::Utilities::Collections::ISet excluded, ::ArrayW<uint8_t> ip) ;

/// @brief Method WithinDomain addr 0x107f04c size 0x1f4 virtual false final false
 bool WithinDomain(::StringW testDomain, ::StringW domain) ;

/// @brief Method UnionEmail addr 0x107c994 size 0x940 virtual false final false
 void UnionEmail(::StringW email1, ::StringW email2, Org::BouncyCastle::Utilities::Collections::ISet union) ;

/// @brief Method unionURI addr 0x1080d34 size 0x940 virtual false final false
 void unionURI(::StringW email1, ::StringW email2, Org::BouncyCastle::Utilities::Collections::ISet union) ;

/// @brief Method IntersectDns addr 0x1081674 size 0x7b8 virtual false final false
 Org::BouncyCastle::Utilities::Collections::ISet IntersectDns(Org::BouncyCastle::Utilities::Collections::ISet permitted, Org::BouncyCastle::Utilities::Collections::ISet dnss) ;

/// @brief Method UnionDns addr 0x1081e2c size 0x5c8 virtual false final false
 Org::BouncyCastle::Utilities::Collections::ISet UnionDns(Org::BouncyCastle::Utilities::Collections::ISet excluded, ::StringW dns) ;

/// @brief Method IntersectEmail addr 0x107bfd8 size 0x584 virtual false final false
 void IntersectEmail(::StringW email1, ::StringW email2, Org::BouncyCastle::Utilities::Collections::ISet intersect) ;

/// @brief Method IntersectUri addr 0x10823f4 size 0x6a4 virtual false final false
 Org::BouncyCastle::Utilities::Collections::ISet IntersectUri(Org::BouncyCastle::Utilities::Collections::ISet permitted, Org::BouncyCastle::Utilities::Collections::ISet uris) ;

/// @brief Method UnionUri addr 0x108301c size 0x428 virtual false final false
 Org::BouncyCastle::Utilities::Collections::ISet UnionUri(Org::BouncyCastle::Utilities::Collections::ISet excluded, ::StringW uri) ;

/// @brief Method IntersectUri addr 0x1082a98 size 0x584 virtual false final false
 void IntersectUri(::StringW email1, ::StringW email2, Org::BouncyCastle::Utilities::Collections::ISet intersect) ;

/// @brief Method ExtractHostFromURL addr 0x1080070 size 0x19c virtual false final false
static ::StringW ExtractHostFromURL(::StringW url) ;

/// @brief Method checkPermitted addr 0x1083444 size 0x128 virtual false final false
 void checkPermitted(Org::BouncyCastle::Asn1::X509::GeneralName name) ;

/// @brief Method checkExcluded addr 0x108356c size 0x128 virtual false final false
 void checkExcluded(Org::BouncyCastle::Asn1::X509::GeneralName name) ;

/// @brief Method IntersectPermittedSubtree addr 0x1083694 size 0xaa4 virtual false final false
 void IntersectPermittedSubtree(Org::BouncyCastle::Asn1::Asn1Sequence permitted) ;

/// @brief Method ExtractNameAsString addr 0x107bfac size 0x2c virtual false final false
 ::StringW ExtractNameAsString(Org::BouncyCastle::Asn1::X509::GeneralName name) ;

/// @brief Method IntersectEmptyPermittedSubtree addr 0x1084138 size 0x128 virtual false final false
 void IntersectEmptyPermittedSubtree(int32_t nameType) ;

/// @brief Method AddExcludedSubtree addr 0x1084260 size 0x188 virtual false final false
 void AddExcludedSubtree(Org::BouncyCastle::Asn1::X509::GeneralSubtree subtree) ;

/// @brief Method Max addr 0x107e7d4 size 0x6c virtual false final false
static ::ArrayW<uint8_t> Max(::ArrayW<uint8_t> ip1, ::ArrayW<uint8_t> ip2) ;

/// @brief Method Min addr 0x107e768 size 0x6c virtual false final false
static ::ArrayW<uint8_t> Min(::ArrayW<uint8_t> ip1, ::ArrayW<uint8_t> ip2) ;

/// @brief Method CompareTo addr 0x107e840 size 0xdc virtual false final false
static int32_t CompareTo(::ArrayW<uint8_t> ip1, ::ArrayW<uint8_t> ip2) ;

/// @brief Method Or addr 0x107e91c size 0xc4 virtual false final false
static ::ArrayW<uint8_t> Or(::ArrayW<uint8_t> ip1, ::ArrayW<uint8_t> ip2) ;

/// @brief Method HashCode addr 0x10843e8 size 0xc virtual false final false
 int32_t HashCode() ;

/// @brief Method GetHashCode addr 0x10843f4 size 0xf0 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method HashCollection addr 0x10844e4 size 0x39c virtual false final false
 int32_t HashCollection(System::Collections::ICollection c) ;

/// @brief Method Equals addr 0x1084880 size 0x16c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method CollectionsAreEqual addr 0x10849ec size 0x6a4 virtual false final false
 bool CollectionsAreEqual(System::Collections::ICollection coll1, System::Collections::ICollection coll2) ;

/// @brief Method SpecialEquals addr 0x1085090 size 0x128 virtual false final false
 bool SpecialEquals(::bs_hook::Il2CppWrapperType o1, ::bs_hook::Il2CppWrapperType o2) ;

/// @brief Method StringifyIP addr 0x10851b8 size 0x1b4 virtual false final false
 ::StringW StringifyIP(::ArrayW<uint8_t> ip) ;

/// @brief Method StringifyIPCollection addr 0x108536c size 0x3f0 virtual false final false
 ::StringW StringifyIPCollection(Org::BouncyCastle::Utilities::Collections::ISet ips) ;

/// @brief Method StringifyOtherNameCollection addr 0x108575c size 0x594 virtual false final false
 ::StringW StringifyOtherNameCollection(Org::BouncyCastle::Utilities::Collections::ISet otherNames) ;

/// @brief Method ToString addr 0x1085cf0 size 0x6bc virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkix
NEED_NO_BOX(Org::BouncyCastle::Pkix::PkixNameConstraintValidator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Pkix::PkixNameConstraintValidator, "Org.BouncyCastle.Pkix", "PkixNameConstraintValidator");
