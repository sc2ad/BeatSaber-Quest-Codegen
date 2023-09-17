#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Runtime::ConstrainedExecution {
struct Cer;
}
// Type: System.Runtime.ConstrainedExecution::Cer
namespace System::Runtime::ConstrainedExecution {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3343))
// CS Name: System.Runtime.ConstrainedExecution.Cer
struct CORDL_TYPE Cer : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Cer(int32_t value__) noexcept;


                    constexpr Cer(Cer const&) = default;
                    constexpr Cer(Cer&&) = default;
                    constexpr Cer& operator=(Cer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Cer& operator=(Cer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Cer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Cer_Unwrapped : int32_t {
__None = 0,
__MayFail = 1,
__Success = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Cer_Unwrapped () const noexcept {
return std::bit_cast<__Cer_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::Runtime::ConstrainedExecution::Cer const None;

/// @brief Field MayFail offset 0
static ::System::Runtime::ConstrainedExecution::Cer const MayFail;

/// @brief Field Success offset 0
static ::System::Runtime::ConstrainedExecution::Cer const Success;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::ConstrainedExecution
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::ConstrainedExecution::Cer, "System.Runtime.ConstrainedExecution", "Cer");
