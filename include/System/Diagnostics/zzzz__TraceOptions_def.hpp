#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Diagnostics {
struct TraceOptions;
}
// Type: System.Diagnostics::TraceOptions
namespace System::Diagnostics {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7796))
// CS Name: System.Diagnostics.TraceOptions
struct CORDL_TYPE TraceOptions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TraceOptions(int32_t value__) noexcept;


                    constexpr TraceOptions(TraceOptions const&) = default;
                    constexpr TraceOptions(TraceOptions&&) = default;
                    constexpr TraceOptions& operator=(TraceOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TraceOptions& operator=(TraceOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TraceOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TraceOptions_Unwrapped : int32_t {
__None = 0,
__LogicalOperationStack = 1,
__DateTime = 2,
__Timestamp = 4,
__ProcessId = 8,
__ThreadId = 16,
__Callstack = 32,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TraceOptions_Unwrapped () const noexcept {
return std::bit_cast<__TraceOptions_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::Diagnostics::TraceOptions const None;

/// @brief Field LogicalOperationStack offset 0
static System::Diagnostics::TraceOptions const LogicalOperationStack;

/// @brief Field DateTime offset 0
static System::Diagnostics::TraceOptions const DateTime;

/// @brief Field Timestamp offset 0
static System::Diagnostics::TraceOptions const Timestamp;

/// @brief Field ProcessId offset 0
static System::Diagnostics::TraceOptions const ProcessId;

/// @brief Field ThreadId offset 0
static System::Diagnostics::TraceOptions const ThreadId;

/// @brief Field Callstack offset 0
static System::Diagnostics::TraceOptions const Callstack;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::TraceOptions, "System.Diagnostics", "TraceOptions");
