#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Reflection {
struct AssemblyNameFlags;
}
// Type: System.Reflection::AssemblyNameFlags
namespace System::Reflection {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3446))
// CS Name: System.Reflection.AssemblyNameFlags
struct CORDL_TYPE AssemblyNameFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AssemblyNameFlags(int32_t value__) noexcept;


                    constexpr AssemblyNameFlags(AssemblyNameFlags const&) = default;
                    constexpr AssemblyNameFlags(AssemblyNameFlags&&) = default;
                    constexpr AssemblyNameFlags& operator=(AssemblyNameFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AssemblyNameFlags& operator=(AssemblyNameFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AssemblyNameFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AssemblyNameFlags_Unwrapped : int32_t {
__None = 0,
__PublicKey = 1,
__EnableJITcompileOptimizer = 16384,
__EnableJITcompileTracking = 32768,
__Retargetable = 256,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AssemblyNameFlags_Unwrapped () const noexcept {
return std::bit_cast<__AssemblyNameFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::Reflection::AssemblyNameFlags const None;

/// @brief Field PublicKey offset 0
static ::System::Reflection::AssemblyNameFlags const PublicKey;

/// @brief Field EnableJITcompileOptimizer offset 0
static ::System::Reflection::AssemblyNameFlags const EnableJITcompileOptimizer;

/// @brief Field EnableJITcompileTracking offset 0
static ::System::Reflection::AssemblyNameFlags const EnableJITcompileTracking;

/// @brief Field Retargetable offset 0
static ::System::Reflection::AssemblyNameFlags const Retargetable;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Reflection
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyNameFlags, "System.Reflection", "AssemblyNameFlags");
