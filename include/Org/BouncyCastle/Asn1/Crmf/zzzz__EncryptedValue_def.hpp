#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class EncryptedValue;
}
// Type: Org.BouncyCastle.Asn1.Crmf::EncryptedValue
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(113))
// CS Name: Org.BouncyCastle.Asn1.Crmf.EncryptedValue
class CORDL_TYPE EncryptedValue : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~EncryptedValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "EncryptedValue", modifiers: " const&", def_value: None }]
constexpr EncryptedValue(EncryptedValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EncryptedValue", modifiers: "&&", def_value: None }]
constexpr EncryptedValue(EncryptedValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EncryptedValue(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr EncryptedValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EncryptedValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EncryptedValue& operator=(EncryptedValue&& o) noexcept = default;
  constexpr EncryptedValue& operator=(EncryptedValue const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_intendedAlg, put=__set_intendedAlg))  intendedAlg;

constexpr void __set_intendedAlg(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_intendedAlg() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_symmAlg, put=__set_symmAlg))  symmAlg;

constexpr void __set_symmAlg(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_symmAlg() const;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=__get_encSymmKey, put=__set_encSymmKey))  encSymmKey;

constexpr void __set_encSymmKey(Org::BouncyCastle::Asn1::DerBitString value) ;

constexpr Org::BouncyCastle::Asn1::DerBitString __get_encSymmKey() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_keyAlg, put=__set_keyAlg))  keyAlg;

constexpr void __set_keyAlg(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_keyAlg() const;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_valueHint, put=__set_valueHint))  valueHint;

constexpr void __set_valueHint(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_valueHint() const;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=__get_encValue, put=__set_encValue))  encValue;

constexpr void __set_encValue(Org::BouncyCastle::Asn1::DerBitString value) ;

constexpr Org::BouncyCastle::Asn1::DerBitString __get_encValue() const;


// Properties

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_IntendedAlg))  IntendedAlg;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_SymmAlg))  SymmAlg;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=get_EncSymmKey))  EncSymmKey;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_KeyAlg))  KeyAlg;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_ValueHint))  ValueHint;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=get_EncValue))  EncValue;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit EncryptedValue(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdf816c size 0x1f8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdf8010 size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::Crmf::EncryptedValue GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "intendedAlg", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "symmAlg", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "encSymmKey", ty: "Org::BouncyCastle::Asn1::DerBitString", modifiers: "", def_value: None }, CppParam { name: "keyAlg", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "valueHint", ty: "Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }, CppParam { name: "encValue", ty: "Org::BouncyCastle::Asn1::DerBitString", modifiers: "", def_value: None }]
explicit EncryptedValue(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier intendedAlg, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier symmAlg, Org::BouncyCastle::Asn1::DerBitString encSymmKey, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier keyAlg, Org::BouncyCastle::Asn1::Asn1OctetString valueHint, Org::BouncyCastle::Asn1::DerBitString encValue) ;

/// @brief Method .ctor addr 0xdf8364 size 0xa4 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier intendedAlg, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier symmAlg, Org::BouncyCastle::Asn1::DerBitString encSymmKey, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier keyAlg, Org::BouncyCastle::Asn1::Asn1OctetString valueHint, Org::BouncyCastle::Asn1::DerBitString encValue) ;

/// @brief Method get_IntendedAlg addr 0xdf8408 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_IntendedAlg() ;

/// @brief Method get_SymmAlg addr 0xdf8410 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_SymmAlg() ;

/// @brief Method get_EncSymmKey addr 0xdf8418 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::DerBitString get_EncSymmKey() ;

/// @brief Method get_KeyAlg addr 0xdf8420 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_KeyAlg() ;

/// @brief Method get_ValueHint addr 0xdf8428 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1OctetString get_ValueHint() ;

/// @brief Method get_EncValue addr 0xdf8430 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::DerBitString get_EncValue() ;

/// @brief Method ToAsn1Object addr 0xdf8438 size 0x118 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(Org::BouncyCastle::Asn1::Crmf::EncryptedValue);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Crmf::EncryptedValue, "Org.BouncyCastle.Asn1.Crmf", "EncryptedValue");
