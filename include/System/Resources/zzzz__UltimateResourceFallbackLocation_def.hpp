#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Resources {
struct UltimateResourceFallbackLocation;
}
// Type: System.Resources::UltimateResourceFallbackLocation
namespace System::Resources {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3423))
// CS Name: System.Resources.UltimateResourceFallbackLocation
struct CORDL_TYPE UltimateResourceFallbackLocation : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UltimateResourceFallbackLocation(int32_t value__) noexcept;


                    constexpr UltimateResourceFallbackLocation(UltimateResourceFallbackLocation const&) = default;
                    constexpr UltimateResourceFallbackLocation(UltimateResourceFallbackLocation&&) = default;
                    constexpr UltimateResourceFallbackLocation& operator=(UltimateResourceFallbackLocation const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UltimateResourceFallbackLocation& operator=(UltimateResourceFallbackLocation&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UltimateResourceFallbackLocation(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UltimateResourceFallbackLocation_Unwrapped : int32_t {
__MainAssembly = 0,
__Satellite = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UltimateResourceFallbackLocation_Unwrapped () const noexcept {
return std::bit_cast<__UltimateResourceFallbackLocation_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field MainAssembly offset 0
static ::System::Resources::UltimateResourceFallbackLocation const MainAssembly;

/// @brief Field Satellite offset 0
static ::System::Resources::UltimateResourceFallbackLocation const Satellite;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Resources
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::UltimateResourceFallbackLocation, "System.Resources", "UltimateResourceFallbackLocation");
