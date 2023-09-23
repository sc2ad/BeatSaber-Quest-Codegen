#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Configuration {
struct ConfigurationSaveMode;
}
// Type: System.Configuration::ConfigurationSaveMode
namespace System::Configuration {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16074))
// CS Name: System.Configuration.ConfigurationSaveMode
struct CORDL_TYPE ConfigurationSaveMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ConfigurationSaveMode(int32_t value__) noexcept;


                    constexpr ConfigurationSaveMode(ConfigurationSaveMode const&) = default;
                    constexpr ConfigurationSaveMode(ConfigurationSaveMode&&) = default;
                    constexpr ConfigurationSaveMode& operator=(ConfigurationSaveMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ConfigurationSaveMode& operator=(ConfigurationSaveMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ConfigurationSaveMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ConfigurationSaveMode_Unwrapped : int32_t {
__Full = 2,
__Minimal = 1,
__Modified = 0,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConfigurationSaveMode_Unwrapped () const noexcept {
return std::bit_cast<__ConfigurationSaveMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Full offset 0
static System::Configuration::ConfigurationSaveMode const Full;

/// @brief Field Minimal offset 0
static System::Configuration::ConfigurationSaveMode const Minimal;

/// @brief Field Modified offset 0
static System::Configuration::ConfigurationSaveMode const Modified;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Configuration
DEFINE_IL2CPP_ARG_TYPE(System::Configuration::ConfigurationSaveMode, "System.Configuration", "ConfigurationSaveMode");
