#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Diagnostics/zzzz__TraceListener_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Diagnostics {
class DefaultTraceListener;
}
// Type: System.Diagnostics::DefaultTraceListener
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7794))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7809))
// CS Name: System.Diagnostics.DefaultTraceListener
class CORDL_TYPE DefaultTraceListener : public System::Diagnostics::TraceListener {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~DefaultTraceListener() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTraceListener", modifiers: " const&", def_value: None }]
constexpr DefaultTraceListener(DefaultTraceListener const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTraceListener", modifiers: "&&", def_value: None }]
constexpr DefaultTraceListener(DefaultTraceListener&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultTraceListener(void* ptr) noexcept : System::Diagnostics::TraceListener(ptr) {
}


  constexpr DefaultTraceListener& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultTraceListener& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultTraceListener& operator=(DefaultTraceListener&& o) noexcept = default;
  constexpr DefaultTraceListener& operator=(DefaultTraceListener const& o) noexcept = default;
                


// Fields

static bool __declspec(property(get=__get_OnWin32, put=__set_OnWin32))  OnWin32;

static void __set_OnWin32(bool value) ;

static bool __get_OnWin32() ;

static ::StringW __declspec(property(get=__get_MonoTracePrefix, put=__set_MonoTracePrefix))  MonoTracePrefix;

static void __set_MonoTracePrefix(::StringW value) ;

static ::StringW __get_MonoTracePrefix() ;

static ::StringW __declspec(property(get=__get_MonoTraceFile, put=__set_MonoTraceFile))  MonoTraceFile;

static void __set_MonoTraceFile(::StringW value) ;

static ::StringW __get_MonoTraceFile() ;

 ::StringW __declspec(property(get=__get_logFileName, put=__set_logFileName))  logFileName;

constexpr void __set_logFileName(::StringW value) ;

constexpr ::StringW __get_logFileName() const;


// Properties

 ::StringW __declspec(property(get=get_LogFileName))  LogFileName;


// Methods

/// @brief Method GetPrefix addr 0x27e1010 size 0x7c virtual false final false
static ::StringW GetPrefix(::StringW var, ::StringW target) ;

static System::Diagnostics::DefaultTraceListener New_ctor() ;

/// @brief Method .ctor addr 0x27daee4 size 0x64 virtual false final false
 void _ctor() ;

/// @brief Method get_LogFileName addr 0x27e108c size 0x8 virtual false final false
 ::StringW get_LogFileName() ;

/// @brief Method WriteWindowsDebugString addr 0x27e1094 size 0x4 virtual false final false
static void WriteWindowsDebugString(void* message) ;

/// @brief Method WriteDebugString addr 0x27e1098 size 0xb0 virtual false final false
 void WriteDebugString(::StringW message) ;

/// @brief Method WriteMonoTrace addr 0x27e1148 size 0x1ac virtual false final false
 void WriteMonoTrace(::StringW message) ;

/// @brief Method WritePrefix addr 0x27e1570 size 0x88 virtual false final false
 void WritePrefix() ;

/// @brief Method WriteImpl addr 0x27e15f8 size 0xbc virtual false final false
 void WriteImpl(::StringW message) ;

/// @brief Method WriteLogFile addr 0x27e12f4 size 0x27c virtual false final false
 void WriteLogFile(::StringW message, ::StringW logFile) ;

/// @brief Method Write addr 0x27e16b4 size 0x4 virtual true final false
 void Write(::StringW message) ;

/// @brief Method WriteLine addr 0x27e16b8 size 0x48 virtual true final false
 void WriteLine(::StringW message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
NEED_NO_BOX(System::Diagnostics::DefaultTraceListener);
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::DefaultTraceListener, "System.Diagnostics", "DefaultTraceListener");
