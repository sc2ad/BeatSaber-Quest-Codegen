// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.X509Certificates.X509CertificateImplMono
#include "System/Security/Cryptography/X509Certificates/X509CertificateImplMono.hpp"
// Including type: Mono.Security.X509.X509Certificate
#include "Mono/Security/X509/X509Certificate.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509CertificateImplMono..ctor
System::Security::Cryptography::X509Certificates::X509CertificateImplMono* System::Security::Cryptography::X509Certificates::X509CertificateImplMono::New_ctor(Mono::Security::X509::X509Certificate* x509) {
  return THROW_UNLESS(il2cpp_utils::New<X509CertificateImplMono*>(x509));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509CertificateImplMono.get_IsValid
bool System::Security::Cryptography::X509Certificates::X509CertificateImplMono::get_IsValid() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsValid"));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509CertificateImplMono.Clone
System::Security::Cryptography::X509Certificates::X509CertificateImpl* System::Security::Cryptography::X509Certificates::X509CertificateImplMono::Clone() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(this, "Clone"));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509CertificateImplMono.GetIssuerName
::Il2CppString* System::Security::Cryptography::X509Certificates::X509CertificateImplMono::GetIssuerName(bool legacyV1Mode) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "GetIssuerName", legacyV1Mode));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509CertificateImplMono.GetSubjectName
::Il2CppString* System::Security::Cryptography::X509Certificates::X509CertificateImplMono::GetSubjectName(bool legacyV1Mode) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "GetSubjectName", legacyV1Mode));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509CertificateImplMono.GetRawCertData
::Array<uint8_t>* System::Security::Cryptography::X509Certificates::X509CertificateImplMono::GetRawCertData() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "GetRawCertData"));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509CertificateImplMono.GetCertHash
::Array<uint8_t>* System::Security::Cryptography::X509Certificates::X509CertificateImplMono::GetCertHash(bool lazy) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "GetCertHash", lazy));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509CertificateImplMono.GetValidFrom
System::DateTime System::Security::Cryptography::X509Certificates::X509CertificateImplMono::GetValidFrom() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::DateTime>(this, "GetValidFrom"));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509CertificateImplMono.GetValidUntil
System::DateTime System::Security::Cryptography::X509Certificates::X509CertificateImplMono::GetValidUntil() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::DateTime>(this, "GetValidUntil"));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509CertificateImplMono.Equals
bool System::Security::Cryptography::X509Certificates::X509CertificateImplMono::Equals(System::Security::Cryptography::X509Certificates::X509CertificateImpl* other, bool& result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", other, result));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509CertificateImplMono.GetSerialNumber
::Array<uint8_t>* System::Security::Cryptography::X509Certificates::X509CertificateImplMono::GetSerialNumber() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "GetSerialNumber"));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509CertificateImplMono.ToString
::Il2CppString* System::Security::Cryptography::X509Certificates::X509CertificateImplMono::ToString(bool full) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString", full));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509CertificateImplMono.Dispose
void System::Security::Cryptography::X509Certificates::X509CertificateImplMono::Dispose(bool disposing) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose", disposing));
}