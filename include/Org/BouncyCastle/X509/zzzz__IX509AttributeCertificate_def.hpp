#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::X509 {
class AttributeCertificateHolder;
}
namespace Org::BouncyCastle::X509 {
class X509Attribute;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::X509 {
class AttributeCertificateIssuer;
}
namespace Org::BouncyCastle::X509 {
class IX509Extension;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class IX509AttributeCertificate;
}
// Type: Org.BouncyCastle.X509::IX509AttributeCertificate
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1854))
// CS Name: Org.BouncyCastle.X509.IX509AttributeCertificate
class CORDL_TYPE IX509AttributeCertificate : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::X509::IX509Extension
constexpr operator  Org::BouncyCastle::X509::IX509Extension() const noexcept;

~IX509AttributeCertificate() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IX509AttributeCertificate(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_Version))  Version;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_SerialNumber))  SerialNumber;

 System::DateTime __declspec(property(get=get_NotBefore))  NotBefore;

 System::DateTime __declspec(property(get=get_NotAfter))  NotAfter;

 Org::BouncyCastle::X509::AttributeCertificateHolder __declspec(property(get=get_Holder))  Holder;

 Org::BouncyCastle::X509::AttributeCertificateIssuer __declspec(property(get=get_Issuer))  Issuer;

 bool __declspec(property(get=get_IsValidNow))  IsValidNow;


// Methods

/// @brief Method get_Version addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_Version() ;

/// @brief Method get_SerialNumber addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::BigInteger get_SerialNumber() ;

/// @brief Method get_NotBefore addr 0x0 size 0xffffffffffffffff virtual true final false
 System::DateTime get_NotBefore() ;

/// @brief Method get_NotAfter addr 0x0 size 0xffffffffffffffff virtual true final false
 System::DateTime get_NotAfter() ;

/// @brief Method get_Holder addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::X509::AttributeCertificateHolder get_Holder() ;

/// @brief Method get_Issuer addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::X509::AttributeCertificateIssuer get_Issuer() ;

/// @brief Method GetAttributes addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<Org::BouncyCastle::X509::X509Attribute> GetAttributes() ;

/// @brief Method GetAttributes addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<Org::BouncyCastle::X509::X509Attribute> GetAttributes(::StringW oid) ;

/// @brief Method GetIssuerUniqueID addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<bool> GetIssuerUniqueID() ;

/// @brief Method get_IsValidNow addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsValidNow() ;

/// @brief Method IsValid addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsValid(System::DateTime date) ;

/// @brief Method CheckValidity addr 0x0 size 0xffffffffffffffff virtual true final false
 void CheckValidity() ;

/// @brief Method CheckValidity addr 0x0 size 0xffffffffffffffff virtual true final false
 void CheckValidity(System::DateTime date) ;

/// @brief Method GetSignature addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> GetSignature() ;

/// @brief Method Verify addr 0x0 size 0xffffffffffffffff virtual true final false
 void Verify(Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey) ;

/// @brief Method GetEncoded addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> GetEncoded() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509
NEED_NO_BOX(Org::BouncyCastle::X509::IX509AttributeCertificate);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::IX509AttributeCertificate, "Org.BouncyCastle.X509", "IX509AttributeCertificate");
