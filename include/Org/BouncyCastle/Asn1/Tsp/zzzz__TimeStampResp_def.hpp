#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Tsp {
class TimeStampResp;
}
// Type: Org.BouncyCastle.Asn1.Tsp::TimeStampResp
namespace Org::BouncyCastle::Asn1::Tsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(317))
// CS Name: Org.BouncyCastle.Asn1.Tsp.TimeStampResp
class CORDL_TYPE TimeStampResp : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TimeStampResp() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampResp", modifiers: " const&", def_value: None }]
constexpr TimeStampResp(TimeStampResp const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampResp", modifiers: "&&", def_value: None }]
constexpr TimeStampResp(TimeStampResp&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimeStampResp(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr TimeStampResp& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimeStampResp& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimeStampResp& operator=(TimeStampResp&& o) noexcept = default;
  constexpr TimeStampResp& operator=(TimeStampResp const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo __declspec(property(get=__get_pkiStatusInfo, put=__set_pkiStatusInfo))  pkiStatusInfo;

constexpr void __set_pkiStatusInfo(Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo value) ;

constexpr Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo __get_pkiStatusInfo() const;

 Org::BouncyCastle::Asn1::Cms::ContentInfo __declspec(property(get=__get_timeStampToken, put=__set_timeStampToken))  timeStampToken;

constexpr void __set_timeStampToken(Org::BouncyCastle::Asn1::Cms::ContentInfo value) ;

constexpr Org::BouncyCastle::Asn1::Cms::ContentInfo __get_timeStampToken() const;


// Properties

 Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo __declspec(property(get=get_Status))  Status;

 Org::BouncyCastle::Asn1::Cms::ContentInfo __declspec(property(get=get_TimeStampToken))  TimeStampToken;


// Methods

/// @brief Method GetInstance addr 0xfec6d4 size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::Tsp::TimeStampResp GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::Tsp::TimeStampResp New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xfec778 size 0x88 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

static Org::BouncyCastle::Asn1::Tsp::TimeStampResp New_ctor(Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo pkiStatusInfo, Org::BouncyCastle::Asn1::Cms::ContentInfo timeStampToken) ;

/// @brief Method .ctor addr 0xfec800 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo pkiStatusInfo, Org::BouncyCastle::Asn1::Cms::ContentInfo timeStampToken) ;

/// @brief Method get_Status addr 0xfec82c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo get_Status() ;

/// @brief Method get_TimeStampToken addr 0xfec834 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Cms::ContentInfo get_TimeStampToken() ;

/// @brief Method ToAsn1Object addr 0xfec83c size 0x148 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Tsp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Tsp::TimeStampResp);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Tsp::TimeStampResp, "Org.BouncyCastle.Asn1.Tsp", "TimeStampResp");
