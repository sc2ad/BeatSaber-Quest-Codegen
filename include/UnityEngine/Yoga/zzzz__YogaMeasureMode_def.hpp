#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Yoga {
struct YogaMeasureMode;
}
// Type: UnityEngine.Yoga::YogaMeasureMode
namespace UnityEngine::Yoga {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15392))
// CS Name: UnityEngine.Yoga.YogaMeasureMode
struct CORDL_TYPE YogaMeasureMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr YogaMeasureMode(int32_t value__) noexcept;


                    constexpr YogaMeasureMode(YogaMeasureMode const&) = default;
                    constexpr YogaMeasureMode(YogaMeasureMode&&) = default;
                    constexpr YogaMeasureMode& operator=(YogaMeasureMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr YogaMeasureMode& operator=(YogaMeasureMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit YogaMeasureMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __YogaMeasureMode_Unwrapped : int32_t {
__Undefined = 0,
__Exactly = 1,
__AtMost = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __YogaMeasureMode_Unwrapped () const noexcept {
return std::bit_cast<__YogaMeasureMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Undefined offset 0
static UnityEngine::Yoga::YogaMeasureMode const Undefined;

/// @brief Field Exactly offset 0
static UnityEngine::Yoga::YogaMeasureMode const Exactly;

/// @brief Field AtMost offset 0
static UnityEngine::Yoga::YogaMeasureMode const AtMost;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Yoga
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Yoga::YogaMeasureMode, "UnityEngine.Yoga", "YogaMeasureMode");
