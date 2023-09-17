#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1::Esf {
class OtherCertID;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class CompleteCertificateRefs;
}
// Type: Org.BouncyCastle.Asn1.Esf::CompleteCertificateRefs
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(138))
// CS Name: Org.BouncyCastle.Asn1.Esf.CompleteCertificateRefs
class CORDL_TYPE CompleteCertificateRefs : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CompleteCertificateRefs() = default;

// Ctor Parameters [CppParam { name: "", ty: "CompleteCertificateRefs", modifiers: " const&", def_value: None }]
constexpr CompleteCertificateRefs(CompleteCertificateRefs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CompleteCertificateRefs", modifiers: "&&", def_value: None }]
constexpr CompleteCertificateRefs(CompleteCertificateRefs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CompleteCertificateRefs(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CompleteCertificateRefs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CompleteCertificateRefs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CompleteCertificateRefs& operator=(CompleteCertificateRefs&& o) noexcept = default;
  constexpr CompleteCertificateRefs& operator=(CompleteCertificateRefs const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_otherCertIDs, put=__set_otherCertIDs))  otherCertIDs;

constexpr void __set_otherCertIDs(::Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence __get_otherCertIDs() const;


// Methods

/// @brief Method GetInstance addr 0xe01e88 size 0x188 virtual false final false
static ::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit CompleteCertificateRefs(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xe02010 size 0x34c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "otherCertIDs", ty: "::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID>", modifiers: "", def_value: None }]
explicit CompleteCertificateRefs(::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID> otherCertIDs) ;

/// @brief Method .ctor addr 0xe024e4 size 0xc4 virtual false final false
 void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID> otherCertIDs) ;

// Ctor Parameters [CppParam { name: "otherCertIDs", ty: "::System::Collections::IEnumerable", modifiers: "", def_value: None }]
explicit CompleteCertificateRefs(::System::Collections::IEnumerable otherCertIDs) ;

/// @brief Method .ctor addr 0xe025a8 size 0x1a4 virtual false final false
 void _ctor(::System::Collections::IEnumerable otherCertIDs) ;

/// @brief Method GetOtherCertIDs addr 0xe0274c size 0x120 virtual false final false
 ::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID> GetOtherCertIDs() ;

/// @brief Method ToAsn1Object addr 0xe0286c size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Esf
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs, "Org.BouncyCastle.Asn1.Esf", "CompleteCertificateRefs");
