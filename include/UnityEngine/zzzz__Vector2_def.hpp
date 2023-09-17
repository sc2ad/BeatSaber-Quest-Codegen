#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
class IFormattable;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
class IFormatProvider;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine {
struct Vector2;
}
// Type: UnityEngine::Vector2
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10184))
// CS Name: UnityEngine.Vector2
struct CORDL_TYPE Vector2 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::Vector2>
constexpr operator  ::System::IEquatable_1<::UnityEngine::Vector2>() const;

/// @brief Convert operator to ::System::IFormattable
constexpr operator  ::System::IFormattable() const;

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }]
constexpr Vector2(float_t x, float_t y) noexcept;


                    constexpr Vector2(Vector2 const&) = default;
                    constexpr Vector2(Vector2&&) = default;
                    constexpr Vector2& operator=(Vector2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Vector2& operator=(Vector2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Vector2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(float_t value) ;

constexpr float_t __get_x() const;

 float_t __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(float_t value) ;

constexpr float_t __get_y() const;

static ::UnityEngine::Vector2 __declspec(property(get=__get_zeroVector, put=__set_zeroVector))  zeroVector;

static void __set_zeroVector(::UnityEngine::Vector2 value) ;

static ::UnityEngine::Vector2 __get_zeroVector() ;

static ::UnityEngine::Vector2 __declspec(property(get=__get_oneVector, put=__set_oneVector))  oneVector;

static void __set_oneVector(::UnityEngine::Vector2 value) ;

static ::UnityEngine::Vector2 __get_oneVector() ;

static ::UnityEngine::Vector2 __declspec(property(get=__get_upVector, put=__set_upVector))  upVector;

static void __set_upVector(::UnityEngine::Vector2 value) ;

static ::UnityEngine::Vector2 __get_upVector() ;

static ::UnityEngine::Vector2 __declspec(property(get=__get_downVector, put=__set_downVector))  downVector;

static void __set_downVector(::UnityEngine::Vector2 value) ;

static ::UnityEngine::Vector2 __get_downVector() ;

static ::UnityEngine::Vector2 __declspec(property(get=__get_leftVector, put=__set_leftVector))  leftVector;

static void __set_leftVector(::UnityEngine::Vector2 value) ;

static ::UnityEngine::Vector2 __get_leftVector() ;

static ::UnityEngine::Vector2 __declspec(property(get=__get_rightVector, put=__set_rightVector))  rightVector;

static void __set_rightVector(::UnityEngine::Vector2 value) ;

static ::UnityEngine::Vector2 __get_rightVector() ;

static ::UnityEngine::Vector2 __declspec(property(get=__get_positiveInfinityVector, put=__set_positiveInfinityVector))  positiveInfinityVector;

static void __set_positiveInfinityVector(::UnityEngine::Vector2 value) ;

static ::UnityEngine::Vector2 __get_positiveInfinityVector() ;

static ::UnityEngine::Vector2 __declspec(property(get=__get_negativeInfinityVector, put=__set_negativeInfinityVector))  negativeInfinityVector;

static void __set_negativeInfinityVector(::UnityEngine::Vector2 value) ;

static ::UnityEngine::Vector2 __get_negativeInfinityVector() ;

/// @brief Field kEpsilon offset 0
static constexpr float_t  kEpsilon{0.00001};

/// @brief Field kEpsilonNormalSqrt offset 0
static constexpr float_t  kEpsilonNormalSqrt{0.000000000000001};


// Properties

 float_t __declspec(property(get=get_Item, put=set_Item))  Item;

 ::UnityEngine::Vector2 __declspec(property(get=get_normalized))  normalized;

 float_t __declspec(property(get=get_magnitude))  magnitude;

 float_t __declspec(property(get=get_sqrMagnitude))  sqrMagnitude;

static ::UnityEngine::Vector2 __declspec(property(get=get_zero))  zero;

static ::UnityEngine::Vector2 __declspec(property(get=get_one))  one;

static ::UnityEngine::Vector2 __declspec(property(get=get_up))  up;

static ::UnityEngine::Vector2 __declspec(property(get=get_down))  down;

static ::UnityEngine::Vector2 __declspec(property(get=get_right))  right;


// Methods

/// @brief Method get_Item addr 0x2b5d95c size 0x6c virtual false final false
 float_t get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x2b5d9c8 size 0x6c virtual false final false
 void set_Item(int32_t index, float_t value) ;

/// @brief Method .ctor addr 0x2b5da34 size 0x8 virtual false final false
 void _ctor(float_t x, float_t y) ;

/// @brief Method Lerp addr 0x2b5da3c size 0x30 virtual false final false
static ::UnityEngine::Vector2 Lerp(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b, float_t t) ;

/// @brief Method LerpUnclamped addr 0x2b5da6c size 0x1c virtual false final false
static ::UnityEngine::Vector2 LerpUnclamped(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b, float_t t) ;

/// @brief Method Scale addr 0x2b5da88 size 0xc virtual false final false
static ::UnityEngine::Vector2 Scale(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b) ;

/// @brief Method Scale addr 0x2b5da94 size 0x14 virtual false final false
 void Scale(::UnityEngine::Vector2 scale) ;

/// @brief Method Normalize addr 0x2b5daa8 size 0xc8 virtual false final false
 void Normalize() ;

/// @brief Method get_normalized addr 0x2b5db70 size 0xb0 virtual false final false
 ::UnityEngine::Vector2 get_normalized() ;

/// @brief Method ToString addr 0x2b5dc20 size 0xc virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x2b5dc2c size 0x8 virtual false final false
 ::StringW ToString(::StringW format) ;

/// @brief Method ToString addr 0x2b53db8 size 0x188 virtual true final true
 ::StringW ToString(::StringW format, ::System::IFormatProvider formatProvider) ;

/// @brief Method GetHashCode addr 0x2b5dc34 size 0x34 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2b5dc68 size 0x88 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method Equals addr 0x2b5dcf0 size 0x24 virtual true final true
 bool Equals(::UnityEngine::Vector2 other) ;

/// @brief Method Perpendicular addr 0x2b5dd14 size 0x14 virtual false final false
static ::UnityEngine::Vector2 Perpendicular(::UnityEngine::Vector2 inDirection) ;

/// @brief Method Dot addr 0x2b5dd28 size 0x10 virtual false final false
static float_t Dot(::UnityEngine::Vector2 lhs, ::UnityEngine::Vector2 rhs) ;

/// @brief Method get_magnitude addr 0x2b5dd38 size 0x6c virtual false final false
 float_t get_magnitude() ;

/// @brief Method get_sqrMagnitude addr 0x2b5dda4 size 0x14 virtual false final false
 float_t get_sqrMagnitude() ;

/// @brief Method Angle addr 0x2b5ddb8 size 0xf4 virtual false final false
static float_t Angle(::UnityEngine::Vector2 from, ::UnityEngine::Vector2 to) ;

/// @brief Method SignedAngle addr 0x2b5deac size 0x10c virtual false final false
static float_t SignedAngle(::UnityEngine::Vector2 from, ::UnityEngine::Vector2 to) ;

/// @brief Method Distance addr 0x2b5dfb8 size 0x84 virtual false final false
static float_t Distance(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b) ;

/// @brief Method ClampMagnitude addr 0x2b5e03c size 0x94 virtual false final false
static ::UnityEngine::Vector2 ClampMagnitude(::UnityEngine::Vector2 vector, float_t maxLength) ;

/// @brief Method SqrMagnitude addr 0x2b5e0d0 size 0x10 virtual false final false
static float_t SqrMagnitude(::UnityEngine::Vector2 a) ;

/// @brief Method Min addr 0x2b5e0e0 size 0x14 virtual false final false
static ::UnityEngine::Vector2 Min(::UnityEngine::Vector2 lhs, ::UnityEngine::Vector2 rhs) ;

/// @brief Method Max addr 0x2b5e0f4 size 0x14 virtual false final false
static ::UnityEngine::Vector2 Max(::UnityEngine::Vector2 lhs, ::UnityEngine::Vector2 rhs) ;

/// @brief Method op_Addition addr 0x2b5e108 size 0xc virtual false final false
static ::UnityEngine::Vector2 op_Addition(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b) ;

/// @brief Method op_Subtraction addr 0x2b5e114 size 0xc virtual false final false
static ::UnityEngine::Vector2 op_Subtraction(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b) ;

/// @brief Method op_Multiply addr 0x2b5e120 size 0xc virtual false final false
static ::UnityEngine::Vector2 op_Multiply(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b) ;

/// @brief Method op_Division addr 0x2b5e12c size 0xc virtual false final false
static ::UnityEngine::Vector2 op_Division(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b) ;

/// @brief Method op_UnaryNegation addr 0x2b5e138 size 0xc virtual false final false
static ::UnityEngine::Vector2 op_UnaryNegation(::UnityEngine::Vector2 a) ;

/// @brief Method op_Multiply addr 0x2b5e144 size 0xc virtual false final false
static ::UnityEngine::Vector2 op_Multiply(::UnityEngine::Vector2 a, float_t d) ;

/// @brief Method op_Multiply addr 0x2b5e150 size 0x10 virtual false final false
static ::UnityEngine::Vector2 op_Multiply(float_t d, ::UnityEngine::Vector2 a) ;

/// @brief Method op_Division addr 0x2b5e160 size 0xc virtual false final false
static ::UnityEngine::Vector2 op_Division(::UnityEngine::Vector2 a, float_t d) ;

/// @brief Method op_Equality addr 0x2b5e16c size 0x28 virtual false final false
static bool op_Equality(::UnityEngine::Vector2 lhs, ::UnityEngine::Vector2 rhs) ;

/// @brief Method op_Inequality addr 0x2b5e194 size 0x28 virtual false final false
static bool op_Inequality(::UnityEngine::Vector2 lhs, ::UnityEngine::Vector2 rhs) ;

/// @brief Method op_Implicit addr 0x2b5e1bc size 0x4 virtual false final false
static ::UnityEngine::Vector2 op_Implicit___UnityEngine__Vector2(::UnityEngine::Vector3 v) ;

/// @brief Method op_Implicit addr 0x2b5e1c0 size 0x8 virtual false final false
static ::UnityEngine::Vector3 op_Implicit___UnityEngine__Vector3(::UnityEngine::Vector2 v) ;

/// @brief Method get_zero addr 0x2b5e1c8 size 0x48 virtual false final false
static ::UnityEngine::Vector2 get_zero() ;

/// @brief Method get_one addr 0x2b5e210 size 0x48 virtual false final false
static ::UnityEngine::Vector2 get_one() ;

/// @brief Method get_up addr 0x2b5e258 size 0x48 virtual false final false
static ::UnityEngine::Vector2 get_up() ;

/// @brief Method get_down addr 0x2b5e2a0 size 0x48 virtual false final false
static ::UnityEngine::Vector2 get_down() ;

/// @brief Method get_right addr 0x2b5e2e8 size 0x48 virtual false final false
static ::UnityEngine::Vector2 get_right() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Vector2, "UnityEngine", "Vector2");
