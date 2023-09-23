#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Threading {
struct ThreadState;
}
// Type: System.Threading::ThreadState
namespace System::Threading {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2671))
// CS Name: System.Threading.ThreadState
struct CORDL_TYPE ThreadState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ThreadState(int32_t value__) noexcept;


                    constexpr ThreadState(ThreadState const&) = default;
                    constexpr ThreadState(ThreadState&&) = default;
                    constexpr ThreadState& operator=(ThreadState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ThreadState& operator=(ThreadState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ThreadState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ThreadState_Unwrapped : int32_t {
__Running = 0,
__StopRequested = 1,
__SuspendRequested = 2,
__Background = 4,
__Unstarted = 8,
__Stopped = 16,
__WaitSleepJoin = 32,
__Suspended = 64,
__AbortRequested = 128,
__Aborted = 256,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ThreadState_Unwrapped () const noexcept {
return std::bit_cast<__ThreadState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Running offset 0
static System::Threading::ThreadState const Running;

/// @brief Field StopRequested offset 0
static System::Threading::ThreadState const StopRequested;

/// @brief Field SuspendRequested offset 0
static System::Threading::ThreadState const SuspendRequested;

/// @brief Field Background offset 0
static System::Threading::ThreadState const Background;

/// @brief Field Unstarted offset 0
static System::Threading::ThreadState const Unstarted;

/// @brief Field Stopped offset 0
static System::Threading::ThreadState const Stopped;

/// @brief Field WaitSleepJoin offset 0
static System::Threading::ThreadState const WaitSleepJoin;

/// @brief Field Suspended offset 0
static System::Threading::ThreadState const Suspended;

/// @brief Field AbortRequested offset 0
static System::Threading::ThreadState const AbortRequested;

/// @brief Field Aborted offset 0
static System::Threading::ThreadState const Aborted;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ThreadState, "System.Threading", "ThreadState");
