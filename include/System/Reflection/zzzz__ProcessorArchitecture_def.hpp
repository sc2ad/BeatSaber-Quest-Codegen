#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Reflection {
struct ProcessorArchitecture;
}
// Type: System.Reflection::ProcessorArchitecture
namespace System::Reflection {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3478))
// CS Name: System.Reflection.ProcessorArchitecture
struct CORDL_TYPE ProcessorArchitecture : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ProcessorArchitecture(int32_t value__) noexcept;


                    constexpr ProcessorArchitecture(ProcessorArchitecture const&) = default;
                    constexpr ProcessorArchitecture(ProcessorArchitecture&&) = default;
                    constexpr ProcessorArchitecture& operator=(ProcessorArchitecture const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ProcessorArchitecture& operator=(ProcessorArchitecture&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ProcessorArchitecture(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ProcessorArchitecture_Unwrapped : int32_t {
__None = 0,
__MSIL = 1,
__X86 = 2,
__IA64 = 3,
__Amd64 = 4,
__Arm = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProcessorArchitecture_Unwrapped () const noexcept {
return std::bit_cast<__ProcessorArchitecture_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::Reflection::ProcessorArchitecture const None;

/// @brief Field MSIL offset 0
static System::Reflection::ProcessorArchitecture const MSIL;

/// @brief Field X86 offset 0
static System::Reflection::ProcessorArchitecture const X86;

/// @brief Field IA64 offset 0
static System::Reflection::ProcessorArchitecture const IA64;

/// @brief Field Amd64 offset 0
static System::Reflection::ProcessorArchitecture const Amd64;

/// @brief Field Arm offset 0
static System::Reflection::ProcessorArchitecture const Arm;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::ProcessorArchitecture, "System.Reflection", "ProcessorArchitecture");
