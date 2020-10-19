// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.X509Certificates.X509Certificate
#include "System/Security/Cryptography/X509Certificates/X509Certificate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate2Impl
  class X509Certificate2Impl;
  // Forward declaring type: X509ExtensionCollection
  class X509ExtensionCollection;
  // Forward declaring type: X500DistinguishedName
  class X500DistinguishedName;
  // Forward declaring type: PublicKey
  class PublicKey;
  // Forward declaring type: X509NameType
  struct X509NameType;
  // Forward declaring type: X509KeyStorageFlags
  struct X509KeyStorageFlags;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: AsymmetricAlgorithm
  class AsymmetricAlgorithm;
  // Forward declaring type: Oid
  class Oid;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509Certificate2
  class X509Certificate2 : public System::Security::Cryptography::X509Certificates::X509Certificate {
    public:
    // private System.String friendlyName
    // Offset: 0x30
    ::Il2CppString* friendlyName;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return friendlyName;
    }
    // Get static field: static private System.Byte[] signedData
    static ::Array<uint8_t>* _get_signedData();
    // Set static field: static private System.Byte[] signedData
    static void _set_signedData(::Array<uint8_t>* value);
    // System.Security.Cryptography.X509Certificates.X509Certificate2Impl get_Impl()
    // Offset: 0x147447C
    System::Security::Cryptography::X509Certificates::X509Certificate2Impl* get_Impl();
    // public System.Void .ctor(System.String fileName)
    // Offset: 0x147461C
    static X509Certificate2* New_ctor(::Il2CppString* fileName);
    // public System.Security.Cryptography.X509Certificates.X509ExtensionCollection get_Extensions()
    // Offset: 0x14748BC
    System::Security::Cryptography::X509Certificates::X509ExtensionCollection* get_Extensions();
    // public System.Security.Cryptography.X509Certificates.X500DistinguishedName get_IssuerName()
    // Offset: 0x14748E4
    System::Security::Cryptography::X509Certificates::X500DistinguishedName* get_IssuerName();
    // public System.DateTime get_NotAfter()
    // Offset: 0x147490C
    System::DateTime get_NotAfter();
    // public System.DateTime get_NotBefore()
    // Offset: 0x1474950
    System::DateTime get_NotBefore();
    // public System.Security.Cryptography.AsymmetricAlgorithm get_PrivateKey()
    // Offset: 0x1474994
    System::Security::Cryptography::AsymmetricAlgorithm* get_PrivateKey();
    // public System.Void set_PrivateKey(System.Security.Cryptography.AsymmetricAlgorithm value)
    // Offset: 0x14749BC
    void set_PrivateKey(System::Security::Cryptography::AsymmetricAlgorithm* value);
    // public System.Security.Cryptography.X509Certificates.PublicKey get_PublicKey()
    // Offset: 0x14749F4
    System::Security::Cryptography::X509Certificates::PublicKey* get_PublicKey();
    // public System.String get_SerialNumber()
    // Offset: 0x1474A1C
    ::Il2CppString* get_SerialNumber();
    // public System.Security.Cryptography.Oid get_SignatureAlgorithm()
    // Offset: 0x1474A28
    System::Security::Cryptography::Oid* get_SignatureAlgorithm();
    // public System.Security.Cryptography.X509Certificates.X500DistinguishedName get_SubjectName()
    // Offset: 0x1474A50
    System::Security::Cryptography::X509Certificates::X500DistinguishedName* get_SubjectName();
    // public System.String get_Thumbprint()
    // Offset: 0x1474A78
    ::Il2CppString* get_Thumbprint();
    // public System.Int32 get_Version()
    // Offset: 0x1474A84
    int get_Version();
    // public System.String GetNameInfo(System.Security.Cryptography.X509Certificates.X509NameType nameType, System.Boolean forIssuer)
    // Offset: 0x1474AAC
    ::Il2CppString* GetNameInfo(System::Security::Cryptography::X509Certificates::X509NameType nameType, bool forIssuer);
    // static private System.Void AppendBuffer(System.Text.StringBuilder sb, System.Byte[] buffer)
    // Offset: 0x1475154
    static void AppendBuffer(System::Text::StringBuilder* sb, ::Array<uint8_t>* buffer);
    // public System.Boolean Verify()
    // Offset: 0x147524C
    bool Verify();
    // Mono.Security.X509.X509Certificate get_MonoCertificate()
    // Offset: 0x1475284
    Mono::Security::X509::X509Certificate* get_MonoCertificate();
    // static private System.Void .cctor()
    // Offset: 0x1475368
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1474520
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate
    // Base method: System.Void X509Certificate::.ctor()
    // Base method: System.Void Object::.ctor()
    static X509Certificate2* New_ctor();
    // public System.Void .ctor(System.Byte[] rawData)
    // Offset: 0x1474588
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate
    // Base method: System.Void X509Certificate::.ctor(System.Byte[] rawData)
    static X509Certificate2* New_ctor(::Array<uint8_t>* rawData);
    // public System.Void .ctor(System.Security.Cryptography.X509Certificates.X509Certificate certificate)
    // Offset: 0x14746B8
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate
    // Base method: System.Void X509Certificate::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate certificate)
    static X509Certificate2* New_ctor(System::Security::Cryptography::X509Certificates::X509Certificate* certificate);
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x147482C
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate
    // Base method: System.Void X509Certificate::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    static X509Certificate2* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Void Import(System.Byte[] rawData, System.String password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags keyStorageFlags)
    // Offset: 0x1474AEC
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate
    // Base method: System.Void X509Certificate::Import(System.Byte[] rawData, System.String password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags keyStorageFlags)
    void Import(::Array<uint8_t>* rawData, ::Il2CppString* password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);
    // public override System.Void Import(System.String fileName, System.String password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags keyStorageFlags)
    // Offset: 0x1474BD0
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate
    // Base method: System.Void X509Certificate::Import(System.String fileName, System.String password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags keyStorageFlags)
    void Import(::Il2CppString* fileName, ::Il2CppString* password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);
    // public override System.Void Reset()
    // Offset: 0x1474C24
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate
    // Base method: System.Void X509Certificate::Reset()
    void Reset();
    // public override System.String ToString()
    // Offset: 0x1474C8C
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate
    // Base method: System.String X509Certificate::ToString()
    ::Il2CppString* ToString();
    // public override System.String ToString(System.Boolean verbose)
    // Offset: 0x1474D00
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate
    // Base method: System.String X509Certificate::ToString(System.Boolean verbose)
    ::Il2CppString* ToString(bool verbose);
  }; // System.Security.Cryptography.X509Certificates.X509Certificate2
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509Certificate2*, "System.Security.Cryptography.X509Certificates", "X509Certificate2");
#pragma pack(pop)