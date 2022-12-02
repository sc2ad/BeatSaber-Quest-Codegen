// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
}
// Completed forward declares
// Type namespace: Mono.Security.Authenticode
namespace Mono::Security::Authenticode {
  // Forward declaring type: PrivateKey
  class PrivateKey;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Authenticode::PrivateKey);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Authenticode::PrivateKey*, "Mono.Security.Authenticode", "PrivateKey");
// Type namespace: Mono.Security.Authenticode
namespace Mono::Security::Authenticode {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Authenticode.PrivateKey
  // [TokenAttribute] Offset: FFFFFFFF
  class PrivateKey : public ::Il2CppObject {
    public:
    public:
    // private System.Boolean encrypted
    // Size: 0x1
    // Offset: 0x10
    bool encrypted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: encrypted and: rsa
    char __padding0[0x7] = {};
    // private System.Security.Cryptography.RSA rsa
    // Size: 0x8
    // Offset: 0x18
    ::System::Security::Cryptography::RSA* rsa;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::RSA*) == 0x8);
    // private System.Boolean weak
    // Size: 0x1
    // Offset: 0x20
    bool weak;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: weak and: keyType
    char __padding2[0x3] = {};
    // private System.Int32 keyType
    // Size: 0x4
    // Offset: 0x24
    int keyType;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Boolean encrypted
    [[deprecated("Use field access instead!")]] bool& dyn_encrypted();
    // Get instance field reference: private System.Security.Cryptography.RSA rsa
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::RSA*& dyn_rsa();
    // Get instance field reference: private System.Boolean weak
    [[deprecated("Use field access instead!")]] bool& dyn_weak();
    // Get instance field reference: private System.Int32 keyType
    [[deprecated("Use field access instead!")]] int& dyn_keyType();
    // public System.Security.Cryptography.RSA get_RSA()
    // Offset: 0x23AEB74
    ::System::Security::Cryptography::RSA* get_RSA();
    // public System.Void .ctor(System.Byte[] data, System.String password)
    // Offset: 0x23AE604
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrivateKey* New_ctor(::ArrayW<uint8_t> data, ::StringW password) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Authenticode::PrivateKey::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrivateKey*, creationType>(data, password)));
    }
    // private System.Byte[] DeriveKey(System.Byte[] salt, System.String password)
    // Offset: 0x23AEB7C
    ::ArrayW<uint8_t> DeriveKey(::ArrayW<uint8_t> salt, ::StringW password);
    // private System.Boolean Decode(System.Byte[] pvk, System.String password)
    // Offset: 0x23AE6F4
    bool Decode(::ArrayW<uint8_t> pvk, ::StringW password);
    // static public Mono.Security.Authenticode.PrivateKey CreateFromFile(System.String filename)
    // Offset: 0x23AED64
    static ::Mono::Security::Authenticode::PrivateKey* CreateFromFile(::StringW filename);
    // static public Mono.Security.Authenticode.PrivateKey CreateFromFile(System.String filename, System.String password)
    // Offset: 0x23AED6C
    static ::Mono::Security::Authenticode::PrivateKey* CreateFromFile(::StringW filename, ::StringW password);
  }; // Mono.Security.Authenticode.PrivateKey
  #pragma pack(pop)
  static check_size<sizeof(PrivateKey), 36 + sizeof(int)> __Mono_Security_Authenticode_PrivateKeySizeCheck;
  static_assert(sizeof(PrivateKey) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Authenticode::PrivateKey::get_RSA
// Il2CppName: get_RSA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSA* (Mono::Security::Authenticode::PrivateKey::*)()>(&Mono::Security::Authenticode::PrivateKey::get_RSA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Authenticode::PrivateKey*), "get_RSA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Authenticode::PrivateKey::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Authenticode::PrivateKey::DeriveKey
// Il2CppName: DeriveKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Authenticode::PrivateKey::*)(::ArrayW<uint8_t>, ::StringW)>(&Mono::Security::Authenticode::PrivateKey::DeriveKey)> {
  static const MethodInfo* get() {
    static auto* salt = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Authenticode::PrivateKey*), "DeriveKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{salt, password});
  }
};
// Writing MetadataGetter for method: Mono::Security::Authenticode::PrivateKey::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Authenticode::PrivateKey::*)(::ArrayW<uint8_t>, ::StringW)>(&Mono::Security::Authenticode::PrivateKey::Decode)> {
  static const MethodInfo* get() {
    static auto* pvk = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Authenticode::PrivateKey*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pvk, password});
  }
};
// Writing MetadataGetter for method: Mono::Security::Authenticode::PrivateKey::CreateFromFile
// Il2CppName: CreateFromFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Authenticode::PrivateKey* (*)(::StringW)>(&Mono::Security::Authenticode::PrivateKey::CreateFromFile)> {
  static const MethodInfo* get() {
    static auto* filename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Authenticode::PrivateKey*), "CreateFromFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filename});
  }
};
// Writing MetadataGetter for method: Mono::Security::Authenticode::PrivateKey::CreateFromFile
// Il2CppName: CreateFromFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Authenticode::PrivateKey* (*)(::StringW, ::StringW)>(&Mono::Security::Authenticode::PrivateKey::CreateFromFile)> {
  static const MethodInfo* get() {
    static auto* filename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Authenticode::PrivateKey*), "CreateFromFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filename, password});
  }
};
