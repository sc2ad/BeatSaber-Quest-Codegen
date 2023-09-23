#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Diagnostics {
class ProcessInfo;
}
namespace System::Threading {
class RegisteredWaitHandle;
}
namespace System::ComponentModel {
class ISynchronizeInvoke;
}
namespace System::Diagnostics {
class ProcessModuleCollection;
}
namespace System::IO {
class StreamReader;
}
namespace System::Threading {
class WaitHandle;
}
namespace System::IO {
class StreamWriter;
}
namespace System {
class EventHandler;
}
namespace System::Diagnostics {
class ProcessStartInfo;
}
namespace System::Diagnostics {
class AsyncStreamReader;
}
namespace System::Diagnostics {
class ProcessThreadTimes;
}
namespace Microsoft::Win32::SafeHandles {
class SafeProcessHandle;
}
namespace System::Diagnostics {
class ProcessThreadCollection;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Diagnostics {
struct System__Diagnostics__Process__State;
}
namespace System::Diagnostics {
struct System__Diagnostics__Process__StreamReadMode;
}
namespace System::Diagnostics {
class Process;
}
namespace System::Diagnostics {
struct System__Diagnostics__Process__ProcInfo;
}
// Type: ::StreamReadMode
namespace System::Diagnostics {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7799))
// CS Name: System.Diagnostics.Process::StreamReadMode
struct CORDL_TYPE System__Diagnostics__Process__StreamReadMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Diagnostics__Process__StreamReadMode(int32_t value__) noexcept;


                    constexpr System__Diagnostics__Process__StreamReadMode(System__Diagnostics__Process__StreamReadMode const&) = default;
                    constexpr System__Diagnostics__Process__StreamReadMode(System__Diagnostics__Process__StreamReadMode&&) = default;
                    constexpr System__Diagnostics__Process__StreamReadMode& operator=(System__Diagnostics__Process__StreamReadMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Diagnostics__Process__StreamReadMode& operator=(System__Diagnostics__Process__StreamReadMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Diagnostics__Process__StreamReadMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Diagnostics__Process__StreamReadMode_Unwrapped : int32_t {
__undefined = 0,
__syncMode = 1,
__asyncMode = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Diagnostics__Process__StreamReadMode_Unwrapped () const noexcept {
return std::bit_cast<__System__Diagnostics__Process__StreamReadMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field undefined offset 0
static System::Diagnostics::System__Diagnostics__Process__StreamReadMode const undefined;

/// @brief Field syncMode offset 0
static System::Diagnostics::System__Diagnostics__Process__StreamReadMode const syncMode;

/// @brief Field asyncMode offset 0
static System::Diagnostics::System__Diagnostics__Process__StreamReadMode const asyncMode;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Diagnostics
// Type: ::State
namespace System::Diagnostics {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7800))
// CS Name: System.Diagnostics.Process::State
struct CORDL_TYPE System__Diagnostics__Process__State : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Diagnostics__Process__State(int32_t value__) noexcept;


                    constexpr System__Diagnostics__Process__State(System__Diagnostics__Process__State const&) = default;
                    constexpr System__Diagnostics__Process__State(System__Diagnostics__Process__State&&) = default;
                    constexpr System__Diagnostics__Process__State& operator=(System__Diagnostics__Process__State const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Diagnostics__Process__State& operator=(System__Diagnostics__Process__State&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Diagnostics__Process__State(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Diagnostics__Process__State_Unwrapped : int32_t {
__HaveId = 1,
__IsLocal = 2,
__IsNt = 4,
__HaveProcessInfo = 8,
__Exited = 16,
__Associated = 32,
__IsWin2k = 64,
__HaveNtProcessInfo = 12,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Diagnostics__Process__State_Unwrapped () const noexcept {
return std::bit_cast<__System__Diagnostics__Process__State_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HaveId offset 0
static System::Diagnostics::System__Diagnostics__Process__State const HaveId;

/// @brief Field IsLocal offset 0
static System::Diagnostics::System__Diagnostics__Process__State const IsLocal;

/// @brief Field IsNt offset 0
static System::Diagnostics::System__Diagnostics__Process__State const IsNt;

/// @brief Field HaveProcessInfo offset 0
static System::Diagnostics::System__Diagnostics__Process__State const HaveProcessInfo;

/// @brief Field Exited offset 0
static System::Diagnostics::System__Diagnostics__Process__State const Exited;

/// @brief Field Associated offset 0
static System::Diagnostics::System__Diagnostics__Process__State const Associated;

/// @brief Field IsWin2k offset 0
static System::Diagnostics::System__Diagnostics__Process__State const IsWin2k;

/// @brief Field HaveNtProcessInfo offset 0
static System::Diagnostics::System__Diagnostics__Process__State const HaveNtProcessInfo;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Diagnostics
// Type: ::ProcInfo
namespace System::Diagnostics {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7801))
// CS Name: System.Diagnostics.Process::ProcInfo
struct CORDL_TYPE System__Diagnostics__Process__ProcInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "process_handle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "pid", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "envVariables", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "UserName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Domain", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Password", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "LoadUserProfile", ty: "bool", modifiers: "", def_value: None }]
constexpr System__Diagnostics__Process__ProcInfo(::cordl_internals::intptr_t process_handle, int32_t pid, ::ArrayW<::StringW> envVariables, ::StringW UserName, ::StringW Domain, ::cordl_internals::intptr_t Password, bool LoadUserProfile) noexcept;


                    constexpr System__Diagnostics__Process__ProcInfo(System__Diagnostics__Process__ProcInfo const&) = default;
                    constexpr System__Diagnostics__Process__ProcInfo(System__Diagnostics__Process__ProcInfo&&) = default;
                    constexpr System__Diagnostics__Process__ProcInfo& operator=(System__Diagnostics__Process__ProcInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Diagnostics__Process__ProcInfo& operator=(System__Diagnostics__Process__ProcInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Diagnostics__Process__ProcInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_process_handle, put=__set_process_handle))  process_handle;

constexpr void __set_process_handle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_process_handle() const;

 int32_t __declspec(property(get=__get_pid, put=__set_pid))  pid;

constexpr void __set_pid(int32_t value) ;

constexpr int32_t __get_pid() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_envVariables, put=__set_envVariables))  envVariables;

constexpr void __set_envVariables(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_envVariables() const;

 ::StringW __declspec(property(get=__get_UserName, put=__set_UserName))  UserName;

constexpr void __set_UserName(::StringW value) ;

constexpr ::StringW __get_UserName() const;

 ::StringW __declspec(property(get=__get_Domain, put=__set_Domain))  Domain;

constexpr void __set_Domain(::StringW value) ;

constexpr ::StringW __get_Domain() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_Password, put=__set_Password))  Password;

constexpr void __set_Password(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_Password() const;

 bool __declspec(property(get=__get_LoadUserProfile, put=__set_LoadUserProfile))  LoadUserProfile;

constexpr void __set_LoadUserProfile(bool value) ;

constexpr bool __get_LoadUserProfile() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Diagnostics
// Type: System.Diagnostics::Process
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8320))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7802))
// CS Name: System.Diagnostics.Process
class CORDL_TYPE Process : public System::ComponentModel::Component {
public:
// Declarations
using ProcInfo = System::Diagnostics::System__Diagnostics__Process__ProcInfo;

using State = System::Diagnostics::System__Diagnostics__Process__State;

using StreamReadMode = System::Diagnostics::System__Diagnostics__Process__StreamReadMode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf0};

