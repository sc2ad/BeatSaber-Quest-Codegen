// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AuthenticationToken
#include "GlobalNamespace/AuthenticationToken.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NetworkUtility
  class NetworkUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NetworkUtility);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkUtility*, "", "NetworkUtility");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NetworkUtility
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkUtility : public ::Il2CppObject {
    public:
    // Get static field: static private System.Byte[] _nameEncryptionKey
    static ::ArrayW<uint8_t> _get__nameEncryptionKey();
    // Set static field: static private System.Byte[] _nameEncryptionKey
    static void _set__nameEncryptionKey(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] _nameEncryptionIv
    static ::ArrayW<uint8_t> _get__nameEncryptionIv();
    // Set static field: static private System.Byte[] _nameEncryptionIv
    static void _set__nameEncryptionIv(::ArrayW<uint8_t> value);
    // static private System.Void .cctor()
    // Offset: 0x17158A8
    static void _cctor();
    // static private System.Void Init()
    // Offset: 0x17158AC
    static void Init();
    // static public System.String GetHashedUserId(System.String userId, AuthenticationToken/Platform platform)
    // Offset: 0x1715978
    static ::StringW GetHashedUserId(::StringW userId, ::GlobalNamespace::AuthenticationToken::Platform platform);
    // static public System.String EncryptName(System.String text)
    // Offset: 0x1715BC4
    static ::StringW EncryptName(::StringW text);
    // static public System.String DecryptName(System.String text)
    // Offset: 0x1715EE0
    static ::StringW DecryptName(::StringW text);
    // static public System.String GenerateId()
    // Offset: 0x1716200
    static ::StringW GenerateId();
    // static public System.String GetHashBase64(System.String input)
    // Offset: 0x1715A30
    static ::StringW GetHashBase64(::StringW input);
  }; // NetworkUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NetworkUtility::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::NetworkUtility::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkUtility*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkUtility::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::NetworkUtility::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkUtility*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkUtility::GetHashedUserId
// Il2CppName: GetHashedUserId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::GlobalNamespace::AuthenticationToken::Platform)>(&GlobalNamespace::NetworkUtility::GetHashedUserId)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* platform = &::il2cpp_utils::GetClassFromName("", "AuthenticationToken/Platform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkUtility*), "GetHashedUserId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, platform});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkUtility::EncryptName
// Il2CppName: EncryptName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&GlobalNamespace::NetworkUtility::EncryptName)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkUtility*), "EncryptName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkUtility::DecryptName
// Il2CppName: DecryptName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&GlobalNamespace::NetworkUtility::DecryptName)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkUtility*), "DecryptName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkUtility::GenerateId
// Il2CppName: GenerateId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&GlobalNamespace::NetworkUtility::GenerateId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkUtility*), "GenerateId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkUtility::GetHashBase64
// Il2CppName: GetHashBase64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&GlobalNamespace::NetworkUtility::GetHashBase64)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkUtility*), "GetHashBase64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
