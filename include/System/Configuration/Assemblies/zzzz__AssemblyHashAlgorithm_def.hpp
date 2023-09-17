#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Configuration::Assemblies {
struct AssemblyHashAlgorithm;
}
// Type: System.Configuration.Assemblies::AssemblyHashAlgorithm
namespace System::Configuration::Assemblies {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3735))
// CS Name: System.Configuration.Assemblies.AssemblyHashAlgorithm
struct CORDL_TYPE AssemblyHashAlgorithm : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AssemblyHashAlgorithm(int32_t value__) noexcept;


                    constexpr AssemblyHashAlgorithm(AssemblyHashAlgorithm const&) = default;
                    constexpr AssemblyHashAlgorithm(AssemblyHashAlgorithm&&) = default;
                    constexpr AssemblyHashAlgorithm& operator=(AssemblyHashAlgorithm const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AssemblyHashAlgorithm& operator=(AssemblyHashAlgorithm&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AssemblyHashAlgorithm(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AssemblyHashAlgorithm_Unwrapped : int32_t {
__None = 0,
__MD5 = 32771,
__SHA1 = 32772,
__SHA256 = 32780,
__SHA384 = 32781,
__SHA512 = 32782,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AssemblyHashAlgorithm_Unwrapped () const noexcept {
return std::bit_cast<__AssemblyHashAlgorithm_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::Configuration::Assemblies::AssemblyHashAlgorithm const None;

/// @brief Field MD5 offset 0
static ::System::Configuration::Assemblies::AssemblyHashAlgorithm const MD5;

/// @brief Field SHA1 offset 0
static ::System::Configuration::Assemblies::AssemblyHashAlgorithm const SHA1;

/// @brief Field SHA256 offset 0
static ::System::Configuration::Assemblies::AssemblyHashAlgorithm const SHA256;

/// @brief Field SHA384 offset 0
static ::System::Configuration::Assemblies::AssemblyHashAlgorithm const SHA384;

/// @brief Field SHA512 offset 0
static ::System::Configuration::Assemblies::AssemblyHashAlgorithm const SHA512;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Configuration::Assemblies
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::Assemblies::AssemblyHashAlgorithm, "System.Configuration.Assemblies", "AssemblyHashAlgorithm");