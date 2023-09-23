#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::X509 {
class IssuerSerial;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
namespace Org::BouncyCastle::Asn1::X509 {
class ObjectDigestInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class Holder;
}
// Type: Org.BouncyCastle.Asn1.X509::Holder
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(364))
// CS Name: Org.BouncyCastle.Asn1.X509.Holder
class CORDL_TYPE Holder : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Holder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Holder", modifiers: " const&", def_value: None }]
constexpr Holder(Holder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Holder", modifiers: "&&", def_value: None }]
constexpr Holder(Holder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Holder(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr Holder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Holder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Holder& operator=(Holder&& o) noexcept = default;
  constexpr Holder& operator=(Holder const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::IssuerSerial __declspec(property(get=__get_baseCertificateID, put=__set_baseCertificateID))  baseCertificateID;

constexpr void __set_baseCertificateID(Org::BouncyCastle::Asn1::X509::IssuerSerial value) ;

constexpr Org::BouncyCastle::Asn1::X509::IssuerSerial __get_baseCertificateID() const;

 Org::BouncyCastle::Asn1::X509::GeneralNames __declspec(property(get=__get_entityName, put=__set_entityName))  entityName;

constexpr void __set_entityName(Org::BouncyCastle::Asn1::X509::GeneralNames value) ;

constexpr Org::BouncyCastle::Asn1::X509::GeneralNames __get_entityName() const;

 Org::BouncyCastle::Asn1::X509::ObjectDigestInfo __declspec(property(get=__get_objectDigestInfo, put=__set_objectDigestInfo))  objectDigestInfo;

constexpr void __set_objectDigestInfo(Org::BouncyCastle::Asn1::X509::ObjectDigestInfo value) ;

constexpr Org::BouncyCastle::Asn1::X509::ObjectDigestInfo __get_objectDigestInfo() const;

 int32_t __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(int32_t value) ;

constexpr int32_t __get_version() const;


// Properties

 int32_t __declspec(property(get=get_Version))  Version;

 Org::BouncyCastle::Asn1::X509::IssuerSerial __declspec(property(get=get_BaseCertificateID))  BaseCertificateID;

 Org::BouncyCastle::Asn1::X509::GeneralNames __declspec(property(get=get_EntityName))  EntityName;

 Org::BouncyCastle::Asn1::X509::ObjectDigestInfo __declspec(property(get=get_ObjectDigestInfo))  ObjectDigestInfo;


// Methods

/// @brief Method GetInstance addr 0x1105b80 size 0x204 virtual false final false
static Org::BouncyCastle::Asn1::X509::Holder GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "tagObj", ty: "Org::BouncyCastle::Asn1::Asn1TaggedObject", modifiers: "", def_value: None }]
explicit Holder(Org::BouncyCastle::Asn1::Asn1TaggedObject tagObj) ;

/// @brief Method .ctor addr 0x1105f74 size 0xe0 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1TaggedObject tagObj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit Holder(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x1105d84 size 0x1f0 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "baseCertificateID", ty: "Org::BouncyCastle::Asn1::X509::IssuerSerial", modifiers: "", def_value: None }]
explicit Holder(Org::BouncyCastle::Asn1::X509::IssuerSerial baseCertificateID) ;

/// @brief Method .ctor addr 0x1106084 size 0x30 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::IssuerSerial baseCertificateID) ;

// Ctor Parameters [CppParam { name: "baseCertificateID", ty: "Org::BouncyCastle::Asn1::X509::IssuerSerial", modifiers: "", def_value: None }, CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: None }]
explicit Holder(Org::BouncyCastle::Asn1::X509::IssuerSerial baseCertificateID, int32_t version) ;

/// @brief Method .ctor addr 0x11060b4 size 0x30 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::IssuerSerial baseCertificateID, int32_t version) ;

/// @brief Method get_Version addr 0x11060e4 size 0x8 virtual false final false
 int32_t get_Version() ;

// Ctor Parameters [CppParam { name: "entityName", ty: "Org::BouncyCastle::Asn1::X509::GeneralNames", modifiers: "", def_value: None }]
explicit Holder(Org::BouncyCastle::Asn1::X509::GeneralNames entityName) ;

/// @brief Method .ctor addr 0x11060ec size 0x30 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::GeneralNames entityName) ;

// Ctor Parameters [CppParam { name: "entityName", ty: "Org::BouncyCastle::Asn1::X509::GeneralNames", modifiers: "", def_value: None }, CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: None }]
explicit Holder(Org::BouncyCastle::Asn1::X509::GeneralNames entityName, int32_t version) ;

/// @brief Method .ctor addr 0x110611c size 0x30 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::GeneralNames entityName, int32_t version) ;

// Ctor Parameters [CppParam { name: "objectDigestInfo", ty: "Org::BouncyCastle::Asn1::X509::ObjectDigestInfo", modifiers: "", def_value: None }]
explicit Holder(Org::BouncyCastle::Asn1::X509::ObjectDigestInfo objectDigestInfo) ;

/// @brief Method .ctor addr 0x110614c size 0x30 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::ObjectDigestInfo objectDigestInfo) ;

/// @brief Method get_BaseCertificateID addr 0x110617c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::IssuerSerial get_BaseCertificateID() ;

/// @brief Method get_EntityName addr 0x1106184 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::GeneralNames get_EntityName() ;

/// @brief Method get_ObjectDigestInfo addr 0x110618c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::ObjectDigestInfo get_ObjectDigestInfo() ;

/// @brief Method ToAsn1Object addr 0x1106194 size 0x148 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::Holder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::Holder, "Org.BouncyCastle.Asn1.X509", "Holder");
