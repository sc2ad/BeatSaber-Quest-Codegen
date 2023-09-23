#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
// Forward declare root types
namespace Mono {
struct ValueTuple;
}
// Type: Mono::ValueTuple
namespace Mono {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2242))
// CS Name: Mono.ValueTuple
struct CORDL_TYPE ValueTuple : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ValueTuple(ValueTuple const&) = default;
                    constexpr ValueTuple(ValueTuple&&) = default;
                    constexpr ValueTuple& operator=(ValueTuple const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ValueTuple& operator=(ValueTuple&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ValueTuple(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono
DEFINE_IL2CPP_ARG_TYPE(Mono::ValueTuple, "Mono", "ValueTuple");
