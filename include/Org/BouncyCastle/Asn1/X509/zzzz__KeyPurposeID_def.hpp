#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class KeyPurposeID;
}
// Type: Org.BouncyCastle.Asn1.X509::KeyPurposeID
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(350))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(368))
// CS Name: Org.BouncyCastle.Asn1.X509.KeyPurposeID
class CORDL_TYPE KeyPurposeID : public Org::BouncyCastle::Asn1::DerObjectIdentifier {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~KeyPurposeID() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyPurposeID", modifiers: " const&", def_value: None }]
constexpr KeyPurposeID(KeyPurposeID const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyPurposeID", modifiers: "&&", def_value: None }]
constexpr KeyPurposeID(KeyPurposeID&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyPurposeID(void* ptr) noexcept : Org::BouncyCastle::Asn1::DerObjectIdentifier(ptr) {
}


  constexpr KeyPurposeID& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyPurposeID& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyPurposeID& operator=(KeyPurposeID&& o) noexcept = default;
  constexpr KeyPurposeID& operator=(KeyPurposeID const& o) noexcept = default;
                


// Fields

/// @brief Field IdKP offset 0
static constexpr ::ConstString  IdKP{u"1.3.6.1.5.5.7.3"};

static Org::BouncyCastle::Asn1::X509::KeyPurposeID __declspec(property(get=__get_AnyExtendedKeyUsage, put=__set_AnyExtendedKeyUsage))  AnyExtendedKeyUsage;

static void __set_AnyExtendedKeyUsage(Org::BouncyCastle::Asn1::X509::KeyPurposeID value) ;

static Org::BouncyCastle::Asn1::X509::KeyPurposeID __get_AnyExtendedKeyUsage() ;

static Org::BouncyCastle::Asn1::X509::KeyPurposeID __declspec(property(get=__get_IdKPServerAuth, put=__set_IdKPServerAuth))  IdKPServerAuth;

static void __set_IdKPServerAuth(Org::BouncyCastle::Asn1::X509::KeyPurposeID value) ;

static Org::BouncyCastle::Asn1::X509::KeyPurposeID __get_IdKPServerAuth() ;

static Org::BouncyCastle::Asn1::X509::KeyPurposeID __declspec(property(get=__get_IdKPClientAuth, put=__set_IdKPClientAuth))  IdKPClientAuth;

static void __set_IdKPClientAuth(Org::BouncyCastle::Asn1::X509::KeyPurposeID value) ;

static Org::BouncyCastle::Asn1::X509::KeyPurposeID __get_IdKPClientAuth() ;

static Org::BouncyCastle::Asn1::X509::KeyPurposeID __declspec(property(get=__get_IdKPCodeSigning, put=__set_IdKPCodeSigning))  IdKPCodeSigning;

static void __set_IdKPCodeSigning(Org::BouncyCastle::Asn1::X509::KeyPurposeID value) ;

static Org::BouncyCastle::Asn1::X509::KeyPurposeID __get_IdKPCodeSigning() ;

static Org::BouncyCastle::Asn1::X509::KeyPurposeID __declspec(property(get=__get_IdKPEmailProtection, put=__set_IdKPEmailProtection))  IdKPEmailProtection;

static void __set_IdKPEmailProtection(Org::BouncyCastle::Asn1::X509::KeyPurposeID value) ;

static Org::BouncyCastle::Asn1::X509::KeyPurposeID __get_IdKPEmailProtection() ;

static Org::BouncyCastle::Asn1::X509::KeyPurposeID __declspec(property(get=__get_IdKPIpsecEndSystem, put=__set_IdKPIpsecEndSystem))  IdKPIpsecEndSystem;

static void __set_IdKPIpsecEndSystem(Org::BouncyCastle::Asn1::X509::KeyPurposeID value) ;

static Org::BouncyCastle::Asn1::X509::KeyPurposeID __get_IdKPIpsecEndSystem() ;

static Org::BouncyCastle::Asn1::X509::KeyPurposeID __declspec(property(get=__get_IdKPIpsecTunnel, put=__set_IdKPIpsecTunnel))  IdKPIpsecTunnel;

static void __set_IdKPIpsecTunnel(Org::BouncyCastle::Asn1::X509::KeyPurposeID value) ;

static Org::BouncyCastle::Asn1::X509::KeyPurposeID __get_IdKPIpsecTunnel() ;

static Org::BouncyCastle::Asn1::X509::KeyPurposeID __declspec(property(get=__get_IdKPIpsecUser, put=__set_IdKPIpsecUser))  IdKPIpsecUser;

static void __set_IdKPIpsecUser(Org::BouncyCastle::Asn1::X509::KeyPurposeID value) ;

static Org::BouncyCastle::Asn1::X509::KeyPurposeID __get_IdKPIpsecUser() ;

static Org::BouncyCastle::Asn1::X509::KeyPurposeID __declspec(property(get=__get_IdKPTimeStamping, put=__set_IdKPTimeStamping))  IdKPTimeStamping;

static void __set_IdKPTimeStamping(Org::BouncyCastle::Asn1::X509::KeyPurposeID value) ;

static Org::BouncyCastle::Asn1::X509::KeyPurposeID __get_IdKPTimeStamping() ;

static Org::BouncyCastle::Asn1::X509::KeyPurposeID __declspec(property(get=__get_IdKPOcspSigning, put=__set_IdKPOcspSigning))  IdKPOcspSigning;

static void __set_IdKPOcspSigning(Org::BouncyCastle::Asn1::X509::KeyPurposeID value) ;

static Org::BouncyCastle::Asn1::X509::KeyPurposeID __get_IdKPOcspSigning() ;

static Org::BouncyCastle::Asn1::X509::KeyPurposeID __declspec(property(get=__get_IdKPSmartCardLogon, put=__set_IdKPSmartCardLogon))  IdKPSmartCardLogon;

static void __set_IdKPSmartCardLogon(Org::BouncyCastle::Asn1::X509::KeyPurposeID value) ;

static Org::BouncyCastle::Asn1::X509::KeyPurposeID __get_IdKPSmartCardLogon() ;

static Org::BouncyCastle::Asn1::X509::KeyPurposeID __declspec(property(get=__get_IdKPMacAddress, put=__set_IdKPMacAddress))  IdKPMacAddress;

static void __set_IdKPMacAddress(Org::BouncyCastle::Asn1::X509::KeyPurposeID value) ;

static Org::BouncyCastle::Asn1::X509::KeyPurposeID __get_IdKPMacAddress() ;


// Methods

static Org::BouncyCastle::Asn1::X509::KeyPurposeID New_ctor(::StringW id) ;

/// @brief Method .ctor addr 0x1107d80 size 0x68 virtual false final false
 void _ctor(::StringW id) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::KeyPurposeID);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::KeyPurposeID, "Org.BouncyCastle.Asn1.X509", "KeyPurposeID");
