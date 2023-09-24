#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1::Esf {
class OtherHash;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Esf {
class CrlIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class CrlValidatedID;
}
// Type: Org.BouncyCastle.Asn1.Esf::CrlValidatedID
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(143))
// CS Name: Org.BouncyCastle.Asn1.Esf.CrlValidatedID
class CORDL_TYPE CrlValidatedID : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CrlValidatedID() = default;

// Ctor Parameters [CppParam { name: "", ty: "CrlValidatedID", modifiers: " const&", def_value: None }]
constexpr CrlValidatedID(CrlValidatedID const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CrlValidatedID", modifiers: "&&", def_value: None }]
constexpr CrlValidatedID(CrlValidatedID&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CrlValidatedID(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CrlValidatedID& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CrlValidatedID& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CrlValidatedID& operator=(CrlValidatedID&& o) noexcept = default;
  constexpr CrlValidatedID& operator=(CrlValidatedID const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Esf::OtherHash __declspec(property(get=__get_crlHash, put=__set_crlHash))  crlHash;

constexpr void __set_crlHash(Org::BouncyCastle::Asn1::Esf::OtherHash value) ;

constexpr Org::BouncyCastle::Asn1::Esf::OtherHash __get_crlHash() const;

 Org::BouncyCastle::Asn1::Esf::CrlIdentifier __declspec(property(get=__get_crlIdentifier, put=__set_crlIdentifier))  crlIdentifier;

constexpr void __set_crlIdentifier(Org::BouncyCastle::Asn1::Esf::CrlIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::Esf::CrlIdentifier __get_crlIdentifier() const;


// Properties

 Org::BouncyCastle::Asn1::Esf::OtherHash __declspec(property(get=get_CrlHash))  CrlHash;

 Org::BouncyCastle::Asn1::Esf::CrlIdentifier __declspec(property(get=get_CrlIdentifier))  CrlIdentifier;


// Methods

/// @brief Method GetInstance addr 0xe03edc size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Esf::CrlValidatedID GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::Esf::CrlValidatedID New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xe04d38 size 0x1c8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

static Org::BouncyCastle::Asn1::Esf::CrlValidatedID New_ctor(Org::BouncyCastle::Asn1::Esf::OtherHash crlHash) ;

/// @brief Method .ctor addr 0xe05028 size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Esf::OtherHash crlHash) ;

static Org::BouncyCastle::Asn1::Esf::CrlValidatedID New_ctor(Org::BouncyCastle::Asn1::Esf::OtherHash crlHash, Org::BouncyCastle::Asn1::Esf::CrlIdentifier crlIdentifier) ;

/// @brief Method .ctor addr 0xe05030 size 0x7c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Esf::OtherHash crlHash, Org::BouncyCastle::Asn1::Esf::CrlIdentifier crlIdentifier) ;

/// @brief Method get_CrlHash addr 0xe050ac size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Esf::OtherHash get_CrlHash() ;

/// @brief Method get_CrlIdentifier addr 0xe050b4 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Esf::CrlIdentifier get_CrlIdentifier() ;

/// @brief Method ToAsn1Object addr 0xe050bc size 0x138 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(Org::BouncyCastle::Asn1::Esf::CrlValidatedID);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Esf::CrlValidatedID, "Org.BouncyCastle.Asn1.Esf", "CrlValidatedID");
