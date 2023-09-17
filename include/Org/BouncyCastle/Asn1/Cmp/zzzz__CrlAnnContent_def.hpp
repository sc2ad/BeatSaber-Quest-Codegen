#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Org::BouncyCastle::Asn1::X509 {
class CertificateList;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class CrlAnnContent;
}
// Type: Org.BouncyCastle.Asn1.Cmp::CrlAnnContent
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(21))
// CS Name: Org.BouncyCastle.Asn1.Cmp.CrlAnnContent
class CORDL_TYPE CrlAnnContent : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CrlAnnContent() = default;

// Ctor Parameters [CppParam { name: "", ty: "CrlAnnContent", modifiers: " const&", def_value: None }]
constexpr CrlAnnContent(CrlAnnContent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CrlAnnContent", modifiers: "&&", def_value: None }]
constexpr CrlAnnContent(CrlAnnContent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CrlAnnContent(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CrlAnnContent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CrlAnnContent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CrlAnnContent& operator=(CrlAnnContent&& o) noexcept = default;
  constexpr CrlAnnContent& operator=(CrlAnnContent const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_content, put=__set_content))  content;

constexpr void __set_content(::Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence __get_content() const;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit CrlAnnContent(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdd9b5c size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdd9b84 size 0x18c virtual false final false
static ::Org::BouncyCastle::Asn1::Cmp::CrlAnnContent GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method ToCertificateListArray addr 0xdd9d10 size 0xf8 virtual true final false
 ::ArrayW<::Org::BouncyCastle::Asn1::X509::CertificateList> ToCertificateListArray() ;

/// @brief Method ToAsn1Object addr 0xdd9e08 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::CrlAnnContent);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::CrlAnnContent, "Org.BouncyCastle.Asn1.Cmp", "CrlAnnContent");
