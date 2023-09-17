#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections::ObjectModel {
template<typename T>
class Collection_1;
}
namespace System::Text {
class Encoding;
}
namespace System::Security {
class SecureString;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System {
class WeakReference;
}
namespace System::Collections::Specialized {
class StringDictionary;
}
namespace System::Diagnostics {
class Process;
}
namespace System::Diagnostics {
struct ProcessWindowStyle;
}
// Forward declare root types
namespace System::Diagnostics {
class ProcessStartInfo;
}
// Type: System.Diagnostics::ProcessStartInfo
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7806))
// CS Name: System.Diagnostics.ProcessStartInfo
class CORDL_TYPE ProcessStartInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~ProcessStartInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProcessStartInfo", modifiers: " const&", def_value: None }]
constexpr ProcessStartInfo(ProcessStartInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProcessStartInfo", modifiers: "&&", def_value: None }]
constexpr ProcessStartInfo(ProcessStartInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProcessStartInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ProcessStartInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProcessStartInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProcessStartInfo& operator=(ProcessStartInfo&& o) noexcept = default;
  constexpr ProcessStartInfo& operator=(ProcessStartInfo const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_fileName, put=__set_fileName))  fileName;

constexpr void __set_fileName(::StringW value) ;

constexpr ::StringW __get_fileName() const;

 ::StringW __declspec(property(get=__get_arguments, put=__set_arguments))  arguments;

constexpr void __set_arguments(::StringW value) ;

constexpr ::StringW __get_arguments() const;

 ::StringW __declspec(property(get=__get_directory, put=__set_directory))  directory;

constexpr void __set_directory(::StringW value) ;

constexpr ::StringW __get_directory() const;

 ::StringW __declspec(property(get=__get_verb, put=__set_verb))  verb;

constexpr void __set_verb(::StringW value) ;

constexpr ::StringW __get_verb() const;

 ::System::Diagnostics::ProcessWindowStyle __declspec(property(get=__get_windowStyle, put=__set_windowStyle))  windowStyle;

constexpr void __set_windowStyle(::System::Diagnostics::ProcessWindowStyle value) ;

constexpr ::System::Diagnostics::ProcessWindowStyle __get_windowStyle() const;

 bool __declspec(property(get=__get_errorDialog, put=__set_errorDialog))  errorDialog;

constexpr void __set_errorDialog(bool value) ;

constexpr bool __get_errorDialog() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_errorDialogParentHandle, put=__set_errorDialogParentHandle))  errorDialogParentHandle;

constexpr void __set_errorDialogParentHandle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_errorDialogParentHandle() const;

 bool __declspec(property(get=__get_useShellExecute, put=__set_useShellExecute))  useShellExecute;

constexpr void __set_useShellExecute(bool value) ;

constexpr bool __get_useShellExecute() const;

 ::StringW __declspec(property(get=__get_userName, put=__set_userName))  userName;

constexpr void __set_userName(::StringW value) ;

constexpr ::StringW __get_userName() const;

 ::StringW __declspec(property(get=__get_domain, put=__set_domain))  domain;

constexpr void __set_domain(::StringW value) ;

constexpr ::StringW __get_domain() const;

 ::System::Security::SecureString __declspec(property(get=__get_password, put=__set_password))  password;

constexpr void __set_password(::System::Security::SecureString value) ;

constexpr ::System::Security::SecureString __get_password() const;

 ::StringW __declspec(property(get=__get_passwordInClearText, put=__set_passwordInClearText))  passwordInClearText;

constexpr void __set_passwordInClearText(::StringW value) ;

constexpr ::StringW __get_passwordInClearText() const;

 bool __declspec(property(get=__get_loadUserProfile, put=__set_loadUserProfile))  loadUserProfile;

constexpr void __set_loadUserProfile(bool value) ;

constexpr bool __get_loadUserProfile() const;

 bool __declspec(property(get=__get_redirectStandardInput, put=__set_redirectStandardInput))  redirectStandardInput;

constexpr void __set_redirectStandardInput(bool value) ;

