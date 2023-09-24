#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X500 {
class DirectoryString;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509::SigI {
class NameOrPseudonym;
}
// Type: Org.BouncyCastle.Asn1.X509.SigI::NameOrPseudonym
namespace Org::BouncyCastle::Asn1::X509::SigI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(335))
// CS Name: Org.BouncyCastle.Asn1.X509.SigI.NameOrPseudonym
class CORDL_TYPE NameOrPseudonym : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Choice
constexpr operator  Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~NameOrPseudonym() = default;

// Ctor Parameters [CppParam { name: "", ty: "NameOrPseudonym", modifiers: " const&", def_value: None }]
constexpr NameOrPseudonym(NameOrPseudonym const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NameOrPseudonym", modifiers: "&&", def_value: None }]
constexpr NameOrPseudonym(NameOrPseudonym&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NameOrPseudonym(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr NameOrPseudonym& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NameOrPseudonym& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NameOrPseudonym& operator=(NameOrPseudonym&& o) noexcept = default;
  constexpr NameOrPseudonym& operator=(NameOrPseudonym const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X500::DirectoryString __declspec(property(get=__get_pseudonym, put=__set_pseudonym))  pseudonym;

constexpr void __set_pseudonym(Org::BouncyCastle::Asn1::X500::DirectoryString value) ;

constexpr Org::BouncyCastle::Asn1::X500::DirectoryString __get_pseudonym() const;

 Org::BouncyCastle::Asn1::X500::DirectoryString __declspec(property(get=__get_surname, put=__set_surname))  surname;

constexpr void __set_surname(Org::BouncyCastle::Asn1::X500::DirectoryString value) ;

constexpr Org::BouncyCastle::Asn1::X500::DirectoryString __get_surname() const;

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_givenName, put=__set_givenName))  givenName;

constexpr void __set_givenName(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_givenName() const;


// Properties

 Org::BouncyCastle::Asn1::X500::DirectoryString __declspec(property(get=get_Pseudonym))  Pseudonym;

 Org::BouncyCastle::Asn1::X500::DirectoryString __declspec(property(get=get_Surname))  Surname;


// Methods

/// @brief Method GetInstance addr 0xff5298 size 0x1e8 virtual false final false
static Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym New_ctor(Org::BouncyCastle::Asn1::X500::DirectoryString pseudonym) ;

/// @brief Method .ctor addr 0xff5480 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X500::DirectoryString pseudonym) ;

static Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xff54a8 size 0x1a8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

static Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym New_ctor(::StringW pseudonym) ;

/// @brief Method .ctor addr 0xff5650 size 0x78 virtual false final false
 void _ctor(::StringW pseudonym) ;

static Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym New_ctor(Org::BouncyCastle::Asn1::X500::DirectoryString surname, Org::BouncyCastle::Asn1::Asn1Sequence givenName) ;

/// @brief Method .ctor addr 0xff56c8 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X500::DirectoryString surname, Org::BouncyCastle::Asn1::Asn1Sequence givenName) ;

/// @brief Method get_Pseudonym addr 0xff56f4 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X500::DirectoryString get_Pseudonym() ;

/// @brief Method get_Surname addr 0xff56fc size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X500::DirectoryString get_Surname() ;

/// @brief Method GetGivenName addr 0xff5704 size 0x318 virtual false final false
 ::ArrayW<Org::BouncyCastle::Asn1::X500::DirectoryString> GetGivenName() ;

/// @brief Method ToAsn1Object addr 0xff5a1c size 0x10c virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509::SigI
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym, "Org.BouncyCastle.Asn1.X509.SigI", "NameOrPseudonym");
