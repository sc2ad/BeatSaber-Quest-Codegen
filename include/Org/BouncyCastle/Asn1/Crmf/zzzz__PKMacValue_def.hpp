#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1::Cmp {
class PbmParameter;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class PKMacValue;
}
// Type: Org.BouncyCastle.Asn1.Crmf::PKMacValue
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(117))
// CS Name: Org.BouncyCastle.Asn1.Crmf.PKMacValue
class CORDL_TYPE PKMacValue : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PKMacValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "PKMacValue", modifiers: " const&", def_value: None }]
constexpr PKMacValue(PKMacValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PKMacValue", modifiers: "&&", def_value: None }]
constexpr PKMacValue(PKMacValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PKMacValue(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr PKMacValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PKMacValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PKMacValue& operator=(PKMacValue&& o) noexcept = default;
  constexpr PKMacValue& operator=(PKMacValue const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_algID, put=__set_algID))  algID;

constexpr void __set_algID(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_algID() const;

 ::Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=__get_macValue, put=__set_macValue))  macValue;

constexpr void __set_macValue(::Org::BouncyCastle::Asn1::DerBitString value) ;

constexpr ::Org::BouncyCastle::Asn1::DerBitString __get_macValue() const;


// Properties

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_AlgID))  AlgID;

 ::Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=get_MacValue))  MacValue;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit PKMacValue(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdf9454 size 0xb4 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdf9508 size 0x188 virtual false final false
static ::Org::BouncyCastle::Asn1::Crmf::PKMacValue GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0xdf9690 size 0x18 virtual false final false
static ::Org::BouncyCastle::Asn1::Crmf::PKMacValue GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

// Ctor Parameters [CppParam { name: "pbmParams", ty: "::Org::BouncyCastle::Asn1::Cmp::PbmParameter", modifiers: "", def_value: None }, CppParam { name: "macValue", ty: "::Org::BouncyCastle::Asn1::DerBitString", modifiers: "", def_value: None }]
explicit PKMacValue(::Org::BouncyCastle::Asn1::Cmp::PbmParameter pbmParams, ::Org::BouncyCastle::Asn1::DerBitString macValue) ;

/// @brief Method .ctor addr 0xdf96a8 size 0xbc virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Cmp::PbmParameter pbmParams, ::Org::BouncyCastle::Asn1::DerBitString macValue) ;

// Ctor Parameters [CppParam { name: "algID", ty: "::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "macValue", ty: "::Org::BouncyCastle::Asn1::DerBitString", modifiers: "", def_value: None }]
explicit PKMacValue(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algID, ::Org::BouncyCastle::Asn1::DerBitString macValue) ;

/// @brief Method .ctor addr 0xdf9764 size 0x2c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algID, ::Org::BouncyCastle::Asn1::DerBitString macValue) ;

/// @brief Method get_AlgID addr 0xdf9790 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_AlgID() ;

/// @brief Method get_MacValue addr 0xdf9798 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::DerBitString get_MacValue() ;

/// @brief Method ToAsn1Object addr 0xdf97a0 size 0xf0 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Crmf
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::PKMacValue);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::PKMacValue, "Org.BouncyCastle.Asn1.Crmf", "PKMacValue");
