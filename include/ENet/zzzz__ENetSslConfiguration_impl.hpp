#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "ENet/zzzz__ENetSslConfiguration_def.hpp"
#include "ENet/zzzz__SslMode_def.hpp"
// Ctor Parameters [CppParam { name: "mode", ty: "::ENet::SslMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "certificatePath", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "certificate", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "privateKeyPath", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "privateKey", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "validateCertificate", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rootCertificatePath", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "rootCertificate", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "hostName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr ::ENet::ENetSslConfiguration::ENetSslConfiguration(::ENet::SslMode mode, ::StringW certificatePath, ::StringW certificate, ::StringW privateKeyPath, ::StringW privateKey, int32_t validateCertificate, ::StringW rootCertificatePath, ::StringW rootCertificate, ::StringW hostName) noexcept : ::bs_hook::ValueTypeWrapper() {this->mode = mode;
this->certificatePath = certificatePath;
this->certificate = certificate;
this->privateKeyPath = privateKeyPath;
this->privateKey = privateKey;
this->validateCertificate = validateCertificate;
this->rootCertificatePath = rootCertificatePath;
this->rootCertificate = rootCertificate;
this->hostName = hostName;
}
constexpr void ::ENet::ENetSslConfiguration::__set_mode(::ENet::SslMode value)  {
::cordl_internals::setInstanceField<::ENet::SslMode, 0x0>(this->__instance, std::forward<::ENet::SslMode>(value));
}
constexpr ::ENet::SslMode ::ENet::ENetSslConfiguration::__get_mode() const {
return ::cordl_internals::getInstanceField<::ENet::SslMode, 0x0>(this->__instance);
}
constexpr void ::ENet::ENetSslConfiguration::__set_certificatePath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::ENet::ENetSslConfiguration::__get_certificatePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void ::ENet::ENetSslConfiguration::__set_certificate(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::ENet::ENetSslConfiguration::__get_certificate() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->__instance);
}
constexpr void ::ENet::ENetSslConfiguration::__set_privateKeyPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::ENet::ENetSslConfiguration::__get_privateKeyPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->__instance);
}
constexpr void ::ENet::ENetSslConfiguration::__set_privateKey(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::ENet::ENetSslConfiguration::__get_privateKey() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->__instance);
}
constexpr void ::ENet::ENetSslConfiguration::__set_validateCertificate(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::ENet::ENetSslConfiguration::__get_validateCertificate() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->__instance);
}
constexpr void ::ENet::ENetSslConfiguration::__set_rootCertificatePath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::ENet::ENetSslConfiguration::__get_rootCertificatePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->__instance);
}
constexpr void ::ENet::ENetSslConfiguration::__set_rootCertificate(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::ENet::ENetSslConfiguration::__get_rootCertificate() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->__instance);
}
constexpr void ::ENet::ENetSslConfiguration::__set_hostName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::ENet::ENetSslConfiguration::__get_hostName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->__instance);
}
} // end anonymous namespace
