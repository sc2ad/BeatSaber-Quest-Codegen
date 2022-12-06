// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::AccessControl
namespace System::Security::AccessControl {
  // Forward declaring type: FileSystemSecurity
  class FileSystemSecurity;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FileSystemHelper
  class FileSystemHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FileSystemHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileSystemHelper*, "", "FileSystemHelper");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: FileSystemHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class FileSystemHelper : public ::Il2CppObject {
    public:
    // static public System.String FindFirstExistedParentPath(System.String path)
    // Offset: 0x1390F30
    static ::StringW FindFirstExistedParentPath(::StringW path);
    // static private System.Boolean HasWritePermission(System.Security.AccessControl.FileSystemSecurity accessControlList)
    // Offset: 0x1390FD0
    static bool HasWritePermission(::System::Security::AccessControl::FileSystemSecurity* accessControlList);
    // static public System.Boolean HasWritePermissionOnDirectory(System.String path)
    // Offset: 0x13912B0
    static bool HasWritePermissionOnDirectory(::StringW path);
    // static public System.Boolean HasWritePermissionOnFile(System.String path)
    // Offset: 0x13912C8
    static bool HasWritePermissionOnFile(::StringW path);
    // static public System.Boolean IsFileWritable(System.String path)
    // Offset: 0x13912E0
    static bool IsFileWritable(::StringW path);
  }; // FileSystemHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FileSystemHelper::FindFirstExistedParentPath
// Il2CppName: FindFirstExistedParentPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&GlobalNamespace::FileSystemHelper::FindFirstExistedParentPath)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileSystemHelper*), "FindFirstExistedParentPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileSystemHelper::HasWritePermission
// Il2CppName: HasWritePermission
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Security::AccessControl::FileSystemSecurity*)>(&GlobalNamespace::FileSystemHelper::HasWritePermission)> {
  static const MethodInfo* get() {
    static auto* accessControlList = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "FileSystemSecurity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileSystemHelper*), "HasWritePermission", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{accessControlList});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileSystemHelper::HasWritePermissionOnDirectory
// Il2CppName: HasWritePermissionOnDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&GlobalNamespace::FileSystemHelper::HasWritePermissionOnDirectory)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileSystemHelper*), "HasWritePermissionOnDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileSystemHelper::HasWritePermissionOnFile
// Il2CppName: HasWritePermissionOnFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&GlobalNamespace::FileSystemHelper::HasWritePermissionOnFile)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileSystemHelper*), "HasWritePermissionOnFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileSystemHelper::IsFileWritable
// Il2CppName: IsFileWritable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&GlobalNamespace::FileSystemHelper::IsFileWritable)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileSystemHelper*), "IsFileWritable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
