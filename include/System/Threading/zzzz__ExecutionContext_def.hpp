#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class IDisposable;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Remoting::Messaging {
class LogicalCallContext;
}
namespace System::Threading {
struct StackCrawlMark;
}
namespace System::Threading {
struct ExecutionContextSwitcher;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Threading {
class ContextCallback;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Threading {
class IAsyncLocal;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Remoting::Messaging {
class IllogicalCallContext;
}
namespace System::Threading {
class Thread;
}
namespace System::Runtime::Remoting::Messaging {
struct System__Runtime__Remoting__Messaging__LogicalCallContext__Reader;
}
// Forward declare root types
namespace System::Threading {
struct System__Threading__ExecutionContext__CaptureOptions;
}
namespace System::Threading {
struct System__Threading__ExecutionContext__Flags;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System::Threading {
struct System__Threading__ExecutionContext__Reader;
}
// Type: ::Flags
namespace System::Threading {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2710))
// CS Name: System.Threading.ExecutionContext::Flags
struct CORDL_TYPE System__Threading__ExecutionContext__Flags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Threading__ExecutionContext__Flags(int32_t value__) noexcept;


                    constexpr System__Threading__ExecutionContext__Flags(System__Threading__ExecutionContext__Flags const&) = default;
                    constexpr System__Threading__ExecutionContext__Flags(System__Threading__ExecutionContext__Flags&&) = default;
                    constexpr System__Threading__ExecutionContext__Flags& operator=(System__Threading__ExecutionContext__Flags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Threading__ExecutionContext__Flags& operator=(System__Threading__ExecutionContext__Flags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Threading__ExecutionContext__Flags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Threading__ExecutionContext__Flags_Unwrapped : int32_t {
__None = 0,
__IsNewCapture = 1,
__IsFlowSuppressed = 2,
__IsPreAllocatedDefault = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Threading__ExecutionContext__Flags_Unwrapped () const noexcept {
return std::bit_cast<__System__Threading__ExecutionContext__Flags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::Threading::System__Threading__ExecutionContext__Flags const None;

/// @brief Field IsNewCapture offset 0
static System::Threading::System__Threading__ExecutionContext__Flags const IsNewCapture;

/// @brief Field IsFlowSuppressed offset 0
static System::Threading::System__Threading__ExecutionContext__Flags const IsFlowSuppressed;

/// @brief Field IsPreAllocatedDefault offset 0
static System::Threading::System__Threading__ExecutionContext__Flags const IsPreAllocatedDefault;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: ::Reader
namespace System::Threading {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2711))
// CS Name: System.Threading.ExecutionContext::Reader
struct CORDL_TYPE System__Threading__ExecutionContext__Reader : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_ec", ty: "System::Threading::ExecutionContext", modifiers: "", def_value: None }]
constexpr System__Threading__ExecutionContext__Reader(System::Threading::ExecutionContext m_ec) noexcept;


                    constexpr System__Threading__ExecutionContext__Reader(System__Threading__ExecutionContext__Reader const&) = default;
                    constexpr System__Threading__ExecutionContext__Reader(System__Threading__ExecutionContext__Reader&&) = default;
                    constexpr System__Threading__ExecutionContext__Reader& operator=(System__Threading__ExecutionContext__Reader const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Threading__ExecutionContext__Reader& operator=(System__Threading__ExecutionContext__Reader&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Threading__ExecutionContext__Reader(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Threading::ExecutionContext __declspec(property(get=__get_m_ec, put=__set_m_ec))  m_ec;

constexpr void __set_m_ec(System::Threading::ExecutionContext value) ;

constexpr System::Threading::ExecutionContext __get_m_ec() const;


// Properties

 bool __declspec(property(get=get_IsNull))  IsNull;

 bool __declspec(property(get=get_IsFlowSuppressed))  IsFlowSuppressed;

 System::Threading::SynchronizationContext __declspec(property(get=get_SynchronizationContext))  SynchronizationContext;

 System::Threading::SynchronizationContext __declspec(property(get=get_SynchronizationContextNoFlow))  SynchronizationContextNoFlow;

 System::Runtime::Remoting::Messaging::System__Runtime__Remoting__Messaging__LogicalCallContext__Reader __declspec(property(get=get_LogicalCallContext))  LogicalCallContext;


// Methods

/// @brief Method .ctor addr 0x24aaf08 size 0x8 virtual false final false
 void _ctor(System::Threading::ExecutionContext ec) ;

/// @brief Method DangerousGetRawExecutionContext addr 0x24aaf10 size 0x8 virtual false final false
 System::Threading::ExecutionContext DangerousGetRawExecutionContext() ;

/// @brief Method get_IsNull addr 0x24aa4f8 size 0x10 virtual false final false
 bool get_IsNull() ;

/// @brief Method IsDefaultFTContext addr 0x24aa508 size 0x1c virtual false final false
 bool IsDefaultFTContext(bool ignoreSyncCtx) ;

/// @brief Method get_IsFlowSuppressed addr 0x24aaf18 size 0x1c virtual false final false
 bool get_IsFlowSuppressed() ;

/// @brief Method get_SynchronizationContext addr 0x24aa7e4 size 0x18 virtual false final false
 System::Threading::SynchronizationContext get_SynchronizationContext() ;

/// @brief Method get_SynchronizationContextNoFlow addr 0x24aa7fc size 0x18 virtual false final false
 System::Threading::SynchronizationContext get_SynchronizationContextNoFlow() ;

/// @brief Method get_LogicalCallContext addr 0x24aac50 size 0x18 virtual false final false
 System::Runtime::Remoting::Messaging::System__Runtime__Remoting__Messaging__LogicalCallContext__Reader get_LogicalCallContext() ;

/// @brief Method HasSameLocalValues addr 0x24aa574 size 0x28 virtual false final false
 bool HasSameLocalValues(System::Threading::ExecutionContext other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: ::CaptureOptions
namespace System::Threading {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2712))
// CS Name: System.Threading.ExecutionContext::CaptureOptions
struct CORDL_TYPE System__Threading__ExecutionContext__CaptureOptions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Threading__ExecutionContext__CaptureOptions(int32_t value__) noexcept;


                    constexpr System__Threading__ExecutionContext__CaptureOptions(System__Threading__ExecutionContext__CaptureOptions const&) = default;
                    constexpr System__Threading__ExecutionContext__CaptureOptions(System__Threading__ExecutionContext__CaptureOptions&&) = default;
                    constexpr System__Threading__ExecutionContext__CaptureOptions& operator=(System__Threading__ExecutionContext__CaptureOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Threading__ExecutionContext__CaptureOptions& operator=(System__Threading__ExecutionContext__CaptureOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Threading__ExecutionContext__CaptureOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Threading__ExecutionContext__CaptureOptions_Unwrapped : int32_t {
__None = 0,
__IgnoreSyncCtx = 1,
__OptimizeDefaultCase = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Threading__ExecutionContext__CaptureOptions_Unwrapped () const noexcept {
return std::bit_cast<__System__Threading__ExecutionContext__CaptureOptions_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::Threading::System__Threading__ExecutionContext__CaptureOptions const None;

/// @brief Field IgnoreSyncCtx offset 0
static System::Threading::System__Threading__ExecutionContext__CaptureOptions const IgnoreSyncCtx;

/// @brief Field OptimizeDefaultCase offset 0
static System::Threading::System__Threading__ExecutionContext__CaptureOptions const OptimizeDefaultCase;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: System.Threading::ExecutionContext
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2713))
// CS Name: System.Threading.ExecutionContext
class CORDL_TYPE ExecutionContext : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using CaptureOptions = System::Threading::System__Threading__ExecutionContext__CaptureOptions;

using Reader = System::Threading::System__Threading__ExecutionContext__Reader;

using Flags = System::Threading::System__Threading__ExecutionContext__Flags;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~ExecutionContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExecutionContext", modifiers: " const&", def_value: None }]
constexpr ExecutionContext(ExecutionContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExecutionContext", modifiers: "&&", def_value: None }]
constexpr ExecutionContext(ExecutionContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExecutionContext(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ExecutionContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExecutionContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExecutionContext& operator=(ExecutionContext&& o) noexcept = default;
  constexpr ExecutionContext& operator=(ExecutionContext const& o) noexcept = default;
                


// Fields

 System::Threading::SynchronizationContext __declspec(property(get=__get__syncContext, put=__set__syncContext))  _syncContext;

constexpr void __set__syncContext(System::Threading::SynchronizationContext value) ;

constexpr System::Threading::SynchronizationContext __get__syncContext() const;

 System::Threading::SynchronizationContext __declspec(property(get=__get__syncContextNoFlow, put=__set__syncContextNoFlow))  _syncContextNoFlow;

constexpr void __set__syncContextNoFlow(System::Threading::SynchronizationContext value) ;

constexpr System::Threading::SynchronizationContext __get__syncContextNoFlow() const;

 System::Runtime::Remoting::Messaging::LogicalCallContext __declspec(property(get=__get__logicalCallContext, put=__set__logicalCallContext))  _logicalCallContext;

constexpr void __set__logicalCallContext(System::Runtime::Remoting::Messaging::LogicalCallContext value) ;

constexpr System::Runtime::Remoting::Messaging::LogicalCallContext __get__logicalCallContext() const;

 System::Runtime::Remoting::Messaging::IllogicalCallContext __declspec(property(get=__get__illogicalCallContext, put=__set__illogicalCallContext))  _illogicalCallContext;

constexpr void __set__illogicalCallContext(System::Runtime::Remoting::Messaging::IllogicalCallContext value) ;

constexpr System::Runtime::Remoting::Messaging::IllogicalCallContext __get__illogicalCallContext() const;

 System::Threading::System__Threading__ExecutionContext__Flags __declspec(property(get=__get__flags, put=__set__flags))  _flags;

constexpr void __set__flags(System::Threading::System__Threading__ExecutionContext__Flags value) ;

constexpr System::Threading::System__Threading__ExecutionContext__Flags __get__flags() const;

 System::Collections::Generic::Dictionary_2<System::Threading::IAsyncLocal,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__localValues, put=__set__localValues))  _localValues;

constexpr void __set__localValues(System::Collections::Generic::Dictionary_2<System::Threading::IAsyncLocal,::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Collections::Generic::Dictionary_2<System::Threading::IAsyncLocal,::bs_hook::Il2CppWrapperType> __get__localValues() const;

 System::Collections::Generic::List_1<System::Threading::IAsyncLocal> __declspec(property(get=__get__localChangeNotifications, put=__set__localChangeNotifications))  _localChangeNotifications;

constexpr void __set__localChangeNotifications(System::Collections::Generic::List_1<System::Threading::IAsyncLocal> value) ;

constexpr System::Collections::Generic::List_1<System::Threading::IAsyncLocal> __get__localChangeNotifications() const;

static System::Threading::ExecutionContext __declspec(property(get=__get_s_dummyDefaultEC, put=__set_s_dummyDefaultEC))  s_dummyDefaultEC;

static void __set_s_dummyDefaultEC(System::Threading::ExecutionContext value) ;

static System::Threading::ExecutionContext __get_s_dummyDefaultEC() ;

static System::Threading::ExecutionContext __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(System::Threading::ExecutionContext value) ;

static System::Threading::ExecutionContext __get_Default() ;


// Properties

 bool __declspec(property(get=get_isNewCapture, put=set_isNewCapture))  isNewCapture;

 bool __declspec(property(get=get_isFlowSuppressed, put=set_isFlowSuppressed))  isFlowSuppressed;

 bool __declspec(property(get=get_IsPreAllocatedDefault))  IsPreAllocatedDefault;

 System::Runtime::Remoting::Messaging::LogicalCallContext __declspec(property(get=get_LogicalCallContext, put=set_LogicalCallContext))  LogicalCallContext;

 System::Runtime::Remoting::Messaging::IllogicalCallContext __declspec(property(get=get_IllogicalCallContext, put=set_IllogicalCallContext))  IllogicalCallContext;

 System::Threading::SynchronizationContext __declspec(property(get=get_SynchronizationContext, put=set_SynchronizationContext))  SynchronizationContext;

 System::Threading::SynchronizationContext __declspec(property(get=get_SynchronizationContextNoFlow, put=set_SynchronizationContextNoFlow))  SynchronizationContextNoFlow;


// Methods

/// @brief Method get_isNewCapture addr 0x24a9d04 size 0x14 virtual false final false
 bool get_isNewCapture() ;

/// @brief Method set_isNewCapture addr 0x24a9d18 size 0x1c virtual false final false
 void set_isNewCapture(bool value) ;

/// @brief Method get_isFlowSuppressed addr 0x24a9d34 size 0xc virtual false final false
 bool get_isFlowSuppressed() ;

/// @brief Method set_isFlowSuppressed addr 0x24a9d40 size 0x1c virtual false final false
 void set_isFlowSuppressed(bool value) ;

/// @brief Method get_IsPreAllocatedDefault addr 0x24a9d5c size 0xc virtual false final false
 bool get_IsPreAllocatedDefault() ;

// Ctor Parameters []
explicit ExecutionContext() ;

/// @brief Method .ctor addr 0x24a9d68 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "isPreAllocatedDefault", ty: "bool", modifiers: "", def_value: None }]
explicit ExecutionContext(bool isPreAllocatedDefault) ;

/// @brief Method .ctor addr 0x24a9d70 size 0x30 virtual false final false
 void _ctor(bool isPreAllocatedDefault) ;

/// @brief Method SetLocalValue addr 0x24a9da0 size 0x2cc virtual false final false
static void SetLocalValue(System::Threading::IAsyncLocal local, ::bs_hook::Il2CppWrapperType newValue, bool needChangeNotifications) ;

/// @brief Method OnAsyncLocalContextChanged addr 0x24a9880 size 0x484 virtual false final false
static void OnAsyncLocalContextChanged(System::Threading::ExecutionContext previous, System::Threading::ExecutionContext current) ;

/// @brief Method get_LogicalCallContext addr 0x24aa0f8 size 0x6c virtual false final false
 System::Runtime::Remoting::Messaging::LogicalCallContext get_LogicalCallContext() ;

/// @brief Method set_LogicalCallContext addr 0x24aa164 size 0x8 virtual false final false
 void set_LogicalCallContext(System::Runtime::Remoting::Messaging::LogicalCallContext value) ;

/// @brief Method get_IllogicalCallContext addr 0x24aa16c size 0x6c virtual false final false
 System::Runtime::Remoting::Messaging::IllogicalCallContext get_IllogicalCallContext() ;

/// @brief Method set_IllogicalCallContext addr 0x24aa1d8 size 0x8 virtual false final false
 void set_IllogicalCallContext(System::Runtime::Remoting::Messaging::IllogicalCallContext value) ;

/// @brief Method get_SynchronizationContext addr 0x24aa1e0 size 0x8 virtual false final false
 System::Threading::SynchronizationContext get_SynchronizationContext() ;

/// @brief Method set_SynchronizationContext addr 0x24aa1e8 size 0x8 virtual false final false
 void set_SynchronizationContext(System::Threading::SynchronizationContext value) ;

/// @brief Method get_SynchronizationContextNoFlow addr 0x24aa1f0 size 0x8 virtual false final false
 System::Threading::SynchronizationContext get_SynchronizationContextNoFlow() ;

/// @brief Method set_SynchronizationContextNoFlow addr 0x24aa1f8 size 0x8 virtual false final false
 void set_SynchronizationContextNoFlow(System::Threading::SynchronizationContext value) ;

/// @brief Method Dispose addr 0x24aa200 size 0x4 virtual true final true
 void Dispose() ;

/// @brief Method Run addr 0x24a6af0 size 0xe8 virtual false final false
static void Run(System::Threading::ExecutionContext executionContext, System::Threading::ContextCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method Run addr 0x24aa204 size 0x7c virtual false final false
static void Run(System::Threading::ExecutionContext executionContext, System::Threading::ContextCallback callback, ::bs_hook::Il2CppWrapperType state, bool preserveSyncCtx) ;

/// @brief Method RunInternal addr 0x24aa488 size 0x70 virtual false final false
static void RunInternal(System::Threading::ExecutionContext executionContext, System::Threading::ContextCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method RunInternal addr 0x24aa280 size 0x208 virtual false final false
static void RunInternal(System::Threading::ExecutionContext executionContext, System::Threading::ContextCallback callback, ::bs_hook::Il2CppWrapperType state, bool preserveSyncCtx) ;

/// @brief Method EstablishCopyOnWriteScope addr 0x24aa740 size 0x84 virtual false final false
static void EstablishCopyOnWriteScope(ByRef<System::Threading::ExecutionContextSwitcher> ecsw) ;

/// @brief Method EstablishCopyOnWriteScope addr 0x24aa59c size 0x34 virtual false final false
static void EstablishCopyOnWriteScope(System::Threading::Thread currentThread, bool knownNullWindowsIdentity, ByRef<System::Threading::ExecutionContextSwitcher> ecsw) ;

/// @brief Method SetExecutionContext addr 0x24aa5d0 size 0x170 virtual false final false
static System::Threading::ExecutionContextSwitcher SetExecutionContext(System::Threading::ExecutionContext executionContext, bool preserveSyncCtx) ;

/// @brief Method CreateCopy addr 0x24aa828 size 0x140 virtual false final false
 System::Threading::ExecutionContext CreateCopy() ;

/// @brief Method CreateMutableCopy addr 0x24aa968 size 0xf8 virtual false final false
 System::Threading::ExecutionContext CreateMutableCopy() ;

/// @brief Method IsFlowSuppressed addr 0x24aaa60 size 0x30 virtual false final false
static bool IsFlowSuppressed() ;

/// @brief Method Capture addr 0x24a32c4 size 0x50 virtual false final false
static System::Threading::ExecutionContext Capture() ;

/// @brief Method FastCapture addr 0x24aac00 size 0x50 virtual false final false
static System::Threading::ExecutionContext FastCapture() ;

/// @brief Method Capture addr 0x24aaa90 size 0x170 virtual false final false
static System::Threading::ExecutionContext Capture(ByRef<System::Threading::StackCrawlMark> stackMark, System::Threading::System__Threading__ExecutionContext__CaptureOptions options) ;

/// @brief Method GetObjectData addr 0x24aac68 size 0x110 virtual true final true
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit ExecutionContext(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x24aad78 size 0x100 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method IsDefaultFTContext addr 0x24aa524 size 0x50 virtual false final false
 bool IsDefaultFTContext(bool ignoreSyncCtx) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE(System::Threading::System__Threading__ExecutionContext__CaptureOptions, "System.Threading", "ExecutionContext/CaptureOptions");
DEFINE_IL2CPP_ARG_TYPE(System::Threading::System__Threading__ExecutionContext__Flags, "System.Threading", "ExecutionContext/Flags");
NEED_NO_BOX(System::Threading::ExecutionContext);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ExecutionContext, "System.Threading", "ExecutionContext");
DEFINE_IL2CPP_ARG_TYPE(System::Threading::System__Threading__ExecutionContext__Reader, "System.Threading", "ExecutionContext/Reader");
