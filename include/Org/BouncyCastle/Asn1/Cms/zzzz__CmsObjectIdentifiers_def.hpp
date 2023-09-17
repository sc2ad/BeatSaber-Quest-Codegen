#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class CmsObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.Cms::CmsObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(63))
// CS Name: Org.BouncyCastle.Asn1.Cms.CmsObjectIdentifiers
class CORDL_TYPE CmsObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CmsObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr CmsObjectIdentifiers(CmsObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr CmsObjectIdentifiers(CmsObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CmsObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsObjectIdentifiers& operator=(CmsObjectIdentifiers&& o) noexcept = default;
  constexpr CmsObjectIdentifiers& operator=(CmsObjectIdentifiers const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Data, put=__set_Data))  Data;

static void __set_Data(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Data() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SignedData, put=__set_SignedData))  SignedData;

static void __set_SignedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SignedData() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_EnvelopedData, put=__set_EnvelopedData))  EnvelopedData;

static void __set_EnvelopedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_EnvelopedData() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SignedAndEnvelopedData, put=__set_SignedAndEnvelopedData))  SignedAndEnvelopedData;

static void __set_SignedAndEnvelopedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SignedAndEnvelopedData() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DigestedData, put=__set_DigestedData))  DigestedData;

static void __set_DigestedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DigestedData() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_EncryptedData, put=__set_EncryptedData))  EncryptedData;

static void __set_EncryptedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_EncryptedData() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_AuthenticatedData, put=__set_AuthenticatedData))  AuthenticatedData;

static void __set_AuthenticatedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_AuthenticatedData() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_CompressedData, put=__set_CompressedData))  CompressedData;

static void __set_CompressedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_CompressedData() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_AuthEnvelopedData, put=__set_AuthEnvelopedData))  AuthEnvelopedData;

static void __set_AuthEnvelopedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_AuthEnvelopedData() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_timestampedData, put=__set_timestampedData))  timestampedData;

static void __set_timestampedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_timestampedData() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_ri, put=__set_id_ri))  id_ri;

static void __set_id_ri(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_ri() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_ri_ocsp_response, put=__set_id_ri_ocsp_response))  id_ri_ocsp_response;

static void __set_id_ri_ocsp_response(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_ri_ocsp_response() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_ri_scvp, put=__set_id_ri_scvp))  id_ri_scvp;

static void __set_id_ri_scvp(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_ri_scvp() ;


// Methods

// Ctor Parameters []
explicit CmsObjectIdentifiers() ;

/// @brief Method .ctor addr 0xde85e8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::CmsObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::CmsObjectIdentifiers, "Org.BouncyCastle.Asn1.Cms", "CmsObjectIdentifiers");
