#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
struct Length;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::UIElements {
struct TimeValue;
}
namespace UnityEngine::UIElements {
struct Angle;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct ____UnityEngine__UIElements__StyleSheets__Dimension__Unit;
}
namespace UnityEngine::UIElements::StyleSheets {
struct Dimension;
}
// Type: ::Unit
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7571))
// CS Name: UnityEngine.UIElements.StyleSheets.Dimension::Unit
struct CORDL_TYPE ____UnityEngine__UIElements__StyleSheets__Dimension__Unit : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UIElements__StyleSheets__Dimension__Unit(int32_t value__) noexcept;


                    constexpr ____UnityEngine__UIElements__StyleSheets__Dimension__Unit(____UnityEngine__UIElements__StyleSheets__Dimension__Unit const&) = default;
                    constexpr ____UnityEngine__UIElements__StyleSheets__Dimension__Unit(____UnityEngine__UIElements__StyleSheets__Dimension__Unit&&) = default;
                    constexpr ____UnityEngine__UIElements__StyleSheets__Dimension__Unit& operator=(____UnityEngine__UIElements__StyleSheets__Dimension__Unit const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UIElements__StyleSheets__Dimension__Unit& operator=(____UnityEngine__UIElements__StyleSheets__Dimension__Unit&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__StyleSheets__Dimension__Unit(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__UIElements__StyleSheets__Dimension__Unit_Unwrapped : int32_t {
__Unitless = 0,
__Pixel = 1,
__Percent = 2,
__Second = 3,
__Millisecond = 4,
__Degree = 5,
__Gradian = 6,
__Radian = 7,
__Turn = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__UIElements__StyleSheets__Dimension__Unit_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__UIElements__StyleSheets__Dimension__Unit_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unitless offset 0
static ::UnityEngine::UIElements::StyleSheets::____UnityEngine__UIElements__StyleSheets__Dimension__Unit const Unitless;

/// @brief Field Pixel offset 0
static ::UnityEngine::UIElements::StyleSheets::____UnityEngine__UIElements__StyleSheets__Dimension__Unit const Pixel;

/// @brief Field Percent offset 0
static ::UnityEngine::UIElements::StyleSheets::____UnityEngine__UIElements__StyleSheets__Dimension__Unit const Percent;

/// @brief Field Second offset 0
static ::UnityEngine::UIElements::StyleSheets::____UnityEngine__UIElements__StyleSheets__Dimension__Unit const Second;

/// @brief Field Millisecond offset 0
static ::UnityEngine::UIElements::StyleSheets::____UnityEngine__UIElements__StyleSheets__Dimension__Unit const Millisecond;

/// @brief Field Degree offset 0
static ::UnityEngine::UIElements::StyleSheets::____UnityEngine__UIElements__StyleSheets__Dimension__Unit const Degree;

/// @brief Field Gradian offset 0
static ::UnityEngine::UIElements::StyleSheets::____UnityEngine__UIElements__StyleSheets__Dimension__Unit const Gradian;

/// @brief Field Radian offset 0
static ::UnityEngine::UIElements::StyleSheets::____UnityEngine__UIElements__StyleSheets__Dimension__Unit const Radian;

/// @brief Field Turn offset 0
static ::UnityEngine::UIElements::StyleSheets::____UnityEngine__UIElements__StyleSheets__Dimension__Unit const Turn;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets
// Type: UnityEngine.UIElements.StyleSheets::Dimension
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7572))
// CS Name: UnityEngine.UIElements.StyleSheets.Dimension
struct CORDL_TYPE Dimension : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Unit = ::UnityEngine::UIElements::StyleSheets::____UnityEngine__UIElements__StyleSheets__Dimension__Unit;

/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::UIElements::StyleSheets::Dimension>
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::StyleSheets::Dimension>() const;

// Ctor Parameters [CppParam { name: "unit", ty: "::UnityEngine::UIElements::StyleSheets::____UnityEngine__UIElements__StyleSheets__Dimension__Unit", modifiers: "", def_value: None }, CppParam { name: "value", ty: "float_t", modifiers: "", def_value: None }]
constexpr Dimension(::UnityEngine::UIElements::StyleSheets::____UnityEngine__UIElements__StyleSheets__Dimension__Unit unit, float_t value) noexcept;


                    constexpr Dimension(Dimension const&) = default;
                    constexpr Dimension(Dimension&&) = default;
                    constexpr Dimension& operator=(Dimension const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Dimension& operator=(Dimension&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Dimension(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::UIElements::StyleSheets::____UnityEngine__UIElements__StyleSheets__Dimension__Unit __declspec(property(get=__get_unit, put=__set_unit))  unit;

constexpr void __set_unit(::UnityEngine::UIElements::StyleSheets::____UnityEngine__UIElements__StyleSheets__Dimension__Unit value) ;

constexpr ::UnityEngine::UIElements::StyleSheets::____UnityEngine__UIElements__StyleSheets__Dimension__Unit __get_unit() const;

 float_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(float_t value) ;

constexpr float_t __get_value() const;


// Methods

/// @brief Method .ctor addr 0x2c717c8 size 0xc virtual false final false
 void _ctor(float_t value, ::UnityEngine::UIElements::StyleSheets::____UnityEngine__UIElements__StyleSheets__Dimension__Unit unit) ;

/// @brief Method ToLength addr 0x2c6dd70 size 0x30 virtual false final false
 ::UnityEngine::UIElements::Length ToLength() ;

/// @brief Method ToTime addr 0x2c6dda0 size 0x30 virtual false final false
 ::UnityEngine::UIElements::TimeValue ToTime() ;

/// @brief Method ToAngle addr 0x2c70a44 size 0xa4 virtual false final false
 ::UnityEngine::UIElements::Angle ToAngle() ;

/// @brief Method op_Equality addr 0x2c717d4 size 0x28 virtual false final false
static bool op_Equality(::UnityEngine::UIElements::StyleSheets::Dimension lhs, ::UnityEngine::UIElements::StyleSheets::Dimension rhs) ;

/// @brief Method Equals addr 0x2c717fc size 0x28 virtual true final true
 bool Equals(::UnityEngine::UIElements::StyleSheets::Dimension other) ;

/// @brief Method Equals addr 0x2c71824 size 0x8c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2c718b0 size 0x48 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2c6d19c size 0x130 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::____UnityEngine__UIElements__StyleSheets__Dimension__Unit, "UnityEngine.UIElements.StyleSheets", "Dimension/Unit");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::Dimension, "UnityEngine.UIElements.StyleSheets", "Dimension");
