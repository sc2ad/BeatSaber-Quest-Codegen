// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509KeyUsageFlags
#include "System/Security/Cryptography/X509Certificates/X509KeyUsageFlags.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Chain
  class X509Chain;
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
}
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoTlsSettings
  class MonoTlsSettings;
}
// Completed forward declares
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Forward declaring type: SystemCertificateValidator
  class SystemCertificateValidator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Net::Security::SystemCertificateValidator);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::SystemCertificateValidator*, "Mono.Net.Security", "SystemCertificateValidator");
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.Security.SystemCertificateValidator
  // [TokenAttribute] Offset: FFFFFFFF
  class SystemCertificateValidator : public ::Il2CppObject {
    public:
    // Get static field: static private System.Boolean is_macosx
    static bool _get_is_macosx();
    // Set static field: static private System.Boolean is_macosx
    static void _set_is_macosx(bool value);
    // Get static field: static private System.Security.Cryptography.X509Certificates.X509KeyUsageFlags s_flags
    static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags _get_s_flags();
    // Set static field: static private System.Security.Cryptography.X509Certificates.X509KeyUsageFlags s_flags
    static void _set_s_flags(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags value);
    // static private System.Void .cctor()
    // Offset: 0x1B000A0
    static void _cctor();
    // static public System.Security.Cryptography.X509Certificates.X509Chain CreateX509Chain(System.Security.Cryptography.X509Certificates.X509CertificateCollection certs)
    // Offset: 0x1B0013C
    static ::System::Security::Cryptography::X509Certificates::X509Chain* CreateX509Chain(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certs);
    // static System.Boolean NeedsChain(Mono.Security.Interface.MonoTlsSettings settings)
    // Offset: 0x1AFB508
    static bool NeedsChain(::Mono::Security::Interface::MonoTlsSettings* settings);
  }; // Mono.Net.Security.SystemCertificateValidator
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::Security::SystemCertificateValidator::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Net::Security::SystemCertificateValidator::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::SystemCertificateValidator*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::SystemCertificateValidator::CreateX509Chain
// Il2CppName: CreateX509Chain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Chain* (*)(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*)>(&Mono::Net::Security::SystemCertificateValidator::CreateX509Chain)> {
  static const MethodInfo* get() {
    static auto* certs = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::SystemCertificateValidator*), "CreateX509Chain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{certs});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::SystemCertificateValidator::NeedsChain
// Il2CppName: NeedsChain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Mono::Security::Interface::MonoTlsSettings*)>(&Mono::Net::Security::SystemCertificateValidator::NeedsChain)> {
  static const MethodInfo* get() {
    static auto* settings = &::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "MonoTlsSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::SystemCertificateValidator*), "NeedsChain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{settings});
  }
};
