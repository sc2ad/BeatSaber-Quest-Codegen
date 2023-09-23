#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System {
struct UInt16Enum;
}
// Type: System::UInt16Enum
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2597))
// CS Name: System.UInt16Enum
struct CORDL_TYPE UInt16Enum : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr UInt16Enum(uint16_t value__) noexcept;


                    constexpr UInt16Enum(UInt16Enum const&) = default;
                    constexpr UInt16Enum(UInt16Enum&&) = default;
                    constexpr UInt16Enum& operator=(UInt16Enum const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UInt16Enum& operator=(UInt16Enum&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x2};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UInt16Enum(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UInt16Enum_Unwrapped : uint16_t {
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UInt16Enum_Unwrapped () const noexcept {
return std::bit_cast<__UInt16Enum_Unwrapped>(__instance);
}


// Fields

 uint16_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint16_t value) ;

constexpr uint16_t __get_value__() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::UInt16Enum, "System", "UInt16Enum");
