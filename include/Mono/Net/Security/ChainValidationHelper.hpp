// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.Interface.ICertificateValidator2
#include "Mono/Security/Interface/ICertificateValidator2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoTlsSettings
  class MonoTlsSettings;
  // Forward declaring type: MonoTlsProvider
  class MonoTlsProvider;
  // Skipping declaration: ICertificateValidator because it is already included!
  // Forward declaring type: ValidationResult
  class ValidationResult;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: ServerCertValidationCallback
  class ServerCertValidationCallback;
  // Forward declaring type: HttpWebRequest
  class HttpWebRequest;
}
// Forward declaring namespace: System::Net::Security
namespace System::Net::Security {
  // Forward declaring type: LocalCertSelectionCallback
  class LocalCertSelectionCallback;
  // Forward declaring type: SslPolicyErrors
  struct SslPolicyErrors;
}
// Forward declaring namespace: Mono::Net::Security
namespace Mono::Net::Security {
  // Forward declaring type: ServerCertValidationCallbackWrapper
  class ServerCertValidationCallbackWrapper;
  // Forward declaring type: MonoTlsStream
  class MonoTlsStream;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
  // Forward declaring type: X509Chain
  class X509Chain;
}
// Completed forward declares
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.Security.ChainValidationHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class ChainValidationHelper : public ::Il2CppObject/*, public Mono::Security::Interface::ICertificateValidator2*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private readonly System.Object sender
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* sender;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly Mono.Security.Interface.MonoTlsSettings settings
    // Size: 0x8
    // Offset: 0x18
    Mono::Security::Interface::MonoTlsSettings* settings;
    // Field size check
    static_assert(sizeof(Mono::Security::Interface::MonoTlsSettings*) == 0x8);
    // private readonly Mono.Security.Interface.MonoTlsProvider provider
    // Size: 0x8
    // Offset: 0x20
    Mono::Security::Interface::MonoTlsProvider* provider;
    // Field size check
    static_assert(sizeof(Mono::Security::Interface::MonoTlsProvider*) == 0x8);
    // private readonly System.Net.ServerCertValidationCallback certValidationCallback
    // Size: 0x8
    // Offset: 0x28
    System::Net::ServerCertValidationCallback* certValidationCallback;
    // Field size check
    static_assert(sizeof(System::Net::ServerCertValidationCallback*) == 0x8);
    // private readonly System.Net.Security.LocalCertSelectionCallback certSelectionCallback
    // Size: 0x8
    // Offset: 0x30
    System::Net::Security::LocalCertSelectionCallback* certSelectionCallback;
    // Field size check
    static_assert(sizeof(System::Net::Security::LocalCertSelectionCallback*) == 0x8);
    // private readonly Mono.Net.Security.ServerCertValidationCallbackWrapper callbackWrapper
    // Size: 0x8
    // Offset: 0x38
    Mono::Net::Security::ServerCertValidationCallbackWrapper* callbackWrapper;
    // Field size check
    static_assert(sizeof(Mono::Net::Security::ServerCertValidationCallbackWrapper*) == 0x8);
    // private readonly Mono.Net.Security.MonoTlsStream tlsStream
    // Size: 0x8
    // Offset: 0x40
    Mono::Net::Security::MonoTlsStream* tlsStream;
    // Field size check
    static_assert(sizeof(Mono::Net::Security::MonoTlsStream*) == 0x8);
    // private readonly System.Net.HttpWebRequest request
    // Size: 0x8
    // Offset: 0x48
    System::Net::HttpWebRequest* request;
    // Field size check
    static_assert(sizeof(System::Net::HttpWebRequest*) == 0x8);
    public:
    // Creating interface conversion operator: operator Mono::Security::Interface::ICertificateValidator2
    operator Mono::Security::Interface::ICertificateValidator2() noexcept {
      return *reinterpret_cast<Mono::Security::Interface::ICertificateValidator2*>(this);
    }
    // Get instance field reference: private readonly System.Object sender
    ::Il2CppObject*& dyn_sender();
    // Get instance field reference: private readonly Mono.Security.Interface.MonoTlsSettings settings
    Mono::Security::Interface::MonoTlsSettings*& dyn_settings();
    // Get instance field reference: private readonly Mono.Security.Interface.MonoTlsProvider provider
    Mono::Security::Interface::MonoTlsProvider*& dyn_provider();
    // Get instance field reference: private readonly System.Net.ServerCertValidationCallback certValidationCallback
    System::Net::ServerCertValidationCallback*& dyn_certValidationCallback();
    // Get instance field reference: private readonly System.Net.Security.LocalCertSelectionCallback certSelectionCallback
    System::Net::Security::LocalCertSelectionCallback*& dyn_certSelectionCallback();
    // Get instance field reference: private readonly Mono.Net.Security.ServerCertValidationCallbackWrapper callbackWrapper
    Mono::Net::Security::ServerCertValidationCallbackWrapper*& dyn_callbackWrapper();
    // Get instance field reference: private readonly Mono.Net.Security.MonoTlsStream tlsStream
    Mono::Net::Security::MonoTlsStream*& dyn_tlsStream();
    // Get instance field reference: private readonly System.Net.HttpWebRequest request
    System::Net::HttpWebRequest*& dyn_request();
    // public Mono.Security.Interface.MonoTlsSettings get_Settings()
    // Offset: 0x17BC7D8
    Mono::Security::Interface::MonoTlsSettings* get_Settings();
    // private System.Void .ctor(Mono.Security.Interface.MonoTlsProvider provider, Mono.Security.Interface.MonoTlsSettings settings, System.Boolean cloneSettings, Mono.Net.Security.MonoTlsStream stream, Mono.Net.Security.ServerCertValidationCallbackWrapper callbackWrapper)
    // Offset: 0x17BC2D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChainValidationHelper* New_ctor(Mono::Security::Interface::MonoTlsProvider* provider, Mono::Security::Interface::MonoTlsSettings* settings, bool cloneSettings, Mono::Net::Security::MonoTlsStream* stream, Mono::Net::Security::ServerCertValidationCallbackWrapper* callbackWrapper) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Net::Security::ChainValidationHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChainValidationHelper*, creationType>(provider, settings, cloneSettings, stream, callbackWrapper)));
    }
    // static Mono.Security.Interface.ICertificateValidator GetInternalValidator(Mono.Security.Interface.MonoTlsProvider provider, Mono.Security.Interface.MonoTlsSettings settings)
    // Offset: 0x17BC22C
    static Mono::Security::Interface::ICertificateValidator* GetInternalValidator(Mono::Security::Interface::MonoTlsProvider* provider, Mono::Security::Interface::MonoTlsSettings* settings);
    // static Mono.Net.Security.ChainValidationHelper Create(Mono.Security.Interface.MonoTlsProvider provider, ref Mono.Security.Interface.MonoTlsSettings settings, Mono.Net.Security.MonoTlsStream stream)
    // Offset: 0x17BC518
    static Mono::Net::Security::ChainValidationHelper* Create(Mono::Security::Interface::MonoTlsProvider* provider, ByRef<Mono::Security::Interface::MonoTlsSettings*> settings, Mono::Net::Security::MonoTlsStream* stream);
    // static private System.Security.Cryptography.X509Certificates.X509Certificate DefaultSelectionCallback(System.String targetHost, System.Security.Cryptography.X509Certificates.X509CertificateCollection localCertificates, System.Security.Cryptography.X509Certificates.X509Certificate remoteCertificate, System.String[] acceptableIssuers)
    // Offset: 0x17BC78C
    static System::Security::Cryptography::X509Certificates::X509Certificate* DefaultSelectionCallback(::Il2CppString* targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates, System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::ArrayW<::Il2CppString*> acceptableIssuers);
    // public System.Boolean SelectClientCertificate(System.String targetHost, System.Security.Cryptography.X509Certificates.X509CertificateCollection localCertificates, System.Security.Cryptography.X509Certificates.X509Certificate remoteCertificate, System.String[] acceptableIssuers, out System.Security.Cryptography.X509Certificates.X509Certificate clientCertificate)
    // Offset: 0x17BC7E0
    bool SelectClientCertificate(::Il2CppString* targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates, System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::ArrayW<::Il2CppString*> acceptableIssuers, ByRef<System::Security::Cryptography::X509Certificates::X509Certificate*> clientCertificate);
    // public Mono.Security.Interface.ValidationResult ValidateCertificate(System.String host, System.Boolean serverMode, System.Security.Cryptography.X509Certificates.X509CertificateCollection certs)
    // Offset: 0x17BC820
    Mono::Security::Interface::ValidationResult* ValidateCertificate(::Il2CppString* host, bool serverMode, System::Security::Cryptography::X509Certificates::X509CertificateCollection* certs);
    // public Mono.Security.Interface.ValidationResult ValidateCertificate(System.String host, System.Boolean serverMode, System.Security.Cryptography.X509Certificates.X509Certificate leaf, System.Security.Cryptography.X509Certificates.X509Chain chain)
    // Offset: 0x17BCA34
    Mono::Security::Interface::ValidationResult* ValidateCertificate(::Il2CppString* host, bool serverMode, System::Security::Cryptography::X509Certificates::X509Certificate* leaf, System::Security::Cryptography::X509Certificates::X509Chain* chain);
    // private Mono.Security.Interface.ValidationResult ValidateChain(System.String host, System.Boolean server, System.Security.Cryptography.X509Certificates.X509Certificate leaf, System.Security.Cryptography.X509Certificates.X509Chain chain, System.Security.Cryptography.X509Certificates.X509CertificateCollection certs, System.Net.Security.SslPolicyErrors errors)
    // Offset: 0x17BC984
    Mono::Security::Interface::ValidationResult* ValidateChain(::Il2CppString* host, bool server, System::Security::Cryptography::X509Certificates::X509Certificate* leaf, System::Security::Cryptography::X509Certificates::X509Chain* chain, System::Security::Cryptography::X509Certificates::X509CertificateCollection* certs, System::Net::Security::SslPolicyErrors errors);
    // private Mono.Security.Interface.ValidationResult ValidateChain(System.String host, System.Boolean server, System.Security.Cryptography.X509Certificates.X509Certificate leaf, ref System.Security.Cryptography.X509Certificates.X509Chain chain, System.Security.Cryptography.X509Certificates.X509CertificateCollection certs, System.Net.Security.SslPolicyErrors errors)
    // Offset: 0x17BCB68
    Mono::Security::Interface::ValidationResult* ValidateChain_(::Il2CppString* host, bool server, System::Security::Cryptography::X509Certificates::X509Certificate* leaf, ByRef<System::Security::Cryptography::X509Certificates::X509Chain*> chain, System::Security::Cryptography::X509Certificates::X509CertificateCollection* certs, System::Net::Security::SslPolicyErrors errors);
  }; // Mono.Net.Security.ChainValidationHelper
  #pragma pack(pop)
  static check_size<sizeof(ChainValidationHelper), 72 + sizeof(System::Net::HttpWebRequest*)> __Mono_Net_Security_ChainValidationHelperSizeCheck;
  static_assert(sizeof(ChainValidationHelper) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::ChainValidationHelper*, "Mono.Net.Security", "ChainValidationHelper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::Security::ChainValidationHelper::get_Settings
// Il2CppName: get_Settings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::MonoTlsSettings* (Mono::Net::Security::ChainValidationHelper::*)()>(&Mono::Net::Security::ChainValidationHelper::get_Settings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::ChainValidationHelper*), "get_Settings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::ChainValidationHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Net::Security::ChainValidationHelper::GetInternalValidator
// Il2CppName: GetInternalValidator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::ICertificateValidator* (*)(Mono::Security::Interface::MonoTlsProvider*, Mono::Security::Interface::MonoTlsSettings*)>(&Mono::Net::Security::ChainValidationHelper::GetInternalValidator)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "MonoTlsProvider")->byval_arg;
    static auto* settings = &::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "MonoTlsSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::ChainValidationHelper*), "GetInternalValidator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider, settings});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::ChainValidationHelper::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Net::Security::ChainValidationHelper* (*)(Mono::Security::Interface::MonoTlsProvider*, ByRef<Mono::Security::Interface::MonoTlsSettings*>, Mono::Net::Security::MonoTlsStream*)>(&Mono::Net::Security::ChainValidationHelper::Create)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "MonoTlsProvider")->byval_arg;
    static auto* settings = &::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "MonoTlsSettings")->this_arg;
    static auto* stream = &::il2cpp_utils::GetClassFromName("Mono.Net.Security", "MonoTlsStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::ChainValidationHelper*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider, settings, stream});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::ChainValidationHelper::DefaultSelectionCallback
// Il2CppName: DefaultSelectionCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Certificate* (*)(::Il2CppString*, System::Security::Cryptography::X509Certificates::X509CertificateCollection*, System::Security::Cryptography::X509Certificates::X509Certificate*, ::ArrayW<::Il2CppString*>)>(&Mono::Net::Security::ChainValidationHelper::DefaultSelectionCallback)> {
  static const MethodInfo* get() {
    static auto* targetHost = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localCertificates = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateCollection")->byval_arg;
    static auto* remoteCertificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    static auto* acceptableIssuers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::ChainValidationHelper*), "DefaultSelectionCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetHost, localCertificates, remoteCertificate, acceptableIssuers});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::ChainValidationHelper::SelectClientCertificate
// Il2CppName: SelectClientCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Net::Security::ChainValidationHelper::*)(::Il2CppString*, System::Security::Cryptography::X509Certificates::X509CertificateCollection*, System::Security::Cryptography::X509Certificates::X509Certificate*, ::ArrayW<::Il2CppString*>, ByRef<System::Security::Cryptography::X509Certificates::X509Certificate*>)>(&Mono::Net::Security::ChainValidationHelper::SelectClientCertificate)> {
  static const MethodInfo* get() {
    static auto* targetHost = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localCertificates = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateCollection")->byval_arg;
    static auto* remoteCertificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    static auto* acceptableIssuers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* clientCertificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::ChainValidationHelper*), "SelectClientCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetHost, localCertificates, remoteCertificate, acceptableIssuers, clientCertificate});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::ChainValidationHelper::ValidateCertificate
// Il2CppName: ValidateCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::ValidationResult* (Mono::Net::Security::ChainValidationHelper::*)(::Il2CppString*, bool, System::Security::Cryptography::X509Certificates::X509CertificateCollection*)>(&Mono::Net::Security::ChainValidationHelper::ValidateCertificate)> {
  static const MethodInfo* get() {
    static auto* host = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* serverMode = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* certs = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::ChainValidationHelper*), "ValidateCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host, serverMode, certs});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::ChainValidationHelper::ValidateCertificate
// Il2CppName: ValidateCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::ValidationResult* (Mono::Net::Security::ChainValidationHelper::*)(::Il2CppString*, bool, System::Security::Cryptography::X509Certificates::X509Certificate*, System::Security::Cryptography::X509Certificates::X509Chain*)>(&Mono::Net::Security::ChainValidationHelper::ValidateCertificate)> {
  static const MethodInfo* get() {
    static auto* host = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* serverMode = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* leaf = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    static auto* chain = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Chain")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::ChainValidationHelper*), "ValidateCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host, serverMode, leaf, chain});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::ChainValidationHelper::ValidateChain
// Il2CppName: ValidateChain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::ValidationResult* (Mono::Net::Security::ChainValidationHelper::*)(::Il2CppString*, bool, System::Security::Cryptography::X509Certificates::X509Certificate*, System::Security::Cryptography::X509Certificates::X509Chain*, System::Security::Cryptography::X509Certificates::X509CertificateCollection*, System::Net::Security::SslPolicyErrors)>(&Mono::Net::Security::ChainValidationHelper::ValidateChain)> {
  static const MethodInfo* get() {
    static auto* host = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* server = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* leaf = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    static auto* chain = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Chain")->byval_arg;
    static auto* certs = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateCollection")->byval_arg;
    static auto* errors = &::il2cpp_utils::GetClassFromName("System.Net.Security", "SslPolicyErrors")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::ChainValidationHelper*), "ValidateChain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host, server, leaf, chain, certs, errors});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::ChainValidationHelper::ValidateChain_
// Il2CppName: ValidateChain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::ValidationResult* (Mono::Net::Security::ChainValidationHelper::*)(::Il2CppString*, bool, System::Security::Cryptography::X509Certificates::X509Certificate*, ByRef<System::Security::Cryptography::X509Certificates::X509Chain*>, System::Security::Cryptography::X509Certificates::X509CertificateCollection*, System::Net::Security::SslPolicyErrors)>(&Mono::Net::Security::ChainValidationHelper::ValidateChain_)> {
  static const MethodInfo* get() {
    static auto* host = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* server = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* leaf = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    static auto* chain = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Chain")->this_arg;
    static auto* certs = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateCollection")->byval_arg;
    static auto* errors = &::il2cpp_utils::GetClassFromName("System.Net.Security", "SslPolicyErrors")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::ChainValidationHelper*), "ValidateChain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host, server, leaf, chain, certs, errors});
  }
};
