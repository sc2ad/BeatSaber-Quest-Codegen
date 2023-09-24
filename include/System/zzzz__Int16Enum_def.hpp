#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System {
struct Int16Enum;
}
// Type: System::Int16Enum
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2593))
// CS Name: System.Int16Enum
struct CORDL_TYPE Int16Enum : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: None }]
constexpr Int16Enum(int16_t value__) noexcept;


                    constexpr Int16Enum(Int16Enum const&) = default;
                    constexpr Int16Enum(Int16Enum&&) = default;
                    constexpr Int16Enum& operator=(Int16Enum const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Int16Enum& operator=(Int16Enum&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x2};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Int16Enum(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Int16Enum_Unwrapped : int16_t {
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Int16Enum_Unwrapped () const noexcept {
return std::bit_cast<__Int16Enum_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int16_t;


// Fields

 int16_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int16_t value) ;

constexpr int16_t __get_value__() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::Int16Enum, "System", "Int16Enum");
