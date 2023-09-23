#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::Yoga {
struct YogaUnit;
}
// Forward declare root types
namespace UnityEngine::Yoga {
struct YogaValue;
}
// Type: UnityEngine.Yoga::YogaValue
namespace UnityEngine::Yoga {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15386))
// CS Name: UnityEngine.Yoga.YogaValue
struct CORDL_TYPE YogaValue : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "unit", ty: "UnityEngine::Yoga::YogaUnit", modifiers: "", def_value: None }]
constexpr YogaValue(float_t value, UnityEngine::Yoga::YogaUnit unit) noexcept;


                    constexpr YogaValue(YogaValue const&) = default;
                    constexpr YogaValue(YogaValue&&) = default;
                    constexpr YogaValue& operator=(YogaValue const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr YogaValue& operator=(YogaValue&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit YogaValue(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(float_t value) ;

constexpr float_t __get_value() const;

 UnityEngine::Yoga::YogaUnit __declspec(property(get=__get_unit, put=__set_unit))  unit;

constexpr void __set_unit(UnityEngine::Yoga::YogaUnit value) ;

constexpr UnityEngine::Yoga::YogaUnit __get_unit() const;


// Properties

 UnityEngine::Yoga::YogaUnit __declspec(property(get=get_Unit))  Unit;

 float_t __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method get_Unit addr 0x2d2add4 size 0x8 virtual false final false
 UnityEngine::Yoga::YogaUnit get_Unit() ;

/// @brief Method get_Value addr 0x2d2addc size 0x8 virtual false final false
 float_t get_Value() ;

/// @brief Method Point addr 0x2d2df84 size 0x24 virtual false final false
static UnityEngine::Yoga::YogaValue Point(float_t value) ;

/// @brief Method Equals addr 0x2d2dfa8 size 0x60 virtual false final false
 bool Equals(UnityEngine::Yoga::YogaValue other) ;

/// @brief Method Equals addr 0x2d2e008 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2d2e080 size 0x3c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Auto addr 0x2d2e0bc size 0xc virtual false final false
static UnityEngine::Yoga::YogaValue Auto() ;

/// @brief Method Percent addr 0x2d2e0c8 size 0x28 virtual false final false
static UnityEngine::Yoga::YogaValue Percent(float_t value) ;

/// @brief Method op_Implicit addr 0x2d2e0f0 size 0x2c virtual false final false
static UnityEngine::Yoga::YogaValue op_Implicit_UnityEngine__Yoga__YogaValue(float_t pointValue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Yoga
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Yoga::YogaValue, "UnityEngine.Yoga", "YogaValue");
