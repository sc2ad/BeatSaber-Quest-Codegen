// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.Cryptography.PKCS8
#include "Mono/Security/Cryptography/PKCS8.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Cryptography::PKCS8::EncryptedPrivateKeyInfo);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::PKCS8::EncryptedPrivateKeyInfo*, "Mono.Security.Cryptography", "PKCS8/EncryptedPrivateKeyInfo");
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.PKCS8/Mono.Security.Cryptography.EncryptedPrivateKeyInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class PKCS8::EncryptedPrivateKeyInfo : public ::Il2CppObject {
    public:
    public:
    // private System.String _algorithm
    // Size: 0x8
    // Offset: 0x10
    ::StringW algorithm;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Byte[] _salt
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> salt;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 _iterations
    // Size: 0x4
    // Offset: 0x20
    int iterations;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: iterations and: data
    char __padding2[0x4] = {};
    // private System.Byte[] _data
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> data;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Get instance field reference: private System.String _algorithm
    [[deprecated("Use field access instead!")]] ::StringW& dyn__algorithm();
    // Get instance field reference: private System.Byte[] _salt
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__salt();
    // Get instance field reference: private System.Int32 _iterations
    [[deprecated("Use field access instead!")]] int& dyn__iterations();
    // Get instance field reference: private System.Byte[] _data
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__data();
    // public System.String get_Algorithm()
    // Offset: 0x23B2A3C
    ::StringW get_Algorithm();
    // public System.Byte[] get_EncryptedData()
    // Offset: 0x23B2A44
    ::ArrayW<uint8_t> get_EncryptedData();
    // public System.Byte[] get_Salt()
    // Offset: 0x23B2AC0
    ::ArrayW<uint8_t> get_Salt();
    // public System.Int32 get_IterationCount()
    // Offset: 0x23B2B84
    int get_IterationCount();
    // public System.Void .ctor()
    // Offset: 0x23B2784
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PKCS8::EncryptedPrivateKeyInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Cryptography::PKCS8::EncryptedPrivateKeyInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PKCS8::EncryptedPrivateKeyInfo*, creationType>()));
    }
    // public System.Void .ctor(System.Byte[] data)
    // Offset: 0x23B278C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PKCS8::EncryptedPrivateKeyInfo* New_ctor(::ArrayW<uint8_t> data) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Cryptography::PKCS8::EncryptedPrivateKeyInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PKCS8::EncryptedPrivateKeyInfo*, creationType>(data)));
    }
    // private System.Void Decode(System.Byte[] data)
    // Offset: 0x23B27BC
    void Decode(::ArrayW<uint8_t> data);
  }; // Mono.Security.Cryptography.PKCS8/Mono.Security.Cryptography.EncryptedPrivateKeyInfo
  #pragma pack(pop)
  static check_size<sizeof(PKCS8::EncryptedPrivateKeyInfo), 40 + sizeof(::ArrayW<uint8_t>)> __Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfoSizeCheck;
  static_assert(sizeof(PKCS8::EncryptedPrivateKeyInfo) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS8::EncryptedPrivateKeyInfo::get_Algorithm
// Il2CppName: get_Algorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Security::Cryptography::PKCS8::EncryptedPrivateKeyInfo::*)()>(&Mono::Security::Cryptography::PKCS8::EncryptedPrivateKeyInfo::get_Algorithm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS8::EncryptedPrivateKeyInfo*), "get_Algorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS8::EncryptedPrivateKeyInfo::get_EncryptedData
// Il2CppName: get_EncryptedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Cryptography::PKCS8::EncryptedPrivateKeyInfo::*)()>(&Mono::Security::Cryptography::PKCS8::EncryptedPrivateKeyInfo::get_EncryptedData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS8::EncryptedPrivateKeyInfo*), "get_EncryptedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS8::EncryptedPrivateKeyInfo::get_Salt
// Il2CppName: get_Salt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Cryptography::PKCS8::EncryptedPrivateKeyInfo::*)()>(&Mono::Security::Cryptography::PKCS8::EncryptedPrivateKeyInfo::get_Salt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS8::EncryptedPrivateKeyInfo*), "get_Salt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS8::EncryptedPrivateKeyInfo::get_IterationCount
// Il2CppName: get_IterationCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::Cryptography::PKCS8::EncryptedPrivateKeyInfo::*)()>(&Mono::Security::Cryptography::PKCS8::EncryptedPrivateKeyInfo::get_IterationCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS8::EncryptedPrivateKeyInfo*), "get_IterationCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS8::EncryptedPrivateKeyInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS8::EncryptedPrivateKeyInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS8::EncryptedPrivateKeyInfo::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::PKCS8::EncryptedPrivateKeyInfo::*)(::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::PKCS8::EncryptedPrivateKeyInfo::Decode)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS8::EncryptedPrivateKeyInfo*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
