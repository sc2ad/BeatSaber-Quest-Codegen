#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerEnumerated;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class ObjectDigestInfo;
}
// Type: Org.BouncyCastle.Asn1.X509::ObjectDigestInfo
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(372))
// CS Name: Org.BouncyCastle.Asn1.X509.ObjectDigestInfo
class CORDL_TYPE ObjectDigestInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ObjectDigestInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectDigestInfo", modifiers: " const&", def_value: None }]
constexpr ObjectDigestInfo(ObjectDigestInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectDigestInfo", modifiers: "&&", def_value: None }]
constexpr ObjectDigestInfo(ObjectDigestInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObjectDigestInfo(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr ObjectDigestInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObjectDigestInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObjectDigestInfo& operator=(ObjectDigestInfo&& o) noexcept = default;
  constexpr ObjectDigestInfo& operator=(ObjectDigestInfo const& o) noexcept = default;
                


// Fields

/// @brief Field PublicKey offset 0
static constexpr int32_t  PublicKey{0};

/// @brief Field PublicKeyCert offset 0
static constexpr int32_t  PublicKeyCert{1};

/// @brief Field OtherObjectDigest offset 0
static constexpr int32_t  OtherObjectDigest{2};

 Org::BouncyCastle::Asn1::DerEnumerated __declspec(property(get=__get_digestedObjectType, put=__set_digestedObjectType))  digestedObjectType;

constexpr void __set_digestedObjectType(Org::BouncyCastle::Asn1::DerEnumerated value) ;

constexpr Org::BouncyCastle::Asn1::DerEnumerated __get_digestedObjectType() const;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_otherObjectTypeID, put=__set_otherObjectTypeID))  otherObjectTypeID;

constexpr void __set_otherObjectTypeID(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_otherObjectTypeID() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_digestAlgorithm, put=__set_digestAlgorithm))  digestAlgorithm;

constexpr void __set_digestAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_digestAlgorithm() const;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=__get_objectDigest, put=__set_objectDigest))  objectDigest;

constexpr void __set_objectDigest(Org::BouncyCastle::Asn1::DerBitString value) ;

constexpr Org::BouncyCastle::Asn1::DerBitString __get_objectDigest() const;


// Properties

 Org::BouncyCastle::Asn1::DerEnumerated __declspec(property(get=get_DigestedObjectType))  DigestedObjectType;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_OtherObjectTypeID))  OtherObjectTypeID;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_DigestAlgorithm))  DigestAlgorithm;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=get_ObjectDigest))  ObjectDigest;


// Methods

/// @brief Method GetInstance addr 0x1109654 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::X509::ObjectDigestInfo GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0x110606c size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::X509::ObjectDigestInfo GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

static Org::BouncyCastle::Asn1::X509::ObjectDigestInfo New_ctor(int32_t digestedObjectType, ::StringW otherObjectTypeID, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digestAlgorithm, ::ArrayW<uint8_t> objectDigest) ;

/// @brief Method .ctor addr 0x1109a2c size 0x104 virtual false final false
 void _ctor(int32_t digestedObjectType, ::StringW otherObjectTypeID, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digestAlgorithm, ::ArrayW<uint8_t> objectDigest) ;

static Org::BouncyCastle::Asn1::X509::ObjectDigestInfo New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x11097dc size 0x250 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_DigestedObjectType addr 0x1109b30 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerEnumerated get_DigestedObjectType() ;

/// @brief Method get_OtherObjectTypeID addr 0x1109b38 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_OtherObjectTypeID() ;

/// @brief Method get_DigestAlgorithm addr 0x1109b40 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_DigestAlgorithm() ;

/// @brief Method get_ObjectDigest addr 0x1109b48 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerBitString get_ObjectDigest() ;

/// @brief Method ToAsn1Object addr 0x1109b50 size 0x1c0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::ObjectDigestInfo);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::ObjectDigestInfo, "Org.BouncyCastle.Asn1.X509", "ObjectDigestInfo");
