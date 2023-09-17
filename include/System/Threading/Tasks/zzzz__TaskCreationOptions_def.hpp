#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Threading::Tasks {
struct TaskCreationOptions;
}
// Type: System.Threading.Tasks::TaskCreationOptions
namespace System::Threading::Tasks {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2786))
// CS Name: System.Threading.Tasks.TaskCreationOptions
struct CORDL_TYPE TaskCreationOptions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TaskCreationOptions(int32_t value__) noexcept;


                    constexpr TaskCreationOptions(TaskCreationOptions const&) = default;
                    constexpr TaskCreationOptions(TaskCreationOptions&&) = default;
                    constexpr TaskCreationOptions& operator=(TaskCreationOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TaskCreationOptions& operator=(TaskCreationOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TaskCreationOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TaskCreationOptions_Unwrapped : int32_t {
__None = 0,
__PreferFairness = 1,
__LongRunning = 2,
__AttachedToParent = 4,
__DenyChildAttach = 8,
__HideScheduler = 16,
__RunContinuationsAsynchronously = 64,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TaskCreationOptions_Unwrapped () const noexcept {
return std::bit_cast<__TaskCreationOptions_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::Threading::Tasks::TaskCreationOptions const None;

/// @brief Field PreferFairness offset 0
static ::System::Threading::Tasks::TaskCreationOptions const PreferFairness;

/// @brief Field LongRunning offset 0
static ::System::Threading::Tasks::TaskCreationOptions const LongRunning;

/// @brief Field AttachedToParent offset 0
static ::System::Threading::Tasks::TaskCreationOptions const AttachedToParent;

/// @brief Field DenyChildAttach offset 0
static ::System::Threading::Tasks::TaskCreationOptions const DenyChildAttach;

/// @brief Field HideScheduler offset 0
static ::System::Threading::Tasks::TaskCreationOptions const HideScheduler;

/// @brief Field RunContinuationsAsynchronously offset 0
static ::System::Threading::Tasks::TaskCreationOptions const RunContinuationsAsynchronously;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskCreationOptions, "System.Threading.Tasks", "TaskCreationOptions");
