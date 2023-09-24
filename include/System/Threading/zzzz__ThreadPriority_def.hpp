#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Threading {
struct ThreadPriority;
}
// Type: System.Threading::ThreadPriority
namespace System::Threading {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2669))
// CS Name: System.Threading.ThreadPriority
struct CORDL_TYPE ThreadPriority : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ThreadPriority(int32_t value__) noexcept;


                    constexpr ThreadPriority(ThreadPriority const&) = default;
                    constexpr ThreadPriority(ThreadPriority&&) = default;
                    constexpr ThreadPriority& operator=(ThreadPriority const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ThreadPriority& operator=(ThreadPriority&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ThreadPriority(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ThreadPriority_Unwrapped : int32_t {
__Lowest = 0,
__BelowNormal = 1,
__Normal = 2,
__AboveNormal = 3,
__Highest = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ThreadPriority_Unwrapped () const noexcept {
return std::bit_cast<__ThreadPriority_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Lowest offset 0
static System::Threading::ThreadPriority const Lowest;

/// @brief Field BelowNormal offset 0
static System::Threading::ThreadPriority const BelowNormal;

/// @brief Field Normal offset 0
static System::Threading::ThreadPriority const Normal;

/// @brief Field AboveNormal offset 0
static System::Threading::ThreadPriority const AboveNormal;

/// @brief Field Highest offset 0
static System::Threading::ThreadPriority const Highest;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ThreadPriority, "System.Threading", "ThreadPriority");
