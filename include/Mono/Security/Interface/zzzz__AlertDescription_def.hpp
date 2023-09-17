#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Mono::Security::Interface {
struct AlertDescription;
}
// Type: Mono.Security.Interface::AlertDescription
namespace Mono::Security::Interface {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13984))
// CS Name: Mono.Security.Interface.AlertDescription
struct CORDL_TYPE AlertDescription : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr AlertDescription(uint8_t value__) noexcept;


                    constexpr AlertDescription(AlertDescription const&) = default;
                    constexpr AlertDescription(AlertDescription&&) = default;
                    constexpr AlertDescription& operator=(AlertDescription const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AlertDescription& operator=(AlertDescription&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AlertDescription(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AlertDescription_Unwrapped : uint8_t {
__CloseNotify = 0u,
__UnexpectedMessage = 10u,
__BadRecordMAC = 20u,
__DecryptionFailed_RESERVED = 21u,
__RecordOverflow = 22u,
__DecompressionFailure = 30u,
__HandshakeFailure = 40u,
__NoCertificate_RESERVED = 41u,
__BadCertificate = 42u,
__UnsupportedCertificate = 43u,
__CertificateRevoked = 44u,
__CertificateExpired = 45u,
__CertificateUnknown = 46u,
__IlegalParameter = 47u,
__UnknownCA = 48u,
__AccessDenied = 49u,
__DecodeError = 50u,
__DecryptError = 51u,
__ExportRestriction = 60u,
__ProtocolVersion = 70u,
__InsuficientSecurity = 71u,
__InternalError = 80u,
__UserCancelled = 90u,
__NoRenegotiation = 100u,
__UnsupportedExtension = 110u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AlertDescription_Unwrapped () const noexcept {
return std::bit_cast<__AlertDescription_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field CloseNotify offset 0
static ::Mono::Security::Interface::AlertDescription const CloseNotify;

/// @brief Field UnexpectedMessage offset 0
static ::Mono::Security::Interface::AlertDescription const UnexpectedMessage;

/// @brief Field BadRecordMAC offset 0
static ::Mono::Security::Interface::AlertDescription const BadRecordMAC;

/// @brief Field DecryptionFailed_RESERVED offset 0
static ::Mono::Security::Interface::AlertDescription const DecryptionFailed_RESERVED;

/// @brief Field RecordOverflow offset 0
static ::Mono::Security::Interface::AlertDescription const RecordOverflow;

/// @brief Field DecompressionFailure offset 0
static ::Mono::Security::Interface::AlertDescription const DecompressionFailure;

/// @brief Field HandshakeFailure offset 0
static ::Mono::Security::Interface::AlertDescription const HandshakeFailure;

/// @brief Field NoCertificate_RESERVED offset 0
static ::Mono::Security::Interface::AlertDescription const NoCertificate_RESERVED;

/// @brief Field BadCertificate offset 0
static ::Mono::Security::Interface::AlertDescription const BadCertificate;

/// @brief Field UnsupportedCertificate offset 0
static ::Mono::Security::Interface::AlertDescription const UnsupportedCertificate;

/// @brief Field CertificateRevoked offset 0
static ::Mono::Security::Interface::AlertDescription const CertificateRevoked;

/// @brief Field CertificateExpired offset 0
static ::Mono::Security::Interface::AlertDescription const CertificateExpired;

/// @brief Field CertificateUnknown offset 0
static ::Mono::Security::Interface::AlertDescription const CertificateUnknown;

/// @brief Field IlegalParameter offset 0
static ::Mono::Security::Interface::AlertDescription const IlegalParameter;

/// @brief Field UnknownCA offset 0
static ::Mono::Security::Interface::AlertDescription const UnknownCA;

/// @brief Field AccessDenied offset 0
static ::Mono::Security::Interface::AlertDescription const AccessDenied;

/// @brief Field DecodeError offset 0
static ::Mono::Security::Interface::AlertDescription const DecodeError;

/// @brief Field DecryptError offset 0
static ::Mono::Security::Interface::AlertDescription const DecryptError;

/// @brief Field ExportRestriction offset 0
static ::Mono::Security::Interface::AlertDescription const ExportRestriction;

/// @brief Field ProtocolVersion offset 0
static ::Mono::Security::Interface::AlertDescription const ProtocolVersion;

/// @brief Field InsuficientSecurity offset 0
static ::Mono::Security::Interface::AlertDescription const InsuficientSecurity;

/// @brief Field InternalError offset 0
static ::Mono::Security::Interface::AlertDescription const InternalError;

/// @brief Field UserCancelled offset 0
static ::Mono::Security::Interface::AlertDescription const UserCancelled;

/// @brief Field NoRenegotiation offset 0
static ::Mono::Security::Interface::AlertDescription const NoRenegotiation;

/// @brief Field UnsupportedExtension offset 0
static ::Mono::Security::Interface::AlertDescription const UnsupportedExtension;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Security::Interface
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::AlertDescription, "Mono.Security.Interface", "AlertDescription");
