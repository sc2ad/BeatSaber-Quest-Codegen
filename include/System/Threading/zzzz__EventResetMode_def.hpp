#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Threading {
struct EventResetMode;
}
// Type: System.Threading::EventResetMode
namespace System::Threading {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2660))
// CS Name: System.Threading.EventResetMode
struct CORDL_TYPE EventResetMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EventResetMode(int32_t value__) noexcept;


                    constexpr EventResetMode(EventResetMode const&) = default;
                    constexpr EventResetMode(EventResetMode&&) = default;
                    constexpr EventResetMode& operator=(EventResetMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EventResetMode& operator=(EventResetMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EventResetMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EventResetMode_Unwrapped : int32_t {
__AutoReset = 0,
__ManualReset = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EventResetMode_Unwrapped () const noexcept {
return std::bit_cast<__EventResetMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field AutoReset offset 0
static System::Threading::EventResetMode const AutoReset;

/// @brief Field ManualReset offset 0
static System::Threading::EventResetMode const ManualReset;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE(System::Threading::EventResetMode, "System.Threading", "EventResetMode");
