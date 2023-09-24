#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::X500 {
class DirectoryString;
}
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class NamingAuthority;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class ProfessionInfo;
}
// Type: Org.BouncyCastle.Asn1.IsisMtt.X509::ProfessionInfo
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(190))
// CS Name: Org.BouncyCastle.Asn1.IsisMtt.X509.ProfessionInfo
class CORDL_TYPE ProfessionInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ProfessionInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProfessionInfo", modifiers: " const&", def_value: None }]
constexpr ProfessionInfo(ProfessionInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProfessionInfo", modifiers: "&&", def_value: None }]
constexpr ProfessionInfo(ProfessionInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProfessionInfo(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr ProfessionInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProfessionInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProfessionInfo& operator=(ProfessionInfo&& o) noexcept = default;
  constexpr ProfessionInfo& operator=(ProfessionInfo const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Rechtsanwltin, put=__set_Rechtsanwltin))  Rechtsanwltin;

static void __set_Rechtsanwltin(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Rechtsanwltin() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Rechtsanwalt, put=__set_Rechtsanwalt))  Rechtsanwalt;

static void __set_Rechtsanwalt(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Rechtsanwalt() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Rechtsbeistand, put=__set_Rechtsbeistand))  Rechtsbeistand;

static void __set_Rechtsbeistand(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Rechtsbeistand() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Steuerberaterin, put=__set_Steuerberaterin))  Steuerberaterin;

static void __set_Steuerberaterin(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Steuerberaterin() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Steuerberater, put=__set_Steuerberater))  Steuerberater;

static void __set_Steuerberater(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Steuerberater() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Steuerbevollmchtigte, put=__set_Steuerbevollmchtigte))  Steuerbevollmchtigte;

static void __set_Steuerbevollmchtigte(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Steuerbevollmchtigte() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Steuerbevollmchtigter, put=__set_Steuerbevollmchtigter))  Steuerbevollmchtigter;

static void __set_Steuerbevollmchtigter(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Steuerbevollmchtigter() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Notarin, put=__set_Notarin))  Notarin;

static void __set_Notarin(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Notarin() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Notar, put=__set_Notar))  Notar;

static void __set_Notar(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Notar() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Notarvertreterin, put=__set_Notarvertreterin))  Notarvertreterin;

static void __set_Notarvertreterin(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Notarvertreterin() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Notarvertreter, put=__set_Notarvertreter))  Notarvertreter;

static void __set_Notarvertreter(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Notarvertreter() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Notariatsverwalterin, put=__set_Notariatsverwalterin))  Notariatsverwalterin;

static void __set_Notariatsverwalterin(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Notariatsverwalterin() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Notariatsverwalter, put=__set_Notariatsverwalter))  Notariatsverwalter;

static void __set_Notariatsverwalter(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Notariatsverwalter() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Wirtschaftsprferin, put=__set_Wirtschaftsprferin))  Wirtschaftsprferin;

static void __set_Wirtschaftsprferin(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Wirtschaftsprferin() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Wirtschaftsprfer, put=__set_Wirtschaftsprfer))  Wirtschaftsprfer;

static void __set_Wirtschaftsprfer(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Wirtschaftsprfer() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_VereidigteBuchprferin, put=__set_VereidigteBuchprferin))  VereidigteBuchprferin;

static void __set_VereidigteBuchprferin(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_VereidigteBuchprferin() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_VereidigterBuchprfer, put=__set_VereidigterBuchprfer))  VereidigterBuchprfer;

static void __set_VereidigterBuchprfer(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_VereidigterBuchprfer() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Patentanwltin, put=__set_Patentanwltin))  Patentanwltin;

static void __set_Patentanwltin(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Patentanwltin() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Patentanwalt, put=__set_Patentanwalt))  Patentanwalt;

static void __set_Patentanwalt(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Patentanwalt() ;

 Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority __declspec(property(get=__get_namingAuthority, put=__set_namingAuthority))  namingAuthority;

constexpr void __set_namingAuthority(Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority value) ;

constexpr Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority __get_namingAuthority() const;

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_professionItems, put=__set_professionItems))  professionItems;

constexpr void __set_professionItems(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_professionItems() const;

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_professionOids, put=__set_professionOids))  professionOids;

constexpr void __set_professionOids(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_professionOids() const;

 ::StringW __declspec(property(get=__get_registrationNumber, put=__set_registrationNumber))  registrationNumber;

constexpr void __set_registrationNumber(::StringW value) ;

constexpr ::StringW __get_registrationNumber() const;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_addProfessionInfo, put=__set_addProfessionInfo))  addProfessionInfo;

constexpr void __set_addProfessionInfo(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_addProfessionInfo() const;


// Properties

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_AddProfessionInfo))  AddProfessionInfo;

 Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority __declspec(property(get=get_NamingAuthority))  NamingAuthority;

 ::StringW __declspec(property(get=get_RegistrationNumber))  RegistrationNumber;


// Methods

/// @brief Method GetInstance addr 0xee9578 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xeebad8 size 0x8b0 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

static Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo New_ctor(Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority namingAuthority, ::ArrayW<Org::BouncyCastle::Asn1::X500::DirectoryString> professionItems, ::ArrayW<Org::BouncyCastle::Asn1::DerObjectIdentifier> professionOids, ::StringW registrationNumber, Org::BouncyCastle::Asn1::Asn1OctetString addProfessionInfo) ;

/// @brief Method .ctor addr 0xeec388 size 0xc8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority namingAuthority, ::ArrayW<Org::BouncyCastle::Asn1::X500::DirectoryString> professionItems, ::ArrayW<Org::BouncyCastle::Asn1::DerObjectIdentifier> professionOids, ::StringW registrationNumber, Org::BouncyCastle::Asn1::Asn1OctetString addProfessionInfo) ;

/// @brief Method ToAsn1Object addr 0xeec450 size 0x1c8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

/// @brief Method get_AddProfessionInfo addr 0xeec618 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1OctetString get_AddProfessionInfo() ;

/// @brief Method get_NamingAuthority addr 0xeec620 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority get_NamingAuthority() ;

/// @brief Method GetProfessionItems addr 0xeec628 size 0x114 virtual true final false
 ::ArrayW<Org::BouncyCastle::Asn1::X500::DirectoryString> GetProfessionItems() ;

/// @brief Method GetProfessionOids addr 0xeec73c size 0x168 virtual true final false
 ::ArrayW<Org::BouncyCastle::Asn1::DerObjectIdentifier> GetProfessionOids() ;

/// @brief Method get_RegistrationNumber addr 0xeec8a4 size 0x8 virtual true final false
 ::StringW get_RegistrationNumber() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::IsisMtt::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo, "Org.BouncyCastle.Asn1.IsisMtt.X509", "ProfessionInfo");
