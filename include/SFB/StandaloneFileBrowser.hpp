// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SFB.ExtensionFilter
#include "SFB/ExtensionFilter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: SFB
namespace SFB {
  // Forward declaring type: IStandaloneFileBrowser
  class IStandaloneFileBrowser;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: SFB
namespace SFB {
  // Forward declaring type: StandaloneFileBrowser
  class StandaloneFileBrowser;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::SFB::StandaloneFileBrowser);
DEFINE_IL2CPP_ARG_TYPE(::SFB::StandaloneFileBrowser*, "SFB", "StandaloneFileBrowser");
// Type namespace: SFB
namespace SFB {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SFB.StandaloneFileBrowser
  // [TokenAttribute] Offset: FFFFFFFF
  class StandaloneFileBrowser : public ::Il2CppObject {
    public:
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x11252C4
    // Get static field: static private readonly SFB.IStandaloneFileBrowser _platformWrapper
    static ::SFB::IStandaloneFileBrowser* _get__platformWrapper();
    // Set static field: static private readonly SFB.IStandaloneFileBrowser _platformWrapper
    static void _set__platformWrapper(::SFB::IStandaloneFileBrowser* value);
    // static private System.Void .cctor()
    // Offset: 0x142908C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1429BAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandaloneFileBrowser* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::SFB::StandaloneFileBrowser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandaloneFileBrowser*, creationType>()));
    }
    // static public System.String[] OpenFilePanel(System.String title, System.String directory, System.String extension, System.Boolean multiselect)
    // Offset: 0x1429090
    static ::ArrayW<::StringW> OpenFilePanel(::StringW title, ::StringW directory, ::StringW extension, bool multiselect);
    // static public System.String[] OpenFilePanel(System.String title, System.String directory, SFB.ExtensionFilter[] extensions, System.Boolean multiselect)
    // Offset: 0x14291C4
    static ::ArrayW<::StringW> OpenFilePanel(::StringW title, ::StringW directory, ::ArrayW<::SFB::ExtensionFilter> extensions, bool multiselect);
    // static public System.Void OpenFilePanelAsync(System.String title, System.String directory, System.String extension, System.Boolean multiselect, System.Action`1<System.String[]> cb)
    // Offset: 0x14292C8
    static void OpenFilePanelAsync(::StringW title, ::StringW directory, ::StringW extension, bool multiselect, ::System::Action_1<::ArrayW<::StringW>>* cb);
    // static public System.Void OpenFilePanelAsync(System.String title, System.String directory, SFB.ExtensionFilter[] extensions, System.Boolean multiselect, System.Action`1<System.String[]> cb)
    // Offset: 0x142940C
    static void OpenFilePanelAsync(::StringW title, ::StringW directory, ::ArrayW<::SFB::ExtensionFilter> extensions, bool multiselect, ::System::Action_1<::ArrayW<::StringW>>* cb);
    // static public System.String[] OpenFolderPanel(System.String title, System.String directory, System.Boolean multiselect)
    // Offset: 0x142951C
    static ::ArrayW<::StringW> OpenFolderPanel(::StringW title, ::StringW directory, bool multiselect);
    // static public System.Void OpenFolderPanelAsync(System.String title, System.String directory, System.Boolean multiselect, System.Action`1<System.String[]> cb)
    // Offset: 0x1429614
    static void OpenFolderPanelAsync(::StringW title, ::StringW directory, bool multiselect, ::System::Action_1<::ArrayW<::StringW>>* cb);
    // static public System.String SaveFilePanel(System.String title, System.String directory, System.String defaultName, System.String extension)
    // Offset: 0x142971C
    static ::StringW SaveFilePanel(::StringW title, ::StringW directory, ::StringW defaultName, ::StringW extension);
    // static public System.String SaveFilePanel(System.String title, System.String directory, System.String defaultName, SFB.ExtensionFilter[] extensions)
    // Offset: 0x1429850
    static ::StringW SaveFilePanel(::StringW title, ::StringW directory, ::StringW defaultName, ::ArrayW<::SFB::ExtensionFilter> extensions);
    // static public System.Void SaveFilePanelAsync(System.String title, System.String directory, System.String defaultName, System.String extension, System.Action`1<System.String> cb)
    // Offset: 0x1429958
    static void SaveFilePanelAsync(::StringW title, ::StringW directory, ::StringW defaultName, ::StringW extension, ::System::Action_1<::StringW>* cb);
    // static public System.Void SaveFilePanelAsync(System.String title, System.String directory, System.String defaultName, SFB.ExtensionFilter[] extensions, System.Action`1<System.String> cb)
    // Offset: 0x1429A9C
    static void SaveFilePanelAsync(::StringW title, ::StringW directory, ::StringW defaultName, ::ArrayW<::SFB::ExtensionFilter> extensions, ::System::Action_1<::StringW>* cb);
  }; // SFB.StandaloneFileBrowser
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: SFB::StandaloneFileBrowser::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&SFB::StandaloneFileBrowser::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(SFB::StandaloneFileBrowser*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: SFB::StandaloneFileBrowser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: SFB::StandaloneFileBrowser::OpenFilePanel
// Il2CppName: OpenFilePanel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::StringW, ::StringW, ::StringW, bool)>(&SFB::StandaloneFileBrowser::OpenFilePanel)> {
  static const MethodInfo* get() {
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* extension = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* multiselect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(SFB::StandaloneFileBrowser*), "OpenFilePanel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{title, directory, extension, multiselect});
  }
};
// Writing MetadataGetter for method: SFB::StandaloneFileBrowser::OpenFilePanel
// Il2CppName: OpenFilePanel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::StringW, ::StringW, ::ArrayW<::SFB::ExtensionFilter>, bool)>(&SFB::StandaloneFileBrowser::OpenFilePanel)> {
  static const MethodInfo* get() {
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* extensions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("SFB", "ExtensionFilter"), 1)->byval_arg;
    static auto* multiselect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(SFB::StandaloneFileBrowser*), "OpenFilePanel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{title, directory, extensions, multiselect});
  }
};
// Writing MetadataGetter for method: SFB::StandaloneFileBrowser::OpenFilePanelAsync
// Il2CppName: OpenFilePanelAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::StringW, bool, ::System::Action_1<::ArrayW<::StringW>>*)>(&SFB::StandaloneFileBrowser::OpenFilePanelAsync)> {
  static const MethodInfo* get() {
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* extension = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* multiselect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* cb = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(SFB::StandaloneFileBrowser*), "OpenFilePanelAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{title, directory, extension, multiselect, cb});
  }
};
// Writing MetadataGetter for method: SFB::StandaloneFileBrowser::OpenFilePanelAsync
// Il2CppName: OpenFilePanelAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::ArrayW<::SFB::ExtensionFilter>, bool, ::System::Action_1<::ArrayW<::StringW>>*)>(&SFB::StandaloneFileBrowser::OpenFilePanelAsync)> {
  static const MethodInfo* get() {
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* extensions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("SFB", "ExtensionFilter"), 1)->byval_arg;
    static auto* multiselect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* cb = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(SFB::StandaloneFileBrowser*), "OpenFilePanelAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{title, directory, extensions, multiselect, cb});
  }
};
// Writing MetadataGetter for method: SFB::StandaloneFileBrowser::OpenFolderPanel
// Il2CppName: OpenFolderPanel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::StringW, ::StringW, bool)>(&SFB::StandaloneFileBrowser::OpenFolderPanel)> {
  static const MethodInfo* get() {
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* multiselect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(SFB::StandaloneFileBrowser*), "OpenFolderPanel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{title, directory, multiselect});
  }
};
// Writing MetadataGetter for method: SFB::StandaloneFileBrowser::OpenFolderPanelAsync
// Il2CppName: OpenFolderPanelAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, bool, ::System::Action_1<::ArrayW<::StringW>>*)>(&SFB::StandaloneFileBrowser::OpenFolderPanelAsync)> {
  static const MethodInfo* get() {
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* multiselect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* cb = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(SFB::StandaloneFileBrowser*), "OpenFolderPanelAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{title, directory, multiselect, cb});
  }
};
// Writing MetadataGetter for method: SFB::StandaloneFileBrowser::SaveFilePanel
// Il2CppName: SaveFilePanel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW, ::StringW)>(&SFB::StandaloneFileBrowser::SaveFilePanel)> {
  static const MethodInfo* get() {
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* defaultName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* extension = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(SFB::StandaloneFileBrowser*), "SaveFilePanel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{title, directory, defaultName, extension});
  }
};
// Writing MetadataGetter for method: SFB::StandaloneFileBrowser::SaveFilePanel
// Il2CppName: SaveFilePanel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW, ::ArrayW<::SFB::ExtensionFilter>)>(&SFB::StandaloneFileBrowser::SaveFilePanel)> {
  static const MethodInfo* get() {
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* defaultName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* extensions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("SFB", "ExtensionFilter"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(SFB::StandaloneFileBrowser*), "SaveFilePanel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{title, directory, defaultName, extensions});
  }
};
// Writing MetadataGetter for method: SFB::StandaloneFileBrowser::SaveFilePanelAsync
// Il2CppName: SaveFilePanelAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::StringW, ::StringW, ::System::Action_1<::StringW>*)>(&SFB::StandaloneFileBrowser::SaveFilePanelAsync)> {
  static const MethodInfo* get() {
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* defaultName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* extension = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cb = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(SFB::StandaloneFileBrowser*), "SaveFilePanelAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{title, directory, defaultName, extension, cb});
  }
};
// Writing MetadataGetter for method: SFB::StandaloneFileBrowser::SaveFilePanelAsync
// Il2CppName: SaveFilePanelAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::StringW, ::ArrayW<::SFB::ExtensionFilter>, ::System::Action_1<::StringW>*)>(&SFB::StandaloneFileBrowser::SaveFilePanelAsync)> {
  static const MethodInfo* get() {
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* defaultName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* extensions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("SFB", "ExtensionFilter"), 1)->byval_arg;
    static auto* cb = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(SFB::StandaloneFileBrowser*), "SaveFilePanelAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{title, directory, defaultName, extensions, cb});
  }
};
