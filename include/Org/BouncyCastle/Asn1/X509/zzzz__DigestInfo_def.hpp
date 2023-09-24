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
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class DigestInfo;
}
// Type: Org.BouncyCastle.Asn1.X509::DigestInfo
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(355))
// CS Name: Org.BouncyCastle.Asn1.X509.DigestInfo
class CORDL_TYPE DigestInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DigestInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "DigestInfo", modifiers: " const&", def_value: None }]
constexpr DigestInfo(DigestInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DigestInfo", modifiers: "&&", def_value: None }]
constexpr DigestInfo(DigestInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DigestInfo(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr DigestInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DigestInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DigestInfo& operator=(DigestInfo&& o) noexcept = default;
  constexpr DigestInfo& operator=(DigestInfo const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_digest, put=__set_digest))  digest;

constexpr void __set_digest(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_digest() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_algID, put=__set_algID))  algID;

constexpr void __set_algID(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_algID() const;


// Properties

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_AlgorithmID))  AlgorithmID;


// Methods

/// @brief Method GetInstance addr 0x11013a8 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::X509::DigestInfo GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0x11013c0 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::X509::DigestInfo GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::X509::DigestInfo New_ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algID, ::ArrayW<uint8_t> digest) ;

/// @brief Method .ctor addr 0x1101640 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algID, ::ArrayW<uint8_t> digest) ;

static Org::BouncyCastle::Asn1::X509::DigestInfo New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x1101548 size 0xf8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_AlgorithmID addr 0x110166c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_AlgorithmID() ;

/// @brief Method GetDigest addr 0x1101674 size 0x8 virtual false final false
 ::ArrayW<uint8_t> GetDigest() ;

/// @brief Method ToAsn1Object addr 0x110167c size 0x11c virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::DigestInfo);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::DigestInfo, "Org.BouncyCastle.Asn1.X509", "DigestInfo");
