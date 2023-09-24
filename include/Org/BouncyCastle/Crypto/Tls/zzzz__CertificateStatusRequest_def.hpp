#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class OcspStatusRequest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateStatusRequest;
}
// Type: Org.BouncyCastle.Crypto.Tls::CertificateStatusRequest
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1189))
// CS Name: Org.BouncyCastle.Crypto.Tls.CertificateStatusRequest
class CORDL_TYPE CertificateStatusRequest : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CertificateStatusRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateStatusRequest", modifiers: " const&", def_value: None }]
constexpr CertificateStatusRequest(CertificateStatusRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateStatusRequest", modifiers: "&&", def_value: None }]
constexpr CertificateStatusRequest(CertificateStatusRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertificateStatusRequest(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CertificateStatusRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertificateStatusRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertificateStatusRequest& operator=(CertificateStatusRequest&& o) noexcept = default;
  constexpr CertificateStatusRequest& operator=(CertificateStatusRequest const& o) noexcept = default;
                


// Fields

 uint8_t __declspec(property(get=__get_mStatusType, put=__set_mStatusType))  mStatusType;

constexpr void __set_mStatusType(uint8_t value) ;

constexpr uint8_t __get_mStatusType() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_mRequest, put=__set_mRequest))  mRequest;

constexpr void __set_mRequest(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_mRequest() const;


// Properties

 uint8_t __declspec(property(get=get_StatusType))  StatusType;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Request))  Request;


// Methods

static Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest New_ctor(uint8_t statusType, ::bs_hook::Il2CppWrapperType request) ;

/// @brief Method .ctor addr 0xed0f70 size 0xa0 virtual false final false
 void _ctor(uint8_t statusType, ::bs_hook::Il2CppWrapperType request) ;

/// @brief Method get_StatusType addr 0xed10f8 size 0x8 virtual true final false
 uint8_t get_StatusType() ;

/// @brief Method get_Request addr 0xed1100 size 0x8 virtual true final false
 ::bs_hook::Il2CppWrapperType get_Request() ;

/// @brief Method GetOcspStatusRequest addr 0xed1108 size 0xd4 virtual true final false
 Org::BouncyCastle::Crypto::Tls::OcspStatusRequest GetOcspStatusRequest() ;

/// @brief Method Encode addr 0xed11dc size 0x13c virtual true final false
 void Encode(System::IO::Stream output) ;

/// @brief Method Parse addr 0xed1318 size 0xf4 virtual false final false
static Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest Parse(System::IO::Stream input) ;

/// @brief Method IsCorrectType addr 0xed1010 size 0xe8 virtual false final false
static bool IsCorrectType(uint8_t statusType, ::bs_hook::Il2CppWrapperType request) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest, "Org.BouncyCastle.Crypto.Tls", "CertificateStatusRequest");
