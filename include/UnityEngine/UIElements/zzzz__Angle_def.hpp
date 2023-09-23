#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
struct AngleUnit;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__Angle__Unit;
}
namespace UnityEngine::UIElements {
struct Angle;
}
// Type: ::Unit
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7403))
// CS Name: UnityEngine.UIElements.Angle::Unit
struct CORDL_TYPE UnityEngine__UIElements__Angle__Unit : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__Angle__Unit(int32_t value__) noexcept;


                    constexpr UnityEngine__UIElements__Angle__Unit(UnityEngine__UIElements__Angle__Unit const&) = default;
                    constexpr UnityEngine__UIElements__Angle__Unit(UnityEngine__UIElements__Angle__Unit&&) = default;
                    constexpr UnityEngine__UIElements__Angle__Unit& operator=(UnityEngine__UIElements__Angle__Unit const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__Angle__Unit& operator=(UnityEngine__UIElements__Angle__Unit&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__Angle__Unit(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UIElements__Angle__Unit_Unwrapped : int32_t {
__Degree = 0,
__Gradian = 1,
__Radian = 2,
__Turn = 3,
__None = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UIElements__Angle__Unit_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UIElements__Angle__Unit_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Degree offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__Angle__Unit const Degree;

/// @brief Field Gradian offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__Angle__Unit const Gradian;

/// @brief Field Radian offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__Angle__Unit const Radian;

/// @brief Field Turn offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__Angle__Unit const Turn;

/// @brief Field None offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__Angle__Unit const None;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::Angle
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7404))
// CS Name: UnityEngine.UIElements.Angle
struct CORDL_TYPE Angle : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Unit = UnityEngine::UIElements::UnityEngine__UIElements__Angle__Unit;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::Angle>
constexpr operator  System::IEquatable_1<UnityEngine::UIElements::Angle>() const;

// Ctor Parameters [CppParam { name: "m_Value", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Unit", ty: "UnityEngine::UIElements::UnityEngine__UIElements__Angle__Unit", modifiers: "", def_value: None }]
constexpr Angle(float_t m_Value, UnityEngine::UIElements::UnityEngine__UIElements__Angle__Unit m_Unit) noexcept;


                    constexpr Angle(Angle const&) = default;
                    constexpr Angle(Angle&&) = default;
                    constexpr Angle& operator=(Angle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Angle& operator=(Angle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Angle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(float_t value) ;

constexpr float_t __get_m_Value() const;

 UnityEngine::UIElements::UnityEngine__UIElements__Angle__Unit __declspec(property(get=__get_m_Unit, put=__set_m_Unit))  m_Unit;

constexpr void __set_m_Unit(UnityEngine::UIElements::UnityEngine__UIElements__Angle__Unit value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__Angle__Unit __get_m_Unit() const;


// Properties

 float_t __declspec(property(get=get_value))  value;


// Methods

/// @brief Method None addr 0x2cfa548 size 0x8 virtual false final false
static UnityEngine::UIElements::Angle None() ;

/// @brief Method get_value addr 0x2cfa55c size 0x8 virtual false final false
 float_t get_value() ;

/// @brief Method .ctor addr 0x2cfa564 size 0xc virtual false final false
 void _ctor(float_t value, UnityEngine::UIElements::AngleUnit unit) ;

/// @brief Method .ctor addr 0x2cfa550 size 0xc virtual false final false
 void _ctor(float_t value, UnityEngine::UIElements::UnityEngine__UIElements__Angle__Unit unit) ;

/// @brief Method ToDegrees addr 0x2cf9420 size 0x84 virtual false final false
 float_t ToDegrees() ;

/// @brief Method op_Implicit addr 0x2cf8ea0 size 0x8 virtual false final false
static UnityEngine::UIElements::Angle op_Implicit_UnityEngine__UIElements__Angle(float_t value) ;

/// @brief Method op_Equality addr 0x2cf8fac size 0x28 virtual false final false
static bool op_Equality(UnityEngine::UIElements::Angle lhs, UnityEngine::UIElements::Angle rhs) ;

/// @brief Method Equals addr 0x2cfa570 size 0x28 virtual true final true
 bool Equals(UnityEngine::UIElements::Angle other) ;

/// @brief Method Equals addr 0x2cfa598 size 0x8c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2cf9198 size 0x28 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2cf9228 size 0x1d8 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__Angle__Unit, "UnityEngine.UIElements", "Angle/Unit");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::Angle, "UnityEngine.UIElements", "Angle");
