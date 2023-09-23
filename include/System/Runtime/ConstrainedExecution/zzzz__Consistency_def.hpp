#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Runtime::ConstrainedExecution {
struct Consistency;
}
// Type: System.Runtime.ConstrainedExecution::Consistency
namespace System::Runtime::ConstrainedExecution {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3344))
// CS Name: System.Runtime.ConstrainedExecution.Consistency
struct CORDL_TYPE Consistency : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Consistency(int32_t value__) noexcept;


                    constexpr Consistency(Consistency const&) = default;
                    constexpr Consistency(Consistency&&) = default;
                    constexpr Consistency& operator=(Consistency const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Consistency& operator=(Consistency&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Consistency(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Consistency_Unwrapped : int32_t {
__MayCorruptProcess = 0,
__MayCorruptAppDomain = 1,
__MayCorruptInstance = 2,
__WillNotCorruptState = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Consistency_Unwrapped () const noexcept {
return std::bit_cast<__Consistency_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field MayCorruptProcess offset 0
static System::Runtime::ConstrainedExecution::Consistency const MayCorruptProcess;

/// @brief Field MayCorruptAppDomain offset 0
static System::Runtime::ConstrainedExecution::Consistency const MayCorruptAppDomain;

/// @brief Field MayCorruptInstance offset 0
static System::Runtime::ConstrainedExecution::Consistency const MayCorruptInstance;

/// @brief Field WillNotCorruptState offset 0
static System::Runtime::ConstrainedExecution::Consistency const WillNotCorruptState;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::ConstrainedExecution
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::ConstrainedExecution::Consistency, "System.Runtime.ConstrainedExecution", "Consistency");
