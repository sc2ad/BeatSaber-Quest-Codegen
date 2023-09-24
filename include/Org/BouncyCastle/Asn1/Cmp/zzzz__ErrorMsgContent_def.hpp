#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusInfo;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiFreeText;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class ErrorMsgContent;
}
// Type: Org.BouncyCastle.Asn1.Cmp::ErrorMsgContent
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(22))
// CS Name: Org.BouncyCastle.Asn1.Cmp.ErrorMsgContent
class CORDL_TYPE ErrorMsgContent : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ErrorMsgContent() = default;

// Ctor Parameters [CppParam { name: "", ty: "ErrorMsgContent", modifiers: " const&", def_value: None }]
constexpr ErrorMsgContent(ErrorMsgContent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ErrorMsgContent", modifiers: "&&", def_value: None }]
constexpr ErrorMsgContent(ErrorMsgContent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ErrorMsgContent(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr ErrorMsgContent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ErrorMsgContent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ErrorMsgContent& operator=(ErrorMsgContent&& o) noexcept = default;
  constexpr ErrorMsgContent& operator=(ErrorMsgContent const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo __declspec(property(get=__get_pkiStatusInfo, put=__set_pkiStatusInfo))  pkiStatusInfo;

constexpr void __set_pkiStatusInfo(Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo value) ;

constexpr Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo __get_pkiStatusInfo() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_errorCode, put=__set_errorCode))  errorCode;

constexpr void __set_errorCode(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_errorCode() const;

 Org::BouncyCastle::Asn1::Cmp::PkiFreeText __declspec(property(get=__get_errorDetails, put=__set_errorDetails))  errorDetails;

constexpr void __set_errorDetails(Org::BouncyCastle::Asn1::Cmp::PkiFreeText value) ;

constexpr Org::BouncyCastle::Asn1::Cmp::PkiFreeText __get_errorDetails() const;


// Properties

 Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo __declspec(property(get=get_PkiStatusInfo))  PkiStatusInfo;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_ErrorCode))  ErrorCode;

 Org::BouncyCastle::Asn1::Cmp::PkiFreeText __declspec(property(get=get_ErrorDetails))  ErrorDetails;


// Methods

static Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdd9e10 size 0x11c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdda0b4 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent New_ctor(Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo pkiStatusInfo) ;

/// @brief Method .ctor addr 0xdda23c size 0xc virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo pkiStatusInfo) ;

static Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent New_ctor(Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo pkiStatusInfo, Org::BouncyCastle::Asn1::DerInteger errorCode, Org::BouncyCastle::Asn1::Cmp::PkiFreeText errorDetails) ;

/// @brief Method .ctor addr 0xdda248 size 0x8c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo pkiStatusInfo, Org::BouncyCastle::Asn1::DerInteger errorCode, Org::BouncyCastle::Asn1::Cmp::PkiFreeText errorDetails) ;

/// @brief Method get_PkiStatusInfo addr 0xdda2d4 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo get_PkiStatusInfo() ;

/// @brief Method get_ErrorCode addr 0xdda2dc size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::DerInteger get_ErrorCode() ;

/// @brief Method get_ErrorDetails addr 0xdda2e4 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Cmp::PkiFreeText get_ErrorDetails() ;

/// @brief Method ToAsn1Object addr 0xdda2ec size 0x174 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent, "Org.BouncyCastle.Asn1.Cmp", "ErrorMsgContent");
