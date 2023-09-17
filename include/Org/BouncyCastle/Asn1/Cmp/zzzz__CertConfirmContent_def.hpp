#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class CertStatus;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class CertConfirmContent;
}
// Type: Org.BouncyCastle.Asn1.Cmp::CertConfirmContent
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11))
// CS Name: Org.BouncyCastle.Asn1.Cmp.CertConfirmContent
class CORDL_TYPE CertConfirmContent : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CertConfirmContent() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertConfirmContent", modifiers: " const&", def_value: None }]
constexpr CertConfirmContent(CertConfirmContent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertConfirmContent", modifiers: "&&", def_value: None }]
constexpr CertConfirmContent(CertConfirmContent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertConfirmContent(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CertConfirmContent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertConfirmContent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertConfirmContent& operator=(CertConfirmContent&& o) noexcept = default;
  constexpr CertConfirmContent& operator=(CertConfirmContent const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_content, put=__set_content))  content;

constexpr void __set_content(::Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence __get_content() const;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit CertConfirmContent(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdd7270 size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdd7298 size 0x18c virtual false final false
static ::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method ToCertStatusArray addr 0xdd7424 size 0xf4 virtual true final false
 ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CertStatus> ToCertStatusArray() ;

/// @brief Method ToAsn1Object addr 0xdd76a0 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent, "Org.BouncyCastle.Asn1.Cmp", "CertConfirmContent");
