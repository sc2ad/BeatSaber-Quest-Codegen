#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
struct DateTime;
}
namespace System::Collections {
class Stack;
}
// Forward declare root types
namespace System::Diagnostics {
class TraceEventCache;
}
// Type: System.Diagnostics::TraceEventCache
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7789))
// CS Name: System.Diagnostics.TraceEventCache
class CORDL_TYPE TraceEventCache : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~TraceEventCache() = default;

// Ctor Parameters [CppParam { name: "", ty: "TraceEventCache", modifiers: " const&", def_value: None }]
constexpr TraceEventCache(TraceEventCache const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TraceEventCache", modifiers: "&&", def_value: None }]
constexpr TraceEventCache(TraceEventCache&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TraceEventCache(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TraceEventCache& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TraceEventCache& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TraceEventCache& operator=(TraceEventCache&& o) noexcept = default;
  constexpr TraceEventCache& operator=(TraceEventCache const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_processId, put=__set_processId))  processId;

static void __set_processId(int32_t value) ;

static int32_t __get_processId() ;

static ::StringW __declspec(property(get=__get_processName, put=__set_processName))  processName;

static void __set_processName(::StringW value) ;

static ::StringW __get_processName() ;

 int64_t __declspec(property(get=__get_timeStamp, put=__set_timeStamp))  timeStamp;

constexpr void __set_timeStamp(int64_t value) ;

constexpr int64_t __get_timeStamp() const;

 System::DateTime __declspec(property(get=__get_dateTime, put=__set_dateTime))  dateTime;

constexpr void __set_dateTime(System::DateTime value) ;

constexpr System::DateTime __get_dateTime() const;

 ::StringW __declspec(property(get=__get_stackTrace, put=__set_stackTrace))  stackTrace;

constexpr void __set_stackTrace(::StringW value) ;

constexpr ::StringW __get_stackTrace() const;


// Properties

 ::StringW __declspec(property(get=get_Callstack))  Callstack;

 System::Collections::Stack __declspec(property(get=get_LogicalOperationStack))  LogicalOperationStack;

 System::DateTime __declspec(property(get=get_DateTime))  DateTime;

 int32_t __declspec(property(get=get_ProcessId))  ProcessId;

 ::StringW __declspec(property(get=get_ThreadId))  ThreadId;

 int64_t __declspec(property(get=get_Timestamp))  Timestamp;


// Methods

/// @brief Method get_Callstack addr 0x27da7b4 size 0x20 virtual false final false
 ::StringW get_Callstack() ;

/// @brief Method get_LogicalOperationStack addr 0x27da7d4 size 0x18 virtual false final false
 System::Collections::Stack get_LogicalOperationStack() ;

/// @brief Method get_DateTime addr 0x27da7ec size 0x94 virtual false final false
 System::DateTime get_DateTime() ;

/// @brief Method get_ProcessId addr 0x27da880 size 0x4 virtual false final false
 int32_t get_ProcessId() ;

/// @brief Method get_ThreadId addr 0x27da8d8 size 0x70 virtual false final false
 ::StringW get_ThreadId() ;

/// @brief Method get_Timestamp addr 0x27da968 size 0x64 virtual false final false
 int64_t get_Timestamp() ;

/// @brief Method InitProcessInfo addr 0x27da9d0 size 0x130 virtual false final false
static void InitProcessInfo() ;

/// @brief Method GetProcessId addr 0x27da884 size 0x54 virtual false final false
static int32_t GetProcessId() ;

/// @brief Method GetThreadId addr 0x27da948 size 0x20 virtual false final false
static int32_t GetThreadId() ;

// Ctor Parameters []
explicit TraceEventCache() ;

/// @brief Method .ctor addr 0x27dadd4 size 0x70 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
NEED_NO_BOX(System::Diagnostics::TraceEventCache);
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::TraceEventCache, "System.Diagnostics", "TraceEventCache");
