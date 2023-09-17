#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System {
template<typename T>
class Action_1;
}
namespace System::Threading {
class ContextCallback;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
class SynchronizationContext;
}
// Forward declare root types
namespace System::Threading {
class CancellationCallbackInfo;
}
namespace System::Threading {
class ____System__Threading__CancellationCallbackInfo__WithSyncContext;
}
// Type: System.Threading::CancellationCallbackInfo
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2690))
// CS Name: System.Threading.CancellationCallbackInfo
class CORDL_TYPE CancellationCallbackInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using WithSyncContext = ::System::Threading::____System__Threading__CancellationCallbackInfo__WithSyncContext;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~CancellationCallbackInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "CancellationCallbackInfo", modifiers: " const&", def_value: None }]
constexpr CancellationCallbackInfo(CancellationCallbackInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CancellationCallbackInfo", modifiers: "&&", def_value: None }]
constexpr CancellationCallbackInfo(CancellationCallbackInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CancellationCallbackInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CancellationCallbackInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CancellationCallbackInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CancellationCallbackInfo& operator=(CancellationCallbackInfo&& o) noexcept = default;
  constexpr CancellationCallbackInfo& operator=(CancellationCallbackInfo const& o) noexcept = default;
                


// Fields

 ::System::Action_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_Callback, put=__set_Callback))  Callback;

constexpr void __set_Callback(::System::Action_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::System::Action_1<::bs_hook::Il2CppWrapperType> __get_Callback() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_StateForCallback, put=__set_StateForCallback))  StateForCallback;

constexpr void __set_StateForCallback(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_StateForCallback() const;

 ::System::Threading::ExecutionContext __declspec(property(get=__get_TargetExecutionContext, put=__set_TargetExecutionContext))  TargetExecutionContext;

constexpr void __set_TargetExecutionContext(::System::Threading::ExecutionContext value) ;

constexpr ::System::Threading::ExecutionContext __get_TargetExecutionContext() const;

 ::System::Threading::CancellationTokenSource __declspec(property(get=__get_CancellationTokenSource, put=__set_CancellationTokenSource))  CancellationTokenSource;

constexpr void __set_CancellationTokenSource(::System::Threading::CancellationTokenSource value) ;

constexpr ::System::Threading::CancellationTokenSource __get_CancellationTokenSource() const;

static ::System::Threading::ContextCallback __declspec(property(get=__get_s_executionContextCallback, put=__set_s_executionContextCallback))  s_executionContextCallback;

static void __set_s_executionContextCallback(::System::Threading::ContextCallback value) ;

static ::System::Threading::ContextCallback __get_s_executionContextCallback() ;


// Methods

// Ctor Parameters [CppParam { name: "callback", ty: "::System::Action_1<::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }, CppParam { name: "stateForCallback", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "targetExecutionContext", ty: "::System::Threading::ExecutionContext", modifiers: "", def_value: None }, CppParam { name: "cancellationTokenSource", ty: "::System::Threading::CancellationTokenSource", modifiers: "", def_value: None }]
explicit CancellationCallbackInfo(::System::Action_1<::bs_hook::Il2CppWrapperType> callback, ::bs_hook::Il2CppWrapperType stateForCallback, ::System::Threading::ExecutionContext targetExecutionContext, ::System::Threading::CancellationTokenSource cancellationTokenSource) ;

/// @brief Method .ctor addr 0x24a5b18 size 0x40 virtual false final false
 void _ctor(::System::Action_1<::bs_hook::Il2CppWrapperType> callback, ::bs_hook::Il2CppWrapperType stateForCallback, ::System::Threading::ExecutionContext targetExecutionContext, ::System::Threading::CancellationTokenSource cancellationTokenSource) ;

/// @brief Method ExecuteCallback addr 0x24a61bc size 0xfc virtual false final false
 void ExecuteCallback() ;

/// @brief Method ExecutionContextCallback addr 0x24a6bd8 size 0x8c virtual false final false
static void ExecutionContextCallback(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: ::WithSyncContext
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2690))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2689))
// CS Name: System.Threading.CancellationCallbackInfo::WithSyncContext
class CORDL_TYPE ____System__Threading__CancellationCallbackInfo__WithSyncContext : public ::System::Threading::CancellationCallbackInfo {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~____System__Threading__CancellationCallbackInfo__WithSyncContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Threading__CancellationCallbackInfo__WithSyncContext", modifiers: " const&", def_value: None }]
constexpr ____System__Threading__CancellationCallbackInfo__WithSyncContext(____System__Threading__CancellationCallbackInfo__WithSyncContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Threading__CancellationCallbackInfo__WithSyncContext", modifiers: "&&", def_value: None }]
constexpr ____System__Threading__CancellationCallbackInfo__WithSyncContext(____System__Threading__CancellationCallbackInfo__WithSyncContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Threading__CancellationCallbackInfo__WithSyncContext(void* ptr) noexcept : ::System::Threading::CancellationCallbackInfo(ptr) {
}


  constexpr ____System__Threading__CancellationCallbackInfo__WithSyncContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Threading__CancellationCallbackInfo__WithSyncContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Threading__CancellationCallbackInfo__WithSyncContext& operator=(____System__Threading__CancellationCallbackInfo__WithSyncContext&& o) noexcept = default;
  constexpr ____System__Threading__CancellationCallbackInfo__WithSyncContext& operator=(____System__Threading__CancellationCallbackInfo__WithSyncContext const& o) noexcept = default;
                


// Fields

 ::System::Threading::SynchronizationContext __declspec(property(get=__get_TargetSyncContext, put=__set_TargetSyncContext))  TargetSyncContext;

constexpr void __set_TargetSyncContext(::System::Threading::SynchronizationContext value) ;

constexpr ::System::Threading::SynchronizationContext __get_TargetSyncContext() const;


// Methods

// Ctor Parameters [CppParam { name: "callback", ty: "::System::Action_1<::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }, CppParam { name: "stateForCallback", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "targetExecutionContext", ty: "::System::Threading::ExecutionContext", modifiers: "", def_value: None }, CppParam { name: "cancellationTokenSource", ty: "::System::Threading::CancellationTokenSource", modifiers: "", def_value: None }, CppParam { name: "targetSyncContext", ty: "::System::Threading::SynchronizationContext", modifiers: "", def_value: None }]
explicit ____System__Threading__CancellationCallbackInfo__WithSyncContext(::System::Action_1<::bs_hook::Il2CppWrapperType> callback, ::bs_hook::Il2CppWrapperType stateForCallback, ::System::Threading::ExecutionContext targetExecutionContext, ::System::Threading::CancellationTokenSource cancellationTokenSource, ::System::Threading::SynchronizationContext targetSyncContext) ;

/// @brief Method .ctor addr 0x24a5b58 size 0x50 virtual false final false
 void _ctor(::System::Action_1<::bs_hook::Il2CppWrapperType> callback, ::bs_hook::Il2CppWrapperType stateForCallback, ::System::Threading::ExecutionContext targetExecutionContext, ::System::Threading::CancellationTokenSource cancellationTokenSource, ::System::Threading::SynchronizationContext targetSyncContext) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::CancellationCallbackInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::CancellationCallbackInfo, "System.Threading", "CancellationCallbackInfo");
NEED_NO_BOX(::System::Threading::____System__Threading__CancellationCallbackInfo__WithSyncContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::____System__Threading__CancellationCallbackInfo__WithSyncContext, "System.Threading", "CancellationCallbackInfo/WithSyncContext");
