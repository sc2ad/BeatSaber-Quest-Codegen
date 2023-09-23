#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1::Esf {
class OtherHash;
}
namespace Org::BouncyCastle::Asn1::Esf {
class OcspIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class OcspResponsesID;
}
// Type: Org.BouncyCastle.Asn1.Esf::OcspResponsesID
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(147))
// CS Name: Org.BouncyCastle.Asn1.Esf.OcspResponsesID
class CORDL_TYPE OcspResponsesID : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OcspResponsesID() = default;

// Ctor Parameters [CppParam { name: "", ty: "OcspResponsesID", modifiers: " const&", def_value: None }]
constexpr OcspResponsesID(OcspResponsesID const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OcspResponsesID", modifiers: "&&", def_value: None }]
constexpr OcspResponsesID(OcspResponsesID&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OcspResponsesID(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr OcspResponsesID& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OcspResponsesID& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OcspResponsesID& operator=(OcspResponsesID&& o) noexcept = default;
  constexpr OcspResponsesID& operator=(OcspResponsesID const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Esf::OcspIdentifier __declspec(property(get=__get_ocspIdentifier, put=__set_ocspIdentifier))  ocspIdentifier;

constexpr void __set_ocspIdentifier(Org::BouncyCastle::Asn1::Esf::OcspIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::Esf::OcspIdentifier __get_ocspIdentifier() const;

 Org::BouncyCastle::Asn1::Esf::OtherHash __declspec(property(get=__get_ocspRepHash, put=__set_ocspRepHash))  ocspRepHash;

constexpr void __set_ocspRepHash(Org::BouncyCastle::Asn1::Esf::OtherHash value) ;

constexpr Org::BouncyCastle::Asn1::Esf::OtherHash __get_ocspRepHash() const;


// Properties

 Org::BouncyCastle::Asn1::Esf::OcspIdentifier __declspec(property(get=get_OcspIdentifier))  OcspIdentifier;

 Org::BouncyCastle::Asn1::Esf::OtherHash __declspec(property(get=get_OcspRepHash))  OcspRepHash;


// Methods

/// @brief Method GetInstance addr 0xe05cfc size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Esf::OcspResponsesID GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit OcspResponsesID(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xe06274 size 0x1c8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "ocspIdentifier", ty: "Org::BouncyCastle::Asn1::Esf::OcspIdentifier", modifiers: "", def_value: None }]
explicit OcspResponsesID(Org::BouncyCastle::Asn1::Esf::OcspIdentifier ocspIdentifier) ;

/// @brief Method .ctor addr 0xe0643c size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Esf::OcspIdentifier ocspIdentifier) ;

// Ctor Parameters [CppParam { name: "ocspIdentifier", ty: "Org::BouncyCastle::Asn1::Esf::OcspIdentifier", modifiers: "", def_value: None }, CppParam { name: "ocspRepHash", ty: "Org::BouncyCastle::Asn1::Esf::OtherHash", modifiers: "", def_value: None }]
explicit OcspResponsesID(Org::BouncyCastle::Asn1::Esf::OcspIdentifier ocspIdentifier, Org::BouncyCastle::Asn1::Esf::OtherHash ocspRepHash) ;

/// @brief Method .ctor addr 0xe06444 size 0x7c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Esf::OcspIdentifier ocspIdentifier, Org::BouncyCastle::Asn1::Esf::OtherHash ocspRepHash) ;

/// @brief Method get_OcspIdentifier addr 0xe064c0 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Esf::OcspIdentifier get_OcspIdentifier() ;

/// @brief Method get_OcspRepHash addr 0xe064c8 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Esf::OtherHash get_OcspRepHash() ;

/// @brief Method ToAsn1Object addr 0xe064d0 size 0x138 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(Org::BouncyCastle::Asn1::Esf::OcspResponsesID);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Esf::OcspResponsesID, "Org.BouncyCastle.Asn1.Esf", "OcspResponsesID");
