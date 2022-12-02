// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ICertificateValidator
#include "GlobalNamespace/ICertificateValidator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: DnsEndPoint
  class DnsEndPoint;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate2
  class X509Certificate2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ClientCertificateValidator
  class ClientCertificateValidator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ClientCertificateValidator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ClientCertificateValidator*, "", "ClientCertificateValidator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ClientCertificateValidator
  // [TokenAttribute] Offset: FFFFFFFF
  class ClientCertificateValidator : public ::Il2CppObject/*, public ::GlobalNamespace::ICertificateValidator*/ {
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::ICertificateValidator
    operator ::GlobalNamespace::ICertificateValidator() noexcept {
      return *reinterpret_cast<::GlobalNamespace::ICertificateValidator*>(this);
    }
    // Creating interface conversion operator: i_ICertificateValidator
    inline ::GlobalNamespace::ICertificateValidator* i_ICertificateValidator() noexcept {
      return reinterpret_cast<::GlobalNamespace::ICertificateValidator*>(this);
    }
    // public System.Void .ctor()
    // Offset: 0x15D2EBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClientCertificateValidator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ClientCertificateValidator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClientCertificateValidator*, creationType>()));
    }
    // public System.Void ValidateCertificateChain(DnsEndPoint endPoint, System.Security.Cryptography.X509Certificates.X509Certificate2 certificate, System.Byte[][] certificateChain)
    // Offset: 0x15D2D0C
    void ValidateCertificateChain(::GlobalNamespace::DnsEndPoint* endPoint, ::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate, ::ArrayW<::ArrayW<uint8_t>> certificateChain);
    // private System.Void ValidateCertificateChainInternal(DnsEndPoint endPoint, System.Security.Cryptography.X509Certificates.X509Certificate2 certificate, System.Byte[][] certificateChain)
    // Offset: 0x15D2D10
    void ValidateCertificateChainInternal(::GlobalNamespace::DnsEndPoint* endPoint, ::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate, ::ArrayW<::ArrayW<uint8_t>> certificateChain);
  }; // ClientCertificateValidator
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ClientCertificateValidator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ClientCertificateValidator::ValidateCertificateChain
// Il2CppName: ValidateCertificateChain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ClientCertificateValidator::*)(::GlobalNamespace::DnsEndPoint*, ::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::ArrayW<::ArrayW<uint8_t>>)>(&GlobalNamespace::ClientCertificateValidator::ValidateCertificateChain)> {
  static const MethodInfo* get() {
    static auto* endPoint = &::il2cpp_utils::GetClassFromName("", "DnsEndPoint")->byval_arg;
    static auto* certificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate2")->byval_arg;
    static auto* certificateChain = &il2cpp_functions::array_class_get(il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ClientCertificateValidator*), "ValidateCertificateChain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endPoint, certificate, certificateChain});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ClientCertificateValidator::ValidateCertificateChainInternal
// Il2CppName: ValidateCertificateChainInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ClientCertificateValidator::*)(::GlobalNamespace::DnsEndPoint*, ::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::ArrayW<::ArrayW<uint8_t>>)>(&GlobalNamespace::ClientCertificateValidator::ValidateCertificateChainInternal)> {
  static const MethodInfo* get() {
    static auto* endPoint = &::il2cpp_utils::GetClassFromName("", "DnsEndPoint")->byval_arg;
    static auto* certificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate2")->byval_arg;
    static auto* certificateChain = &il2cpp_functions::array_class_get(il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ClientCertificateValidator*), "ValidateCertificateChainInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endPoint, certificate, certificateChain});
  }
};
