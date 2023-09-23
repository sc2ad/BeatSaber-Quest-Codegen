#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Yoga {
struct YogaDirection;
}
// Type: UnityEngine.Yoga::YogaDirection
namespace UnityEngine::Yoga {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15377))
// CS Name: UnityEngine.Yoga.YogaDirection
struct CORDL_TYPE YogaDirection : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr YogaDirection(int32_t value__) noexcept;


                    constexpr YogaDirection(YogaDirection const&) = default;
                    constexpr YogaDirection(YogaDirection&&) = default;
                    constexpr YogaDirection& operator=(YogaDirection const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr YogaDirection& operator=(YogaDirection&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit YogaDirection(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __YogaDirection_Unwrapped : int32_t {
__Inherit = 0,
__LTR = 1,
__RTL = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __YogaDirection_Unwrapped () const noexcept {
return std::bit_cast<__YogaDirection_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Inherit offset 0
static UnityEngine::Yoga::YogaDirection const Inherit;

/// @brief Field LTR offset 0
static UnityEngine::Yoga::YogaDirection const LTR;

/// @brief Field RTL offset 0
static UnityEngine::Yoga::YogaDirection const RTL;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Yoga
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Yoga::YogaDirection, "UnityEngine.Yoga", "YogaDirection");
