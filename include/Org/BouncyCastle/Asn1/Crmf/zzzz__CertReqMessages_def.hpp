#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Org::BouncyCastle::Asn1::Crmf {
class CertReqMsg;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class CertReqMessages;
}
// Type: Org.BouncyCastle.Asn1.Crmf::CertReqMessages
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(104))
// CS Name: Org.BouncyCastle.Asn1.Crmf.CertReqMessages
class CORDL_TYPE CertReqMessages : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CertReqMessages() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertReqMessages", modifiers: " const&", def_value: None }]
constexpr CertReqMessages(CertReqMessages const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertReqMessages", modifiers: "&&", def_value: None }]
constexpr CertReqMessages(CertReqMessages&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertReqMessages(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CertReqMessages& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertReqMessages& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertReqMessages& operator=(CertReqMessages&& o) noexcept = default;
  constexpr CertReqMessages& operator=(CertReqMessages const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_content, put=__set_content))  content;

constexpr void __set_content(::Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence __get_content() const;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit CertReqMessages(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdf5b9c size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdf5bc4 size 0x18c virtual false final false
static ::Org::BouncyCastle::Asn1::Crmf::CertReqMessages GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "msgs", ty: "::ArrayW<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg>", modifiers: "", def_value: None }]
explicit CertReqMessages(::ArrayW<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg> msgs) ;

/// @brief Method .ctor addr 0xdf5d50 size 0x7c virtual false final false
 void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg> msgs) ;

/// @brief Method ToCertReqMsgArray addr 0xdf5dcc size 0xf4 virtual true final false
 ::ArrayW<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg> ToCertReqMsgArray() ;

/// @brief Method ToAsn1Object addr 0xdf5f64 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Crmf
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::CertReqMessages);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::CertReqMessages, "Org.BouncyCastle.Asn1.Crmf", "CertReqMessages");
