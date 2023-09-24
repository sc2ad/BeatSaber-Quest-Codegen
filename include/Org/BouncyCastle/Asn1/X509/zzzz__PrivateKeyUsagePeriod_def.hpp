#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class PrivateKeyUsagePeriod;
}
// Type: Org.BouncyCastle.Asn1.X509::PrivateKeyUsagePeriod
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(378))
// CS Name: Org.BouncyCastle.Asn1.X509.PrivateKeyUsagePeriod
class CORDL_TYPE PrivateKeyUsagePeriod : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PrivateKeyUsagePeriod() = default;

// Ctor Parameters [CppParam { name: "", ty: "PrivateKeyUsagePeriod", modifiers: " const&", def_value: None }]
constexpr PrivateKeyUsagePeriod(PrivateKeyUsagePeriod const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PrivateKeyUsagePeriod", modifiers: "&&", def_value: None }]
constexpr PrivateKeyUsagePeriod(PrivateKeyUsagePeriod&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PrivateKeyUsagePeriod(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr PrivateKeyUsagePeriod& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PrivateKeyUsagePeriod& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PrivateKeyUsagePeriod& operator=(PrivateKeyUsagePeriod&& o) noexcept = default;
  constexpr PrivateKeyUsagePeriod& operator=(PrivateKeyUsagePeriod const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=__get__notBefore, put=__set__notBefore))  _notBefore;

constexpr void __set__notBefore(Org::BouncyCastle::Asn1::DerGeneralizedTime value) ;

constexpr Org::BouncyCastle::Asn1::DerGeneralizedTime __get__notBefore() const;

 Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=__get__notAfter, put=__set__notAfter))  _notAfter;

constexpr void __set__notAfter(Org::BouncyCastle::Asn1::DerGeneralizedTime value) ;

constexpr Org::BouncyCastle::Asn1::DerGeneralizedTime __get__notAfter() const;


// Properties

 Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=get_NotBefore))  NotBefore;

 Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=get_NotAfter))  NotAfter;


// Methods

/// @brief Method GetInstance addr 0x110aee8 size 0x1d4 virtual false final false
static Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x110b0bc size 0x310 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_NotBefore addr 0x110b3cc size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerGeneralizedTime get_NotBefore() ;

/// @brief Method get_NotAfter addr 0x110b3d4 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerGeneralizedTime get_NotAfter() ;

/// @brief Method ToAsn1Object addr 0x110b3dc size 0xc0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod, "Org.BouncyCastle.Asn1.X509", "PrivateKeyUsagePeriod");
