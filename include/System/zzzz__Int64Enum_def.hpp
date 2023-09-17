#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System {
struct Int64Enum;
}
// Type: System::Int64Enum
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2595))
// CS Name: System.Int64Enum
struct CORDL_TYPE Int64Enum : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: None }]
constexpr Int64Enum(int64_t value__) noexcept;


                    constexpr Int64Enum(Int64Enum const&) = default;
                    constexpr Int64Enum(Int64Enum&&) = default;
                    constexpr Int64Enum& operator=(Int64Enum const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Int64Enum& operator=(Int64Enum&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Int64Enum(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Int64Enum_Unwrapped : int64_t {
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Int64Enum_Unwrapped () const noexcept {
return std::bit_cast<__Int64Enum_Unwrapped>(__instance);
}


// Fields

 int64_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int64_t value) ;

constexpr int64_t __get_value__() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Int64Enum, "System", "Int64Enum");
