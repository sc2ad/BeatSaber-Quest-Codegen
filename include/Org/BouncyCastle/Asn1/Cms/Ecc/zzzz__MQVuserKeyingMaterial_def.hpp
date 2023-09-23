#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorPublicKey;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms::Ecc {
class MQVuserKeyingMaterial;
}
// Type: Org.BouncyCastle.Asn1.Cms.Ecc::MQVuserKeyingMaterial
namespace Org::BouncyCastle::Asn1::Cms::Ecc {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(54))
// CS Name: Org.BouncyCastle.Asn1.Cms.Ecc.MQVuserKeyingMaterial
class CORDL_TYPE MQVuserKeyingMaterial : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MQVuserKeyingMaterial() = default;

// Ctor Parameters [CppParam { name: "", ty: "MQVuserKeyingMaterial", modifiers: " const&", def_value: None }]
constexpr MQVuserKeyingMaterial(MQVuserKeyingMaterial const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MQVuserKeyingMaterial", modifiers: "&&", def_value: None }]
constexpr MQVuserKeyingMaterial(MQVuserKeyingMaterial&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MQVuserKeyingMaterial(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr MQVuserKeyingMaterial& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MQVuserKeyingMaterial& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MQVuserKeyingMaterial& operator=(MQVuserKeyingMaterial&& o) noexcept = default;
  constexpr MQVuserKeyingMaterial& operator=(MQVuserKeyingMaterial const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey __declspec(property(get=__get_ephemeralPublicKey, put=__set_ephemeralPublicKey))  ephemeralPublicKey;

constexpr void __set_ephemeralPublicKey(Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey value) ;

constexpr Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey __get_ephemeralPublicKey() const;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_addedukm, put=__set_addedukm))  addedukm;

constexpr void __set_addedukm(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_addedukm() const;


// Properties

 Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey __declspec(property(get=get_EphemeralPublicKey))  EphemeralPublicKey;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_AddedUkm))  AddedUkm;


// Methods

// Ctor Parameters [CppParam { name: "ephemeralPublicKey", ty: "Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey", modifiers: "", def_value: None }, CppParam { name: "addedukm", ty: "Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }]
explicit MQVuserKeyingMaterial(Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey ephemeralPublicKey, Org::BouncyCastle::Asn1::Asn1OctetString addedukm) ;

/// @brief Method .ctor addr 0xde2508 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey ephemeralPublicKey, Org::BouncyCastle::Asn1::Asn1OctetString addedukm) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit MQVuserKeyingMaterial(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xde2534 size 0xe8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xde2774 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::Cms::Ecc::MQVuserKeyingMaterial GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

/// @brief Method GetInstance addr 0xde278c size 0x178 virtual false final false
static Org::BouncyCastle::Asn1::Cms::Ecc::MQVuserKeyingMaterial GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_EphemeralPublicKey addr 0xde2904 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey get_EphemeralPublicKey() ;

/// @brief Method get_AddedUkm addr 0xde290c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1OctetString get_AddedUkm() ;

/// @brief Method ToAsn1Object addr 0xde2914 size 0x114 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms::Ecc
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cms::Ecc::MQVuserKeyingMaterial);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cms::Ecc::MQVuserKeyingMaterial, "Org.BouncyCastle.Asn1.Cms.Ecc", "MQVuserKeyingMaterial");
