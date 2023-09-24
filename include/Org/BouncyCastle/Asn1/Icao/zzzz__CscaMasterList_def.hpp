#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509CertificateStructure;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Icao {
class CscaMasterList;
}
// Type: Org.BouncyCastle.Asn1.Icao::CscaMasterList
namespace Org::BouncyCastle::Asn1::Icao {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(174))
// CS Name: Org.BouncyCastle.Asn1.Icao.CscaMasterList
class CORDL_TYPE CscaMasterList : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CscaMasterList() = default;

// Ctor Parameters [CppParam { name: "", ty: "CscaMasterList", modifiers: " const&", def_value: None }]
constexpr CscaMasterList(CscaMasterList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CscaMasterList", modifiers: "&&", def_value: None }]
constexpr CscaMasterList(CscaMasterList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CscaMasterList(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CscaMasterList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CscaMasterList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CscaMasterList& operator=(CscaMasterList&& o) noexcept = default;
  constexpr CscaMasterList& operator=(CscaMasterList const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_version() const;

 ::ArrayW<Org::BouncyCastle::Asn1::X509::X509CertificateStructure> __declspec(property(get=__get_certList, put=__set_certList))  certList;

constexpr void __set_certList(::ArrayW<Org::BouncyCastle::Asn1::X509::X509CertificateStructure> value) ;

constexpr ::ArrayW<Org::BouncyCastle::Asn1::X509::X509CertificateStructure> __get_certList() const;


// Properties

 int32_t __declspec(property(get=get_Version))  Version;


// Methods

/// @brief Method GetInstance addr 0xee6138 size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::Icao::CscaMasterList GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::Icao::CscaMasterList New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xee61dc size 0x288 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

static Org::BouncyCastle::Asn1::Icao::CscaMasterList New_ctor(::ArrayW<Org::BouncyCastle::Asn1::X509::X509CertificateStructure> certStructs) ;

/// @brief Method .ctor addr 0xee6464 size 0x88 virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Asn1::X509::X509CertificateStructure> certStructs) ;

/// @brief Method get_Version addr 0xee6564 size 0x1c virtual true final false
 int32_t get_Version() ;

/// @brief Method GetCertStructs addr 0xee6580 size 0x8 virtual false final false
 ::ArrayW<Org::BouncyCastle::Asn1::X509::X509CertificateStructure> GetCertStructs() ;

/// @brief Method CopyCertList addr 0xee64ec size 0x78 virtual false final false
static ::ArrayW<Org::BouncyCastle::Asn1::X509::X509CertificateStructure> CopyCertList(::ArrayW<Org::BouncyCastle::Asn1::X509::X509CertificateStructure> orig) ;

/// @brief Method ToAsn1Object addr 0xee6588 size 0x11c virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Icao
NEED_NO_BOX(Org::BouncyCastle::Asn1::Icao::CscaMasterList);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Icao::CscaMasterList, "Org.BouncyCastle.Asn1.Icao", "CscaMasterList");
