#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Mono::Math::Prime {
struct ConfidenceFactor;
}
// Type: Mono.Math.Prime::ConfidenceFactor
namespace Mono::Math::Prime {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14019))
// CS Name: Mono.Math.Prime.ConfidenceFactor
struct CORDL_TYPE ConfidenceFactor : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ConfidenceFactor(int32_t value__) noexcept;


                    constexpr ConfidenceFactor(ConfidenceFactor const&) = default;
                    constexpr ConfidenceFactor(ConfidenceFactor&&) = default;
                    constexpr ConfidenceFactor& operator=(ConfidenceFactor const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ConfidenceFactor& operator=(ConfidenceFactor&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ConfidenceFactor(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ConfidenceFactor_Unwrapped : int32_t {
__ExtraLow = 0,
__Low = 1,
__Medium = 2,
__High = 3,
__ExtraHigh = 4,
__Provable = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConfidenceFactor_Unwrapped () const noexcept {
return std::bit_cast<__ConfidenceFactor_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ExtraLow offset 0
static Mono::Math::Prime::ConfidenceFactor const ExtraLow;

/// @brief Field Low offset 0
static Mono::Math::Prime::ConfidenceFactor const Low;

/// @brief Field Medium offset 0
static Mono::Math::Prime::ConfidenceFactor const Medium;

/// @brief Field High offset 0
static Mono::Math::Prime::ConfidenceFactor const High;

/// @brief Field ExtraHigh offset 0
static Mono::Math::Prime::ConfidenceFactor const ExtraHigh;

/// @brief Field Provable offset 0
static Mono::Math::Prime::ConfidenceFactor const Provable;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Math::Prime
DEFINE_IL2CPP_ARG_TYPE(Mono::Math::Prime::ConfidenceFactor, "Mono.Math.Prime", "ConfidenceFactor");
