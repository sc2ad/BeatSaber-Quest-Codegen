#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Cms {
class DefaultDigestAlgorithmIdentifierFinder;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class CertConfirmContent;
}
namespace Org::BouncyCastle::Cmp {
class CertificateStatus;
}
// Forward declare root types
namespace Org::BouncyCastle::Cmp {
class CertificateConfirmationContent;
}
// Type: Org.BouncyCastle.Cmp::CertificateConfirmationContent
namespace Org::BouncyCastle::Cmp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(601))
// CS Name: Org.BouncyCastle.Cmp.CertificateConfirmationContent
class CORDL_TYPE CertificateConfirmationContent : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CertificateConfirmationContent() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateConfirmationContent", modifiers: " const&", def_value: None }]
constexpr CertificateConfirmationContent(CertificateConfirmationContent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateConfirmationContent", modifiers: "&&", def_value: None }]
constexpr CertificateConfirmationContent(CertificateConfirmationContent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertificateConfirmationContent(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CertificateConfirmationContent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertificateConfirmationContent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertificateConfirmationContent& operator=(CertificateConfirmationContent&& o) noexcept = default;
  constexpr CertificateConfirmationContent& operator=(CertificateConfirmationContent const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder __declspec(property(get=__get_digestAlgFinder, put=__set_digestAlgFinder))  digestAlgFinder;

constexpr void __set_digestAlgFinder(Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder value) ;

constexpr Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder __get_digestAlgFinder() const;

 Org::BouncyCastle::Asn1::Cmp::CertConfirmContent __declspec(property(get=__get_content, put=__set_content))  content;

constexpr void __set_content(Org::BouncyCastle::Asn1::Cmp::CertConfirmContent value) ;

constexpr Org::BouncyCastle::Asn1::Cmp::CertConfirmContent __get_content() const;


// Methods

// Ctor Parameters [CppParam { name: "content", ty: "Org::BouncyCastle::Asn1::Cmp::CertConfirmContent", modifiers: "", def_value: None }]
explicit CertificateConfirmationContent(Org::BouncyCastle::Asn1::Cmp::CertConfirmContent content) ;

/// @brief Method .ctor addr 0x114b1d4 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cmp::CertConfirmContent content) ;

// Ctor Parameters [CppParam { name: "content", ty: "Org::BouncyCastle::Asn1::Cmp::CertConfirmContent", modifiers: "", def_value: None }, CppParam { name: "digestAlgFinder", ty: "Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder", modifiers: "", def_value: None }]
explicit CertificateConfirmationContent(Org::BouncyCastle::Asn1::Cmp::CertConfirmContent content, Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder digestAlgFinder) ;

/// @brief Method .ctor addr 0x114b1fc size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cmp::CertConfirmContent content, Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder digestAlgFinder) ;

/// @brief Method ToAsn1Structure addr 0x114b228 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Cmp::CertConfirmContent ToAsn1Structure() ;

/// @brief Method GetStatusMessages addr 0x114b230 size 0x12c virtual false final false
 ::ArrayW<Org::BouncyCastle::Cmp::CertificateStatus> GetStatusMessages() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cmp
NEED_NO_BOX(Org::BouncyCastle::Cmp::CertificateConfirmationContent);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cmp::CertificateConfirmationContent, "Org.BouncyCastle.Cmp", "CertificateConfirmationContent");
