#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1::Ocsp {
class OcspResponse;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateStatus;
}
// Type: Org.BouncyCastle.Crypto.Tls::CertificateStatus
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1188))
// CS Name: Org.BouncyCastle.Crypto.Tls.CertificateStatus
class CORDL_TYPE CertificateStatus : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CertificateStatus() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateStatus", modifiers: " const&", def_value: None }]
constexpr CertificateStatus(CertificateStatus const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateStatus", modifiers: "&&", def_value: None }]
constexpr CertificateStatus(CertificateStatus&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertificateStatus(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CertificateStatus& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertificateStatus& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertificateStatus& operator=(CertificateStatus&& o) noexcept = default;
  constexpr CertificateStatus& operator=(CertificateStatus const& o) noexcept = default;
                


// Fields

 uint8_t __declspec(property(get=__get_mStatusType, put=__set_mStatusType))  mStatusType;

constexpr void __set_mStatusType(uint8_t value) ;

constexpr uint8_t __get_mStatusType() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_mResponse, put=__set_mResponse))  mResponse;

constexpr void __set_mResponse(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_mResponse() const;


// Properties

 uint8_t __declspec(property(get=get_StatusType))  StatusType;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Response))  Response;


// Methods

// Ctor Parameters [CppParam { name: "statusType", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "response", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit CertificateStatus(uint8_t statusType, ::bs_hook::Il2CppWrapperType response) ;

/// @brief Method .ctor addr 0xed0aa0 size 0xa0 virtual false final false
 void _ctor(uint8_t statusType, ::bs_hook::Il2CppWrapperType response) ;

/// @brief Method get_StatusType addr 0xed0c28 size 0x8 virtual true final false
 uint8_t get_StatusType() ;

/// @brief Method get_Response addr 0xed0c30 size 0x8 virtual true final false
 ::bs_hook::Il2CppWrapperType get_Response() ;

/// @brief Method GetOcspResponse addr 0xed0c38 size 0xd4 virtual true final false
 ::Org::BouncyCastle::Asn1::Ocsp::OcspResponse GetOcspResponse() ;

/// @brief Method Encode addr 0xed0d0c size 0x150 virtual true final false
 void Encode(::System::IO::Stream output) ;

/// @brief Method Parse addr 0xed0e5c size 0x114 virtual false final false
static ::Org::BouncyCastle::Crypto::Tls::CertificateStatus Parse(::System::IO::Stream input) ;

/// @brief Method IsCorrectType addr 0xed0b40 size 0xe8 virtual false final false
static bool IsCorrectType(uint8_t statusType, ::bs_hook::Il2CppWrapperType response) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::CertificateStatus);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::CertificateStatus, "Org.BouncyCastle.Crypto.Tls", "CertificateStatus");
