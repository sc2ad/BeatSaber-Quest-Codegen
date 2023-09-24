#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::CryptoPro {
class CryptoProObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.CryptoPro::CryptoProObjectIdentifiers
namespace Org::BouncyCastle::Asn1::CryptoPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(125))
// CS Name: Org.BouncyCastle.Asn1.CryptoPro.CryptoProObjectIdentifiers
class CORDL_TYPE CryptoProObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CryptoProObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "CryptoProObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr CryptoProObjectIdentifiers(CryptoProObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CryptoProObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr CryptoProObjectIdentifiers(CryptoProObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CryptoProObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CryptoProObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CryptoProObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CryptoProObjectIdentifiers& operator=(CryptoProObjectIdentifiers&& o) noexcept = default;
  constexpr CryptoProObjectIdentifiers& operator=(CryptoProObjectIdentifiers const& o) noexcept = default;
                


// Fields

/// @brief Field GostID offset 0
static constexpr ::ConstString  GostID{u"1.2.643.2.2"};

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_GostR3411, put=__set_GostR3411))  GostR3411;

static void __set_GostR3411(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_GostR3411() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_GostR3411Hmac, put=__set_GostR3411Hmac))  GostR3411Hmac;

static void __set_GostR3411Hmac(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_GostR3411Hmac() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_GostR28147Cbc, put=__set_GostR28147Cbc))  GostR28147Cbc;

static void __set_GostR28147Cbc(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_GostR28147Cbc() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ID_Gost28147_89_CryptoPro_A_ParamSet, put=__set_ID_Gost28147_89_CryptoPro_A_ParamSet))  ID_Gost28147_89_CryptoPro_A_ParamSet;

static void __set_ID_Gost28147_89_CryptoPro_A_ParamSet(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ID_Gost28147_89_CryptoPro_A_ParamSet() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_GostR3410x94, put=__set_GostR3410x94))  GostR3410x94;

static void __set_GostR3410x94(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_GostR3410x94() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_GostR3410x2001, put=__set_GostR3410x2001))  GostR3410x2001;

static void __set_GostR3410x2001(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_GostR3410x2001() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_GostR3411x94WithGostR3410x94, put=__set_GostR3411x94WithGostR3410x94))  GostR3411x94WithGostR3410x94;

static void __set_GostR3411x94WithGostR3410x94(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_GostR3411x94WithGostR3410x94() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_GostR3411x94WithGostR3410x2001, put=__set_GostR3411x94WithGostR3410x2001))  GostR3411x94WithGostR3410x2001;

static void __set_GostR3411x94WithGostR3410x2001(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_GostR3411x94WithGostR3410x2001() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_GostR3411x94CryptoProParamSet, put=__set_GostR3411x94CryptoProParamSet))  GostR3411x94CryptoProParamSet;

static void __set_GostR3411x94CryptoProParamSet(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_GostR3411x94CryptoProParamSet() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_GostR3410x94CryptoProA, put=__set_GostR3410x94CryptoProA))  GostR3410x94CryptoProA;

static void __set_GostR3410x94CryptoProA(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_GostR3410x94CryptoProA() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_GostR3410x94CryptoProB, put=__set_GostR3410x94CryptoProB))  GostR3410x94CryptoProB;

static void __set_GostR3410x94CryptoProB(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_GostR3410x94CryptoProB() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_GostR3410x94CryptoProC, put=__set_GostR3410x94CryptoProC))  GostR3410x94CryptoProC;

static void __set_GostR3410x94CryptoProC(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_GostR3410x94CryptoProC() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_GostR3410x94CryptoProD, put=__set_GostR3410x94CryptoProD))  GostR3410x94CryptoProD;

static void __set_GostR3410x94CryptoProD(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_GostR3410x94CryptoProD() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_GostR3410x94CryptoProXchA, put=__set_GostR3410x94CryptoProXchA))  GostR3410x94CryptoProXchA;

static void __set_GostR3410x94CryptoProXchA(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_GostR3410x94CryptoProXchA() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_GostR3410x94CryptoProXchB, put=__set_GostR3410x94CryptoProXchB))  GostR3410x94CryptoProXchB;

static void __set_GostR3410x94CryptoProXchB(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_GostR3410x94CryptoProXchB() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_GostR3410x94CryptoProXchC, put=__set_GostR3410x94CryptoProXchC))  GostR3410x94CryptoProXchC;

static void __set_GostR3410x94CryptoProXchC(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_GostR3410x94CryptoProXchC() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_GostR3410x2001CryptoProA, put=__set_GostR3410x2001CryptoProA))  GostR3410x2001CryptoProA;

static void __set_GostR3410x2001CryptoProA(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_GostR3410x2001CryptoProA() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_GostR3410x2001CryptoProB, put=__set_GostR3410x2001CryptoProB))  GostR3410x2001CryptoProB;

static void __set_GostR3410x2001CryptoProB(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_GostR3410x2001CryptoProB() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_GostR3410x2001CryptoProC, put=__set_GostR3410x2001CryptoProC))  GostR3410x2001CryptoProC;

static void __set_GostR3410x2001CryptoProC(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_GostR3410x2001CryptoProC() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_GostR3410x2001CryptoProXchA, put=__set_GostR3410x2001CryptoProXchA))  GostR3410x2001CryptoProXchA;

static void __set_GostR3410x2001CryptoProXchA(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_GostR3410x2001CryptoProXchA() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_GostR3410x2001CryptoProXchB, put=__set_GostR3410x2001CryptoProXchB))  GostR3410x2001CryptoProXchB;

static void __set_GostR3410x2001CryptoProXchB(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_GostR3410x2001CryptoProXchB() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_GostElSgDH3410Default, put=__set_GostElSgDH3410Default))  GostElSgDH3410Default;

static void __set_GostElSgDH3410Default(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_GostElSgDH3410Default() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_GostElSgDH3410x1, put=__set_GostElSgDH3410x1))  GostElSgDH3410x1;

static void __set_GostElSgDH3410x1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_GostElSgDH3410x1() ;


// Methods

static Org::BouncyCastle::Asn1::CryptoPro::CryptoProObjectIdentifiers New_ctor() ;

/// @brief Method .ctor addr 0xdfb950 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::CryptoPro
NEED_NO_BOX(Org::BouncyCastle::Asn1::CryptoPro::CryptoProObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::CryptoPro::CryptoProObjectIdentifiers, "Org.BouncyCastle.Asn1.CryptoPro", "CryptoProObjectIdentifiers");
