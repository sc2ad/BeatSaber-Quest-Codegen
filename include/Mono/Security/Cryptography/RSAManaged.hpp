// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.RSA
#include "System/Security/Cryptography/RSA.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Cryptography
namespace Mono::Security::Cryptography {
}
// Forward declaring namespace: Mono::Math
namespace Mono::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RSAParameters
  struct RSAParameters;
}
// Completed forward declares
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Forward declaring type: RSAManaged
  class RSAManaged;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Cryptography::RSAManaged);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::RSAManaged*, "Mono.Security.Cryptography", "RSAManaged");
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.RSAManaged
  // [TokenAttribute] Offset: FFFFFFFF
  class RSAManaged : public ::System::Security::Cryptography::RSA {
    public:
    // Nested type: ::Mono::Security::Cryptography::RSAManaged::KeyGeneratedEventHandler
    class KeyGeneratedEventHandler;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Boolean isCRTpossible
    // Size: 0x1
    // Offset: 0x20
    bool isCRTpossible;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean keypairGenerated
    // Size: 0x1
    // Offset: 0x21
    bool keypairGenerated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_disposed
    // Size: 0x1
    // Offset: 0x22
    bool m_disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_disposed and: d
    char __padding2[0x5] = {};
    // private Mono.Math.BigInteger d
    // Size: 0x8
    // Offset: 0x28
    ::Mono::Math::BigInteger* d;
    // Field size check
    static_assert(sizeof(::Mono::Math::BigInteger*) == 0x8);
    // private Mono.Math.BigInteger p
    // Size: 0x8
    // Offset: 0x30
    ::Mono::Math::BigInteger* p;
    // Field size check
    static_assert(sizeof(::Mono::Math::BigInteger*) == 0x8);
    // private Mono.Math.BigInteger q
    // Size: 0x8
    // Offset: 0x38
    ::Mono::Math::BigInteger* q;
    // Field size check
    static_assert(sizeof(::Mono::Math::BigInteger*) == 0x8);
    // private Mono.Math.BigInteger dp
    // Size: 0x8
    // Offset: 0x40
    ::Mono::Math::BigInteger* dp;
    // Field size check
    static_assert(sizeof(::Mono::Math::BigInteger*) == 0x8);
    // private Mono.Math.BigInteger dq
    // Size: 0x8
    // Offset: 0x48
    ::Mono::Math::BigInteger* dq;
    // Field size check
    static_assert(sizeof(::Mono::Math::BigInteger*) == 0x8);
    // private Mono.Math.BigInteger qInv
    // Size: 0x8
    // Offset: 0x50
    ::Mono::Math::BigInteger* qInv;
    // Field size check
    static_assert(sizeof(::Mono::Math::BigInteger*) == 0x8);
    // private Mono.Math.BigInteger n
    // Size: 0x8
    // Offset: 0x58
    ::Mono::Math::BigInteger* n;
    // Field size check
    static_assert(sizeof(::Mono::Math::BigInteger*) == 0x8);
    // private Mono.Math.BigInteger e
    // Size: 0x8
    // Offset: 0x60
    ::Mono::Math::BigInteger* e;
    // Field size check
    static_assert(sizeof(::Mono::Math::BigInteger*) == 0x8);
    // private Mono.Security.Cryptography.RSAManaged/Mono.Security.Cryptography.KeyGeneratedEventHandler KeyGenerated
    // Size: 0x8
    // Offset: 0x68
    ::Mono::Security::Cryptography::RSAManaged::KeyGeneratedEventHandler* KeyGenerated;
    // Field size check
    static_assert(sizeof(::Mono::Security::Cryptography::RSAManaged::KeyGeneratedEventHandler*) == 0x8);
    public:
    // Get instance field reference: private System.Boolean isCRTpossible
    bool& dyn_isCRTpossible();
    // Get instance field reference: private System.Boolean keypairGenerated
    bool& dyn_keypairGenerated();
    // Get instance field reference: private System.Boolean m_disposed
    bool& dyn_m_disposed();
    // Get instance field reference: private Mono.Math.BigInteger d
    ::Mono::Math::BigInteger*& dyn_d();
    // Get instance field reference: private Mono.Math.BigInteger p
    ::Mono::Math::BigInteger*& dyn_p();
    // Get instance field reference: private Mono.Math.BigInteger q
    ::Mono::Math::BigInteger*& dyn_q();
    // Get instance field reference: private Mono.Math.BigInteger dp
    ::Mono::Math::BigInteger*& dyn_dp();
    // Get instance field reference: private Mono.Math.BigInteger dq
    ::Mono::Math::BigInteger*& dyn_dq();
    // Get instance field reference: private Mono.Math.BigInteger qInv
    ::Mono::Math::BigInteger*& dyn_qInv();
    // Get instance field reference: private Mono.Math.BigInteger n
    ::Mono::Math::BigInteger*& dyn_n();
    // Get instance field reference: private Mono.Math.BigInteger e
    ::Mono::Math::BigInteger*& dyn_e();
    // Get instance field reference: private Mono.Security.Cryptography.RSAManaged/Mono.Security.Cryptography.KeyGeneratedEventHandler KeyGenerated
    ::Mono::Security::Cryptography::RSAManaged::KeyGeneratedEventHandler*& dyn_KeyGenerated();
    // public System.Boolean get_PublicOnly()
    // Offset: 0x22CC5AC
    bool get_PublicOnly();
    // private System.Void GenerateKeyPair()
    // Offset: 0x22CBF1C
    void GenerateKeyPair();
    // private System.Byte[] GetPaddedValue(Mono.Math.BigInteger value, System.Int32 length)
    // Offset: 0x22CC9B0
    ::ArrayW<uint8_t> GetPaddedValue(::Mono::Math::BigInteger* value, int length);
    // public override System.Security.Cryptography.RSAParameters ExportParameters(System.Boolean includePrivateParameters)
    // Offset: 0x22CC670
    // Implemented from: System.Security.Cryptography.RSA
    // Base method: System.Security.Cryptography.RSAParameters RSA::ExportParameters(System.Boolean includePrivateParameters)
    ::System::Security::Cryptography::RSAParameters ExportParameters(bool includePrivateParameters);
    // public override System.Void ImportParameters(System.Security.Cryptography.RSAParameters parameters)
    // Offset: 0x22CCA70
    // Implemented from: System.Security.Cryptography.RSA
    // Base method: System.Void RSA::ImportParameters(System.Security.Cryptography.RSAParameters parameters)
    void ImportParameters(::System::Security::Cryptography::RSAParameters parameters);
  }; // Mono.Security.Cryptography.RSAManaged
  #pragma pack(pop)
  static check_size<sizeof(RSAManaged), 104 + sizeof(::Mono::Security::Cryptography::RSAManaged::KeyGeneratedEventHandler*)> __Mono_Security_Cryptography_RSAManagedSizeCheck;
  static_assert(sizeof(RSAManaged) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Cryptography::RSAManaged::get_PublicOnly
// Il2CppName: get_PublicOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Cryptography::RSAManaged::*)()>(&Mono::Security::Cryptography::RSAManaged::get_PublicOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::RSAManaged*), "get_PublicOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::RSAManaged::GenerateKeyPair
// Il2CppName: GenerateKeyPair
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::RSAManaged::*)()>(&Mono::Security::Cryptography::RSAManaged::GenerateKeyPair)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::RSAManaged*), "GenerateKeyPair", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::RSAManaged::GetPaddedValue
// Il2CppName: GetPaddedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Cryptography::RSAManaged::*)(::Mono::Math::BigInteger*, int)>(&Mono::Security::Cryptography::RSAManaged::GetPaddedValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::RSAManaged*), "GetPaddedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, length});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::RSAManaged::ExportParameters
// Il2CppName: ExportParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSAParameters (Mono::Security::Cryptography::RSAManaged::*)(bool)>(&Mono::Security::Cryptography::RSAManaged::ExportParameters)> {
  static const MethodInfo* get() {
    static auto* includePrivateParameters = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::RSAManaged*), "ExportParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{includePrivateParameters});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::RSAManaged::ImportParameters
// Il2CppName: ImportParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::RSAManaged::*)(::System::Security::Cryptography::RSAParameters)>(&Mono::Security::Cryptography::RSAManaged::ImportParameters)> {
  static const MethodInfo* get() {
    static auto* parameters = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RSAParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::RSAManaged*), "ImportParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters});
  }
};
