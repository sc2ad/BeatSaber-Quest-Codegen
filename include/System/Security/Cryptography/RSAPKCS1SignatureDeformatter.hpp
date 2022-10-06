// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.AsymmetricSignatureDeformatter
#include "System/Security/Cryptography/AsymmetricSignatureDeformatter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RSA
  class RSA;
  // Forward declaring type: AsymmetricAlgorithm
  class AsymmetricAlgorithm;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RSAPKCS1SignatureDeformatter
  class RSAPKCS1SignatureDeformatter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::RSAPKCS1SignatureDeformatter);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*, "System.Security.Cryptography", "RSAPKCS1SignatureDeformatter");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.RSAPKCS1SignatureDeformatter
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1059148
  class RSAPKCS1SignatureDeformatter : public ::System::Security::Cryptography::AsymmetricSignatureDeformatter {
    public:
    public:
    // private System.Security.Cryptography.RSA rsa
    // Size: 0x8
    // Offset: 0x10
    ::System::Security::Cryptography::RSA* rsa;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::RSA*) == 0x8);
    // private System.String hashName
    // Size: 0x8
    // Offset: 0x18
    ::StringW hashName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.Security.Cryptography.RSA rsa
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::RSA*& dyn_rsa();
    // Get instance field reference: private System.String hashName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_hashName();
    // public System.Void .ctor(System.Security.Cryptography.AsymmetricAlgorithm key)
    // Offset: 0x24B9FEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RSAPKCS1SignatureDeformatter* New_ctor(::System::Security::Cryptography::AsymmetricAlgorithm* key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::RSAPKCS1SignatureDeformatter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RSAPKCS1SignatureDeformatter*, creationType>(key)));
    }
    // public System.Void .ctor()
    // Offset: 0x24B9FE4
    // Implemented from: System.Security.Cryptography.AsymmetricSignatureDeformatter
    // Base method: System.Void AsymmetricSignatureDeformatter::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RSAPKCS1SignatureDeformatter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::RSAPKCS1SignatureDeformatter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RSAPKCS1SignatureDeformatter*, creationType>()));
    }
    // public override System.Void SetHashAlgorithm(System.String strName)
    // Offset: 0x24BA024
    // Implemented from: System.Security.Cryptography.AsymmetricSignatureDeformatter
    // Base method: System.Void AsymmetricSignatureDeformatter::SetHashAlgorithm(System.String strName)
    void SetHashAlgorithm(::StringW strName);
    // public override System.Void SetKey(System.Security.Cryptography.AsymmetricAlgorithm key)
    // Offset: 0x24BA0B4
    // Implemented from: System.Security.Cryptography.AsymmetricSignatureDeformatter
    // Base method: System.Void AsymmetricSignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm key)
    void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* key);
    // public override System.Boolean VerifySignature(System.Byte[] rgbHash, System.Byte[] rgbSignature)
    // Offset: 0x24BA180
    // Implemented from: System.Security.Cryptography.AsymmetricSignatureDeformatter
    // Base method: System.Boolean AsymmetricSignatureDeformatter::VerifySignature(System.Byte[] rgbHash, System.Byte[] rgbSignature)
    bool VerifySignature(::ArrayW<uint8_t> rgbHash, ::ArrayW<uint8_t> rgbSignature);
  }; // System.Security.Cryptography.RSAPKCS1SignatureDeformatter
  #pragma pack(pop)
  static check_size<sizeof(RSAPKCS1SignatureDeformatter), 24 + sizeof(::StringW)> __System_Security_Cryptography_RSAPKCS1SignatureDeformatterSizeCheck;
  static_assert(sizeof(RSAPKCS1SignatureDeformatter) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::RSAPKCS1SignatureDeformatter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::RSAPKCS1SignatureDeformatter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::RSAPKCS1SignatureDeformatter::SetHashAlgorithm
// Il2CppName: SetHashAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RSAPKCS1SignatureDeformatter::*)(::StringW)>(&System::Security::Cryptography::RSAPKCS1SignatureDeformatter::SetHashAlgorithm)> {
  static const MethodInfo* get() {
    static auto* strName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSAPKCS1SignatureDeformatter*), "SetHashAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{strName});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSAPKCS1SignatureDeformatter::SetKey
// Il2CppName: SetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RSAPKCS1SignatureDeformatter::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&System::Security::Cryptography::RSAPKCS1SignatureDeformatter::SetKey)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "AsymmetricAlgorithm")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSAPKCS1SignatureDeformatter*), "SetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSAPKCS1SignatureDeformatter::VerifySignature
// Il2CppName: VerifySignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::RSAPKCS1SignatureDeformatter::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&System::Security::Cryptography::RSAPKCS1SignatureDeformatter::VerifySignature)> {
  static const MethodInfo* get() {
    static auto* rgbHash = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* rgbSignature = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSAPKCS1SignatureDeformatter*), "VerifySignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgbHash, rgbSignature});
  }
};
