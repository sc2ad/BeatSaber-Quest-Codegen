#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class ResponseData;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Ocsp {
class RespData;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Ocsp {
class RespID;
}
namespace Org::BouncyCastle::Ocsp {
class SingleResp;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class BasicOcspResponse;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class BasicOcspResp;
}
// Type: Org.BouncyCastle.Ocsp::BasicOcspResp
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1606))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1607))
// CS Name: Org.BouncyCastle.Ocsp.BasicOcspResp
class CORDL_TYPE BasicOcspResp : public Org::BouncyCastle::X509::X509ExtensionBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BasicOcspResp() = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicOcspResp", modifiers: " const&", def_value: None }]
constexpr BasicOcspResp(BasicOcspResp const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicOcspResp", modifiers: "&&", def_value: None }]
constexpr BasicOcspResp(BasicOcspResp&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BasicOcspResp(void* ptr) noexcept : Org::BouncyCastle::X509::X509ExtensionBase(ptr) {
}


  constexpr BasicOcspResp& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BasicOcspResp& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BasicOcspResp& operator=(BasicOcspResp&& o) noexcept = default;
  constexpr BasicOcspResp& operator=(BasicOcspResp const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse __declspec(property(get=__get_resp, put=__set_resp))  resp;

constexpr void __set_resp(Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse value) ;

constexpr Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse __get_resp() const;

 Org::BouncyCastle::Asn1::Ocsp::ResponseData __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(Org::BouncyCastle::Asn1::Ocsp::ResponseData value) ;

constexpr Org::BouncyCastle::Asn1::Ocsp::ResponseData __get_data() const;


// Properties

 int32_t __declspec(property(get=get_Version))  Version;

 Org::BouncyCastle::Ocsp::RespID __declspec(property(get=get_ResponderId))  ResponderId;

 System::DateTime __declspec(property(get=get_ProducedAt))  ProducedAt;

 ::ArrayW<Org::BouncyCastle::Ocsp::SingleResp> __declspec(property(get=get_Responses))  Responses;

 Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=get_ResponseExtensions))  ResponseExtensions;

 ::StringW __declspec(property(get=get_SignatureAlgName))  SignatureAlgName;

 ::StringW __declspec(property(get=get_SignatureAlgOid))  SignatureAlgOid;


// Methods

// Ctor Parameters [CppParam { name: "resp", ty: "Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse", modifiers: "", def_value: None }]
explicit BasicOcspResp(Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse resp) ;

/// @brief Method .ctor addr 0x100fb18 size 0x38 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse resp) ;

/// @brief Method GetTbsResponseData addr 0x100fb50 size 0xe8 virtual false final false
 ::ArrayW<uint8_t> GetTbsResponseData() ;

/// @brief Method get_Version addr 0x100fca8 size 0x2c virtual false final false
 int32_t get_Version() ;

/// @brief Method get_ResponderId addr 0x100fcd4 size 0x70 virtual false final false
 Org::BouncyCastle::Ocsp::RespID get_ResponderId() ;

/// @brief Method get_ProducedAt addr 0x100fd6c size 0x24 virtual false final false
 System::DateTime get_ProducedAt() ;

/// @brief Method get_Responses addr 0x100fd90 size 0x138 virtual false final false
 ::ArrayW<Org::BouncyCastle::Ocsp::SingleResp> get_Responses() ;

/// @brief Method get_ResponseExtensions addr 0x100fef0 size 0x1c virtual false final false
 Org::BouncyCastle::Asn1::X509::X509Extensions get_ResponseExtensions() ;

/// @brief Method GetX509Extensions addr 0x100ff0c size 0x1c virtual true final false
 Org::BouncyCastle::Asn1::X509::X509Extensions GetX509Extensions() ;

/// @brief Method get_SignatureAlgName addr 0x100ff28 size 0x7c virtual false final false
 ::StringW get_SignatureAlgName() ;

/// @brief Method get_SignatureAlgOid addr 0x101013c size 0x34 virtual false final false
 ::StringW get_SignatureAlgOid() ;

/// @brief Method GetResponseData addr 0x1010170 size 0x68 virtual false final false
 Org::BouncyCastle::Ocsp::RespData GetResponseData() ;

/// @brief Method GetSignature addr 0x1010200 size 0x1c virtual false final false
 ::ArrayW<uint8_t> GetSignature() ;

/// @brief Method GetCertList addr 0x101021c size 0x558 virtual false final false
 System::Collections::IList GetCertList() ;

/// @brief Method GetCerts addr 0x1010774 size 0x284 virtual false final false
 ::ArrayW<Org::BouncyCastle::X509::X509Certificate> GetCerts() ;

/// @brief Method GetCertificates addr 0x10109f8 size 0x17c virtual false final false
 Org::BouncyCastle::X509::Store::IX509Store GetCertificates(::StringW type) ;

/// @brief Method Verify addr 0x1010b74 size 0x2e8 virtual false final false
 bool Verify(Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey) ;

/// @brief Method GetEncoded addr 0x1010e5c size 0x1c virtual false final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method Equals addr 0x1010e78 size 0xb0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x1010f28 size 0x1c virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Ocsp
NEED_NO_BOX(Org::BouncyCastle::Ocsp::BasicOcspResp);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Ocsp::BasicOcspResp, "Org.BouncyCastle.Ocsp", "BasicOcspResp");
