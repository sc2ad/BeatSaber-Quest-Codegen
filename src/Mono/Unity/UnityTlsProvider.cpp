// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Unity.UnityTlsProvider
#include "Mono/Unity/UnityTlsProvider.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
// Including type: System.Security.Authentication.SslProtocols
#include "System/Security/Authentication/SslProtocols.hpp"
// Including type: Mono.Security.Interface.IMonoSslStream
#include "Mono/Security/Interface/IMonoSslStream.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: Mono.Security.Interface.MonoTlsSettings
#include "Mono/Security/Interface/MonoTlsSettings.hpp"
// Including type: System.Net.Security.SslStream
#include "System/Net/Security/SslStream.hpp"
// Including type: Mono.Security.Interface.ICertificateValidator2
#include "Mono/Security/Interface/ICertificateValidator2.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509CertificateCollection
#include "System/Security/Cryptography/X509Certificates/X509CertificateCollection.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509Chain
#include "System/Security/Cryptography/X509Certificates/X509Chain.hpp"
// Including type: Mono.Security.Interface.MonoSslPolicyErrors
#include "Mono/Security/Interface/MonoSslPolicyErrors.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Mono.Unity.UnityTlsProvider.get_Name
::Il2CppString* Mono::Unity::UnityTlsProvider::get_Name() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_Name"));
}
// Autogenerated method: Mono.Unity.UnityTlsProvider.get_ID
System::Guid Mono::Unity::UnityTlsProvider::get_ID() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Guid>(this, "get_ID"));
}
// Autogenerated method: Mono.Unity.UnityTlsProvider.get_SupportsSslStream
bool Mono::Unity::UnityTlsProvider::get_SupportsSslStream() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_SupportsSslStream"));
}
// Autogenerated method: Mono.Unity.UnityTlsProvider.get_SupportsMonoExtensions
bool Mono::Unity::UnityTlsProvider::get_SupportsMonoExtensions() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_SupportsMonoExtensions"));
}
// Autogenerated method: Mono.Unity.UnityTlsProvider.get_SupportsConnectionInfo
bool Mono::Unity::UnityTlsProvider::get_SupportsConnectionInfo() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_SupportsConnectionInfo"));
}
// Autogenerated method: Mono.Unity.UnityTlsProvider.get_SupportsCleanShutdown
bool Mono::Unity::UnityTlsProvider::get_SupportsCleanShutdown() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_SupportsCleanShutdown"));
}
// Autogenerated method: Mono.Unity.UnityTlsProvider.get_SupportedProtocols
System::Security::Authentication::SslProtocols Mono::Unity::UnityTlsProvider::get_SupportedProtocols() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Authentication::SslProtocols>(this, "get_SupportedProtocols"));
}
// Autogenerated method: Mono.Unity.UnityTlsProvider.CreateSslStream
Mono::Security::Interface::IMonoSslStream* Mono::Unity::UnityTlsProvider::CreateSslStream(System::IO::Stream* innerStream, bool leaveInnerStreamOpen, Mono::Security::Interface::MonoTlsSettings* settings) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Mono::Security::Interface::IMonoSslStream*>(this, "CreateSslStream", innerStream, leaveInnerStreamOpen, settings));
}
// Autogenerated method: Mono.Unity.UnityTlsProvider.CreateSslStreamInternal
Mono::Security::Interface::IMonoSslStream* Mono::Unity::UnityTlsProvider::CreateSslStreamInternal(System::Net::Security::SslStream* sslStream, System::IO::Stream* innerStream, bool leaveInnerStreamOpen, Mono::Security::Interface::MonoTlsSettings* settings) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Mono::Security::Interface::IMonoSslStream*>(this, "CreateSslStreamInternal", sslStream, innerStream, leaveInnerStreamOpen, settings));
}
// Autogenerated method: Mono.Unity.UnityTlsProvider.ValidateCertificate
bool Mono::Unity::UnityTlsProvider::ValidateCertificate(Mono::Security::Interface::ICertificateValidator2* validator, ::Il2CppString* targetHost, bool serverMode, System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates, bool wantsChain, System::Security::Cryptography::X509Certificates::X509Chain*& chain, Mono::Security::Interface::MonoSslPolicyErrors& errors, int& status11) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "ValidateCertificate", validator, targetHost, serverMode, certificates, wantsChain, chain, errors, status11));
}
// Autogenerated method: Mono.Unity.UnityTlsProvider..ctor
Mono::Unity::UnityTlsProvider* Mono::Unity::UnityTlsProvider::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<UnityTlsProvider*>());
}