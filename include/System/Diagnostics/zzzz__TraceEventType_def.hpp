#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Diagnostics {
struct TraceEventType;
}
// Type: System.Diagnostics::TraceEventType
namespace System::Diagnostics {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7790))
// CS Name: System.Diagnostics.TraceEventType
struct CORDL_TYPE TraceEventType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TraceEventType(int32_t value__) noexcept;


                    constexpr TraceEventType(TraceEventType const&) = default;
                    constexpr TraceEventType(TraceEventType&&) = default;
                    constexpr TraceEventType& operator=(TraceEventType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TraceEventType& operator=(TraceEventType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TraceEventType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TraceEventType_Unwrapped : int32_t {
__Critical = 1,
__Error = 2,
__Warning = 4,
__Information = 8,
__Verbose = 16,
__Start = 256,
__Stop = 512,
__Suspend = 1024,
__Resume = 2048,
__Transfer = 4096,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TraceEventType_Unwrapped () const noexcept {
return std::bit_cast<__TraceEventType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Critical offset 0
static System::Diagnostics::TraceEventType const Critical;

/// @brief Field Error offset 0
static System::Diagnostics::TraceEventType const Error;

/// @brief Field Warning offset 0
static System::Diagnostics::TraceEventType const Warning;

/// @brief Field Information offset 0
static System::Diagnostics::TraceEventType const Information;

/// @brief Field Verbose offset 0
static System::Diagnostics::TraceEventType const Verbose;

/// @brief Field Start offset 0
static System::Diagnostics::TraceEventType const Start;

/// @brief Field Stop offset 0
static System::Diagnostics::TraceEventType const Stop;

/// @brief Field Suspend offset 0
static System::Diagnostics::TraceEventType const Suspend;

/// @brief Field Resume offset 0
static System::Diagnostics::TraceEventType const Resume;

/// @brief Field Transfer offset 0
static System::Diagnostics::TraceEventType const Transfer;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::TraceEventType, "System.Diagnostics", "TraceEventType");
