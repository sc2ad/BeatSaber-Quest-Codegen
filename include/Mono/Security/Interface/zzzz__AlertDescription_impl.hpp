#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Mono/Security/Interface/zzzz__AlertDescription_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Security::Interface::AlertDescription::AlertDescription(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Mono::Security::Interface::AlertDescription::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::Mono::Security::Interface::AlertDescription::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr ::Mono::Security::Interface::AlertDescription  ::Mono::Security::Interface::AlertDescription::CloseNotify{0u};
constexpr ::Mono::Security::Interface::AlertDescription  ::Mono::Security::Interface::AlertDescription::UnexpectedMessage{10u};
constexpr ::Mono::Security::Interface::AlertDescription  ::Mono::Security::Interface::AlertDescription::BadRecordMAC{20u};
constexpr ::Mono::Security::Interface::AlertDescription  ::Mono::Security::Interface::AlertDescription::DecryptionFailed_RESERVED{21u};
constexpr ::Mono::Security::Interface::AlertDescription  ::Mono::Security::Interface::AlertDescription::RecordOverflow{22u};
constexpr ::Mono::Security::Interface::AlertDescription  ::Mono::Security::Interface::AlertDescription::DecompressionFailure{30u};
constexpr ::Mono::Security::Interface::AlertDescription  ::Mono::Security::Interface::AlertDescription::HandshakeFailure{40u};
constexpr ::Mono::Security::Interface::AlertDescription  ::Mono::Security::Interface::AlertDescription::NoCertificate_RESERVED{41u};
constexpr ::Mono::Security::Interface::AlertDescription  ::Mono::Security::Interface::AlertDescription::BadCertificate{42u};
constexpr ::Mono::Security::Interface::AlertDescription  ::Mono::Security::Interface::AlertDescription::UnsupportedCertificate{43u};
constexpr ::Mono::Security::Interface::AlertDescription  ::Mono::Security::Interface::AlertDescription::CertificateRevoked{44u};
constexpr ::Mono::Security::Interface::AlertDescription  ::Mono::Security::Interface::AlertDescription::CertificateExpired{45u};
constexpr ::Mono::Security::Interface::AlertDescription  ::Mono::Security::Interface::AlertDescription::CertificateUnknown{46u};
constexpr ::Mono::Security::Interface::AlertDescription  ::Mono::Security::Interface::AlertDescription::IlegalParameter{47u};
constexpr ::Mono::Security::Interface::AlertDescription  ::Mono::Security::Interface::AlertDescription::UnknownCA{48u};
constexpr ::Mono::Security::Interface::AlertDescription  ::Mono::Security::Interface::AlertDescription::AccessDenied{49u};
constexpr ::Mono::Security::Interface::AlertDescription  ::Mono::Security::Interface::AlertDescription::DecodeError{50u};
constexpr ::Mono::Security::Interface::AlertDescription  ::Mono::Security::Interface::AlertDescription::DecryptError{51u};
constexpr ::Mono::Security::Interface::AlertDescription  ::Mono::Security::Interface::AlertDescription::ExportRestriction{60u};
constexpr ::Mono::Security::Interface::AlertDescription  ::Mono::Security::Interface::AlertDescription::ProtocolVersion{70u};
constexpr ::Mono::Security::Interface::AlertDescription  ::Mono::Security::Interface::AlertDescription::InsuficientSecurity{71u};
constexpr ::Mono::Security::Interface::AlertDescription  ::Mono::Security::Interface::AlertDescription::InternalError{80u};
constexpr ::Mono::Security::Interface::AlertDescription  ::Mono::Security::Interface::AlertDescription::UserCancelled{90u};
constexpr ::Mono::Security::Interface::AlertDescription  ::Mono::Security::Interface::AlertDescription::NoRenegotiation{100u};
constexpr ::Mono::Security::Interface::AlertDescription  ::Mono::Security::Interface::AlertDescription::UnsupportedExtension{110u};
} // end anonymous namespace
