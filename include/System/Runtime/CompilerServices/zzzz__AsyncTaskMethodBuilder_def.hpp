#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class Exception;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Threading::Tasks {
struct VoidTaskResult;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3393))
// CS Name: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct CORDL_TYPE AsyncTaskMethodBuilder : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Threading::Tasks::VoidTaskResult>", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Threading::Tasks::VoidTaskResult> m_builder) noexcept;


                    constexpr AsyncTaskMethodBuilder(AsyncTaskMethodBuilder const&) = default;
                    constexpr AsyncTaskMethodBuilder(AsyncTaskMethodBuilder&&) = default;
                    constexpr AsyncTaskMethodBuilder& operator=(AsyncTaskMethodBuilder const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncTaskMethodBuilder& operator=(AsyncTaskMethodBuilder&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncTaskMethodBuilder(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> __declspec(property(get=__get_s_cachedCompleted, put=__set_s_cachedCompleted))  s_cachedCompleted;

static void __set_s_cachedCompleted(System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> value) ;

static System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> __get_s_cachedCompleted() ;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Threading::Tasks::VoidTaskResult> __declspec(property(get=__get_m_builder, put=__set_m_builder))  m_builder;

constexpr void __set_m_builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Threading::Tasks::VoidTaskResult> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Threading::Tasks::VoidTaskResult> __get_m_builder() const;


// Properties

 System::Threading::Tasks::Task __declspec(property(get=get_Task))  Task;


// Methods

/// @brief Method Create addr 0x236f77c size 0xc virtual false final false
static System::Runtime::CompilerServices::AsyncTaskMethodBuilder Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
 void Start(ByRef<TStateMachine> stateMachine) ;

/// @brief Method SetStateMachine addr 0x236f788 size 0x58 virtual false final false
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
 void AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine) ;

/// @brief Method get_Task addr 0x236f7e0 size 0x48 virtual false final false
 System::Threading::Tasks::Task get_Task() ;

/// @brief Method SetResult addr 0x236f828 size 0x78 virtual false final false
 void SetResult() ;

/// @brief Method SetException addr 0x236f8a0 size 0x58 virtual false final false
 void SetException(System::Exception exception) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::AsyncTaskMethodBuilder, "System.Runtime.CompilerServices", "AsyncTaskMethodBuilder");