virtual ~Process() = default;

// Ctor Parameters [CppParam { name: "", ty: "Process", modifiers: " const&", def_value: None }]
constexpr Process(Process const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Process", modifiers: "&&", def_value: None }]
constexpr Process(Process&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Process(void* ptr) noexcept : System::ComponentModel::Component(ptr) {
}


  constexpr Process& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Process& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Process& operator=(Process&& o) noexcept = default;
  constexpr Process& operator=(Process const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_haveProcessId, put=__set_haveProcessId))  haveProcessId;

constexpr void __set_haveProcessId(bool value) ;

constexpr bool __get_haveProcessId() const;

 int32_t __declspec(property(get=__get_processId, put=__set_processId))  processId;

constexpr void __set_processId(int32_t value) ;

constexpr int32_t __get_processId() const;

 bool __declspec(property(get=__get_haveProcessHandle, put=__set_haveProcessHandle))  haveProcessHandle;

constexpr void __set_haveProcessHandle(bool value) ;

constexpr bool __get_haveProcessHandle() const;

 Microsoft::Win32::SafeHandles::SafeProcessHandle __declspec(property(get=__get_m_processHandle, put=__set_m_processHandle))  m_processHandle;

constexpr void __set_m_processHandle(Microsoft::Win32::SafeHandles::SafeProcessHandle value) ;

constexpr Microsoft::Win32::SafeHandles::SafeProcessHandle __get_m_processHandle() const;

 bool __declspec(property(get=__get_isRemoteMachine, put=__set_isRemoteMachine))  isRemoteMachine;

constexpr void __set_isRemoteMachine(bool value) ;

constexpr bool __get_isRemoteMachine() const;

 ::StringW __declspec(property(get=__get_machineName, put=__set_machineName))  machineName;

constexpr void __set_machineName(::StringW value) ;

constexpr ::StringW __get_machineName() const;

 int32_t __declspec(property(get=__get_m_processAccess, put=__set_m_processAccess))  m_processAccess;

constexpr void __set_m_processAccess(int32_t value) ;

constexpr int32_t __get_m_processAccess() const;

 System::Diagnostics::ProcessThreadCollection __declspec(property(get=__get_threads, put=__set_threads))  threads;

constexpr void __set_threads(System::Diagnostics::ProcessThreadCollection value) ;

constexpr System::Diagnostics::ProcessThreadCollection __get_threads() const;

 System::Diagnostics::ProcessModuleCollection __declspec(property(get=__get_modules, put=__set_modules))  modules;

constexpr void __set_modules(System::Diagnostics::ProcessModuleCollection value) ;

constexpr System::Diagnostics::ProcessModuleCollection __get_modules() const;

 bool __declspec(property(get=__get_haveWorkingSetLimits, put=__set_haveWorkingSetLimits))  haveWorkingSetLimits;

constexpr void __set_haveWorkingSetLimits(bool value) ;

constexpr bool __get_haveWorkingSetLimits() const;

 bool __declspec(property(get=__get_havePriorityClass, put=__set_havePriorityClass))  havePriorityClass;

constexpr void __set_havePriorityClass(bool value) ;

constexpr bool __get_havePriorityClass() const;

 System::Diagnostics::ProcessStartInfo __declspec(property(get=__get_startInfo, put=__set_startInfo))  startInfo;

constexpr void __set_startInfo(System::Diagnostics::ProcessStartInfo value) ;

constexpr System::Diagnostics::ProcessStartInfo __get_startInfo() const;

 bool __declspec(property(get=__get_watchForExit, put=__set_watchForExit))  watchForExit;

constexpr void __set_watchForExit(bool value) ;

constexpr bool __get_watchForExit() const;

 bool __declspec(property(get=__get_watchingForExit, put=__set_watchingForExit))  watchingForExit;

constexpr void __set_watchingForExit(bool value) ;

constexpr bool __get_watchingForExit() const;

 System::EventHandler __declspec(property(get=__get_onExited, put=__set_onExited))  onExited;

constexpr void __set_onExited(System::EventHandler value) ;

constexpr System::EventHandler __get_onExited() const;

 bool __declspec(property(get=__get_exited, put=__set_exited))  exited;

constexpr void __set_exited(bool value) ;

constexpr bool __get_exited() const;

 int32_t __declspec(property(get=__get_exitCode, put=__set_exitCode))  exitCode;

constexpr void __set_exitCode(int32_t value) ;

constexpr int32_t __get_exitCode() const;

 bool __declspec(property(get=__get_signaled, put=__set_signaled))  signaled;

constexpr void __set_signaled(bool value) ;

constexpr bool __get_signaled() const;

 bool __declspec(property(get=__get_haveExitTime, put=__set_haveExitTime))  haveExitTime;

constexpr void __set_haveExitTime(bool value) ;

constexpr bool __get_haveExitTime() const;

 bool __declspec(property(get=__get_raisedOnExited, put=__set_raisedOnExited))  raisedOnExited;

constexpr void __set_raisedOnExited(bool value) ;

constexpr bool __get_raisedOnExited() const;

 System::Threading::RegisteredWaitHandle __declspec(property(get=__get_registeredWaitHandle, put=__set_registeredWaitHandle))  registeredWaitHandle;

constexpr void __set_registeredWaitHandle(System::Threading::RegisteredWaitHandle value) ;

constexpr System::Threading::RegisteredWaitHandle __get_registeredWaitHandle() const;

 System::Threading::WaitHandle __declspec(property(get=__get_waitHandle, put=__set_waitHandle))  waitHandle;

constexpr void __set_waitHandle(System::Threading::WaitHandle value) ;

constexpr System::Threading::WaitHandle __get_waitHandle() const;

 System::ComponentModel::ISynchronizeInvoke __declspec(property(get=__get_synchronizingObject, put=__set_synchronizingObject))  synchronizingObject;

constexpr void __set_synchronizingObject(System::ComponentModel::ISynchronizeInvoke value) ;

constexpr System::ComponentModel::ISynchronizeInvoke __get_synchronizingObject() const;

 System::IO::StreamReader __declspec(property(get=__get_standardOutput, put=__set_standardOutput))  standardOutput;

constexpr void __set_standardOutput(System::IO::StreamReader value) ;

constexpr System::IO::StreamReader __get_standardOutput() const;

 System::IO::StreamWriter __declspec(property(get=__get_standardInput, put=__set_standardInput))  standardInput;

constexpr void __set_standardInput(System::IO::StreamWriter value) ;

constexpr System::IO::StreamWriter __get_standardInput() const;

 System::IO::StreamReader __declspec(property(get=__get_standardError, put=__set_standardError))  standardError;

constexpr void __set_standardError(System::IO::StreamReader value) ;

constexpr System::IO::StreamReader __get_standardError() const;

 bool __declspec(property(get=__get_disposed, put=__set_disposed))  disposed;

constexpr void __set_disposed(bool value) ;

constexpr bool __get_disposed() const;

 System::Diagnostics::System__Diagnostics__Process__StreamReadMode __declspec(property(get=__get_outputStreamReadMode, put=__set_outputStreamReadMode))  outputStreamReadMode;

constexpr void __set_outputStreamReadMode(System::Diagnostics::System__Diagnostics__Process__StreamReadMode value) ;

constexpr System::Diagnostics::System__Diagnostics__Process__StreamReadMode __get_outputStreamReadMode() const;

 System::Diagnostics::System__Diagnostics__Process__StreamReadMode __declspec(property(get=__get_errorStreamReadMode, put=__set_errorStreamReadMode))  errorStreamReadMode;

constexpr void __set_errorStreamReadMode(System::Diagnostics::System__Diagnostics__Process__StreamReadMode value) ;

constexpr System::Diagnostics::System__Diagnostics__Process__StreamReadMode __get_errorStreamReadMode() const;

 System::Diagnostics::System__Diagnostics__Process__StreamReadMode __declspec(property(get=__get_inputStreamReadMode, put=__set_inputStreamReadMode))  inputStreamReadMode;

constexpr void __set_inputStreamReadMode(System::Diagnostics::System__Diagnostics__Process__StreamReadMode value) ;

constexpr System::Diagnostics::System__Diagnostics__Process__StreamReadMode __get_inputStreamReadMode() const;

 System::Diagnostics::AsyncStreamReader __declspec(property(get=__get_output, put=__set_output))  output;

constexpr void __set_output(System::Diagnostics::AsyncStreamReader value) ;

constexpr System::Diagnostics::AsyncStreamReader __get_output() const;

 System::Diagnostics::AsyncStreamReader __declspec(property(get=__get_error, put=__set_error))  error;

constexpr void __set_error(System::Diagnostics::AsyncStreamReader value) ;

constexpr System::Diagnostics::AsyncStreamReader __get_error() const;

 ::StringW __declspec(property(get=__get_process_name, put=__set_process_name))  process_name;

constexpr void __set_process_name(::StringW value) ;

constexpr ::StringW __get_process_name() const;


// Properties

 bool __declspec(property(get=get_Associated))  Associated;

 bool __declspec(property(get=get_HasExited))  HasExited;

 ::cordl_internals::intptr_t __declspec(property(get=get_Handle))  Handle;

 int32_t __declspec(property(get=get_Id))  Id;

 System::Diagnostics::ProcessStartInfo __declspec(property(get=get_StartInfo))  StartInfo;

 System::ComponentModel::ISynchronizeInvoke __declspec(property(get=get_SynchronizingObject))  SynchronizingObject;

 System::TimeSpan __declspec(property(get=get_TotalProcessorTime))  TotalProcessorTime;

 ::StringW __declspec(property(get=get_ProcessName))  ProcessName;

static bool __declspec(property(get=get_IsWindows))  IsWindows;


// Methods

// Ctor Parameters []
explicit Process() ;

/// @brief Method .ctor addr 0x27dca14 size 0x88 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "machineName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isRemoteMachine", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "processId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "processInfo", ty: "System::Diagnostics::ProcessInfo", modifiers: "", def_value: None }]
explicit Process(::StringW machineName, bool isRemoteMachine, int32_t processId, System::Diagnostics::ProcessInfo processInfo) ;

/// @brief Method .ctor addr 0x27dca9c size 0x9c virtual false final false
 void _ctor(::StringW machineName, bool isRemoteMachine, int32_t processId, System::Diagnostics::ProcessInfo processInfo) ;

/// @brief Method get_Associated addr 0x27dcb38 size 0x20 virtual false final false
 bool get_Associated() ;

/// @brief Method get_HasExited addr 0x27dcb58 size 0x370 virtual false final false
 bool get_HasExited() ;

/// @brief Method GetProcessTimes addr 0x27dd6f8 size 0x2c8 virtual false final false
 System::Diagnostics::ProcessThreadTimes GetProcessTimes() ;

/// @brief Method get_Handle addr 0x27dd9c8 size 0x30 virtual false final false
 ::cordl_internals::intptr_t get_Handle() ;

/// @brief Method get_Id addr 0x27dab88 size 0x1c virtual false final false
 int32_t get_Id() ;

/// @brief Method get_StartInfo addr 0x27ddab4 size 0x6c virtual false final false
 System::Diagnostics::ProcessStartInfo get_StartInfo() ;

/// @brief Method get_SynchronizingObject addr 0x27ddba4 size 0x1a0 virtual false final false
 System::ComponentModel::ISynchronizeInvoke get_SynchronizingObject() ;

/// @brief Method get_TotalProcessorTime addr 0x27ddd44 size 0x20 virtual false final false
 System::TimeSpan get_TotalProcessorTime() ;

/// @brief Method ReleaseProcessHandle addr 0x27ddd70 size 0x28 virtual false final false
 void ReleaseProcessHandle(Microsoft::Win32::SafeHandles::SafeProcessHandle handle) ;

/// @brief Method CompletionCallback addr 0x27ddd98 size 0x18 virtual false final false
 void CompletionCallback(::bs_hook::Il2CppWrapperType context, bool wasSignaled) ;

/// @brief Method Dispose addr 0x27ddec4 size 0x50 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Close addr 0x27ddf14 size 0x158 virtual false final false
 void Close() ;

/// @brief Method EnsureState addr 0x27dcec8 size 0x138 virtual false final false
 void EnsureState(System::Diagnostics::System__Diagnostics__Process__State state) ;

/// @brief Method EnsureWatchingForExit addr 0x27de080 size 0x234 virtual false final false
 void EnsureWatchingForExit() ;

/// @brief Method GetProcessById addr 0x27de2b4 size 0x48 virtual false final false
static System::Diagnostics::Process GetProcessById(int32_t processId) ;

/// @brief Method GetCurrentProcess addr 0x27dab00 size 0x88 virtual false final false
static System::Diagnostics::Process GetCurrentProcess() ;

/// @brief Method OnExited addr 0x27de4d4 size 0x240 virtual false final false
 void OnExited() ;

/// @brief Method GetProcessHandle addr 0x27dd000 size 0x4c4 virtual false final false
 Microsoft::Win32::SafeHandles::SafeProcessHandle GetProcessHandle(int32_t access, bool throwIfExited) ;

/// @brief Method GetProcessHandle addr 0x27de714 size 0x8 virtual false final false
 Microsoft::Win32::SafeHandles::SafeProcessHandle GetProcessHandle(int32_t access) ;

/// @brief Method OpenProcessHandle addr 0x27dd9f8 size 0xbc virtual false final false
 Microsoft::Win32::SafeHandles::SafeProcessHandle OpenProcessHandle(int32_t access) ;

/// @brief Method Refresh addr 0x27de06c size 0x14 virtual false final false
 void Refresh() ;

/// @brief Method SetProcessHandle addr 0x27de71c size 0x1c virtual false final false
 void SetProcessHandle(Microsoft::Win32::SafeHandles::SafeProcessHandle processHandle) ;

/// @brief Method SetProcessId addr 0x27de738 size 0x10 virtual false final false
 void SetProcessId(int32_t processId) ;

/// @brief Method Start addr 0x27de748 size 0xfc virtual false final false
 bool Start() ;

/// @brief Method StopWatchingForExit addr 0x27dddb0 size 0x114 virtual false final false
 void StopWatchingForExit() ;

/// @brief Method ToString addr 0x27e0038 size 0x16c virtual true final false
 ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "handle", ty: "Microsoft::Win32::SafeHandles::SafeProcessHandle", modifiers: "", def_value: None }, CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: None }]
