#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class OtherHashAlgAndValue;
}
// Type: Org.BouncyCastle.Asn1.Esf::OtherHashAlgAndValue
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(150))
// CS Name: Org.BouncyCastle.Asn1.Esf.OtherHashAlgAndValue
class CORDL_TYPE OtherHashAlgAndValue : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OtherHashAlgAndValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "OtherHashAlgAndValue", modifiers: " const&", def_value: None }]
constexpr OtherHashAlgAndValue(OtherHashAlgAndValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OtherHashAlgAndValue", modifiers: "&&", def_value: None }]
constexpr OtherHashAlgAndValue(OtherHashAlgAndValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OtherHashAlgAndValue(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr OtherHashAlgAndValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OtherHashAlgAndValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OtherHashAlgAndValue& operator=(OtherHashAlgAndValue&& o) noexcept = default;
  constexpr OtherHashAlgAndValue& operator=(OtherHashAlgAndValue const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_hashAlgorithm, put=__set_hashAlgorithm))  hashAlgorithm;

constexpr void __set_hashAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_hashAlgorithm() const;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_hashValue, put=__set_hashValue))  hashValue;

constexpr void __set_hashValue(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_hashValue() const;


// Properties

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_HashAlgorithm))  HashAlgorithm;


// Methods

/// @brief Method GetInstance addr 0xe06a18 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xe06df0 size 0x210 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

static Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue New_ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier hashAlgorithm, ::ArrayW<uint8_t> hashValue) ;

/// @brief Method .ctor addr 0xe07000 size 0xfc virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier hashAlgorithm, ::ArrayW<uint8_t> hashValue) ;

static Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue New_ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier hashAlgorithm, Org::BouncyCastle::Asn1::Asn1OctetString hashValue) ;

/// @brief Method .ctor addr 0xe070fc size 0xa4 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier hashAlgorithm, Org::BouncyCastle::Asn1::Asn1OctetString hashValue) ;

/// @brief Method get_HashAlgorithm addr 0xe071a0 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_HashAlgorithm() ;

/// @brief Method GetHashValue addr 0xe06db0 size 0x20 virtual false final false
 ::ArrayW<uint8_t> GetHashValue() ;

/// @brief Method ToAsn1Object addr 0xe071a8 size 0xf0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue, "Org.BouncyCastle.Asn1.Esf", "OtherHashAlgAndValue");
