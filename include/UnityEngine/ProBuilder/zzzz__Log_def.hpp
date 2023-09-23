#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace UnityEngine::ProBuilder {
struct LogOutput;
}
namespace UnityEngine {
struct LogType;
}
namespace UnityEngine::ProBuilder {
struct LogLevel;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Log;
}
// Type: UnityEngine.ProBuilder::Log
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12079))
// CS Name: UnityEngine.ProBuilder.Log
class CORDL_TYPE Log : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Log() = default;

// Ctor Parameters [CppParam { name: "", ty: "Log", modifiers: " const&", def_value: None }]
constexpr Log(Log const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Log", modifiers: "&&", def_value: None }]
constexpr Log(Log&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Log(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Log& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Log& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Log& operator=(Log&& o) noexcept = default;
  constexpr Log& operator=(Log const& o) noexcept = default;
                


// Fields

/// @brief Field k_ProBuilderLogFileName offset 0
static constexpr ::ConstString  k_ProBuilderLogFileName{u"ProBuilderLog.txt"};

static System::Collections::Generic::Stack_1<UnityEngine::ProBuilder::LogLevel> __declspec(property(get=__get_s_logStack, put=__set_s_logStack))  s_logStack;

static void __set_s_logStack(System::Collections::Generic::Stack_1<UnityEngine::ProBuilder::LogLevel> value) ;

static System::Collections::Generic::Stack_1<UnityEngine::ProBuilder::LogLevel> __get_s_logStack() ;

static UnityEngine::ProBuilder::LogLevel __declspec(property(get=__get_s_LogLevel, put=__set_s_LogLevel))  s_LogLevel;

static void __set_s_LogLevel(UnityEngine::ProBuilder::LogLevel value) ;

static UnityEngine::ProBuilder::LogLevel __get_s_LogLevel() ;

static UnityEngine::ProBuilder::LogOutput __declspec(property(get=__get_s_Output, put=__set_s_Output))  s_Output;

static void __set_s_Output(UnityEngine::ProBuilder::LogOutput value) ;

static UnityEngine::ProBuilder::LogOutput __get_s_Output() ;

static ::StringW __declspec(property(get=__get_s_LogFilePath, put=__set_s_LogFilePath))  s_LogFilePath;

static void __set_s_LogFilePath(::StringW value) ;

static ::StringW __get_s_LogFilePath() ;


// Methods

/// @brief Method PushLogLevel addr 0x29b399c size 0x90 virtual false final false
static void PushLogLevel(UnityEngine::ProBuilder::LogLevel level) ;

/// @brief Method PopLogLevel addr 0x29b3a2c size 0x88 virtual false final false
static void PopLogLevel() ;

/// @brief Method SetLogLevel addr 0x29b3ab4 size 0x5c virtual false final false
static void SetLogLevel(UnityEngine::ProBuilder::LogLevel level) ;

/// @brief Method SetOutput addr 0x29b3b10 size 0x5c virtual false final false
static void SetOutput(UnityEngine::ProBuilder::LogOutput output) ;

/// @brief Method SetLogFile addr 0x29b3b6c size 0x5c virtual false final false
static void SetLogFile(::StringW path) ;

/// @brief Method Debug addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void Debug(T value) ;

/// @brief Method Debug addr 0x29b3bc8 size 0x58 virtual false final false
static void Debug(::StringW message) ;

/// @brief Method Debug addr 0x29b3cf0 size 0x4 virtual false final false
static void Debug(::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> values) ;

/// @brief Method Info addr 0x29b3cf4 size 0x78 virtual false final false
static void Info(::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> values) ;

/// @brief Method Info addr 0x29b3d6c size 0x80 virtual false final false
static void Info(::StringW message) ;

/// @brief Method Warning addr 0x29b3dec size 0x78 virtual false final false
static void Warning(::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> values) ;

/// @brief Method Warning addr 0x29b3e64 size 0x80 virtual false final false
static void Warning(::StringW message) ;

/// @brief Method Error addr 0x29b3ee4 size 0x78 virtual false final false
static void Error(::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> values) ;

/// @brief Method Error addr 0x29a78d0 size 0x80 virtual false final false
static void Error(::StringW message) ;

/// @brief Method Watch addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T,typename K>
static void Watch(T key, K value) ;

/// @brief Method DoPrint addr 0x29b3c20 size 0xd0 virtual false final false
static void DoPrint(::StringW message, UnityEngine::LogType type) ;

/// @brief Method PrintToFile addr 0x29b4030 size 0x3d8 virtual false final false
static void PrintToFile(::StringW message, ::StringW path) ;

/// @brief Method ClearLogFile addr 0x29b4408 size 0x90 virtual false final false
static void ClearLogFile() ;

/// @brief Method PrintToConsole addr 0x29b3f5c size 0xd4 virtual false final false
static void PrintToConsole(::StringW message, UnityEngine::LogType type) ;

/// @brief Method NotNull addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void NotNull(T obj, ::StringW message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::Log);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Log, "UnityEngine.ProBuilder", "Log");
