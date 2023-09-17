#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace {
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Action;
}
// Forward declare root types
namespace System::Threading::Tasks {
struct ForceAsyncAwaiter;
}
// Type: System.Threading.Tasks::ForceAsyncAwaiter
namespace System::Threading::Tasks {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2768))
// CS Name: System.Threading.Tasks.ForceAsyncAwaiter
struct CORDL_TYPE ForceAsyncAwaiter : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion() const;

// Ctor Parameters [CppParam { name: "_task", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }]
constexpr ForceAsyncAwaiter(::System::Threading::Tasks::Task _task) noexcept;


                    constexpr ForceAsyncAwaiter(ForceAsyncAwaiter const&) = default;
                    constexpr ForceAsyncAwaiter(ForceAsyncAwaiter&&) = default;
                    constexpr ForceAsyncAwaiter& operator=(ForceAsyncAwaiter const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ForceAsyncAwaiter& operator=(ForceAsyncAwaiter&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ForceAsyncAwaiter(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Threading::Tasks::Task __declspec(property(get=__get__task, put=__set__task))  _task;

constexpr void __set__task(::System::Threading::Tasks::Task value) ;

constexpr ::System::Threading::Tasks::Task __get__task() const;


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

/// @brief Method .ctor addr 0x24b4c2c size 0x8 virtual false final false
 void _ctor(::System::Threading::Tasks::Task task) ;

/// @brief Method GetAwaiter addr 0x24b4c34 size 0x8 virtual false final false
 ::System::Threading::Tasks::ForceAsyncAwaiter GetAwaiter() ;

/// @brief Method get_IsCompleted addr 0x24b4c3c size 0x8 virtual false final false
 bool get_IsCompleted() ;

/// @brief Method GetResult addr 0x24b4c44 size 0x2c virtual false final false
 void GetResult() ;

/// @brief Method UnsafeOnCompleted addr 0x24b4c70 size 0x58 virtual true final true
 void UnsafeOnCompleted(::System::Action action) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::ForceAsyncAwaiter, "System.Threading.Tasks", "ForceAsyncAwaiter");
