#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::Cms {
class TimeStampTokenEvidence;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class Evidence;
}
// Type: Org.BouncyCastle.Asn1.Cms::Evidence
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(73))
// CS Name: Org.BouncyCastle.Asn1.Cms.Evidence
class CORDL_TYPE Evidence : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Choice
constexpr operator  Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Evidence() = default;

// Ctor Parameters [CppParam { name: "", ty: "Evidence", modifiers: " const&", def_value: None }]
constexpr Evidence(Evidence const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Evidence", modifiers: "&&", def_value: None }]
constexpr Evidence(Evidence&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Evidence(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr Evidence& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Evidence& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Evidence& operator=(Evidence&& o) noexcept = default;
  constexpr Evidence& operator=(Evidence const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence __declspec(property(get=__get_tstEvidence, put=__set_tstEvidence))  tstEvidence;

constexpr void __set_tstEvidence(Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence value) ;

constexpr Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence __get_tstEvidence() const;

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_otherEvidence, put=__set_otherEvidence))  otherEvidence;

constexpr void __set_otherEvidence(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_otherEvidence() const;


// Properties

 Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence __declspec(property(get=get_TstEvidence))  TstEvidence;


// Methods

static Org::BouncyCastle::Asn1::Cms::Evidence New_ctor(Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence tstEvidence) ;

/// @brief Method .ctor addr 0xdeafec size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence tstEvidence) ;

static Org::BouncyCastle::Asn1::Cms::Evidence New_ctor(Org::BouncyCastle::Asn1::Asn1TaggedObject tagged) ;

/// @brief Method .ctor addr 0xdeb014 size 0xc8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1TaggedObject tagged) ;

/// @brief Method GetInstance addr 0xdeb0dc size 0x168 virtual false final false
static Org::BouncyCastle::Asn1::Cms::Evidence GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0xdeb244 size 0x1c virtual false final false
static Org::BouncyCastle::Asn1::Cms::Evidence GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

/// @brief Method get_TstEvidence addr 0xdeb260 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence get_TstEvidence() ;

/// @brief Method ToAsn1Object addr 0xdeb268 size 0x94 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cms::Evidence);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cms::Evidence, "Org.BouncyCastle.Asn1.Cms", "Evidence");
