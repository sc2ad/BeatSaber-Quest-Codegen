#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Diagnostics::Tracing {
struct EventLevel;
}
// Type: System.Diagnostics.Tracing::EventLevel
namespace System::Diagnostics::Tracing {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3728))
// CS Name: System.Diagnostics.Tracing.EventLevel
struct CORDL_TYPE EventLevel : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EventLevel(int32_t value__) noexcept;


                    constexpr EventLevel(EventLevel const&) = default;
                    constexpr EventLevel(EventLevel&&) = default;
                    constexpr EventLevel& operator=(EventLevel const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EventLevel& operator=(EventLevel&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EventLevel(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EventLevel_Unwrapped : int32_t {
__LogAlways = 0,
__Critical = 1,
__Error = 2,
__Warning = 3,
__Informational = 4,
__Verbose = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EventLevel_Unwrapped () const noexcept {
return std::bit_cast<__EventLevel_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field LogAlways offset 0
static System::Diagnostics::Tracing::EventLevel const LogAlways;

/// @brief Field Critical offset 0
static System::Diagnostics::Tracing::EventLevel const Critical;

/// @brief Field Error offset 0
static System::Diagnostics::Tracing::EventLevel const Error;

/// @brief Field Warning offset 0
static System::Diagnostics::Tracing::EventLevel const Warning;

/// @brief Field Informational offset 0
static System::Diagnostics::Tracing::EventLevel const Informational;

/// @brief Field Verbose offset 0
static System::Diagnostics::Tracing::EventLevel const Verbose;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Diagnostics::Tracing
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EventLevel, "System.Diagnostics.Tracing", "EventLevel");
