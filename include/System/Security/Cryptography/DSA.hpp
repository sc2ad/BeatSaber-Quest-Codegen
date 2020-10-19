// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.AsymmetricAlgorithm
#include "System/Security/Cryptography/AsymmetricAlgorithm.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: DSAParameters
  struct DSAParameters;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Autogenerated type: System.Security.Cryptography.DSA
  class DSA : public System::Security::Cryptography::AsymmetricAlgorithm {
    public:
    // static public System.Security.Cryptography.DSA Create()
    // Offset: 0x17750F4
    static System::Security::Cryptography::DSA* Create();
    // public System.Boolean VerifySignature(System.Byte[] rgbHash, System.Byte[] rgbSignature)
    // Offset: 0xFFFFFFFF
    bool VerifySignature(::Array<uint8_t>* rgbHash, ::Array<uint8_t>* rgbSignature);
    // public System.Security.Cryptography.DSAParameters ExportParameters(System.Boolean includePrivateParameters)
    // Offset: 0xFFFFFFFF
    System::Security::Cryptography::DSAParameters ExportParameters(bool includePrivateParameters);
    // public System.Void ImportParameters(System.Security.Cryptography.DSAParameters parameters)
    // Offset: 0xFFFFFFFF
    void ImportParameters(System::Security::Cryptography::DSAParameters parameters);
    // protected System.Void .ctor()
    // Offset: 0x17750EC
    // Implemented from: System.Security.Cryptography.AsymmetricAlgorithm
    // Base method: System.Void AsymmetricAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    static DSA* New_ctor();
    // public override System.Void FromXmlString(System.String xmlString)
    // Offset: 0x17751A0
    // Implemented from: System.Security.Cryptography.AsymmetricAlgorithm
    // Base method: System.Void AsymmetricAlgorithm::FromXmlString(System.String xmlString)
    void FromXmlString(::Il2CppString* xmlString);
    // public override System.String ToXmlString(System.Boolean includePrivateParameters)
    // Offset: 0x1775744
    // Implemented from: System.Security.Cryptography.AsymmetricAlgorithm
    // Base method: System.String AsymmetricAlgorithm::ToXmlString(System.Boolean includePrivateParameters)
    ::Il2CppString* ToXmlString(bool includePrivateParameters);
  }; // System.Security.Cryptography.DSA
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::DSA*, "System.Security.Cryptography", "DSA");
#pragma pack(pop)