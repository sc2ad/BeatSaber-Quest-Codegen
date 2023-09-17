#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Threading::Tasks {
struct TaskContinuationOptions;
}
// Type: System.Threading.Tasks::TaskContinuationOptions
namespace System::Threading::Tasks {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2788))
// CS Name: System.Threading.Tasks.TaskContinuationOptions
struct CORDL_TYPE TaskContinuationOptions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TaskContinuationOptions(int32_t value__) noexcept;


                    constexpr TaskContinuationOptions(TaskContinuationOptions const&) = default;
                    constexpr TaskContinuationOptions(TaskContinuationOptions&&) = default;
                    constexpr TaskContinuationOptions& operator=(TaskContinuationOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TaskContinuationOptions& operator=(TaskContinuationOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TaskContinuationOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TaskContinuationOptions_Unwrapped : int32_t {
__None = 0,
__PreferFairness = 1,
__LongRunning = 2,
__AttachedToParent = 4,
__DenyChildAttach = 8,
__HideScheduler = 16,
__LazyCancellation = 32,
__RunContinuationsAsynchronously = 64,
__NotOnRanToCompletion = 65536,
__NotOnFaulted = 131072,
__NotOnCanceled = 262144,
__OnlyOnRanToCompletion = 393216,
__OnlyOnFaulted = 327680,
__OnlyOnCanceled = 196608,
__ExecuteSynchronously = 524288,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TaskContinuationOptions_Unwrapped () const noexcept {
return std::bit_cast<__TaskContinuationOptions_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::Threading::Tasks::TaskContinuationOptions const None;

/// @brief Field PreferFairness offset 0
static ::System::Threading::Tasks::TaskContinuationOptions const PreferFairness;

/// @brief Field LongRunning offset 0
static ::System::Threading::Tasks::TaskContinuationOptions const LongRunning;

/// @brief Field AttachedToParent offset 0
static ::System::Threading::Tasks::TaskContinuationOptions const AttachedToParent;

/// @brief Field DenyChildAttach offset 0
static ::System::Threading::Tasks::TaskContinuationOptions const DenyChildAttach;

/// @brief Field HideScheduler offset 0
static ::System::Threading::Tasks::TaskContinuationOptions const HideScheduler;

/// @brief Field LazyCancellation offset 0
static ::System::Threading::Tasks::TaskContinuationOptions const LazyCancellation;

/// @brief Field RunContinuationsAsynchronously offset 0
static ::System::Threading::Tasks::TaskContinuationOptions const RunContinuationsAsynchronously;

/// @brief Field NotOnRanToCompletion offset 0
static ::System::Threading::Tasks::TaskContinuationOptions const NotOnRanToCompletion;

/// @brief Field NotOnFaulted offset 0
static ::System::Threading::Tasks::TaskContinuationOptions const NotOnFaulted;

/// @brief Field NotOnCanceled offset 0
static ::System::Threading::Tasks::TaskContinuationOptions const NotOnCanceled;

/// @brief Field OnlyOnRanToCompletion offset 0
static ::System::Threading::Tasks::TaskContinuationOptions const OnlyOnRanToCompletion;

/// @brief Field OnlyOnFaulted offset 0
static ::System::Threading::Tasks::TaskContinuationOptions const OnlyOnFaulted;

/// @brief Field OnlyOnCanceled offset 0
static ::System::Threading::Tasks::TaskContinuationOptions const OnlyOnCanceled;

/// @brief Field ExecuteSynchronously offset 0
static ::System::Threading::Tasks::TaskContinuationOptions const ExecuteSynchronously;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskContinuationOptions, "System.Threading.Tasks", "TaskContinuationOptions");
