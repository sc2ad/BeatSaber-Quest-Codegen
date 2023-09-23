#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Zenject {
struct InvalidBindResponses;
}
// Type: Zenject::InvalidBindResponses
namespace Zenject {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10886))
// CS Name: Zenject.InvalidBindResponses
struct CORDL_TYPE InvalidBindResponses : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InvalidBindResponses(int32_t value__) noexcept;


                    constexpr InvalidBindResponses(InvalidBindResponses const&) = default;
                    constexpr InvalidBindResponses(InvalidBindResponses&&) = default;
                    constexpr InvalidBindResponses& operator=(InvalidBindResponses const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InvalidBindResponses& operator=(InvalidBindResponses&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InvalidBindResponses(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __InvalidBindResponses_Unwrapped : int32_t {
__Assert = 0,
__Skip = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InvalidBindResponses_Unwrapped () const noexcept {
return std::bit_cast<__InvalidBindResponses_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Assert offset 0
static Zenject::InvalidBindResponses const Assert;

/// @brief Field Skip offset 0
static Zenject::InvalidBindResponses const Skip;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE(Zenject::InvalidBindResponses, "Zenject", "InvalidBindResponses");
