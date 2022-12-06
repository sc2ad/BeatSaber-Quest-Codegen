// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.RSA
#include "System/Security/Cryptography/RSA.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Cryptography
namespace Mono::Security::Cryptography {
}
// Forward declaring namespace: Mono::Math
namespace Mono::Math {
  // Forward declaring type: BigInteger
  class BigInteger_;
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
  class RSAManaged_;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Cryptography::RSAManaged_);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::RSAManaged_*, "Mono.Security.Cryptography", "RSAManaged");
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.RSAManaged
  // [TokenAttribute] Offset: FFFFFFFF
  class RSAManaged_ : public ::System::Security::Cryptography::RSA {
    public:
    // Nested type: ::Mono::Security::Cryptography::RSAManaged_::KeyGeneratedEventHandler
    class KeyGeneratedEventHandler;
    public:
    // private System.Boolean isCRTpossible
    // Size: 0x1
    // Offset: 0x20
    bool isCRTpossible;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean keyBlinding
    // Size: 0x1
    // Offset: 0x21
    bool keyBlinding;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean keypairGenerated
    // Size: 0x1
    // Offset: 0x22
    bool keypairGenerated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_disposed
    // Size: 0x1
    // Offset: 0x23
    bool m_disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_disposed and: d
    char __padding3[0x4] = {};
    // private Mono.Math.BigInteger d
    // Size: 0x8
    // Offset: 0x28
    ::Mono::Math::BigInteger_* d;
    // Field size check
    static_assert(sizeof(::Mono::Math::BigInteger_*) == 0x8);
    // private Mono.Math.BigInteger p
    // Size: 0x8
    // Offset: 0x30
    ::Mono::Math::BigInteger_* p;
    // Field size check
    static_assert(sizeof(::Mono::Math::BigInteger_*) == 0x8);
    // private Mono.Math.BigInteger q
    // Size: 0x8
    // Offset: 0x38
    ::Mono::Math::BigInteger_* q;
    // Field size check
    static_assert(sizeof(::Mono::Math::BigInteger_*) == 0x8);
    // private Mono.Math.BigInteger dp
    // Size: 0x8
    // Offset: 0x40
    ::Mono::Math::BigInteger_* dp;
    // Field size check
    static_assert(sizeof(::Mono::Math::BigInteger_*) == 0x8);
    // private Mono.Math.BigInteger dq
    // Size: 0x8
    // Offset: 0x48
    ::Mono::Math::BigInteger_* dq;
    // Field size check
    static_assert(sizeof(::Mono::Math::BigInteger_*) == 0x8);
    // private Mono.Math.BigInteger qInv
    // Size: 0x8
    // Offset: 0x50
    ::Mono::Math::BigInteger_* qInv;
    // Field size check
    static_assert(sizeof(::Mono::Math::BigInteger_*) == 0x8);
    // private Mono.Math.BigInteger n
    // Size: 0x8
    // Offset: 0x58
    ::Mono::Math::BigInteger_* n;
    // Field size check
    static_assert(sizeof(::Mono::Math::BigInteger_*) == 0x8);
    // private Mono.Math.BigInteger e
    // Size: 0x8
    // Offset: 0x60
    ::Mono::Math::BigInteger_* e;
    // Field size check
    static_assert(sizeof(::Mono::Math::BigInteger_*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0x10736D8
    // private Mono.Security.Cryptography.RSAManaged/Mono.Security.Cryptography.KeyGeneratedEventHandler KeyGenerated
    // Size: 0x8
    // Offset: 0x68
    ::Mono::Security::Cryptography::RSAManaged_::KeyGeneratedEventHandler* KeyGenerated;
    // Field size check
    static_assert(sizeof(::Mono::Security::Cryptography::RSAManaged_::KeyGeneratedEventHandler*) == 0x8);
    public:
    // Get instance field reference: private System.Boolean isCRTpossible
    [[deprecated("Use field access instead!")]] bool& dyn_isCRTpossible();
    // Get instance field reference: private System.Boolean keyBlinding
    [[deprecated("Use field access instead!")]] bool& dyn_keyBlinding();
    // Get instance field reference: private System.Boolean keypairGenerated
    [[deprecated("Use field access instead!")]] bool& dyn_keypairGenerated();
    // Get instance field reference: private System.Boolean m_disposed
    [[deprecated("Use field access instead!")]] bool& dyn_m_disposed();
    // Get instance field reference: private Mono.Math.BigInteger d
    [[deprecated("Use field access instead!")]] ::Mono::Math::BigInteger_*& dyn_d();
    // Get instance field reference: private Mono.Math.BigInteger p
    [[deprecated("Use field access instead!")]] ::Mono::Math::BigInteger_*& dyn_p();
    // Get instance field reference: private Mono.Math.BigInteger q
    [[deprecated("Use field access instead!")]] ::Mono::Math::BigInteger_*& dyn_q();
    // Get instance field reference: private Mono.Math.BigInteger dp
    [[deprecated("Use field access instead!")]] ::Mono::Math::BigInteger_*& dyn_dp();
    // Get instance field reference: private Mono.Math.BigInteger dq
    [[deprecated("Use field access instead!")]] ::Mono::Math::BigInteger_*& dyn_dq();
    // Get instance field reference: private Mono.Math.BigInteger qInv
    [[deprecated("Use field access instead!")]] ::Mono::Math::BigInteger_*& dyn_qInv();
    // Get instance field reference: private Mono.Math.BigInteger n
    [[deprecated("Use field access instead!")]] ::Mono::Math::BigInteger_*& dyn_n();
    // Get instance field reference: private Mono.Math.BigInteger e
    [[deprecated("Use field access instead!")]] ::Mono::Math::BigInteger_*& dyn_e();
    // Get instance field reference: private Mono.Security.Cryptography.RSAManaged/Mono.Security.Cryptography.KeyGeneratedEventHandler KeyGenerated
    [[deprecated("Use field access instead!")]] ::Mono::Security::Cryptography::RSAManaged_::KeyGeneratedEventHandler*& dyn_KeyGenerated();
    // public System.Boolean get_PublicOnly()
    // Offset: 0x1FF68F0
    bool get_PublicOnly();
    // public System.Void add_KeyGenerated(Mono.Security.Cryptography.RSAManaged/Mono.Security.Cryptography.KeyGeneratedEventHandler value)
    // Offset: 0x1FF76A0
    void add_KeyGenerated(::Mono::Security::Cryptography::RSAManaged_::KeyGeneratedEventHandler* value);
    // public System.Void remove_KeyGenerated(Mono.Security.Cryptography.RSAManaged/Mono.Security.Cryptography.KeyGeneratedEventHandler value)
    // Offset: 0x1FF7744
    void remove_KeyGenerated(::Mono::Security::Cryptography::RSAManaged_::KeyGeneratedEventHandler* value);
    // public System.Void .ctor(System.Int32 keySize)
    // Offset: 0x1FF5FE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RSAManaged_* New_ctor(int keySize) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Cryptography::RSAManaged_::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RSAManaged_*, creationType>(keySize)));
    }
    // private System.Void GenerateKeyPair()
    // Offset: 0x1FF6148
    void GenerateKeyPair();
    // private System.Byte[] GetPaddedValue(Mono.Math.BigInteger value, System.Int32 length)
    // Offset: 0x1FF6AD8
    ::ArrayW<uint8_t> GetPaddedValue(::Mono::Math::BigInteger_* value, int length);
    // public override System.Int32 get_KeySize()
    // Offset: 0x1FF6824
    // Implemented from: System.Security.Cryptography.AsymmetricAlgorithm
    // Base method: System.Int32 AsymmetricAlgorithm::get_KeySize()
    int get_KeySize();
    // protected override System.Void Finalize()
    // Offset: 0x1FF60D4
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public override System.Byte[] EncryptValue(System.Byte[] rgb)
    // Offset: 0x1FF69BC
    // Implemented from: System.Security.Cryptography.RSA
    // Base method: System.Byte[] RSA::EncryptValue(System.Byte[] rgb)
    ::ArrayW<uint8_t> EncryptValue(::ArrayW<uint8_t> rgb);
    // public override System.Security.Cryptography.RSAParameters ExportParameters(System.Boolean includePrivateParameters)
    // Offset: 0x1FF6B9C
    // Implemented from: System.Security.Cryptography.RSA
    // Base method: System.Security.Cryptography.RSAParameters RSA::ExportParameters(System.Boolean includePrivateParameters)
    ::System::Security::Cryptography::RSAParameters ExportParameters(bool includePrivateParameters);
    // public override System.Void ImportParameters(System.Security.Cryptography.RSAParameters parameters)
    // Offset: 0x1FF6F0C
    // Implemented from: System.Security.Cryptography.RSA
    // Base method: System.Void RSA::ImportParameters(System.Security.Cryptography.RSAParameters parameters)
    void ImportParameters(::System::Security::Cryptography::RSAParameters parameters);
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1FF7414
    // Implemented from: System.Security.Cryptography.AsymmetricAlgorithm
    // Base method: System.Void AsymmetricAlgorithm::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.String ToXmlString(System.Boolean includePrivateParameters)
    // Offset: 0x1FF77E8
    // Implemented from: System.Security.Cryptography.RSA
    // Base method: System.String RSA::ToXmlString(System.Boolean includePrivateParameters)
    ::StringW ToXmlString(bool includePrivateParameters);
  }; // Mono.Security.Cryptography.RSAManaged
  #pragma pack(pop)
  static check_size<sizeof(RSAManaged_), 104 + sizeof(::Mono::Security::Cryptography::RSAManaged_::KeyGeneratedEventHandler*)> __Mono_Security_Cryptography_RSAManaged_SizeCheck;
  static_assert(sizeof(RSAManaged_) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Cryptography::RSAManaged_::get_PublicOnly
// Il2CppName: get_PublicOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Cryptography::RSAManaged_::*)()>(&Mono::Security::Cryptography::RSAManaged_::get_PublicOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::RSAManaged_*), "get_PublicOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::RSAManaged_::add_KeyGenerated
// Il2CppName: add_KeyGenerated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::RSAManaged_::*)(::Mono::Security::Cryptography::RSAManaged_::KeyGeneratedEventHandler*)>(&Mono::Security::Cryptography::RSAManaged_::add_KeyGenerated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Mono.Security.Cryptography", "RSAManaged/KeyGeneratedEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::RSAManaged_*), "add_KeyGenerated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::RSAManaged_::remove_KeyGenerated
// Il2CppName: remove_KeyGenerated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::RSAManaged_::*)(::Mono::Security::Cryptography::RSAManaged_::KeyGeneratedEventHandler*)>(&Mono::Security::Cryptography::RSAManaged_::remove_KeyGenerated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Mono.Security.Cryptography", "RSAManaged/KeyGeneratedEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::RSAManaged_*), "remove_KeyGenerated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::RSAManaged_::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Cryptography::RSAManaged_::GenerateKeyPair
// Il2CppName: GenerateKeyPair
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::RSAManaged_::*)()>(&Mono::Security::Cryptography::RSAManaged_::GenerateKeyPair)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::RSAManaged_*), "GenerateKeyPair", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::RSAManaged_::GetPaddedValue
// Il2CppName: GetPaddedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Cryptography::RSAManaged_::*)(::Mono::Math::BigInteger_*, int)>(&Mono::Security::Cryptography::RSAManaged_::GetPaddedValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::RSAManaged_*), "GetPaddedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, length});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::RSAManaged_::get_KeySize
// Il2CppName: get_KeySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::Cryptography::RSAManaged_::*)()>(&Mono::Security::Cryptography::RSAManaged_::get_KeySize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::RSAManaged_*), "get_KeySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::RSAManaged_::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::RSAManaged_::*)()>(&Mono::Security::Cryptography::RSAManaged_::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::RSAManaged_*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::RSAManaged_::EncryptValue
// Il2CppName: EncryptValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Cryptography::RSAManaged_::*)(::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::RSAManaged_::EncryptValue)> {
  static const MethodInfo* get() {
    static auto* rgb = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::RSAManaged_*), "EncryptValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgb});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::RSAManaged_::ExportParameters
// Il2CppName: ExportParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSAParameters (Mono::Security::Cryptography::RSAManaged_::*)(bool)>(&Mono::Security::Cryptography::RSAManaged_::ExportParameters)> {
  static const MethodInfo* get() {
    static auto* includePrivateParameters = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::RSAManaged_*), "ExportParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{includePrivateParameters});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::RSAManaged_::ImportParameters
// Il2CppName: ImportParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::RSAManaged_::*)(::System::Security::Cryptography::RSAParameters)>(&Mono::Security::Cryptography::RSAManaged_::ImportParameters)> {
  static const MethodInfo* get() {
    static auto* parameters = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RSAParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::RSAManaged_*), "ImportParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::RSAManaged_::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::RSAManaged_::*)(bool)>(&Mono::Security::Cryptography::RSAManaged_::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::RSAManaged_*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::RSAManaged_::ToXmlString
// Il2CppName: ToXmlString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Security::Cryptography::RSAManaged_::*)(bool)>(&Mono::Security::Cryptography::RSAManaged_::ToXmlString)> {
  static const MethodInfo* get() {
    static auto* includePrivateParameters = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::RSAManaged_*), "ToXmlString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{includePrivateParameters});
  }
};
