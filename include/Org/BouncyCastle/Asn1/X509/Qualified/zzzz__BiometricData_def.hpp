#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerIA5String;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509::Qualified {
class TypeOfBiometricData;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509::Qualified {
class BiometricData;
}
// Type: Org.BouncyCastle.Asn1.X509.Qualified::BiometricData
namespace Org::BouncyCastle::Asn1::X509::Qualified {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(327))
// CS Name: Org.BouncyCastle.Asn1.X509.Qualified.BiometricData
class CORDL_TYPE BiometricData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BiometricData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BiometricData", modifiers: " const&", def_value: None }]
constexpr BiometricData(BiometricData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BiometricData", modifiers: "&&", def_value: None }]
constexpr BiometricData(BiometricData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BiometricData(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr BiometricData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BiometricData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BiometricData& operator=(BiometricData&& o) noexcept = default;
  constexpr BiometricData& operator=(BiometricData const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData __declspec(property(get=__get_typeOfBiometricData, put=__set_typeOfBiometricData))  typeOfBiometricData;

constexpr void __set_typeOfBiometricData(::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData __get_typeOfBiometricData() const;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_hashAlgorithm, put=__set_hashAlgorithm))  hashAlgorithm;

constexpr void __set_hashAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_hashAlgorithm() const;

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_biometricDataHash, put=__set_biometricDataHash))  biometricDataHash;

constexpr void __set_biometricDataHash(::Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString __get_biometricDataHash() const;

 ::Org::BouncyCastle::Asn1::DerIA5String __declspec(property(get=__get_sourceDataUri, put=__set_sourceDataUri))  sourceDataUri;

constexpr void __set_sourceDataUri(::Org::BouncyCastle::Asn1::DerIA5String value) ;

constexpr ::Org::BouncyCastle::Asn1::DerIA5String __get_sourceDataUri() const;


// Properties

 ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData __declspec(property(get=get_TypeOfBiometricData))  TypeOfBiometricData;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_HashAlgorithm))  HashAlgorithm;

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_BiometricDataHash))  BiometricDataHash;

 ::Org::BouncyCastle::Asn1::DerIA5String __declspec(property(get=get_SourceDataUri))  SourceDataUri;


// Methods

/// @brief Method GetInstance addr 0xff3028 size 0x168 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit BiometricData(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xff3190 size 0xc4 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "typeOfBiometricData", ty: "::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData", modifiers: "", def_value: None }, CppParam { name: "hashAlgorithm", ty: "::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "biometricDataHash", ty: "::Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }, CppParam { name: "sourceDataUri", ty: "::Org::BouncyCastle::Asn1::DerIA5String", modifiers: "", def_value: None }]
explicit BiometricData(::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData typeOfBiometricData, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier hashAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString biometricDataHash, ::Org::BouncyCastle::Asn1::DerIA5String sourceDataUri) ;

/// @brief Method .ctor addr 0xff343c size 0x40 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData typeOfBiometricData, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier hashAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString biometricDataHash, ::Org::BouncyCastle::Asn1::DerIA5String sourceDataUri) ;

// Ctor Parameters [CppParam { name: "typeOfBiometricData", ty: "::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData", modifiers: "", def_value: None }, CppParam { name: "hashAlgorithm", ty: "::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "biometricDataHash", ty: "::Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }]
explicit BiometricData(::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData typeOfBiometricData, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier hashAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString biometricDataHash) ;

/// @brief Method .ctor addr 0xff347c size 0x3c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData typeOfBiometricData, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier hashAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString biometricDataHash) ;

/// @brief Method get_TypeOfBiometricData addr 0xff34b8 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData get_TypeOfBiometricData() ;

/// @brief Method get_HashAlgorithm addr 0xff34c0 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_HashAlgorithm() ;

/// @brief Method get_BiometricDataHash addr 0xff34c8 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1OctetString get_BiometricDataHash() ;

/// @brief Method get_SourceDataUri addr 0xff34d0 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerIA5String get_SourceDataUri() ;

/// @brief Method ToAsn1Object addr 0xff34d8 size 0x1a0 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509::Qualified
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData, "Org.BouncyCastle.Asn1.X509.Qualified", "BiometricData");
