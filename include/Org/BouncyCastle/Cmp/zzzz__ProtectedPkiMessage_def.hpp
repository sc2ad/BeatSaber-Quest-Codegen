#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiHeader;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiMessage;
}
namespace Org::BouncyCastle::Crmf {
class PKMacBuilder;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Cmp {
class GeneralPkiMessage;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiBody;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCalculator;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactory;
}
// Forward declare root types
namespace Org::BouncyCastle::Cmp {
class ProtectedPkiMessage;
}
// Type: Org.BouncyCastle.Cmp::ProtectedPkiMessage
namespace Org::BouncyCastle::Cmp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(606))
// CS Name: Org.BouncyCastle.Cmp.ProtectedPkiMessage
class CORDL_TYPE ProtectedPkiMessage : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ProtectedPkiMessage() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProtectedPkiMessage", modifiers: " const&", def_value: None }]
constexpr ProtectedPkiMessage(ProtectedPkiMessage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProtectedPkiMessage", modifiers: "&&", def_value: None }]
constexpr ProtectedPkiMessage(ProtectedPkiMessage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProtectedPkiMessage(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ProtectedPkiMessage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProtectedPkiMessage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProtectedPkiMessage& operator=(ProtectedPkiMessage&& o) noexcept = default;
  constexpr ProtectedPkiMessage& operator=(ProtectedPkiMessage const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Cmp::PkiMessage __declspec(property(get=__get_pkiMessage, put=__set_pkiMessage))  pkiMessage;

constexpr void __set_pkiMessage(::Org::BouncyCastle::Asn1::Cmp::PkiMessage value) ;

constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiMessage __get_pkiMessage() const;


// Properties

 ::Org::BouncyCastle::Asn1::Cmp::PkiHeader __declspec(property(get=get_Header))  Header;

 ::Org::BouncyCastle::Asn1::Cmp::PkiBody __declspec(property(get=get_Body))  Body;

 bool __declspec(property(get=get_HasPasswordBasedMacProtected))  HasPasswordBasedMacProtected;


// Methods

// Ctor Parameters [CppParam { name: "pkiMessage", ty: "::Org::BouncyCastle::Cmp::GeneralPkiMessage", modifiers: "", def_value: None }]
explicit ProtectedPkiMessage(::Org::BouncyCastle::Cmp::GeneralPkiMessage pkiMessage) ;

/// @brief Method .ctor addr 0x114bf58 size 0x98 virtual false final false
 void _ctor(::Org::BouncyCastle::Cmp::GeneralPkiMessage pkiMessage) ;

// Ctor Parameters [CppParam { name: "pkiMessage", ty: "::Org::BouncyCastle::Asn1::Cmp::PkiMessage", modifiers: "", def_value: None }]
explicit ProtectedPkiMessage(::Org::BouncyCastle::Asn1::Cmp::PkiMessage pkiMessage) ;

/// @brief Method .ctor addr 0x114bff0 size 0xa0 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Cmp::PkiMessage pkiMessage) ;

/// @brief Method get_Header addr 0x114c090 size 0x20 virtual false final false
 ::Org::BouncyCastle::Asn1::Cmp::PkiHeader get_Header() ;

/// @brief Method get_Body addr 0x114c0b0 size 0x20 virtual false final false
 ::Org::BouncyCastle::Asn1::Cmp::PkiBody get_Body() ;

/// @brief Method ToAsn1Message addr 0x114c0d0 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Cmp::PkiMessage ToAsn1Message() ;

/// @brief Method get_HasPasswordBasedMacProtected addr 0x114c0d8 size 0xa8 virtual false final false
 bool get_HasPasswordBasedMacProtected() ;

/// @brief Method GetCertificates addr 0x114c180 size 0x168 virtual false final false
 ::ArrayW<::Org::BouncyCastle::X509::X509Certificate> GetCertificates() ;

/// @brief Method Verify addr 0x114c2e8 size 0x180 virtual false final false
 bool Verify(::Org::BouncyCastle::Crypto::IVerifierFactory verifierFactory) ;

/// @brief Method Process addr 0x114c468 size 0x2d8 virtual false final false
 ::bs_hook::Il2CppWrapperType Process(::Org::BouncyCastle::Crypto::IStreamCalculator streamCalculator) ;

/// @brief Method Verify addr 0x114c740 size 0x2e8 virtual false final false
 bool Verify(::Org::BouncyCastle::Crmf::PKMacBuilder pkMacBuilder, ::ArrayW<char16_t> password) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cmp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Cmp::ProtectedPkiMessage);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cmp::ProtectedPkiMessage, "Org.BouncyCastle.Cmp", "ProtectedPkiMessage");