explicit Process(Microsoft::Win32::SafeHandles::SafeProcessHandle handle, int32_t id) ;

/// @brief Method .ctor addr 0x27e01a4 size 0x90 virtual false final false
 void _ctor(Microsoft::Win32::SafeHandles::SafeProcessHandle handle, int32_t id) ;

/// @brief Method ProcessName_icall addr 0x27e0234 size 0x4 virtual false final false
static ::StringW ProcessName_icall(::cordl_internals::intptr_t handle) ;

/// @brief Method ProcessName_internal addr 0x27e0238 size 0xe0 virtual false final false
static ::StringW ProcessName_internal(Microsoft::Win32::SafeHandles::SafeProcessHandle handle) ;

/// @brief Method get_ProcessName addr 0x27daba4 size 0x230 virtual false final false
 ::StringW get_ProcessName() ;

/// @brief Method GetProcess_internal addr 0x27e0318 size 0x4 virtual false final false
static ::cordl_internals::intptr_t GetProcess_internal(int32_t pid) ;

/// @brief Method GetProcessById addr 0x27de2fc size 0x1d8 virtual false final false
static System::Diagnostics::Process GetProcessById(int32_t processId, ::StringW machineName) ;

/// @brief Method IsLocalMachine addr 0x27e031c size 0x90 virtual false final false
static bool IsLocalMachine(::StringW machineName) ;

