#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
struct PlatformID;
}
namespace System {
struct EnvironmentVariableTarget;
}
namespace System {
struct System__Environment__SpecialFolder;
}
namespace System {
class OperatingSystem;
}
namespace System::Collections {
class IDictionary;
}
namespace System {
struct System__Environment__SpecialFolderOption;
}
namespace System {
class Version;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System {
struct System__Environment__SpecialFolder;
}
namespace System {
struct System__Environment__SpecialFolderOption;
}
namespace System {
class Environment;
}
// Type: ::SpecialFolder
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2576))
// CS Name: System.Environment::SpecialFolder
struct CORDL_TYPE System__Environment__SpecialFolder : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Environment__SpecialFolder(int32_t value__) noexcept;


                    constexpr System__Environment__SpecialFolder(System__Environment__SpecialFolder const&) = default;
                    constexpr System__Environment__SpecialFolder(System__Environment__SpecialFolder&&) = default;
                    constexpr System__Environment__SpecialFolder& operator=(System__Environment__SpecialFolder const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Environment__SpecialFolder& operator=(System__Environment__SpecialFolder&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Environment__SpecialFolder(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Environment__SpecialFolder_Unwrapped : int32_t {
__MyDocuments = 5,
__Desktop = 0,
__MyComputer = 17,
__Programs = 2,
__Personal = 5,
__Favorites = 6,
__Startup = 7,
__Recent = 8,
__SendTo = 9,
__StartMenu = 11,
__MyMusic = 13,
__DesktopDirectory = 16,
__Templates = 21,
__ApplicationData = 26,
__LocalApplicationData = 28,
__InternetCache = 32,
__Cookies = 33,
__History = 34,
__CommonApplicationData = 35,
__System = 37,
__ProgramFiles = 38,
__MyPictures = 39,
__CommonProgramFiles = 43,
__MyVideos = 14,
__NetworkShortcuts = 19,
__Fonts = 20,
__CommonStartMenu = 22,
__CommonPrograms = 23,
__CommonStartup = 24,
__CommonDesktopDirectory = 25,
__PrinterShortcuts = 27,
__Windows = 36,
__UserProfile = 40,
__SystemX86 = 41,
__ProgramFilesX86 = 42,
__CommonProgramFilesX86 = 44,
__CommonTemplates = 45,
__CommonDocuments = 46,
__CommonAdminTools = 47,
__AdminTools = 48,
__CommonMusic = 53,
__CommonPictures = 54,
__CommonVideos = 55,
__Resources = 56,
__LocalizedResources = 57,
__CommonOemLinks = 58,
__CDBurning = 59,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Environment__SpecialFolder_Unwrapped () const noexcept {
return std::bit_cast<__System__Environment__SpecialFolder_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field MyDocuments offset 0
static System::System__Environment__SpecialFolder const MyDocuments;

/// @brief Field Desktop offset 0
static System::System__Environment__SpecialFolder const Desktop;

/// @brief Field MyComputer offset 0
static System::System__Environment__SpecialFolder const MyComputer;

/// @brief Field Programs offset 0
static System::System__Environment__SpecialFolder const Programs;

/// @brief Field Personal offset 0
static System::System__Environment__SpecialFolder const Personal;

/// @brief Field Favorites offset 0
static System::System__Environment__SpecialFolder const Favorites;

/// @brief Field Startup offset 0
static System::System__Environment__SpecialFolder const Startup;

/// @brief Field Recent offset 0
static System::System__Environment__SpecialFolder const Recent;

/// @brief Field SendTo offset 0
static System::System__Environment__SpecialFolder const SendTo;

/// @brief Field StartMenu offset 0
static System::System__Environment__SpecialFolder const StartMenu;

/// @brief Field MyMusic offset 0
static System::System__Environment__SpecialFolder const MyMusic;

/// @brief Field DesktopDirectory offset 0
static System::System__Environment__SpecialFolder const DesktopDirectory;

/// @brief Field Templates offset 0
static System::System__Environment__SpecialFolder const Templates;

/// @brief Field ApplicationData offset 0
static System::System__Environment__SpecialFolder const ApplicationData;

/// @brief Field LocalApplicationData offset 0
static System::System__Environment__SpecialFolder const LocalApplicationData;

/// @brief Field InternetCache offset 0
static System::System__Environment__SpecialFolder const InternetCache;

/// @brief Field Cookies offset 0
static System::System__Environment__SpecialFolder const Cookies;

/// @brief Field History offset 0
static System::System__Environment__SpecialFolder const History;

/// @brief Field CommonApplicationData offset 0
static System::System__Environment__SpecialFolder const CommonApplicationData;

/// @brief Field System offset 0
static System::System__Environment__SpecialFolder const System;

/// @brief Field ProgramFiles offset 0
static System::System__Environment__SpecialFolder const ProgramFiles;

/// @brief Field MyPictures offset 0
static System::System__Environment__SpecialFolder const MyPictures;

/// @brief Field CommonProgramFiles offset 0
static System::System__Environment__SpecialFolder const CommonProgramFiles;

/// @brief Field MyVideos offset 0
static System::System__Environment__SpecialFolder const MyVideos;

/// @brief Field NetworkShortcuts offset 0
static System::System__Environment__SpecialFolder const NetworkShortcuts;

/// @brief Field Fonts offset 0
static System::System__Environment__SpecialFolder const Fonts;

/// @brief Field CommonStartMenu offset 0
static System::System__Environment__SpecialFolder const CommonStartMenu;

/// @brief Field CommonPrograms offset 0
static System::System__Environment__SpecialFolder const CommonPrograms;

/// @brief Field CommonStartup offset 0
static System::System__Environment__SpecialFolder const CommonStartup;

/// @brief Field CommonDesktopDirectory offset 0
static System::System__Environment__SpecialFolder const CommonDesktopDirectory;

/// @brief Field PrinterShortcuts offset 0
static System::System__Environment__SpecialFolder const PrinterShortcuts;

/// @brief Field Windows offset 0
static System::System__Environment__SpecialFolder const Windows;

/// @brief Field UserProfile offset 0
static System::System__Environment__SpecialFolder const UserProfile;

/// @brief Field SystemX86 offset 0
static System::System__Environment__SpecialFolder const SystemX86;

/// @brief Field ProgramFilesX86 offset 0
static System::System__Environment__SpecialFolder const ProgramFilesX86;

/// @brief Field CommonProgramFilesX86 offset 0
static System::System__Environment__SpecialFolder const CommonProgramFilesX86;

/// @brief Field CommonTemplates offset 0
static System::System__Environment__SpecialFolder const CommonTemplates;

/// @brief Field CommonDocuments offset 0
static System::System__Environment__SpecialFolder const CommonDocuments;

/// @brief Field CommonAdminTools offset 0
static System::System__Environment__SpecialFolder const CommonAdminTools;

/// @brief Field AdminTools offset 0
static System::System__Environment__SpecialFolder const AdminTools;

/// @brief Field CommonMusic offset 0
static System::System__Environment__SpecialFolder const CommonMusic;

/// @brief Field CommonPictures offset 0
static System::System__Environment__SpecialFolder const CommonPictures;

/// @brief Field CommonVideos offset 0
static System::System__Environment__SpecialFolder const CommonVideos;

/// @brief Field Resources offset 0
static System::System__Environment__SpecialFolder const Resources;

/// @brief Field LocalizedResources offset 0
static System::System__Environment__SpecialFolder const LocalizedResources;

/// @brief Field CommonOemLinks offset 0
static System::System__Environment__SpecialFolder const CommonOemLinks;

/// @brief Field CDBurning offset 0
static System::System__Environment__SpecialFolder const CDBurning;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: ::SpecialFolderOption
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2577))
// CS Name: System.Environment::SpecialFolderOption
struct CORDL_TYPE System__Environment__SpecialFolderOption : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Environment__SpecialFolderOption(int32_t value__) noexcept;


                    constexpr System__Environment__SpecialFolderOption(System__Environment__SpecialFolderOption const&) = default;
                    constexpr System__Environment__SpecialFolderOption(System__Environment__SpecialFolderOption&&) = default;
                    constexpr System__Environment__SpecialFolderOption& operator=(System__Environment__SpecialFolderOption const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Environment__SpecialFolderOption& operator=(System__Environment__SpecialFolderOption&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Environment__SpecialFolderOption(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Environment__SpecialFolderOption_Unwrapped : int32_t {
__None = 0,
__DoNotVerify = 16384,
__Create = 32768,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Environment__SpecialFolderOption_Unwrapped () const noexcept {
return std::bit_cast<__System__Environment__SpecialFolderOption_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::System__Environment__SpecialFolderOption const None;

/// @brief Field DoNotVerify offset 0
static System::System__Environment__SpecialFolderOption const DoNotVerify;

/// @brief Field Create offset 0
static System::System__Environment__SpecialFolderOption const Create;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Environment
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2578))
// CS Name: System.Environment
class CORDL_TYPE Environment : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SpecialFolderOption = System::System__Environment__SpecialFolderOption;

using SpecialFolder = System::System__Environment__SpecialFolder;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Environment() = default;

// Ctor Parameters [CppParam { name: "", ty: "Environment", modifiers: " const&", def_value: None }]
constexpr Environment(Environment const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Environment", modifiers: "&&", def_value: None }]
constexpr Environment(Environment&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Environment(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Environment& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Environment& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Environment& operator=(Environment&& o) noexcept = default;
  constexpr Environment& operator=(Environment const& o) noexcept = default;
                


// Fields

/// @brief Field mono_corlib_version offset 0
static constexpr ::ConstString  mono_corlib_version{u"1A5E0066-58DC-428A-B21C-0AD6CDAE2789"};

static ::StringW __declspec(property(get=__get_nl, put=__set_nl))  nl;

static void __set_nl(::StringW value) ;

static ::StringW __get_nl() ;

static System::OperatingSystem __declspec(property(get=__get_os, put=__set_os))  os;

static void __set_os(System::OperatingSystem value) ;

static System::OperatingSystem __get_os() ;


// Properties

static ::StringW __declspec(property(get=get_CurrentDirectory))  CurrentDirectory;

static int32_t __declspec(property(get=get_CurrentManagedThreadId))  CurrentManagedThreadId;

static bool __declspec(property(get=get_HasShutdownStarted))  HasShutdownStarted;

static ::StringW __declspec(property(get=get_MachineName))  MachineName;

static ::StringW __declspec(property(get=get_NewLine))  NewLine;

static System::PlatformID __declspec(property(get=get_Platform))  Platform;

static System::OperatingSystem __declspec(property(get=get_OSVersion))  OSVersion;

static ::StringW __declspec(property(get=get_StackTrace))  StackTrace;

static int32_t __declspec(property(get=get_TickCount))  TickCount;

static ::StringW __declspec(property(get=get_UserDomainName))  UserDomainName;

static ::StringW __declspec(property(get=get_UserName))  UserName;

static int32_t __declspec(property(get=get_ProcessorCount))  ProcessorCount;

static bool __declspec(property(get=get_IsRunningOnWindows))  IsRunningOnWindows;

static bool __declspec(property(get=get_IsUnix))  IsUnix;


// Methods

/// @brief Method GetResourceString addr 0x24834bc size 0x4 virtual false final false
static ::StringW GetResourceString(::StringW key) ;

/// @brief Method GetResourceString addr 0x2485330 size 0x70 virtual false final false
static ::StringW GetResourceString(::StringW key, ::ArrayW<::bs_hook::Il2CppWrapperType> values) ;

/// @brief Method GetResourceStringEncodingName addr 0x2486abc size 0x17c virtual false final false
static ::StringW GetResourceStringEncodingName(int32_t codePage) ;

/// @brief Method get_CurrentDirectory addr 0x2486c38 size 0x8 virtual false final false
static ::StringW get_CurrentDirectory() ;

/// @brief Method get_CurrentManagedThreadId addr 0x2486c40 size 0x20 virtual false final false
static int32_t get_CurrentManagedThreadId() ;

/// @brief Method get_HasShutdownStarted addr 0x2486c60 size 0x4 virtual false final false
static bool get_HasShutdownStarted() ;

/// @brief Method get_MachineName addr 0x2486c64 size 0x4 virtual false final false
static ::StringW get_MachineName() ;

/// @brief Method GetNewLine addr 0x2486c68 size 0x4 virtual false final false
static ::StringW GetNewLine() ;

/// @brief Method get_NewLine addr 0x2486c6c size 0x68 virtual false final false
static ::StringW get_NewLine() ;

/// @brief Method get_Platform addr 0x2486cd4 size 0x4 virtual false final false
static System::PlatformID get_Platform() ;

/// @brief Method GetOSVersionString addr 0x2486cd8 size 0x4 virtual false final false
static ::StringW GetOSVersionString() ;

/// @brief Method get_OSVersion addr 0x2486cdc size 0xbc virtual false final false
static System::OperatingSystem get_OSVersion() ;

/// @brief Method CreateVersionFromString addr 0x2486d98 size 0x21c virtual false final false
static System::Version CreateVersionFromString(::StringW info) ;

/// @brief Method get_StackTrace addr 0x2486fb4 size 0x6c virtual false final false
static ::StringW get_StackTrace() ;

/// @brief Method get_TickCount addr 0x2487020 size 0x4 virtual false final false
static int32_t get_TickCount() ;

/// @brief Method get_UserDomainName addr 0x2487024 size 0x4 virtual false final false
static ::StringW get_UserDomainName() ;

/// @brief Method get_UserName addr 0x2487028 size 0x4 virtual false final false
static ::StringW get_UserName() ;

/// @brief Method Exit addr 0x248702c size 0x4 virtual false final false
static void Exit(int32_t exitCode) ;

/// @brief Method GetCommandLineArgs addr 0x2487030 size 0x4 virtual false final false
static ::ArrayW<::StringW> GetCommandLineArgs() ;

/// @brief Method internalGetEnvironmentVariable_native addr 0x2487034 size 0x4 virtual false final false
static ::StringW internalGetEnvironmentVariable_native(::cordl_internals::intptr_t variable) ;

/// @brief Method internalGetEnvironmentVariable addr 0x2487038 size 0xc8 virtual false final false
static ::StringW internalGetEnvironmentVariable(::StringW variable) ;

/// @brief Method GetEnvironmentVariable addr 0x2487100 size 0x4 virtual false final false
static ::StringW GetEnvironmentVariable(::StringW variable) ;

/// @brief Method GetEnvironmentVariables addr 0x2487104 size 0xcc virtual false final false
static System::Collections::IDictionary GetEnvironmentVariables() ;

/// @brief Method GetFolderPath addr 0x24871d4 size 0x8 virtual false final false
static ::StringW GetFolderPath(System::System__Environment__SpecialFolder folder) ;

/// @brief Method GetWindowsFolderPath addr 0x2487210 size 0x4 virtual false final false
static ::StringW GetWindowsFolderPath(int32_t folder) ;

/// @brief Method GetFolderPath addr 0x24871dc size 0x34 virtual false final false
static ::StringW GetFolderPath(System::System__Environment__SpecialFolder folder, System::System__Environment__SpecialFolderOption option) ;

/// @brief Method ReadXdgUserDir addr 0x24876cc size 0x474 virtual false final false
static ::StringW ReadXdgUserDir(::StringW config_dir, ::StringW home_dir, ::StringW key, ::StringW fallback) ;

/// @brief Method UnixGetFolderPath addr 0x248722c size 0x4a0 virtual false final false
static ::StringW UnixGetFolderPath(System::System__Environment__SpecialFolder folder, System::System__Environment__SpecialFolderOption option) ;

/// @brief Method GetEnvironmentVariable addr 0x2487b44 size 0x10 virtual false final false
static ::StringW GetEnvironmentVariable(::StringW variable, System::EnvironmentVariableTarget target) ;

/// @brief Method SetEnvironmentVariable addr 0x2487b54 size 0x17c virtual false final false
static void SetEnvironmentVariable(::StringW variable, ::StringW value) ;

/// @brief Method InternalSetEnvironmentVariable addr 0x2487d40 size 0x4 virtual false final false
static void InternalSetEnvironmentVariable(void* variable, int32_t variable_length, void* value, int32_t value_length) ;

/// @brief Method InternalSetEnvironmentVariable addr 0x2487cd0 size 0x70 virtual false final false
static void InternalSetEnvironmentVariable(::StringW variable, ::StringW value) ;

/// @brief Method FailFast addr 0x2487d44 size 0x8 virtual false final false
static void FailFast(::StringW message, System::Exception exception) ;

/// @brief Method FailFast addr 0x2487d4c size 0x4 virtual false final false
static void FailFast(::StringW message, System::Exception exception, ::StringW errorSource) ;

/// @brief Method get_ProcessorCount addr 0x2487d50 size 0x4 virtual false final false
static int32_t get_ProcessorCount() ;

/// @brief Method get_IsRunningOnWindows addr 0x2487214 size 0x18 virtual false final false
static bool get_IsRunningOnWindows() ;

/// @brief Method GetLogicalDrivesInternal addr 0x2487d54 size 0x4 virtual false final false
static ::ArrayW<::StringW> GetLogicalDrivesInternal() ;

/// @brief Method GetEnvironmentVariableNames addr 0x24871d0 size 0x4 virtual false final false
static ::ArrayW<::StringW> GetEnvironmentVariableNames() ;

/// @brief Method GetMachineConfigPath addr 0x2487d58 size 0x4 virtual false final false
static ::StringW GetMachineConfigPath() ;

/// @brief Method internalGetHome addr 0x2487b40 size 0x4 virtual false final false
static ::StringW internalGetHome() ;

/// @brief Method GetPageSize addr 0x2487d5c size 0x4 virtual false final false
static int32_t GetPageSize() ;

/// @brief Method get_IsUnix addr 0x2487d60 size 0x38 virtual false final false
static bool get_IsUnix() ;

/// @brief Method GetStackTrace addr 0x2487d98 size 0x98 virtual false final false
static ::StringW GetStackTrace(System::Exception e, bool needFileInfo) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::System__Environment__SpecialFolder, "System", "Environment/SpecialFolder");
DEFINE_IL2CPP_ARG_TYPE(System::System__Environment__SpecialFolderOption, "System", "Environment/SpecialFolderOption");
NEED_NO_BOX(System::Environment);
DEFINE_IL2CPP_ARG_TYPE(System::Environment, "System", "Environment");
