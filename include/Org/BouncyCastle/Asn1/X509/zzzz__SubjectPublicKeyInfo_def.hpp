#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
// Type: Org.BouncyCastle.Asn1.X509::SubjectPublicKeyInfo
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(384))
// CS Name: Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo
class CORDL_TYPE SubjectPublicKeyInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SubjectPublicKeyInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubjectPublicKeyInfo", modifiers: " const&", def_value: None }]
constexpr SubjectPublicKeyInfo(SubjectPublicKeyInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubjectPublicKeyInfo", modifiers: "&&", def_value: None }]
constexpr SubjectPublicKeyInfo(SubjectPublicKeyInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubjectPublicKeyInfo(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr SubjectPublicKeyInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubjectPublicKeyInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubjectPublicKeyInfo& operator=(SubjectPublicKeyInfo&& o) noexcept = default;
  constexpr SubjectPublicKeyInfo& operator=(SubjectPublicKeyInfo const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_algID, put=__set_algID))  algID;

constexpr void __set_algID(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_algID() const;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=__get_keyData, put=__set_keyData))  keyData;

constexpr void __set_keyData(Org::BouncyCastle::Asn1::DerBitString value) ;

constexpr Org::BouncyCastle::Asn1::DerBitString __get_keyData() const;


// Properties

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_AlgorithmID))  AlgorithmID;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=get_PublicKeyData))  PublicKeyData;


// Methods

/// @brief Method GetInstance addr 0x110d4a8 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0x110d4c0 size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo New_ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algID, Org::BouncyCastle::Asn1::Asn1Encodable publicKey) ;

/// @brief Method .ctor addr 0x110d6d4 size 0x80 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algID, Org::BouncyCastle::Asn1::Asn1Encodable publicKey) ;

static Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo New_ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algID, ::ArrayW<uint8_t> publicKey) ;

/// @brief Method .ctor addr 0x110d754 size 0x80 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algID, ::ArrayW<uint8_t> publicKey) ;

static Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x110d564 size 0x170 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_AlgorithmID addr 0x110d7d4 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_AlgorithmID() ;

/// @brief Method ParsePublicKey addr 0x110d7dc size 0x28 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Object ParsePublicKey() ;

/// @brief Method GetPublicKey addr 0x110d804 size 0x28 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Object GetPublicKey() ;

/// @brief Method get_PublicKeyData addr 0x110d82c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerBitString get_PublicKeyData() ;

/// @brief Method ToAsn1Object addr 0x110d834 size 0xf0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo, "Org.BouncyCastle.Asn1.X509", "SubjectPublicKeyInfo");
