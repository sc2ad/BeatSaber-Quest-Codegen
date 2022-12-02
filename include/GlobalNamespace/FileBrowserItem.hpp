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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FileBrowserItem
  class FileBrowserItem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FileBrowserItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileBrowserItem*, "", "FileBrowserItem");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: FileBrowserItem
  // [TokenAttribute] Offset: FFFFFFFF
  class FileBrowserItem : public ::Il2CppObject {
    public:
    public:
    // private System.String <displayName>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW displayName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <fullPath>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW fullPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean <isDirectory>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool isDirectory;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.String <displayName>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$displayName$k__BackingField();
    // Get instance field reference: private System.String <fullPath>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$fullPath$k__BackingField();
    // Get instance field reference: private System.Boolean <isDirectory>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$isDirectory$k__BackingField();
    // public System.String get_displayName()
    // Offset: 0x138F2E0
    ::StringW get_displayName();
    // private System.Void set_displayName(System.String value)
    // Offset: 0x138F2E8
    void set_displayName(::StringW value);
    // public System.String get_fullPath()
    // Offset: 0x138F2F0
    ::StringW get_fullPath();
    // private System.Void set_fullPath(System.String value)
    // Offset: 0x138F2F8
    void set_fullPath(::StringW value);
    // public System.Boolean get_isDirectory()
    // Offset: 0x138F300
    bool get_isDirectory();
    // private System.Void set_isDirectory(System.Boolean value)
    // Offset: 0x138F308
    void set_isDirectory(bool value);
    // public System.Void .ctor(System.String displayName, System.String fullPath, System.Boolean isDirectory)
    // Offset: 0x138F314
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileBrowserItem* New_ctor(::StringW displayName, ::StringW fullPath, bool isDirectory) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FileBrowserItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileBrowserItem*, creationType>(displayName, fullPath, isDirectory)));
    }
  }; // FileBrowserItem
  #pragma pack(pop)
  static check_size<sizeof(FileBrowserItem), 32 + sizeof(bool)> __GlobalNamespace_FileBrowserItemSizeCheck;
  static_assert(sizeof(FileBrowserItem) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserItem::get_displayName
// Il2CppName: get_displayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::FileBrowserItem::*)()>(&GlobalNamespace::FileBrowserItem::get_displayName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserItem*), "get_displayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserItem::set_displayName
// Il2CppName: set_displayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FileBrowserItem::*)(::StringW)>(&GlobalNamespace::FileBrowserItem::set_displayName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserItem*), "set_displayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserItem::get_fullPath
// Il2CppName: get_fullPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::FileBrowserItem::*)()>(&GlobalNamespace::FileBrowserItem::get_fullPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserItem*), "get_fullPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserItem::set_fullPath
// Il2CppName: set_fullPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FileBrowserItem::*)(::StringW)>(&GlobalNamespace::FileBrowserItem::set_fullPath)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserItem*), "set_fullPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserItem::get_isDirectory
// Il2CppName: get_isDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::FileBrowserItem::*)()>(&GlobalNamespace::FileBrowserItem::get_isDirectory)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserItem*), "get_isDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserItem::set_isDirectory
// Il2CppName: set_isDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FileBrowserItem::*)(bool)>(&GlobalNamespace::FileBrowserItem::set_isDirectory)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserItem*), "set_isDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
