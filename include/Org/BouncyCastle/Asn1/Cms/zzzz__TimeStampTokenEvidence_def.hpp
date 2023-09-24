#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::Cms {
class TimeStampAndCrl;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class TimeStampTokenEvidence;
}
// Type: Org.BouncyCastle.Asn1.Cms::TimeStampTokenEvidence
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(101))
// CS Name: Org.BouncyCastle.Asn1.Cms.TimeStampTokenEvidence
class CORDL_TYPE TimeStampTokenEvidence : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TimeStampTokenEvidence() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampTokenEvidence", modifiers: " const&", def_value: None }]
constexpr TimeStampTokenEvidence(TimeStampTokenEvidence const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampTokenEvidence", modifiers: "&&", def_value: None }]
constexpr TimeStampTokenEvidence(TimeStampTokenEvidence&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimeStampTokenEvidence(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr TimeStampTokenEvidence& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimeStampTokenEvidence& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimeStampTokenEvidence& operator=(TimeStampTokenEvidence&& o) noexcept = default;
  constexpr TimeStampTokenEvidence& operator=(TimeStampTokenEvidence const& o) noexcept = default;
                


// Fields

 ::ArrayW<Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl> __declspec(property(get=__get_timeStampAndCrls, put=__set_timeStampAndCrls))  timeStampAndCrls;

constexpr void __set_timeStampAndCrls(::ArrayW<Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl> value) ;

constexpr ::ArrayW<Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl> __get_timeStampAndCrls() const;


// Methods

static Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence New_ctor(::ArrayW<Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl> timeStampAndCrls) ;

/// @brief Method .ctor addr 0xdf4e88 size 0x28 virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl> timeStampAndCrls) ;

static Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence New_ctor(Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl timeStampAndCrl) ;

/// @brief Method .ctor addr 0xdf4eb0 size 0xa8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl timeStampAndCrl) ;

static Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdf4f58 size 0x38c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdf52e4 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject tagged, bool isExplicit) ;

/// @brief Method GetInstance addr 0xdf52fc size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method ToTimeStampAndCrlArray addr 0xdf53a0 size 0x78 virtual true final false
 ::ArrayW<Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl> ToTimeStampAndCrlArray() ;

/// @brief Method ToAsn1Object addr 0xdf5418 size 0x68 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence, "Org.BouncyCastle.Asn1.Cms", "TimeStampTokenEvidence");
