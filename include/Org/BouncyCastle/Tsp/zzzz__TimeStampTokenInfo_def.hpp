#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Tsp {
class GenTimeAccuracy;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1::Tsp {
class TstInfo;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1::Tsp {
class Accuracy;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class TimeStampTokenInfo;
}
// Type: Org.BouncyCastle.Tsp::TimeStampTokenInfo
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1772))
// CS Name: Org.BouncyCastle.Tsp.TimeStampTokenInfo
class CORDL_TYPE TimeStampTokenInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TimeStampTokenInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampTokenInfo", modifiers: " const&", def_value: None }]
constexpr TimeStampTokenInfo(TimeStampTokenInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampTokenInfo", modifiers: "&&", def_value: None }]
constexpr TimeStampTokenInfo(TimeStampTokenInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimeStampTokenInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TimeStampTokenInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimeStampTokenInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimeStampTokenInfo& operator=(TimeStampTokenInfo&& o) noexcept = default;
  constexpr TimeStampTokenInfo& operator=(TimeStampTokenInfo const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Tsp::TstInfo __declspec(property(get=__get_tstInfo, put=__set_tstInfo))  tstInfo;

constexpr void __set_tstInfo(Org::BouncyCastle::Asn1::Tsp::TstInfo value) ;

constexpr Org::BouncyCastle::Asn1::Tsp::TstInfo __get_tstInfo() const;

 System::DateTime __declspec(property(get=__get_genTime, put=__set_genTime))  genTime;

constexpr void __set_genTime(System::DateTime value) ;

constexpr System::DateTime __get_genTime() const;


// Properties

 bool __declspec(property(get=get_IsOrdered))  IsOrdered;

 Org::BouncyCastle::Asn1::Tsp::Accuracy __declspec(property(get=get_Accuracy))  Accuracy;

 System::DateTime __declspec(property(get=get_GenTime))  GenTime;

 Org::BouncyCastle::Tsp::GenTimeAccuracy __declspec(property(get=get_GenTimeAccuracy))  GenTimeAccuracy;

 ::StringW __declspec(property(get=get_Policy))  Policy;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_SerialNumber))  SerialNumber;

 Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=get_Tsa))  Tsa;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Nonce))  Nonce;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_HashAlgorithm))  HashAlgorithm;

 ::StringW __declspec(property(get=get_MessageImprintAlgOid))  MessageImprintAlgOid;

 Org::BouncyCastle::Asn1::Tsp::TstInfo __declspec(property(get=get_TstInfo))  TstInfo;


// Methods

static Org::BouncyCastle::Tsp::TimeStampTokenInfo New_ctor(Org::BouncyCastle::Asn1::Tsp::TstInfo tstInfo) ;

/// @brief Method .ctor addr 0x10c6878 size 0x134 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Tsp::TstInfo tstInfo) ;

/// @brief Method get_IsOrdered addr 0x10c7bf0 size 0x24 virtual false final false
 bool get_IsOrdered() ;

/// @brief Method get_Accuracy addr 0x10c7c14 size 0x1c virtual false final false
 Org::BouncyCastle::Asn1::Tsp::Accuracy get_Accuracy() ;

/// @brief Method get_GenTime addr 0x10c7c30 size 0x8 virtual false final false
 System::DateTime get_GenTime() ;

/// @brief Method get_GenTimeAccuracy addr 0x10c7c38 size 0x7c virtual false final false
 Org::BouncyCastle::Tsp::GenTimeAccuracy get_GenTimeAccuracy() ;

/// @brief Method get_Policy addr 0x10c4ec8 size 0x24 virtual false final false
 ::StringW get_Policy() ;

/// @brief Method get_SerialNumber addr 0x10c7cb4 size 0x24 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_SerialNumber() ;

/// @brief Method get_Tsa addr 0x10c7cd8 size 0x1c virtual false final false
 Org::BouncyCastle::Asn1::X509::GeneralName get_Tsa() ;

/// @brief Method get_Nonce addr 0x10c4e04 size 0x2c virtual false final false
 Org::BouncyCastle::Math::BigInteger get_Nonce() ;

/// @brief Method get_HashAlgorithm addr 0x10c7cf4 size 0x24 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_HashAlgorithm() ;

/// @brief Method get_MessageImprintAlgOid addr 0x10c4e70 size 0x3c virtual false final false
 ::StringW get_MessageImprintAlgOid() ;

/// @brief Method GetMessageImprintDigest addr 0x10c4e4c size 0x24 virtual false final false
 ::ArrayW<uint8_t> GetMessageImprintDigest() ;

/// @brief Method GetEncoded addr 0x10c7d18 size 0x1c virtual false final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method get_TstInfo addr 0x10c7d34 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Tsp::TstInfo get_TstInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Tsp
NEED_NO_BOX(Org::BouncyCastle::Tsp::TimeStampTokenInfo);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Tsp::TimeStampTokenInfo, "Org.BouncyCastle.Tsp", "TimeStampTokenInfo");
