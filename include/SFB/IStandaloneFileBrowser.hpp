// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SFB.ExtensionFilter
#include "SFB/ExtensionFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: SFB
namespace SFB {
  // Forward declaring type: IStandaloneFileBrowser
  class IStandaloneFileBrowser;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::SFB::IStandaloneFileBrowser);
DEFINE_IL2CPP_ARG_TYPE(::SFB::IStandaloneFileBrowser*, "SFB", "IStandaloneFileBrowser");
// Type namespace: SFB
namespace SFB {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SFB.IStandaloneFileBrowser
  // [TokenAttribute] Offset: FFFFFFFF
  class IStandaloneFileBrowser {
    public:
    // public System.String[] OpenFilePanel(System.String title, System.String directory, SFB.ExtensionFilter[] extensions, System.Boolean multiselect)
    // Offset: 0xFFFFFFFF
    ::ArrayW<::StringW> OpenFilePanel(::StringW title, ::StringW directory, ::ArrayW<::SFB::ExtensionFilter> extensions, bool multiselect);
    // public System.String[] OpenFolderPanel(System.String title, System.String directory, System.Boolean multiselect)
    // Offset: 0xFFFFFFFF
    ::ArrayW<::StringW> OpenFolderPanel(::StringW title, ::StringW directory, bool multiselect);
    // public System.String SaveFilePanel(System.String title, System.String directory, System.String defaultName, SFB.ExtensionFilter[] extensions)
    // Offset: 0xFFFFFFFF
    ::StringW SaveFilePanel(::StringW title, ::StringW directory, ::StringW defaultName, ::ArrayW<::SFB::ExtensionFilter> extensions);
    // public System.Void OpenFilePanelAsync(System.String title, System.String directory, SFB.ExtensionFilter[] extensions, System.Boolean multiselect, System.Action`1<System.String[]> cb)
    // Offset: 0xFFFFFFFF
    void OpenFilePanelAsync(::StringW title, ::StringW directory, ::ArrayW<::SFB::ExtensionFilter> extensions, bool multiselect, ::System::Action_1<::ArrayW<::StringW>>* cb);
    // public System.Void OpenFolderPanelAsync(System.String title, System.String directory, System.Boolean multiselect, System.Action`1<System.String[]> cb)
    // Offset: 0xFFFFFFFF
    void OpenFolderPanelAsync(::StringW title, ::StringW directory, bool multiselect, ::System::Action_1<::ArrayW<::StringW>>* cb);
    // public System.Void SaveFilePanelAsync(System.String title, System.String directory, System.String defaultName, SFB.ExtensionFilter[] extensions, System.Action`1<System.String> cb)
    // Offset: 0xFFFFFFFF
    void SaveFilePanelAsync(::StringW title, ::StringW directory, ::StringW defaultName, ::ArrayW<::SFB::ExtensionFilter> extensions, ::System::Action_1<::StringW>* cb);
  }; // SFB.IStandaloneFileBrowser
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: SFB::IStandaloneFileBrowser::OpenFilePanel
// Il2CppName: OpenFilePanel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (SFB::IStandaloneFileBrowser::*)(::StringW, ::StringW, ::ArrayW<::SFB::ExtensionFilter>, bool)>(&SFB::IStandaloneFileBrowser::OpenFilePanel)> {
  static const MethodInfo* get() {
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* extensions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("SFB", "ExtensionFilter"), 1)->byval_arg;
    static auto* multiselect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(SFB::IStandaloneFileBrowser*), "OpenFilePanel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{title, directory, extensions, multiselect});
  }
};
// Writing MetadataGetter for method: SFB::IStandaloneFileBrowser::OpenFolderPanel
// Il2CppName: OpenFolderPanel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (SFB::IStandaloneFileBrowser::*)(::StringW, ::StringW, bool)>(&SFB::IStandaloneFileBrowser::OpenFolderPanel)> {
  static const MethodInfo* get() {
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* multiselect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(SFB::IStandaloneFileBrowser*), "OpenFolderPanel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{title, directory, multiselect});
  }
};
// Writing MetadataGetter for method: SFB::IStandaloneFileBrowser::SaveFilePanel
// Il2CppName: SaveFilePanel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (SFB::IStandaloneFileBrowser::*)(::StringW, ::StringW, ::StringW, ::ArrayW<::SFB::ExtensionFilter>)>(&SFB::IStandaloneFileBrowser::SaveFilePanel)> {
  static const MethodInfo* get() {
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* defaultName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* extensions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("SFB", "ExtensionFilter"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(SFB::IStandaloneFileBrowser*), "SaveFilePanel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{title, directory, defaultName, extensions});
  }
};
// Writing MetadataGetter for method: SFB::IStandaloneFileBrowser::OpenFilePanelAsync
// Il2CppName: OpenFilePanelAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SFB::IStandaloneFileBrowser::*)(::StringW, ::StringW, ::ArrayW<::SFB::ExtensionFilter>, bool, ::System::Action_1<::ArrayW<::StringW>>*)>(&SFB::IStandaloneFileBrowser::OpenFilePanelAsync)> {
  static const MethodInfo* get() {
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* extensions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("SFB", "ExtensionFilter"), 1)->byval_arg;
    static auto* multiselect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* cb = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(SFB::IStandaloneFileBrowser*), "OpenFilePanelAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{title, directory, extensions, multiselect, cb});
  }
};
// Writing MetadataGetter for method: SFB::IStandaloneFileBrowser::OpenFolderPanelAsync
// Il2CppName: OpenFolderPanelAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SFB::IStandaloneFileBrowser::*)(::StringW, ::StringW, bool, ::System::Action_1<::ArrayW<::StringW>>*)>(&SFB::IStandaloneFileBrowser::OpenFolderPanelAsync)> {
  static const MethodInfo* get() {
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* multiselect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* cb = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(SFB::IStandaloneFileBrowser*), "OpenFolderPanelAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{title, directory, multiselect, cb});
  }
};
// Writing MetadataGetter for method: SFB::IStandaloneFileBrowser::SaveFilePanelAsync
// Il2CppName: SaveFilePanelAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SFB::IStandaloneFileBrowser::*)(::StringW, ::StringW, ::StringW, ::ArrayW<::SFB::ExtensionFilter>, ::System::Action_1<::StringW>*)>(&SFB::IStandaloneFileBrowser::SaveFilePanelAsync)> {
  static const MethodInfo* get() {
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* defaultName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* extensions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("SFB", "ExtensionFilter"), 1)->byval_arg;
    static auto* cb = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(SFB::IStandaloneFileBrowser*), "SaveFilePanelAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{title, directory, defaultName, extensions, cb});
  }
};
