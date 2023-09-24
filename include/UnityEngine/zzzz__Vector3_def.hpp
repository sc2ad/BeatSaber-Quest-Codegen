#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine {
struct Vector3;
}
// Type: UnityEngine::Vector3
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10190))
// CS Name: UnityEngine.Vector3
struct CORDL_TYPE Vector3 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::Vector3>
constexpr operator  System::IEquatable_1<UnityEngine::Vector3>() const;

/// @brief Convert operator to System::IFormattable
constexpr operator  System::IFormattable() const;

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None }]
constexpr Vector3(float_t x, float_t y, float_t z) noexcept;


                    constexpr Vector3(Vector3 const&) = default;
                    constexpr Vector3(Vector3&&) = default;
                    constexpr Vector3& operator=(Vector3 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Vector3& operator=(Vector3&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Vector3(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field kEpsilon offset 0
static constexpr float_t  kEpsilon{0.00001};

/// @brief Field kEpsilonNormalSqrt offset 0
static constexpr float_t  kEpsilonNormalSqrt{0.000000000000001};

 float_t __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(float_t value) ;

constexpr float_t __get_x() const;

 float_t __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(float_t value) ;

constexpr float_t __get_y() const;

 float_t __declspec(property(get=__get_z, put=__set_z))  z;

constexpr void __set_z(float_t value) ;

constexpr float_t __get_z() const;

static UnityEngine::Vector3 __declspec(property(get=__get_zeroVector, put=__set_zeroVector))  zeroVector;

static void __set_zeroVector(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_zeroVector() ;

static UnityEngine::Vector3 __declspec(property(get=__get_oneVector, put=__set_oneVector))  oneVector;

static void __set_oneVector(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_oneVector() ;

static UnityEngine::Vector3 __declspec(property(get=__get_upVector, put=__set_upVector))  upVector;

static void __set_upVector(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_upVector() ;

static UnityEngine::Vector3 __declspec(property(get=__get_downVector, put=__set_downVector))  downVector;

static void __set_downVector(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_downVector() ;

static UnityEngine::Vector3 __declspec(property(get=__get_leftVector, put=__set_leftVector))  leftVector;

static void __set_leftVector(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_leftVector() ;

static UnityEngine::Vector3 __declspec(property(get=__get_rightVector, put=__set_rightVector))  rightVector;

static void __set_rightVector(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_rightVector() ;

static UnityEngine::Vector3 __declspec(property(get=__get_forwardVector, put=__set_forwardVector))  forwardVector;

static void __set_forwardVector(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_forwardVector() ;

static UnityEngine::Vector3 __declspec(property(get=__get_backVector, put=__set_backVector))  backVector;

static void __set_backVector(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_backVector() ;

static UnityEngine::Vector3 __declspec(property(get=__get_positiveInfinityVector, put=__set_positiveInfinityVector))  positiveInfinityVector;

static void __set_positiveInfinityVector(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_positiveInfinityVector() ;

static UnityEngine::Vector3 __declspec(property(get=__get_negativeInfinityVector, put=__set_negativeInfinityVector))  negativeInfinityVector;

static void __set_negativeInfinityVector(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_negativeInfinityVector() ;


// Properties

 float_t __declspec(property(get=get_Item, put=set_Item))  Item;

 UnityEngine::Vector3 __declspec(property(get=get_normalized))  normalized;

 float_t __declspec(property(get=get_magnitude))  magnitude;

 float_t __declspec(property(get=get_sqrMagnitude))  sqrMagnitude;

static UnityEngine::Vector3 __declspec(property(get=get_zero))  zero;

static UnityEngine::Vector3 __declspec(property(get=get_one))  one;

static UnityEngine::Vector3 __declspec(property(get=get_forward))  forward;

static UnityEngine::Vector3 __declspec(property(get=get_back))  back;

static UnityEngine::Vector3 __declspec(property(get=get_up))  up;

static UnityEngine::Vector3 __declspec(property(get=get_down))  down;

static UnityEngine::Vector3 __declspec(property(get=get_left))  left;

static UnityEngine::Vector3 __declspec(property(get=get_right))  right;

static UnityEngine::Vector3 __declspec(property(get=get_positiveInfinity))  positiveInfinity;


// Methods

/// @brief Method Lerp addr 0x2b62474 size 0x3c virtual false final false
static UnityEngine::Vector3 Lerp(UnityEngine::Vector3 a, UnityEngine::Vector3 b, float_t t) ;

/// @brief Method LerpUnclamped addr 0x2b624b0 size 0x28 virtual false final false
static UnityEngine::Vector3 LerpUnclamped(UnityEngine::Vector3 a, UnityEngine::Vector3 b, float_t t) ;

/// @brief Method SmoothDamp addr 0x2b624d8 size 0x8c virtual false final false
static UnityEngine::Vector3 SmoothDamp(UnityEngine::Vector3 current, UnityEngine::Vector3 target, ByRef<UnityEngine::Vector3> currentVelocity, float_t smoothTime) ;

/// @brief Method SmoothDamp addr 0x2b62564 size 0x23c virtual false final false
static UnityEngine::Vector3 SmoothDamp(UnityEngine::Vector3 current, UnityEngine::Vector3 target, ByRef<UnityEngine::Vector3> currentVelocity, float_t smoothTime, float_t maxSpeed, float_t deltaTime) ;

/// @brief Method get_Item addr 0x2b627a0 size 0x7c virtual false final false
 float_t get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x2b6281c size 0x7c virtual false final false
 void set_Item(int32_t index, float_t value) ;

/// @brief Method .ctor addr 0x2b62898 size 0xc virtual false final false
 void _ctor(float_t x, float_t y, float_t z) ;

/// @brief Method .ctor addr 0x2b628a4 size 0xc virtual false final false
 void _ctor(float_t x, float_t y) ;

/// @brief Method Scale addr 0x2b628b0 size 0x10 virtual false final false
static UnityEngine::Vector3 Scale(UnityEngine::Vector3 a, UnityEngine::Vector3 b) ;

/// @brief Method Scale addr 0x2b628c0 size 0x20 virtual false final false
 void Scale(UnityEngine::Vector3 scale) ;

/// @brief Method Cross addr 0x2b628e0 size 0x28 virtual false final false
static UnityEngine::Vector3 Cross(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs) ;

/// @brief Method GetHashCode addr 0x2b62908 size 0x48 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2b62950 size 0x98 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method Equals addr 0x2b629e8 size 0x30 virtual true final true
 bool Equals(UnityEngine::Vector3 other) ;

/// @brief Method Reflect addr 0x2b62a18 size 0x38 virtual false final false
static UnityEngine::Vector3 Reflect(UnityEngine::Vector3 inDirection, UnityEngine::Vector3 inNormal) ;

/// @brief Method Normalize addr 0x2b62a50 size 0xd0 virtual false final false
static UnityEngine::Vector3 Normalize(UnityEngine::Vector3 value) ;

/// @brief Method Normalize addr 0x2b62b20 size 0xe8 virtual false final false
 void Normalize() ;

/// @brief Method get_normalized addr 0x2b62c08 size 0xcc virtual false final false
 UnityEngine::Vector3 get_normalized() ;

/// @brief Method Dot addr 0x2b62cd4 size 0x18 virtual false final false
static float_t Dot(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs) ;

/// @brief Method Project addr 0x2b62cec size 0xfc virtual false final false
static UnityEngine::Vector3 Project(UnityEngine::Vector3 vector, UnityEngine::Vector3 onNormal) ;

/// @brief Method ProjectOnPlane addr 0x2b62de8 size 0xd8 virtual false final false
static UnityEngine::Vector3 ProjectOnPlane(UnityEngine::Vector3 vector, UnityEngine::Vector3 planeNormal) ;

/// @brief Method Angle addr 0x2b62ec0 size 0x11c virtual false final false
static float_t Angle(UnityEngine::Vector3 from, UnityEngine::Vector3 to) ;

/// @brief Method Distance addr 0x2b62fdc size 0xa0 virtual false final false
static float_t Distance(UnityEngine::Vector3 a, UnityEngine::Vector3 b) ;

/// @brief Method ClampMagnitude addr 0x2b6307c size 0xb4 virtual false final false
static UnityEngine::Vector3 ClampMagnitude(UnityEngine::Vector3 vector, float_t maxLength) ;

/// @brief Method Magnitude addr 0x2b63130 size 0x80 virtual false final false
static float_t Magnitude(UnityEngine::Vector3 vector) ;

/// @brief Method get_magnitude addr 0x2b631b0 size 0x80 virtual false final false
 float_t get_magnitude() ;

/// @brief Method SqrMagnitude addr 0x2b63230 size 0x18 virtual false final false
static float_t SqrMagnitude(UnityEngine::Vector3 vector) ;

/// @brief Method get_sqrMagnitude addr 0x2b63248 size 0x20 virtual false final false
 float_t get_sqrMagnitude() ;

/// @brief Method Min addr 0x2b63268 size 0x1c virtual false final false
static UnityEngine::Vector3 Min(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs) ;

/// @brief Method Max addr 0x2b63284 size 0x1c virtual false final false
static UnityEngine::Vector3 Max(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs) ;

/// @brief Method get_zero addr 0x2b632a0 size 0x4c virtual false final false
static UnityEngine::Vector3 get_zero() ;

/// @brief Method get_one addr 0x2b632ec size 0x4c virtual false final false
static UnityEngine::Vector3 get_one() ;

/// @brief Method get_forward addr 0x2b63338 size 0x4c virtual false final false
static UnityEngine::Vector3 get_forward() ;

/// @brief Method get_back addr 0x2b63384 size 0x4c virtual false final false
static UnityEngine::Vector3 get_back() ;

/// @brief Method get_up addr 0x2b633d0 size 0x4c virtual false final false
static UnityEngine::Vector3 get_up() ;

/// @brief Method get_down addr 0x2b6341c size 0x4c virtual false final false
static UnityEngine::Vector3 get_down() ;

/// @brief Method get_left addr 0x2b63468 size 0x4c virtual false final false
static UnityEngine::Vector3 get_left() ;

/// @brief Method get_right addr 0x2b634b4 size 0x4c virtual false final false
static UnityEngine::Vector3 get_right() ;

/// @brief Method get_positiveInfinity addr 0x2b63500 size 0x4c virtual false final false
static UnityEngine::Vector3 get_positiveInfinity() ;

/// @brief Method op_Addition addr 0x2b6354c size 0x10 virtual false final false
static UnityEngine::Vector3 op_Addition(UnityEngine::Vector3 a, UnityEngine::Vector3 b) ;

/// @brief Method op_Subtraction addr 0x2b6355c size 0x10 virtual false final false
static UnityEngine::Vector3 op_Subtraction(UnityEngine::Vector3 a, UnityEngine::Vector3 b) ;

/// @brief Method op_UnaryNegation addr 0x2b6356c size 0x10 virtual false final false
static UnityEngine::Vector3 op_UnaryNegation(UnityEngine::Vector3 a) ;

/// @brief Method op_Multiply addr 0x2b6357c size 0x10 virtual false final false
static UnityEngine::Vector3 op_Multiply(UnityEngine::Vector3 a, float_t d) ;

/// @brief Method op_Multiply addr 0x2b6358c size 0x14 virtual false final false
static UnityEngine::Vector3 op_Multiply(float_t d, UnityEngine::Vector3 a) ;

/// @brief Method op_Division addr 0x2b635a0 size 0x10 virtual false final false
static UnityEngine::Vector3 op_Division(UnityEngine::Vector3 a, float_t d) ;

/// @brief Method op_Equality addr 0x2b635b0 size 0x34 virtual false final false
static bool op_Equality(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs) ;

/// @brief Method op_Inequality addr 0x2b635e4 size 0x34 virtual false final false
static bool op_Inequality(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs) ;

/// @brief Method ToString addr 0x2b63618 size 0xc virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x2b637ec size 0x8 virtual false final false
 ::StringW ToString(::StringW format) ;

/// @brief Method ToString addr 0x2b63624 size 0x1c8 virtual true final true
 ::StringW ToString(::StringW format, System::IFormatProvider formatProvider) ;

/// @brief Method Slerp addr 0x2b637f4 size 0x74 virtual false final false
static UnityEngine::Vector3 Slerp(UnityEngine::Vector3 a, UnityEngine::Vector3 b, float_t t) ;

/// @brief Method OrthoNormalize2 addr 0x2b638cc size 0x44 virtual false final false
static void OrthoNormalize2(ByRef<UnityEngine::Vector3> a, ByRef<UnityEngine::Vector3> b) ;

/// @brief Method OrthoNormalize addr 0x2b63910 size 0x44 virtual false final false
static void OrthoNormalize(ByRef<UnityEngine::Vector3> normal, ByRef<UnityEngine::Vector3> tangent) ;

/// @brief Method RotateTowards addr 0x2b63954 size 0x7c virtual false final false
static UnityEngine::Vector3 RotateTowards(UnityEngine::Vector3 current, UnityEngine::Vector3 target, float_t maxRadiansDelta, float_t maxMagnitudeDelta) ;

/// @brief Method Slerp_Injected addr 0x2b63868 size 0x64 virtual false final false
static void Slerp_Injected(ByRef<UnityEngine::Vector3> a, ByRef<UnityEngine::Vector3> b, float_t t, ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method RotateTowards_Injected addr 0x2b639d0 size 0x6c virtual false final false
static void RotateTowards_Injected(ByRef<UnityEngine::Vector3> current, ByRef<UnityEngine::Vector3> target, float_t maxRadiansDelta, float_t maxMagnitudeDelta, ByRef<UnityEngine::Vector3> ret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Vector3, "UnityEngine", "Vector3");
