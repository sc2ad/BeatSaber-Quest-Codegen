// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: PlayerPrefs
  class PlayerPrefs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::PlayerPrefs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerPrefs*, "UnityEngine", "PlayerPrefs");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.PlayerPrefs
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 106D5C0
  class PlayerPrefs : public ::Il2CppObject {
    public:
    // static private System.Boolean TrySetInt(System.String key, System.Int32 value)
    // Offset: 0x216FF98
    static bool TrySetInt(::StringW key, int value);
    // static private System.Boolean TrySetSetString(System.String key, System.String value)
    // Offset: 0x216FFE8
    static bool TrySetSetString(::StringW key, ::StringW value);
    // static public System.Void SetInt(System.String key, System.Int32 value)
    // Offset: 0x2170038
    static void SetInt(::StringW key, int value);
    // static public System.Int32 GetInt(System.String key, System.Int32 defaultValue)
    // Offset: 0x2170164
    static int GetInt(::StringW key, int defaultValue);
    // static public System.Int32 GetInt(System.String key)
    // Offset: 0x21701B4
    static int GetInt(::StringW key);
    // static public System.Void SetString(System.String key, System.String value)
    // Offset: 0x21701F8
    static void SetString(::StringW key, ::StringW value);
    // static public System.String GetString(System.String key, System.String defaultValue)
    // Offset: 0x21702AC
    static ::StringW GetString(::StringW key, ::StringW defaultValue);
    // static public System.String GetString(System.String key)
    // Offset: 0x21702FC
    static ::StringW GetString(::StringW key);
    // static public System.Void DeleteAll()
    // Offset: 0x2170378
    static void DeleteAll();
  }; // UnityEngine.PlayerPrefs
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::TrySetInt
// Il2CppName: TrySetInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, int)>(&UnityEngine::PlayerPrefs::TrySetInt)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "TrySetInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::TrySetSetString
// Il2CppName: TrySetSetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW)>(&UnityEngine::PlayerPrefs::TrySetSetString)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "TrySetSetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::SetInt
// Il2CppName: SetInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, int)>(&UnityEngine::PlayerPrefs::SetInt)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "SetInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::GetInt
// Il2CppName: GetInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW, int)>(&UnityEngine::PlayerPrefs::GetInt)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* defaultValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "GetInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, defaultValue});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::GetInt
// Il2CppName: GetInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW)>(&UnityEngine::PlayerPrefs::GetInt)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "GetInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::SetString
// Il2CppName: SetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&UnityEngine::PlayerPrefs::SetString)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "SetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW)>(&UnityEngine::PlayerPrefs::GetString)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* defaultValue = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, defaultValue});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&UnityEngine::PlayerPrefs::GetString)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::DeleteAll
// Il2CppName: DeleteAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::PlayerPrefs::DeleteAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "DeleteAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
