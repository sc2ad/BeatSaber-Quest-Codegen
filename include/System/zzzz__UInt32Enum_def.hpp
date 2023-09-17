#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System {
struct UInt32Enum;
}
// Type: System::UInt32Enum
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2598))
// CS Name: System.UInt32Enum
struct CORDL_TYPE UInt32Enum : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr UInt32Enum(uint32_t value__) noexcept;


                    constexpr UInt32Enum(UInt32Enum const&) = default;
                    constexpr UInt32Enum(UInt32Enum&&) = default;
                    constexpr UInt32Enum& operator=(UInt32Enum const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UInt32Enum& operator=(UInt32Enum&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UInt32Enum(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UInt32Enum_Unwrapped : uint32_t {
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UInt32Enum_Unwrapped () const noexcept {
return std::bit_cast<__UInt32Enum_Unwrapped>(__instance);
}


// Fields

 uint32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint32_t value) ;

constexpr uint32_t __get_value__() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::UInt32Enum, "System", "UInt32Enum");
