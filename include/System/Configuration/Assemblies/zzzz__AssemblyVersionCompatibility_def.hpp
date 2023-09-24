#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Configuration::Assemblies {
struct AssemblyVersionCompatibility;
}
// Type: System.Configuration.Assemblies::AssemblyVersionCompatibility
namespace System::Configuration::Assemblies {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3736))
// CS Name: System.Configuration.Assemblies.AssemblyVersionCompatibility
struct CORDL_TYPE AssemblyVersionCompatibility : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AssemblyVersionCompatibility(int32_t value__) noexcept;


                    constexpr AssemblyVersionCompatibility(AssemblyVersionCompatibility const&) = default;
                    constexpr AssemblyVersionCompatibility(AssemblyVersionCompatibility&&) = default;
                    constexpr AssemblyVersionCompatibility& operator=(AssemblyVersionCompatibility const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AssemblyVersionCompatibility& operator=(AssemblyVersionCompatibility&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AssemblyVersionCompatibility(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AssemblyVersionCompatibility_Unwrapped : int32_t {
__SameMachine = 1,
__SameProcess = 2,
__SameDomain = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AssemblyVersionCompatibility_Unwrapped () const noexcept {
return std::bit_cast<__AssemblyVersionCompatibility_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field SameMachine offset 0
static System::Configuration::Assemblies::AssemblyVersionCompatibility const SameMachine;

/// @brief Field SameProcess offset 0
static System::Configuration::Assemblies::AssemblyVersionCompatibility const SameProcess;

/// @brief Field SameDomain offset 0
static System::Configuration::Assemblies::AssemblyVersionCompatibility const SameDomain;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Configuration::Assemblies
DEFINE_IL2CPP_ARG_TYPE(System::Configuration::Assemblies::AssemblyVersionCompatibility, "System.Configuration.Assemblies", "AssemblyVersionCompatibility");
