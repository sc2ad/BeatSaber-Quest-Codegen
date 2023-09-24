#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class KeyDerivationFunc;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class EncryptionScheme;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class PbeS2Parameters;
}
// Type: Org.BouncyCastle.Asn1.Pkcs::PbeS2Parameters
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(241))
// CS Name: Org.BouncyCastle.Asn1.Pkcs.PbeS2Parameters
class CORDL_TYPE PbeS2Parameters : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PbeS2Parameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "PbeS2Parameters", modifiers: " const&", def_value: None }]
constexpr PbeS2Parameters(PbeS2Parameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PbeS2Parameters", modifiers: "&&", def_value: None }]
constexpr PbeS2Parameters(PbeS2Parameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PbeS2Parameters(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr PbeS2Parameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PbeS2Parameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PbeS2Parameters& operator=(PbeS2Parameters&& o) noexcept = default;
  constexpr PbeS2Parameters& operator=(PbeS2Parameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc __declspec(property(get=__get_func, put=__set_func))  func;

constexpr void __set_func(Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc value) ;

constexpr Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc __get_func() const;

 Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme __declspec(property(get=__get_scheme, put=__set_scheme))  scheme;

constexpr void __set_scheme(Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme value) ;

constexpr Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme __get_scheme() const;


// Properties

 Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc __declspec(property(get=get_KeyDerivationFunc))  KeyDerivationFunc;

 Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme __declspec(property(get=get_EncryptionScheme))  EncryptionScheme;


// Methods

/// @brief Method GetInstance addr 0xefb840 size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters New_ctor(Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc keyDevFunc, Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme encScheme) ;

/// @brief Method .ctor addr 0xefbb70 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc keyDevFunc, Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme encScheme) ;

static Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xefb8e4 size 0x28c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_KeyDerivationFunc addr 0xefbd24 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc get_KeyDerivationFunc() ;

/// @brief Method get_EncryptionScheme addr 0xefbd2c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme get_EncryptionScheme() ;

/// @brief Method ToAsn1Object addr 0xefbd34 size 0xf0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters, "Org.BouncyCastle.Asn1.Pkcs", "PbeS2Parameters");
