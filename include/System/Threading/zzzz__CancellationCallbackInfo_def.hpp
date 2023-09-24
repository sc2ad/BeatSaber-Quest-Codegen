#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
template<typename T>
class Action_1;
}
namespace System::Threading {
class ContextCallback;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
class System__Threading__CancellationCallbackInfo__WithSyncContext;
}
namespace System::Threading {
class ExecutionContext;
}
// Forward declare root types
namespace System::Threading {
class CancellationCallbackInfo;
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
using WithSyncContext = System::Threading::System__Threading__CancellationCallbackInfo__WithSyncContext;

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

 System::Action_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_Callback, put=__set_Callback))  Callback;

constexpr void __set_Callback(System::Action_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Action_1<::bs_hook::Il2CppWrapperType> __get_Callback() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_StateForCallback, put=__set_StateForCallback))  StateForCallback;

constexpr void __set_StateForCallback(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_StateForCallback() const;

 System::Threading::ExecutionContext __declspec(property(get=__get_TargetExecutionContext, put=__set_TargetExecutionContext))  TargetExecutionContext;

constexpr void __set_TargetExecutionContext(System::Threading::ExecutionContext value) ;

constexpr System::Threading::ExecutionContext __get_TargetExecutionContext() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get_CancellationTokenSource, put=__set_CancellationTokenSource))  CancellationTokenSource;

constexpr void __set_CancellationTokenSource(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get_CancellationTokenSource() const;

static System::Threading::ContextCallback __declspec(property(get=__get_s_executionContextCallback, put=__set_s_executionContextCallback))  s_executionContextCallback;

static void __set_s_executionContextCallback(System::Threading::ContextCallback value) ;

static System::Threading::ContextCallback __get_s_executionContextCallback() ;


// Methods

static System::Threading::CancellationCallbackInfo New_ctor(System::Action_1<::bs_hook::Il2CppWrapperType> callback, ::bs_hook::Il2CppWrapperType stateForCallback, System::Threading::ExecutionContext targetExecutionContext, System::Threading::CancellationTokenSource cancellationTokenSource) ;

/// @brief Method .ctor addr 0x24a5b18 size 0x40 virtual false final false
 void _ctor(System::Action_1<::bs_hook::Il2CppWrapperType> callback, ::bs_hook::Il2CppWrapperType stateForCallback, System::Threading::ExecutionContext targetExecutionContext, System::Threading::CancellationTokenSource cancellationTokenSource) ;

/// @brief Method ExecuteCallback addr 0x24a61bc size 0xfc virtual false final false
 void ExecuteCallback() ;

/// @brief Method ExecutionContextCallback addr 0x24a6bd8 size 0x8c virtual false final false
static void ExecutionContextCallback(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
NEED_NO_BOX(System::Threading::CancellationCallbackInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::CancellationCallbackInfo, "System.Threading", "CancellationCallbackInfo");
