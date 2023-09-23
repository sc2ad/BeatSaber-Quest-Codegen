#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Mono::Security::Interface {
struct AlertLevel;
}
// Type: Mono.Security.Interface::AlertLevel
namespace Mono::Security::Interface {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13983))
// CS Name: Mono.Security.Interface.AlertLevel
struct CORDL_TYPE AlertLevel : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr AlertLevel(uint8_t value__) noexcept;


                    constexpr AlertLevel(AlertLevel const&) = default;
                    constexpr AlertLevel(AlertLevel&&) = default;
                    constexpr AlertLevel& operator=(AlertLevel const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AlertLevel& operator=(AlertLevel&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AlertLevel(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AlertLevel_Unwrapped : uint8_t {
__Warning = 1u,
__Fatal = 2u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AlertLevel_Unwrapped () const noexcept {
return std::bit_cast<__AlertLevel_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field Warning offset 0
static Mono::Security::Interface::AlertLevel const Warning;

/// @brief Field Fatal offset 0
static Mono::Security::Interface::AlertLevel const Fatal;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Security::Interface
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Interface::AlertLevel, "Mono.Security.Interface", "AlertLevel");
