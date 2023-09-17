#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Unity::IO::LowLevel::Unsafe {
struct Priority;
}
// Type: Unity.IO.LowLevel.Unsafe::Priority
namespace Unity::IO::LowLevel::Unsafe {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9929))
// CS Name: Unity.IO.LowLevel.Unsafe.Priority
struct CORDL_TYPE Priority : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Priority(int32_t value__) noexcept;


                    constexpr Priority(Priority const&) = default;
                    constexpr Priority(Priority&&) = default;
                    constexpr Priority& operator=(Priority const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Priority& operator=(Priority&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Priority(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Priority_Unwrapped : int32_t {
__PriorityLow = 0,
__PriorityHigh = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Priority_Unwrapped () const noexcept {
return std::bit_cast<__Priority_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field PriorityLow offset 0
static ::Unity::IO::LowLevel::Unsafe::Priority const PriorityLow;

/// @brief Field PriorityHigh offset 0
static ::Unity::IO::LowLevel::Unsafe::Priority const PriorityHigh;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::IO::LowLevel::Unsafe
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Unity::IO::LowLevel::Unsafe::Priority, "Unity.IO.LowLevel.Unsafe", "Priority");
