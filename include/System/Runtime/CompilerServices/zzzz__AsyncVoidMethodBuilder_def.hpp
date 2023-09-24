#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
namespace System::Runtime::CompilerServices {
struct AsyncMethodBuilderCore;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Exception;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Type: System.Runtime.CompilerServices::AsyncVoidMethodBuilder
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3392))
// CS Name: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct CORDL_TYPE AsyncVoidMethodBuilder : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_synchronizationContext", ty: "System::Threading::SynchronizationContext", modifiers: "", def_value: None }, CppParam { name: "m_coreState", ty: "System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "System::Threading::Tasks::Task", modifiers: "", def_value: None }]
constexpr AsyncVoidMethodBuilder(System::Threading::SynchronizationContext m_synchronizationContext, System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState, System::Threading::Tasks::Task m_task) noexcept;


                    constexpr AsyncVoidMethodBuilder(AsyncVoidMethodBuilder const&) = default;
                    constexpr AsyncVoidMethodBuilder(AsyncVoidMethodBuilder&&) = default;
                    constexpr AsyncVoidMethodBuilder& operator=(AsyncVoidMethodBuilder const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncVoidMethodBuilder& operator=(AsyncVoidMethodBuilder&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncVoidMethodBuilder(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Threading::SynchronizationContext __declspec(property(get=__get_m_synchronizationContext, put=__set_m_synchronizationContext))  m_synchronizationContext;

constexpr void __set_m_synchronizationContext(System::Threading::SynchronizationContext value) ;

constexpr System::Threading::SynchronizationContext __get_m_synchronizationContext() const;

 System::Runtime::CompilerServices::AsyncMethodBuilderCore __declspec(property(get=__get_m_coreState, put=__set_m_coreState))  m_coreState;

constexpr void __set_m_coreState(System::Runtime::CompilerServices::AsyncMethodBuilderCore value) ;

constexpr System::Runtime::CompilerServices::AsyncMethodBuilderCore __get_m_coreState() const;

 System::Threading::Tasks::Task __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(System::Threading::Tasks::Task value) ;

constexpr System::Threading::Tasks::Task __get_m_task() const;


// Properties

 System::Threading::Tasks::Task __declspec(property(get=get_Task))  Task;


// Methods

/// @brief Method Create addr 0x236f0e0 size 0x40 virtual false final false
static System::Runtime::CompilerServices::AsyncVoidMethodBuilder Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
 void Start(ByRef<TStateMachine> stateMachine) ;

/// @brief Method SetStateMachine addr 0x236f120 size 0x8 virtual false final false
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
 void AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine) ;

/// @brief Method SetResult addr 0x236f1f0 size 0x5c virtual false final false
 void SetResult() ;

/// @brief Method SetException addr 0x236f35c size 0x134 virtual false final false
 void SetException(System::Exception exception) ;

/// @brief Method NotifySynchronizationContextOfCompletion addr 0x236f2b8 size 0xa4 virtual false final false
 void NotifySynchronizationContextOfCompletion() ;

/// @brief Method get_Task addr 0x236f24c size 0x6c virtual false final false
 System::Threading::Tasks::Task get_Task() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::AsyncVoidMethodBuilder, "System.Runtime.CompilerServices", "AsyncVoidMethodBuilder");
