#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Yoga {
struct YogaUnit;
}
// Type: UnityEngine.Yoga::YogaUnit
namespace UnityEngine::Yoga {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15385))
// CS Name: UnityEngine.Yoga.YogaUnit
struct CORDL_TYPE YogaUnit : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr YogaUnit(int32_t value__) noexcept;


                    constexpr YogaUnit(YogaUnit const&) = default;
                    constexpr YogaUnit(YogaUnit&&) = default;
                    constexpr YogaUnit& operator=(YogaUnit const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr YogaUnit& operator=(YogaUnit&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit YogaUnit(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __YogaUnit_Unwrapped : int32_t {
__Undefined = 0,
__Point = 1,
__Percent = 2,
__Auto = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __YogaUnit_Unwrapped () const noexcept {
return std::bit_cast<__YogaUnit_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Undefined offset 0
static UnityEngine::Yoga::YogaUnit const Undefined;

/// @brief Field Point offset 0
static UnityEngine::Yoga::YogaUnit const Point;

/// @brief Field Percent offset 0
static UnityEngine::Yoga::YogaUnit const Percent;

/// @brief Field Auto offset 0
static UnityEngine::Yoga::YogaUnit const Auto;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Yoga
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Yoga::YogaUnit, "UnityEngine.Yoga", "YogaUnit");
