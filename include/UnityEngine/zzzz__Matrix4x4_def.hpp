#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
class IFormattable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace UnityEngine {
struct Matrix4x4;
}
// Type: UnityEngine::Matrix4x4
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10186))
// CS Name: UnityEngine.Matrix4x4
struct CORDL_TYPE Matrix4x4 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::Matrix4x4>
constexpr operator  ::System::IEquatable_1<::UnityEngine::Matrix4x4>() const;

/// @brief Convert operator to ::System::IFormattable
constexpr operator  ::System::IFormattable() const;

// Ctor Parameters [CppParam { name: "m00", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m10", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m20", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m30", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m01", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m11", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m21", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m31", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m02", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m12", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m22", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m32", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m03", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m13", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m23", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m33", ty: "float_t", modifiers: "", def_value: None }]
constexpr Matrix4x4(float_t m00, float_t m10, float_t m20, float_t m30, float_t m01, float_t m11, float_t m21, float_t m31, float_t m02, float_t m12, float_t m22, float_t m32, float_t m03, float_t m13, float_t m23, float_t m33) noexcept;


                    constexpr Matrix4x4(Matrix4x4 const&) = default;
                    constexpr Matrix4x4(Matrix4x4&&) = default;
                    constexpr Matrix4x4& operator=(Matrix4x4 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Matrix4x4& operator=(Matrix4x4&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Matrix4x4(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_m00, put=__set_m00))  m00;

constexpr void __set_m00(float_t value) ;

constexpr float_t __get_m00() const;

 float_t __declspec(property(get=__get_m10, put=__set_m10))  m10;

constexpr void __set_m10(float_t value) ;

constexpr float_t __get_m10() const;

 float_t __declspec(property(get=__get_m20, put=__set_m20))  m20;

constexpr void __set_m20(float_t value) ;

constexpr float_t __get_m20() const;

 float_t __declspec(property(get=__get_m30, put=__set_m30))  m30;

constexpr void __set_m30(float_t value) ;

constexpr float_t __get_m30() const;

 float_t __declspec(property(get=__get_m01, put=__set_m01))  m01;

constexpr void __set_m01(float_t value) ;

constexpr float_t __get_m01() const;

 float_t __declspec(property(get=__get_m11, put=__set_m11))  m11;

constexpr void __set_m11(float_t value) ;

constexpr float_t __get_m11() const;

 float_t __declspec(property(get=__get_m21, put=__set_m21))  m21;

constexpr void __set_m21(float_t value) ;

constexpr float_t __get_m21() const;

 float_t __declspec(property(get=__get_m31, put=__set_m31))  m31;

constexpr void __set_m31(float_t value) ;

constexpr float_t __get_m31() const;

 float_t __declspec(property(get=__get_m02, put=__set_m02))  m02;

constexpr void __set_m02(float_t value) ;

constexpr float_t __get_m02() const;

 float_t __declspec(property(get=__get_m12, put=__set_m12))  m12;

constexpr void __set_m12(float_t value) ;

constexpr float_t __get_m12() const;

 float_t __declspec(property(get=__get_m22, put=__set_m22))  m22;

constexpr void __set_m22(float_t value) ;

constexpr float_t __get_m22() const;

 float_t __declspec(property(get=__get_m32, put=__set_m32))  m32;

constexpr void __set_m32(float_t value) ;

constexpr float_t __get_m32() const;

 float_t __declspec(property(get=__get_m03, put=__set_m03))  m03;

constexpr void __set_m03(float_t value) ;

constexpr float_t __get_m03() const;

 float_t __declspec(property(get=__get_m13, put=__set_m13))  m13;

constexpr void __set_m13(float_t value) ;

constexpr float_t __get_m13() const;

 float_t __declspec(property(get=__get_m23, put=__set_m23))  m23;

constexpr void __set_m23(float_t value) ;

constexpr float_t __get_m23() const;

 float_t __declspec(property(get=__get_m33, put=__set_m33))  m33;

constexpr void __set_m33(float_t value) ;

constexpr float_t __get_m33() const;

static ::UnityEngine::Matrix4x4 __declspec(property(get=__get_zeroMatrix, put=__set_zeroMatrix))  zeroMatrix;

static void __set_zeroMatrix(::UnityEngine::Matrix4x4 value) ;

static ::UnityEngine::Matrix4x4 __get_zeroMatrix() ;

static ::UnityEngine::Matrix4x4 __declspec(property(get=__get_identityMatrix, put=__set_identityMatrix))  identityMatrix;

static void __set_identityMatrix(::UnityEngine::Matrix4x4 value) ;

static ::UnityEngine::Matrix4x4 __get_identityMatrix() ;


// Properties

 float_t __declspec(property(get=get_Item, put=set_Item))  Item;

 float_t __declspec(property(get=get_Item, put=set_Item))  Item;

static ::UnityEngine::Matrix4x4 __declspec(property(get=get_zero))  zero;

static ::UnityEngine::Matrix4x4 __declspec(property(get=get_identity))  identity;

 ::UnityEngine::Quaternion __declspec(property(get=get_rotation))  rotation;

 ::UnityEngine::Vector3 __declspec(property(get=get_lossyScale))  lossyScale;

 ::UnityEngine::Matrix4x4 __declspec(property(get=get_inverse))  inverse;

 ::UnityEngine::Matrix4x4 __declspec(property(get=get_transpose))  transpose;


// Methods

/// @brief Method .ctor addr 0x2b5e83c size 0x1c virtual false final false
 void _ctor(::UnityEngine::Vector4 column0, ::UnityEngine::Vector4 column1, ::UnityEngine::Vector4 column2, ::UnityEngine::Vector4 column3) ;

/// @brief Method get_Item addr 0x2b5e858 size 0x8 virtual false final false
 float_t get_Item(int32_t row, int32_t column) ;

/// @brief Method set_Item addr 0x2b5e954 size 0x8 virtual false final false
 void set_Item(int32_t row, int32_t column, float_t value) ;

/// @brief Method get_Item addr 0x2b5e860 size 0xf4 virtual false final false
 float_t get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x2b5e95c size 0xf4 virtual false final false
 void set_Item(int32_t index, float_t value) ;

/// @brief Method GetHashCode addr 0x2b5ea50 size 0x194 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2b5ecbc size 0x174 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method Equals addr 0x2b5ee30 size 0x108 virtual true final true
 bool Equals(::UnityEngine::Matrix4x4 other) ;

/// @brief Method op_Multiply addr 0x2b5ef38 size 0x1a8 virtual false final false
static ::UnityEngine::Matrix4x4 op_Multiply(::UnityEngine::Matrix4x4 lhs, ::UnityEngine::Matrix4x4 rhs) ;

/// @brief Method op_Multiply addr 0x2b5f0e0 size 0x34 virtual false final false
static ::UnityEngine::Vector4 op_Multiply(::UnityEngine::Matrix4x4 lhs, ::UnityEngine::Vector4 vector) ;

/// @brief Method op_Equality addr 0x2b5f114 size 0xe4 virtual false final false
static bool op_Equality(::UnityEngine::Matrix4x4 lhs, ::UnityEngine::Matrix4x4 rhs) ;

/// @brief Method op_Inequality addr 0x2b5f1f8 size 0x48 virtual false final false
static bool op_Inequality(::UnityEngine::Matrix4x4 lhs, ::UnityEngine::Matrix4x4 rhs) ;

/// @brief Method GetColumn addr 0x2b5ebe4 size 0xd8 virtual false final false
 ::UnityEngine::Vector4 GetColumn(int32_t index) ;

/// @brief Method GetRow addr 0x2b5f240 size 0xd8 virtual false final false
 ::UnityEngine::Vector4 GetRow(int32_t index) ;

/// @brief Method SetColumn addr 0x2b5f318 size 0x78 virtual false final false
 void SetColumn(int32_t index, ::UnityEngine::Vector4 column) ;

/// @brief Method MultiplyPoint addr 0x2b5f390 size 0x80 virtual false final false
 ::UnityEngine::Vector3 MultiplyPoint(::UnityEngine::Vector3 point) ;

/// @brief Method MultiplyPoint3x4 addr 0x2b5f410 size 0x58 virtual false final false
 ::UnityEngine::Vector3 MultiplyPoint3x4(::UnityEngine::Vector3 point) ;

/// @brief Method MultiplyVector addr 0x2b5f468 size 0x48 virtual false final false
 ::UnityEngine::Vector3 MultiplyVector(::UnityEngine::Vector3 vector) ;

/// @brief Method Scale addr 0x2b5f4b0 size 0x2c virtual false final false
static ::UnityEngine::Matrix4x4 Scale(::UnityEngine::Vector3 vector) ;

/// @brief Method Rotate addr 0x2b5f4dc size 0x98 virtual false final false
static ::UnityEngine::Matrix4x4 Rotate(::UnityEngine::Quaternion q) ;

/// @brief Method get_zero addr 0x2b5f574 size 0x58 virtual false final false
static ::UnityEngine::Matrix4x4 get_zero() ;

/// @brief Method get_identity addr 0x2b5f5cc size 0x58 virtual false final false
static ::UnityEngine::Matrix4x4 get_identity() ;

/// @brief Method ToString addr 0x2b5f624 size 0xc virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x2b5f630 size 0x508 virtual true final true
 ::StringW ToString(::StringW format, ::System::IFormatProvider formatProvider) ;

/// @brief Method GetRotation addr 0x2b5fb38 size 0x58 virtual false final false
 ::UnityEngine::Quaternion GetRotation() ;

/// @brief Method GetLossyScale addr 0x2b5fbd4 size 0x5c virtual false final false
 ::UnityEngine::Vector3 GetLossyScale() ;

/// @brief Method get_rotation addr 0x2b5fc74 size 0x4 virtual false final false
 ::UnityEngine::Quaternion get_rotation() ;

/// @brief Method get_lossyScale addr 0x2b5fc78 size 0x4 virtual false final false
 ::UnityEngine::Vector3 get_lossyScale() ;

/// @brief Method TRS addr 0x2b5fc7c size 0x90 virtual false final false
static ::UnityEngine::Matrix4x4 TRS(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion q, ::UnityEngine::Vector3 s) ;

/// @brief Method SetTRS addr 0x2b5fd68 size 0x40 virtual false final false
 void SetTRS(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion q, ::UnityEngine::Vector3 s) ;

/// @brief Method Inverse3DAffine addr 0x2b5fda8 size 0x44 virtual false final false
static bool Inverse3DAffine(::UnityEngine::Matrix4x4 input, ByRef<::UnityEngine::Matrix4x4> result) ;

/// @brief Method Inverse addr 0x2b5fe30 size 0x6c virtual false final false
static ::UnityEngine::Matrix4x4 Inverse(::UnityEngine::Matrix4x4 m) ;

/// @brief Method get_inverse addr 0x2b5fee0 size 0x88 virtual false final false
 ::UnityEngine::Matrix4x4 get_inverse() ;

/// @brief Method Transpose addr 0x2b5ff68 size 0x6c virtual false final false
static ::UnityEngine::Matrix4x4 Transpose(::UnityEngine::Matrix4x4 m) ;

/// @brief Method get_transpose addr 0x2b60018 size 0x88 virtual false final false
 ::UnityEngine::Matrix4x4 get_transpose() ;

/// @brief Method Ortho addr 0x2b600a0 size 0xac virtual false final false
static ::UnityEngine::Matrix4x4 Ortho(float_t left, float_t right, float_t bottom, float_t top, float_t zNear, float_t zFar) ;

/// @brief Method Perspective addr 0x2b601d0 size 0x94 virtual false final false
static ::UnityEngine::Matrix4x4 Perspective(float_t fov, float_t aspect, float_t zNear, float_t zFar) ;

/// @brief Method GetRotation_Injected addr 0x2b5fb90 size 0x44 virtual false final false
static void GetRotation_Injected(ByRef<::UnityEngine::Matrix4x4> _unity_self, ByRef<::UnityEngine::Quaternion> ret) ;

/// @brief Method GetLossyScale_Injected addr 0x2b5fc30 size 0x44 virtual false final false
static void GetLossyScale_Injected(ByRef<::UnityEngine::Matrix4x4> _unity_self, ByRef<::UnityEngine::Vector3> ret) ;

/// @brief Method TRS_Injected addr 0x2b5fd0c size 0x5c virtual false final false
static void TRS_Injected(ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> q, ByRef<::UnityEngine::Vector3> s, ByRef<::UnityEngine::Matrix4x4> ret) ;

/// @brief Method Inverse3DAffine_Injected addr 0x2b5fdec size 0x44 virtual false final false
static bool Inverse3DAffine_Injected(ByRef<::UnityEngine::Matrix4x4> input, ByRef<::UnityEngine::Matrix4x4> result) ;

/// @brief Method Inverse_Injected addr 0x2b5fe9c size 0x44 virtual false final false
static void Inverse_Injected(ByRef<::UnityEngine::Matrix4x4> m, ByRef<::UnityEngine::Matrix4x4> ret) ;

/// @brief Method Transpose_Injected addr 0x2b5ffd4 size 0x44 virtual false final false
static void Transpose_Injected(ByRef<::UnityEngine::Matrix4x4> m, ByRef<::UnityEngine::Matrix4x4> ret) ;

/// @brief Method Ortho_Injected addr 0x2b6014c size 0x84 virtual false final false
static void Ortho_Injected(float_t left, float_t right, float_t bottom, float_t top, float_t zNear, float_t zFar, ByRef<::UnityEngine::Matrix4x4> ret) ;

/// @brief Method Perspective_Injected addr 0x2b60264 size 0x6c virtual false final false
static void Perspective_Injected(float_t fov, float_t aspect, float_t zNear, float_t zFar, ByRef<::UnityEngine::Matrix4x4> ret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Matrix4x4, "UnityEngine", "Matrix4x4");