constexpr bool __get_redirectStandardInput() const;

 bool __declspec(property(get=__get_redirectStandardOutput, put=__set_redirectStandardOutput))  redirectStandardOutput;

constexpr void __set_redirectStandardOutput(bool value) ;

constexpr bool __get_redirectStandardOutput() const;

 bool __declspec(property(get=__get_redirectStandardError, put=__set_redirectStandardError))  redirectStandardError;

constexpr void __set_redirectStandardError(bool value) ;

constexpr bool __get_redirectStandardError() const;

 ::System::Text::Encoding __declspec(property(get=__get_standardOutputEncoding, put=__set_standardOutputEncoding))  standardOutputEncoding;

constexpr void __set_standardOutputEncoding(::System::Text::Encoding value) ;

constexpr ::System::Text::Encoding __get_standardOutputEncoding() const;

 ::System::Text::Encoding __declspec(property(get=__get_standardErrorEncoding, put=__set_standardErrorEncoding))  standardErrorEncoding;

constexpr void __set_standardErrorEncoding(::System::Text::Encoding value) ;

constexpr ::System::Text::Encoding __get_standardErrorEncoding() const;

 bool __declspec(property(get=__get_createNoWindow, put=__set_createNoWindow))  createNoWindow;

constexpr void __set_createNoWindow(bool value) ;

constexpr bool __get_createNoWindow() const;

 ::System::WeakReference __declspec(property(get=__get_weakParentProcess, put=__set_weakParentProcess))  weakParentProcess;

constexpr void __set_weakParentProcess(::System::WeakReference value) ;

constexpr ::System::WeakReference __get_weakParentProcess() const;

 ::System::Collections::Specialized::StringDictionary __declspec(property(get=__get_environmentVariables, put=__set_environmentVariables))  environmentVariables;

constexpr void __set_environmentVariables(::System::Collections::Specialized::StringDictionary value) ;

constexpr ::System::Collections::Specialized::StringDictionary __get_environmentVariables() const;

static ::ArrayW<::StringW> __declspec(property(get=__get_empty, put=__set_empty))  empty;

