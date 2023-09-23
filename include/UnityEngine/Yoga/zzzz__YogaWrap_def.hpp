#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Yoga {
struct YogaWrap;
}
// Type: UnityEngine.Yoga::YogaWrap
namespace UnityEngine::Yoga {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15382))
// CS Name: UnityEngine.Yoga.YogaWrap
struct CORDL_TYPE YogaWrap : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr YogaWrap(int32_t value__) noexcept;


                    constexpr YogaWrap(YogaWrap const&) = default;
                    constexpr YogaWrap(YogaWrap&&) = default;
                    constexpr YogaWrap& operator=(YogaWrap const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr YogaWrap& operator=(YogaWrap&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit YogaWrap(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __YogaWrap_Unwrapped : int32_t {
__NoWrap = 0,
__Wrap = 1,
__WrapReverse = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __YogaWrap_Unwrapped () const noexcept {
return std::bit_cast<__YogaWrap_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NoWrap offset 0
static UnityEngine::Yoga::YogaWrap const NoWrap;

/// @brief Field Wrap offset 0
static UnityEngine::Yoga::YogaWrap const Wrap;

/// @brief Field WrapReverse offset 0
static UnityEngine::Yoga::YogaWrap const WrapReverse;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Yoga
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Yoga::YogaWrap, "UnityEngine.Yoga", "YogaWrap");
