#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Threading::Tasks {
struct TaskStatus;
}
// Type: System.Threading.Tasks::TaskStatus
namespace System::Threading::Tasks {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2777))
// CS Name: System.Threading.Tasks.TaskStatus
struct CORDL_TYPE TaskStatus : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TaskStatus(int32_t value__) noexcept;


                    constexpr TaskStatus(TaskStatus const&) = default;
                    constexpr TaskStatus(TaskStatus&&) = default;
                    constexpr TaskStatus& operator=(TaskStatus const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TaskStatus& operator=(TaskStatus&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TaskStatus(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TaskStatus_Unwrapped : int32_t {
__Created = 0,
__WaitingForActivation = 1,
__WaitingToRun = 2,
__Running = 3,
__WaitingForChildrenToComplete = 4,
__RanToCompletion = 5,
__Canceled = 6,
__Faulted = 7,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TaskStatus_Unwrapped () const noexcept {
return std::bit_cast<__TaskStatus_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Created offset 0
static System::Threading::Tasks::TaskStatus const Created;

/// @brief Field WaitingForActivation offset 0
static System::Threading::Tasks::TaskStatus const WaitingForActivation;

/// @brief Field WaitingToRun offset 0
static System::Threading::Tasks::TaskStatus const WaitingToRun;

/// @brief Field Running offset 0
static System::Threading::Tasks::TaskStatus const Running;

/// @brief Field WaitingForChildrenToComplete offset 0
static System::Threading::Tasks::TaskStatus const WaitingForChildrenToComplete;

/// @brief Field RanToCompletion offset 0
static System::Threading::Tasks::TaskStatus const RanToCompletion;

/// @brief Field Canceled offset 0
static System::Threading::Tasks::TaskStatus const Canceled;

/// @brief Field Faulted offset 0
static System::Threading::Tasks::TaskStatus const Faulted;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::TaskStatus, "System.Threading.Tasks", "TaskStatus");