static void __set_empty(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_empty() ;

 ::System::Collections::ObjectModel::Collection_1<::StringW> __declspec(property(get=__get__argumentList, put=__set__argumentList))  _argumentList;

constexpr void __set__argumentList(::System::Collections::ObjectModel::Collection_1<::StringW> value) ;

constexpr ::System::Collections::ObjectModel::Collection_1<::StringW> __get__argumentList() const;

 ::System::Collections::Generic::IDictionary_2<::StringW,::StringW> __declspec(property(get=__get_environment, put=__set_environment))  environment;

constexpr void __set_environment(::System::Collections::Generic::IDictionary_2<::StringW,::StringW> value) ;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW> __get_environment() const;

 ::System::Text::Encoding __declspec(property(get=__get__StandardInputEncoding_k__BackingField, put=__set__StandardInputEncoding_k__BackingField))  _StandardInputEncoding_k__BackingField;

constexpr void __set__StandardInputEncoding_k__BackingField(::System::Text::Encoding value) ;

constexpr ::System::Text::Encoding __get__StandardInputEncoding_k__BackingField() const;


// Properties

 ::System::Collections::ObjectModel::Collection_1<::StringW> __declspec(property(get=get_ArgumentList))  ArgumentList;

 ::StringW __declspec(property(get=get_Arguments, put=set_Arguments))  Arguments;

 ::System::Collections::Specialized::StringDictionary __declspec(property(get=get_EnvironmentVariables))  EnvironmentVariables;

 bool __declspec(property(get=get_RedirectStandardInput))  RedirectStandardInput;

 bool __declspec(property(get=get_RedirectStandardOutput))  RedirectStandardOutput;

 bool __declspec(property(get=get_RedirectStandardError))  RedirectStandardError;

 ::System::Text::Encoding __declspec(property(get=get_StandardErrorEncoding))  StandardErrorEncoding;

 ::System::Text::Encoding __declspec(property(get=get_StandardOutputEncoding))  StandardOutputEncoding;

 bool __declspec(property(get=get_UseShellExecute))  UseShellExecute;

 ::StringW __declspec(property(get=get_UserName))  UserName;

 ::System::Security::SecureString __declspec(property(get=get_Password))  Password;

 ::StringW __declspec(property(get=get_Domain))  Domain;

 bool __declspec(property(get=get_LoadUserProfile))  LoadUserProfile;

 ::StringW __declspec(property(get=get_FileName, put=set_FileName))  FileName;

 ::StringW __declspec(property(get=get_WorkingDirectory))  WorkingDirectory;

 bool __declspec(property(get=get_HaveEnvVars))  HaveEnvVars;

 ::System::Text::Encoding __declspec(property(get=get_StandardInputEncoding))  StandardInputEncoding;


// Methods

// Ctor Parameters [CppParam { name: "parent", ty: "::System::Diagnostics::Process", modifiers: "", def_value: None }]
explicit ProcessStartInfo(::System::Diagnostics::Process parent) ;

/// @brief Method .ctor addr 0x27ddb20 size 0x84 virtual false final false
 void _ctor(::System::Diagnostics::Process parent) ;

/// @brief Method get_ArgumentList addr 0x27e0c98 size 0x80 virtual false final false
 ::System::Collections::ObjectModel::Collection_1<::StringW> get_ArgumentList() ;

/// @brief Method get_Arguments addr 0x27e0d18 size 0x54 virtual false final false
 ::StringW get_Arguments() ;

/// @brief Method set_Arguments addr 0x27e0e14 size 0x8 virtual false final false
 void set_Arguments(::StringW value) ;

/// @brief Method get_EnvironmentVariables addr 0x27e0728 size 0x570 virtual false final false
 ::System::Collections::Specialized::StringDictionary get_EnvironmentVariables() ;

/// @brief Method get_RedirectStandardInput addr 0x27e0e1c size 0x8 virtual false final false
 bool get_RedirectStandardInput() ;

/// @brief Method get_RedirectStandardOutput addr 0x27e0e24 size 0x8 virtual false final false
 bool get_RedirectStandardOutput() ;

/// @brief Method get_RedirectStandardError addr 0x27e0e2c size 0x8 virtual false final false
 bool get_RedirectStandardError() ;

/// @brief Method get_StandardErrorEncoding addr 0x27e0e34 size 0x8 virtual false final false
 ::System::Text::Encoding get_StandardErrorEncoding() ;

/// @brief Method get_StandardOutputEncoding addr 0x27e0e3c size 0x8 virtual false final false
 ::System::Text::Encoding get_StandardOutputEncoding() ;

/// @brief Method get_UseShellExecute addr 0x27e0e44 size 0x8 virtual false final false
 bool get_UseShellExecute() ;

/// @brief Method get_UserName addr 0x27e03b4 size 0x54 virtual false final false
 ::StringW get_UserName() ;

/// @brief Method get_Password addr 0x27e0e4c size 0x8 virtual false final false
 ::System::Security::SecureString get_Password() ;

/// @brief Method get_Domain addr 0x27e0dc0 size 0x54 virtual false final false
 ::StringW get_Domain() ;

/// @brief Method get_LoadUserProfile addr 0x27e0e54 size 0x8 virtual false final false
 bool get_LoadUserProfile() ;

/// @brief Method get_FileName addr 0x27de844 size 0x54 virtual false final false
 ::StringW get_FileName() ;

/// @brief Method set_FileName addr 0x27e0e5c size 0x8 virtual false final false
 void set_FileName(::StringW value) ;

/// @brief Method get_WorkingDirectory addr 0x27e0d6c size 0x54 virtual false final false
 ::StringW get_WorkingDirectory() ;

/// @brief Method get_HaveEnvVars addr 0x27e0718 size 0x10 virtual false final false
 bool get_HaveEnvVars() ;

/// @brief Method get_StandardInputEncoding addr 0x27e0e64 size 0x8 virtual false final false
 ::System::Text::Encoding get_StandardInputEncoding() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
} // end anonymous namespace
NEED_NO_BOX(::System::Diagnostics::ProcessStartInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::ProcessStartInfo, "System.Diagnostics", "ProcessStartInfo");