/// @brief Method ShellExecuteEx_internal addr 0x27e03ac size 0x4 virtual false final false
static bool ShellExecuteEx_internal(System::Diagnostics::ProcessStartInfo startInfo, ByRef<System::Diagnostics::System__Diagnostics__Process__ProcInfo> procInfo) ;

/// @brief Method CreateProcess_internal addr 0x27e03b0 size 0x4 virtual false final false
static bool CreateProcess_internal(System::Diagnostics::ProcessStartInfo startInfo, ::cordl_internals::intptr_t stdin, ::cordl_internals::intptr_t stdout, ::cordl_internals::intptr_t stderr, ByRef<System::Diagnostics::System__Diagnostics__Process__ProcInfo> procInfo) ;

/// @brief Method StartWithShellExecuteEx addr 0x27de898 size 0x3c8 virtual false final false
 bool StartWithShellExecuteEx(System::Diagnostics::ProcessStartInfo startInfo) ;

/// @brief Method CreatePipe addr 0x27e0548 size 0x19c virtual false final false
static void CreatePipe(ByRef<::cordl_internals::intptr_t> read, ByRef<::cordl_internals::intptr_t> write, bool writeDirection) ;

/// @brief Method get_IsWindows addr 0x27e06e4 size 0x34 virtual false final false
static bool get_IsWindows() ;

/// @brief Method StartWithCreateProcess addr 0x27dec60 size 0x13d8 virtual false final false
 bool StartWithCreateProcess(System::Diagnostics::ProcessStartInfo startInfo) ;

/// @brief Method FillUserInfo addr 0x27e0408 size 0x140 virtual false final false
static void FillUserInfo(System::Diagnostics::ProcessStartInfo startInfo, ByRef<System::Diagnostics::System__Diagnostics__Process__ProcInfo> procInfo) ;

/// @brief Method RaiseOnExited addr 0x27dd618 size 0xe0 virtual false final false
 void RaiseOnExited() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::System__Diagnostics__Process__State, "System.Diagnostics", "Process/State");
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::System__Diagnostics__Process__StreamReadMode, "System.Diagnostics", "Process/StreamReadMode");
NEED_NO_BOX(System::Diagnostics::Process);
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Process, "System.Diagnostics", "Process");
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::System__Diagnostics__Process__ProcInfo, "System.Diagnostics", "Process/ProcInfo");
