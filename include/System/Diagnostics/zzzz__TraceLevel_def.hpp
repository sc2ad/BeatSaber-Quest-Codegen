#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Diagnostics {
struct TraceLevel;
}
// Type: System.Diagnostics::TraceLevel
namespace System::Diagnostics {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7793))
// CS Name: System.Diagnostics.TraceLevel
struct CORDL_TYPE TraceLevel : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TraceLevel(int32_t value__) noexcept;


                    constexpr TraceLevel(TraceLevel const&) = default;
                    constexpr TraceLevel(TraceLevel&&) = default;
                    constexpr TraceLevel& operator=(TraceLevel const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TraceLevel& operator=(TraceLevel&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TraceLevel(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TraceLevel_Unwrapped : int32_t {
__Off = 0,
__Error = 1,
__Warning = 2,
__Info = 3,
__Verbose = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TraceLevel_Unwrapped () const noexcept {
return std::bit_cast<__TraceLevel_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Off offset 0
static ::System::Diagnostics::TraceLevel const Off;

/// @brief Field Error offset 0
static ::System::Diagnostics::TraceLevel const Error;

/// @brief Field Warning offset 0
static ::System::Diagnostics::TraceLevel const Warning;

/// @brief Field Info offset 0
static ::System::Diagnostics::TraceLevel const Info;

/// @brief Field Verbose offset 0
static ::System::Diagnostics::TraceLevel const Verbose;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Diagnostics
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::TraceLevel, "System.Diagnostics", "TraceLevel");
