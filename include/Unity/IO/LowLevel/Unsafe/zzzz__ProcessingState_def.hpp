#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Unity::IO::LowLevel::Unsafe {
struct ProcessingState;
}
// Type: Unity.IO.LowLevel.Unsafe::ProcessingState
namespace Unity::IO::LowLevel::Unsafe {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9930))
// CS Name: Unity.IO.LowLevel.Unsafe.ProcessingState
struct CORDL_TYPE ProcessingState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ProcessingState(int32_t value__) noexcept;


                    constexpr ProcessingState(ProcessingState const&) = default;
                    constexpr ProcessingState(ProcessingState&&) = default;
                    constexpr ProcessingState& operator=(ProcessingState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ProcessingState& operator=(ProcessingState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ProcessingState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ProcessingState_Unwrapped : int32_t {
__Unknown = 0,
__InQueue = 1,
__Reading = 2,
__Completed = 3,
__Failed = 4,
__Canceled = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProcessingState_Unwrapped () const noexcept {
return std::bit_cast<__ProcessingState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static ::Unity::IO::LowLevel::Unsafe::ProcessingState const Unknown;

/// @brief Field InQueue offset 0
static ::Unity::IO::LowLevel::Unsafe::ProcessingState const InQueue;

/// @brief Field Reading offset 0
static ::Unity::IO::LowLevel::Unsafe::ProcessingState const Reading;

/// @brief Field Completed offset 0
static ::Unity::IO::LowLevel::Unsafe::ProcessingState const Completed;

/// @brief Field Failed offset 0
static ::Unity::IO::LowLevel::Unsafe::ProcessingState const Failed;

/// @brief Field Canceled offset 0
static ::Unity::IO::LowLevel::Unsafe::ProcessingState const Canceled;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::IO::LowLevel::Unsafe
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Unity::IO::LowLevel::Unsafe::ProcessingState, "Unity.IO.LowLevel.Unsafe", "ProcessingState");
