#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Diagnostics::Tracing {
struct EventKeywords;
}
// Type: System.Diagnostics.Tracing::EventKeywords
namespace System::Diagnostics::Tracing {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3729))
// CS Name: System.Diagnostics.Tracing.EventKeywords
struct CORDL_TYPE EventKeywords : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: None }]
constexpr EventKeywords(int64_t value__) noexcept;


                    constexpr EventKeywords(EventKeywords const&) = default;
                    constexpr EventKeywords(EventKeywords&&) = default;
                    constexpr EventKeywords& operator=(EventKeywords const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EventKeywords& operator=(EventKeywords&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EventKeywords(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EventKeywords_Unwrapped : int64_t {
__None = 0,
__All = -1,
__MicrosoftTelemetry = 562949953421312,
__WdiContext = 562949953421312,
__WdiDiagnostic = 1125899906842624,
__Sqm = 2251799813685248,
__AuditFailure = 4503599627370496,
__AuditSuccess = 9007199254740992,
__CorrelationHint = 4503599627370496,
__EventLogClassic = 36028797018963968,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EventKeywords_Unwrapped () const noexcept {
return std::bit_cast<__EventKeywords_Unwrapped>(__instance);
}


// Fields

 int64_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int64_t value) ;

constexpr int64_t __get_value__() const;

/// @brief Field None offset 0
static System::Diagnostics::Tracing::EventKeywords const None;

/// @brief Field All offset 0
static System::Diagnostics::Tracing::EventKeywords const All;

/// @brief Field MicrosoftTelemetry offset 0
static System::Diagnostics::Tracing::EventKeywords const MicrosoftTelemetry;

/// @brief Field WdiContext offset 0
static System::Diagnostics::Tracing::EventKeywords const WdiContext;

/// @brief Field WdiDiagnostic offset 0
static System::Diagnostics::Tracing::EventKeywords const WdiDiagnostic;

/// @brief Field Sqm offset 0
static System::Diagnostics::Tracing::EventKeywords const Sqm;

/// @brief Field AuditFailure offset 0
static System::Diagnostics::Tracing::EventKeywords const AuditFailure;

/// @brief Field AuditSuccess offset 0
static System::Diagnostics::Tracing::EventKeywords const AuditSuccess;

/// @brief Field CorrelationHint offset 0
static System::Diagnostics::Tracing::EventKeywords const CorrelationHint;

/// @brief Field EventLogClassic offset 0
static System::Diagnostics::Tracing::EventKeywords const EventLogClassic;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Diagnostics::Tracing
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EventKeywords, "System.Diagnostics.Tracing", "EventKeywords");
