#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class PolicyQualifierID;
}
// Type: Org.BouncyCastle.Asn1.X509::PolicyQualifierID
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(350))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(376))
// CS Name: Org.BouncyCastle.Asn1.X509.PolicyQualifierID
class CORDL_TYPE PolicyQualifierID : public Org::BouncyCastle::Asn1::DerObjectIdentifier {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PolicyQualifierID() = default;

// Ctor Parameters [CppParam { name: "", ty: "PolicyQualifierID", modifiers: " const&", def_value: None }]
constexpr PolicyQualifierID(PolicyQualifierID const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PolicyQualifierID", modifiers: "&&", def_value: None }]
constexpr PolicyQualifierID(PolicyQualifierID&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PolicyQualifierID(void* ptr) noexcept : Org::BouncyCastle::Asn1::DerObjectIdentifier(ptr) {
}


  constexpr PolicyQualifierID& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PolicyQualifierID& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PolicyQualifierID& operator=(PolicyQualifierID&& o) noexcept = default;
  constexpr PolicyQualifierID& operator=(PolicyQualifierID const& o) noexcept = default;
                


// Fields

/// @brief Field IdQt offset 0
static constexpr ::ConstString  IdQt{u"1.3.6.1.5.5.7.2"};

static Org::BouncyCastle::Asn1::X509::PolicyQualifierID __declspec(property(get=__get_IdQtCps, put=__set_IdQtCps))  IdQtCps;

static void __set_IdQtCps(Org::BouncyCastle::Asn1::X509::PolicyQualifierID value) ;

static Org::BouncyCastle::Asn1::X509::PolicyQualifierID __get_IdQtCps() ;

static Org::BouncyCastle::Asn1::X509::PolicyQualifierID __declspec(property(get=__get_IdQtUnotice, put=__set_IdQtUnotice))  IdQtUnotice;

static void __set_IdQtUnotice(Org::BouncyCastle::Asn1::X509::PolicyQualifierID value) ;

static Org::BouncyCastle::Asn1::X509::PolicyQualifierID __get_IdQtUnotice() ;


// Methods

static Org::BouncyCastle::Asn1::X509::PolicyQualifierID New_ctor(::StringW id) ;

/// @brief Method .ctor addr 0x110a9e8 size 0x68 virtual false final false
 void _ctor(::StringW id) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::PolicyQualifierID);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::PolicyQualifierID, "Org.BouncyCastle.Asn1.X509", "PolicyQualifierID");
