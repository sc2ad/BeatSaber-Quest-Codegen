#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Zenject {
struct ToChoices;
}
// Type: Zenject::ToChoices
namespace Zenject {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10885))
// CS Name: Zenject.ToChoices
struct CORDL_TYPE ToChoices : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ToChoices(int32_t value__) noexcept;


                    constexpr ToChoices(ToChoices const&) = default;
                    constexpr ToChoices(ToChoices&&) = default;
                    constexpr ToChoices& operator=(ToChoices const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ToChoices& operator=(ToChoices&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ToChoices(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ToChoices_Unwrapped : int32_t {
__Self = 0,
__Concrete = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ToChoices_Unwrapped () const noexcept {
return std::bit_cast<__ToChoices_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Self offset 0
static ::Zenject::ToChoices const Self;

/// @brief Field Concrete offset 0
static ::Zenject::ToChoices const Concrete;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ToChoices, "Zenject", "ToChoices");
