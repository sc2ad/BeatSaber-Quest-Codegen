#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
namespace System {
class Action;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
// Type: ::<>c__DisplayClass11_0
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3384))
// CS Name: System.Runtime.CompilerServices.TaskAwaiter::<>c__DisplayClass11_0
class CORDL_TYPE System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0", modifiers: " const&", def_value: None }]
constexpr System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0(System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0", modifiers: "&&", def_value: None }]
constexpr System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0(System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0& operator=(System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0&& o) noexcept = default;
  constexpr System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0& operator=(System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::Task __declspec(property(get=__get_task, put=__set_task))  task;

constexpr void __set_task(System::Threading::Tasks::Task value) ;

constexpr System::Threading::Tasks::Task __get_task() const;

 System::Action __declspec(property(get=__get_continuation, put=__set_continuation))  continuation;

constexpr void __set_continuation(System::Action value) ;

constexpr System::Action __get_continuation() const;


// Methods

// Ctor Parameters []
explicit System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0() ;

/// @brief Method .ctor addr 0x236eef0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <OutputWaitEtwEvents>b__0 addr 0x236eef8 size 0x174 virtual false final false
 void _OutputWaitEtwEvents_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::TaskAwaiter
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3385))
// CS Name: System.Runtime.CompilerServices.TaskAwaiter
struct CORDL_TYPE TaskAwaiter : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using __c__DisplayClass11_0 = System::Runtime::CompilerServices::System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0;

/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr operator  System::Runtime::CompilerServices::ICriticalNotifyCompletion() const;

// Ctor Parameters [CppParam { name: "m_task", ty: "System::Threading::Tasks::Task", modifiers: "", def_value: None }]
constexpr TaskAwaiter(System::Threading::Tasks::Task m_task) noexcept;


                    constexpr TaskAwaiter(TaskAwaiter const&) = default;
                    constexpr TaskAwaiter(TaskAwaiter&&) = default;
                    constexpr TaskAwaiter& operator=(TaskAwaiter const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TaskAwaiter& operator=(TaskAwaiter&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TaskAwaiter(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Threading::Tasks::Task __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(System::Threading::Tasks::Task value) ;

constexpr System::Threading::Tasks::Task __get_m_task() const;


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

/// @brief Method .ctor addr 0x236ea34 size 0x8 virtual false final false
 void _ctor(System::Threading::Tasks::Task task) ;

/// @brief Method get_IsCompleted addr 0x236ea3c size 0x1c virtual false final false
 bool get_IsCompleted() ;

/// @brief Method UnsafeOnCompleted addr 0x236e880 size 0x10 virtual true final true
 void UnsafeOnCompleted(System::Action continuation) ;

/// @brief Method GetResult addr 0x236eb0c size 0x8 virtual false final false
 void GetResult() ;

/// @brief Method ValidateEnd addr 0x236eb14 size 0x4c virtual false final false
static void ValidateEnd(System::Threading::Tasks::Task task) ;

/// @brief Method HandleNonSuccessAndDebuggerNotification addr 0x236eb60 size 0x60 virtual false final false
static void HandleNonSuccessAndDebuggerNotification(System::Threading::Tasks::Task task) ;

/// @brief Method ThrowForNonSuccess addr 0x236ebc0 size 0x154 virtual false final false
static void ThrowForNonSuccess(System::Threading::Tasks::Task task) ;

/// @brief Method OnCompletedInternal addr 0x236ea58 size 0xb4 virtual false final false
static void OnCompletedInternal(System::Threading::Tasks::Task task, System::Action continuation, bool continueOnCapturedContext, bool flowExecutionContext) ;

/// @brief Method OutputWaitEtwEvents addr 0x236ed14 size 0x1dc virtual false final false
static System::Action OutputWaitEtwEvents(System::Threading::Tasks::Task task, System::Action continuation) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(System::Runtime::CompilerServices::System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0, "System.Runtime.CompilerServices", "TaskAwaiter/<>c__DisplayClass11_0");
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::TaskAwaiter, "System.Runtime.CompilerServices", "TaskAwaiter");
