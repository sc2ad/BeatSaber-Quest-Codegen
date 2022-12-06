// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Diagnostics.ProcessWindowStyle
#include "System/Diagnostics/ProcessWindowStyle.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security
namespace System::Security {
  // Forward declaring type: SecureString
  class SecureString;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: WeakReference
  class WeakReference;
}
// Forward declaring namespace: System::Collections::Specialized
namespace System::Collections::Specialized {
  // Forward declaring type: StringDictionary
  class StringDictionary;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
}
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: Process
  class Process;
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: ProcessStartInfo
  class ProcessStartInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::ProcessStartInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::ProcessStartInfo*, "System.Diagnostics", "ProcessStartInfo");
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0xA0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Diagnostics.ProcessStartInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [TypeConverterAttribute] Offset: 107B4C4
  class ProcessStartInfo : public ::Il2CppObject {
    public:
    public:
    // private System.String fileName
    // Size: 0x8
    // Offset: 0x10
    ::StringW fileName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String arguments
    // Size: 0x8
    // Offset: 0x18
    ::StringW arguments;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String directory
    // Size: 0x8
    // Offset: 0x20
    ::StringW directory;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String verb
    // Size: 0x8
    // Offset: 0x28
    ::StringW verb;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Diagnostics.ProcessWindowStyle windowStyle
    // Size: 0x4
    // Offset: 0x30
    ::System::Diagnostics::ProcessWindowStyle windowStyle;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::ProcessWindowStyle) == 0x4);
    // private System.Boolean errorDialog
    // Size: 0x1
    // Offset: 0x34
    bool errorDialog;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: errorDialog and: errorDialogParentHandle
    char __padding5[0x3] = {};
    // private System.IntPtr errorDialogParentHandle
    // Size: 0x8
    // Offset: 0x38
    ::System::IntPtr errorDialogParentHandle;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.Boolean useShellExecute
    // Size: 0x1
    // Offset: 0x40
    bool useShellExecute;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useShellExecute and: userName
    char __padding7[0x7] = {};
    // private System.String userName
    // Size: 0x8
    // Offset: 0x48
    ::StringW userName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String domain
    // Size: 0x8
    // Offset: 0x50
    ::StringW domain;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Security.SecureString password
    // Size: 0x8
    // Offset: 0x58
    ::System::Security::SecureString* password;
    // Field size check
    static_assert(sizeof(::System::Security::SecureString*) == 0x8);
    // private System.String passwordInClearText
    // Size: 0x8
    // Offset: 0x60
    ::StringW passwordInClearText;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean loadUserProfile
    // Size: 0x1
    // Offset: 0x68
    bool loadUserProfile;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean redirectStandardInput
    // Size: 0x1
    // Offset: 0x69
    bool redirectStandardInput;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean redirectStandardOutput
    // Size: 0x1
    // Offset: 0x6A
    bool redirectStandardOutput;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean redirectStandardError
    // Size: 0x1
    // Offset: 0x6B
    bool redirectStandardError;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: redirectStandardError and: standardOutputEncoding
    char __padding15[0x4] = {};
    // private System.Text.Encoding standardOutputEncoding
    // Size: 0x8
    // Offset: 0x70
    ::System::Text::Encoding* standardOutputEncoding;
    // Field size check
    static_assert(sizeof(::System::Text::Encoding*) == 0x8);
    // private System.Text.Encoding standardErrorEncoding
    // Size: 0x8
    // Offset: 0x78
    ::System::Text::Encoding* standardErrorEncoding;
    // Field size check
    static_assert(sizeof(::System::Text::Encoding*) == 0x8);
    // private System.Boolean createNoWindow
    // Size: 0x1
    // Offset: 0x80
    bool createNoWindow;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: createNoWindow and: weakParentProcess
    char __padding18[0x7] = {};
    // private System.WeakReference weakParentProcess
    // Size: 0x8
    // Offset: 0x88
    ::System::WeakReference* weakParentProcess;
    // Field size check
    static_assert(sizeof(::System::WeakReference*) == 0x8);
    // System.Collections.Specialized.StringDictionary environmentVariables
    // Size: 0x8
    // Offset: 0x90
    ::System::Collections::Specialized::StringDictionary* environmentVariables;
    // Field size check
    static_assert(sizeof(::System::Collections::Specialized::StringDictionary*) == 0x8);
    // private System.Collections.Generic.IDictionary`2<System.String,System.String> environment
    // Size: 0x8
    // Offset: 0x98
    ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* environment;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*) == 0x8);
    public:
    // Get static field: static private readonly System.String[] empty
    static ::ArrayW<::StringW> _get_empty();
    // Set static field: static private readonly System.String[] empty
    static void _set_empty(::ArrayW<::StringW> value);
    // Get instance field reference: private System.String fileName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_fileName();
    // Get instance field reference: private System.String arguments
    [[deprecated("Use field access instead!")]] ::StringW& dyn_arguments();
    // Get instance field reference: private System.String directory
    [[deprecated("Use field access instead!")]] ::StringW& dyn_directory();
    // Get instance field reference: private System.String verb
    [[deprecated("Use field access instead!")]] ::StringW& dyn_verb();
    // Get instance field reference: private System.Diagnostics.ProcessWindowStyle windowStyle
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::ProcessWindowStyle& dyn_windowStyle();
    // Get instance field reference: private System.Boolean errorDialog
    [[deprecated("Use field access instead!")]] bool& dyn_errorDialog();
    // Get instance field reference: private System.IntPtr errorDialogParentHandle
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_errorDialogParentHandle();
    // Get instance field reference: private System.Boolean useShellExecute
    [[deprecated("Use field access instead!")]] bool& dyn_useShellExecute();
    // Get instance field reference: private System.String userName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_userName();
    // Get instance field reference: private System.String domain
    [[deprecated("Use field access instead!")]] ::StringW& dyn_domain();
    // Get instance field reference: private System.Security.SecureString password
    [[deprecated("Use field access instead!")]] ::System::Security::SecureString*& dyn_password();
    // Get instance field reference: private System.String passwordInClearText
    [[deprecated("Use field access instead!")]] ::StringW& dyn_passwordInClearText();
    // Get instance field reference: private System.Boolean loadUserProfile
    [[deprecated("Use field access instead!")]] bool& dyn_loadUserProfile();
    // Get instance field reference: private System.Boolean redirectStandardInput
    [[deprecated("Use field access instead!")]] bool& dyn_redirectStandardInput();
    // Get instance field reference: private System.Boolean redirectStandardOutput
    [[deprecated("Use field access instead!")]] bool& dyn_redirectStandardOutput();
    // Get instance field reference: private System.Boolean redirectStandardError
    [[deprecated("Use field access instead!")]] bool& dyn_redirectStandardError();
    // Get instance field reference: private System.Text.Encoding standardOutputEncoding
    [[deprecated("Use field access instead!")]] ::System::Text::Encoding*& dyn_standardOutputEncoding();
    // Get instance field reference: private System.Text.Encoding standardErrorEncoding
    [[deprecated("Use field access instead!")]] ::System::Text::Encoding*& dyn_standardErrorEncoding();
    // Get instance field reference: private System.Boolean createNoWindow
    [[deprecated("Use field access instead!")]] bool& dyn_createNoWindow();
    // Get instance field reference: private System.WeakReference weakParentProcess
    [[deprecated("Use field access instead!")]] ::System::WeakReference*& dyn_weakParentProcess();
    // Get instance field reference: System.Collections.Specialized.StringDictionary environmentVariables
    [[deprecated("Use field access instead!")]] ::System::Collections::Specialized::StringDictionary*& dyn_environmentVariables();
    // Get instance field reference: private System.Collections.Generic.IDictionary`2<System.String,System.String> environment
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& dyn_environment();
    // public System.String get_Arguments()
    // Offset: 0x1D80BE8
    ::StringW get_Arguments();
    // public System.Void set_Arguments(System.String value)
    // Offset: 0x1D80CFC
    void set_Arguments(::StringW value);
    // public System.Collections.Specialized.StringDictionary get_EnvironmentVariables()
    // Offset: 0x1D80730
    ::System::Collections::Specialized::StringDictionary* get_EnvironmentVariables();
    // public System.Boolean get_RedirectStandardInput()
    // Offset: 0x1D80D04
    bool get_RedirectStandardInput();
    // public System.Boolean get_RedirectStandardOutput()
    // Offset: 0x1D80D0C
    bool get_RedirectStandardOutput();
    // public System.Boolean get_RedirectStandardError()
    // Offset: 0x1D80D14
    bool get_RedirectStandardError();
    // public System.Text.Encoding get_StandardErrorEncoding()
    // Offset: 0x1D80D1C
    ::System::Text::Encoding* get_StandardErrorEncoding();
    // public System.Text.Encoding get_StandardOutputEncoding()
    // Offset: 0x1D80D24
    ::System::Text::Encoding* get_StandardOutputEncoding();
    // public System.Boolean get_UseShellExecute()
    // Offset: 0x1D80D2C
    bool get_UseShellExecute();
    // public System.String get_UserName()
    // Offset: 0x1D80370
    ::StringW get_UserName();
    // public System.Security.SecureString get_Password()
    // Offset: 0x1D80D34
    ::System::Security::SecureString* get_Password();
    // public System.String get_Domain()
    // Offset: 0x1D80CA0
    ::StringW get_Domain();
    // public System.Boolean get_LoadUserProfile()
    // Offset: 0x1D80D3C
    bool get_LoadUserProfile();
    // public System.String get_FileName()
    // Offset: 0x1D7E988
    ::StringW get_FileName();
    // public System.Void set_FileName(System.String value)
    // Offset: 0x1D80D44
    void set_FileName(::StringW value);
    // public System.String get_WorkingDirectory()
    // Offset: 0x1D80C44
    ::StringW get_WorkingDirectory();
    // System.Boolean get_HaveEnvVars()
    // Offset: 0x1D80720
    bool get_HaveEnvVars();
    // System.Void .ctor(System.Diagnostics.Process parent)
    // Offset: 0x1D7DC48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProcessStartInfo* New_ctor(::System::Diagnostics::Process* parent) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::ProcessStartInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProcessStartInfo*, creationType>(parent)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1D80D4C
    static void _cctor();
  }; // System.Diagnostics.ProcessStartInfo
  #pragma pack(pop)
  static check_size<sizeof(ProcessStartInfo), 152 + sizeof(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)> __System_Diagnostics_ProcessStartInfoSizeCheck;
  static_assert(sizeof(ProcessStartInfo) == 0xA0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::ProcessStartInfo::get_Arguments
// Il2CppName: get_Arguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Diagnostics::ProcessStartInfo::*)()>(&System::Diagnostics::ProcessStartInfo::get_Arguments)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::ProcessStartInfo*), "get_Arguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::ProcessStartInfo::set_Arguments
// Il2CppName: set_Arguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::ProcessStartInfo::*)(::StringW)>(&System::Diagnostics::ProcessStartInfo::set_Arguments)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::ProcessStartInfo*), "set_Arguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::ProcessStartInfo::get_EnvironmentVariables
// Il2CppName: get_EnvironmentVariables
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Specialized::StringDictionary* (System::Diagnostics::ProcessStartInfo::*)()>(&System::Diagnostics::ProcessStartInfo::get_EnvironmentVariables)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::ProcessStartInfo*), "get_EnvironmentVariables", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::ProcessStartInfo::get_RedirectStandardInput
// Il2CppName: get_RedirectStandardInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Diagnostics::ProcessStartInfo::*)()>(&System::Diagnostics::ProcessStartInfo::get_RedirectStandardInput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::ProcessStartInfo*), "get_RedirectStandardInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::ProcessStartInfo::get_RedirectStandardOutput
// Il2CppName: get_RedirectStandardOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Diagnostics::ProcessStartInfo::*)()>(&System::Diagnostics::ProcessStartInfo::get_RedirectStandardOutput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::ProcessStartInfo*), "get_RedirectStandardOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::ProcessStartInfo::get_RedirectStandardError
// Il2CppName: get_RedirectStandardError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Diagnostics::ProcessStartInfo::*)()>(&System::Diagnostics::ProcessStartInfo::get_RedirectStandardError)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::ProcessStartInfo*), "get_RedirectStandardError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::ProcessStartInfo::get_StandardErrorEncoding
// Il2CppName: get_StandardErrorEncoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (System::Diagnostics::ProcessStartInfo::*)()>(&System::Diagnostics::ProcessStartInfo::get_StandardErrorEncoding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::ProcessStartInfo*), "get_StandardErrorEncoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::ProcessStartInfo::get_StandardOutputEncoding
// Il2CppName: get_StandardOutputEncoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (System::Diagnostics::ProcessStartInfo::*)()>(&System::Diagnostics::ProcessStartInfo::get_StandardOutputEncoding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::ProcessStartInfo*), "get_StandardOutputEncoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::ProcessStartInfo::get_UseShellExecute
// Il2CppName: get_UseShellExecute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Diagnostics::ProcessStartInfo::*)()>(&System::Diagnostics::ProcessStartInfo::get_UseShellExecute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::ProcessStartInfo*), "get_UseShellExecute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::ProcessStartInfo::get_UserName
// Il2CppName: get_UserName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Diagnostics::ProcessStartInfo::*)()>(&System::Diagnostics::ProcessStartInfo::get_UserName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::ProcessStartInfo*), "get_UserName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::ProcessStartInfo::get_Password
// Il2CppName: get_Password
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::SecureString* (System::Diagnostics::ProcessStartInfo::*)()>(&System::Diagnostics::ProcessStartInfo::get_Password)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::ProcessStartInfo*), "get_Password", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::ProcessStartInfo::get_Domain
// Il2CppName: get_Domain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Diagnostics::ProcessStartInfo::*)()>(&System::Diagnostics::ProcessStartInfo::get_Domain)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::ProcessStartInfo*), "get_Domain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::ProcessStartInfo::get_LoadUserProfile
// Il2CppName: get_LoadUserProfile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Diagnostics::ProcessStartInfo::*)()>(&System::Diagnostics::ProcessStartInfo::get_LoadUserProfile)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::ProcessStartInfo*), "get_LoadUserProfile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::ProcessStartInfo::get_FileName
// Il2CppName: get_FileName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Diagnostics::ProcessStartInfo::*)()>(&System::Diagnostics::ProcessStartInfo::get_FileName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::ProcessStartInfo*), "get_FileName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::ProcessStartInfo::set_FileName
// Il2CppName: set_FileName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::ProcessStartInfo::*)(::StringW)>(&System::Diagnostics::ProcessStartInfo::set_FileName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::ProcessStartInfo*), "set_FileName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::ProcessStartInfo::get_WorkingDirectory
// Il2CppName: get_WorkingDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Diagnostics::ProcessStartInfo::*)()>(&System::Diagnostics::ProcessStartInfo::get_WorkingDirectory)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::ProcessStartInfo*), "get_WorkingDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::ProcessStartInfo::get_HaveEnvVars
// Il2CppName: get_HaveEnvVars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Diagnostics::ProcessStartInfo::*)()>(&System::Diagnostics::ProcessStartInfo::get_HaveEnvVars)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::ProcessStartInfo*), "get_HaveEnvVars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::ProcessStartInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::ProcessStartInfo::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Diagnostics::ProcessStartInfo::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::ProcessStartInfo*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
