#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Reflection {
struct ExceptionHandlingClauseOptions;
}
// Type: System.Reflection::ExceptionHandlingClauseOptions
namespace System::Reflection {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3459))
// CS Name: System.Reflection.ExceptionHandlingClauseOptions
struct CORDL_TYPE ExceptionHandlingClauseOptions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ExceptionHandlingClauseOptions(int32_t value__) noexcept;


                    constexpr ExceptionHandlingClauseOptions(ExceptionHandlingClauseOptions const&) = default;
                    constexpr ExceptionHandlingClauseOptions(ExceptionHandlingClauseOptions&&) = default;
                    constexpr ExceptionHandlingClauseOptions& operator=(ExceptionHandlingClauseOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ExceptionHandlingClauseOptions& operator=(ExceptionHandlingClauseOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ExceptionHandlingClauseOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ExceptionHandlingClauseOptions_Unwrapped : int32_t {
__Clause = 0,
__Filter = 1,
__Finally = 2,
__Fault = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ExceptionHandlingClauseOptions_Unwrapped () const noexcept {
return std::bit_cast<__ExceptionHandlingClauseOptions_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Clause offset 0
static ::System::Reflection::ExceptionHandlingClauseOptions const Clause;

/// @brief Field Filter offset 0
static ::System::Reflection::ExceptionHandlingClauseOptions const Filter;

/// @brief Field Finally offset 0
static ::System::Reflection::ExceptionHandlingClauseOptions const Finally;

/// @brief Field Fault offset 0
static ::System::Reflection::ExceptionHandlingClauseOptions const Fault;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Reflection
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::ExceptionHandlingClauseOptions, "System.Reflection", "ExceptionHandlingClauseOptions");
