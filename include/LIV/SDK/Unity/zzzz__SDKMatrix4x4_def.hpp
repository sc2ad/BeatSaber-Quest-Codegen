#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
namespace LIV::SDK::Unity {
struct SDKVector3;
}
namespace LIV::SDK::Unity {
struct SDKQuaternion;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKMatrix4x4;
}
// Type: LIV.SDK.Unity::SDKMatrix4x4
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15159))
// CS Name: LIV.SDK.Unity.SDKMatrix4x4
struct CORDL_TYPE SDKMatrix4x4 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m00", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m01", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m02", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m03", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m10", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m11", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m12", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m13", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m20", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m21", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m22", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m23", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m30", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m31", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m32", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m33", ty: "float_t", modifiers: "", def_value: None }]
constexpr SDKMatrix4x4(float_t m00, float_t m01, float_t m02, float_t m03, float_t m10, float_t m11, float_t m12, float_t m13, float_t m20, float_t m21, float_t m22, float_t m23, float_t m30, float_t m31, float_t m32, float_t m33) noexcept;


                    constexpr SDKMatrix4x4(SDKMatrix4x4 const&) = default;
                    constexpr SDKMatrix4x4(SDKMatrix4x4&&) = default;
                    constexpr SDKMatrix4x4& operator=(SDKMatrix4x4 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SDKMatrix4x4& operator=(SDKMatrix4x4&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SDKMatrix4x4(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_m00, put=__set_m00))  m00;

constexpr void __set_m00(float_t value) ;

constexpr float_t __get_m00() const;

 float_t __declspec(property(get=__get_m01, put=__set_m01))  m01;

constexpr void __set_m01(float_t value) ;

constexpr float_t __get_m01() const;

 float_t __declspec(property(get=__get_m02, put=__set_m02))  m02;

constexpr void __set_m02(float_t value) ;

constexpr float_t __get_m02() const;

 float_t __declspec(property(get=__get_m03, put=__set_m03))  m03;

constexpr void __set_m03(float_t value) ;

constexpr float_t __get_m03() const;

 float_t __declspec(property(get=__get_m10, put=__set_m10))  m10;

constexpr void __set_m10(float_t value) ;

constexpr float_t __get_m10() const;

 float_t __declspec(property(get=__get_m11, put=__set_m11))  m11;

constexpr void __set_m11(float_t value) ;

constexpr float_t __get_m11() const;

 float_t __declspec(property(get=__get_m12, put=__set_m12))  m12;

constexpr void __set_m12(float_t value) ;

constexpr float_t __get_m12() const;

 float_t __declspec(property(get=__get_m13, put=__set_m13))  m13;

constexpr void __set_m13(float_t value) ;

constexpr float_t __get_m13() const;

 float_t __declspec(property(get=__get_m20, put=__set_m20))  m20;

constexpr void __set_m20(float_t value) ;

constexpr float_t __get_m20() const;

 float_t __declspec(property(get=__get_m21, put=__set_m21))  m21;

constexpr void __set_m21(float_t value) ;

constexpr float_t __get_m21() const;

 float_t __declspec(property(get=__get_m22, put=__set_m22))  m22;

constexpr void __set_m22(float_t value) ;

constexpr float_t __get_m22() const;

 float_t __declspec(property(get=__get_m23, put=__set_m23))  m23;

constexpr void __set_m23(float_t value) ;

constexpr float_t __get_m23() const;

 float_t __declspec(property(get=__get_m30, put=__set_m30))  m30;

constexpr void __set_m30(float_t value) ;

constexpr float_t __get_m30() const;

 float_t __declspec(property(get=__get_m31, put=__set_m31))  m31;

constexpr void __set_m31(float_t value) ;

constexpr float_t __get_m31() const;

 float_t __declspec(property(get=__get_m32, put=__set_m32))  m32;

constexpr void __set_m32(float_t value) ;

constexpr float_t __get_m32() const;

 float_t __declspec(property(get=__get_m33, put=__set_m33))  m33;

constexpr void __set_m33(float_t value) ;

constexpr float_t __get_m33() const;


// Properties

static LIV::SDK::Unity::SDKMatrix4x4 __declspec(property(get=get_identity))  identity;


// Methods

/// @brief Method get_identity addr 0x20a1afc size 0x2c virtual false final false
static LIV::SDK::Unity::SDKMatrix4x4 get_identity() ;

/// @brief Method op_Implicit addr 0x209f8dc size 0x44 virtual false final false
static UnityEngine::Matrix4x4 op_Implicit_UnityEngine__Matrix4x4(LIV::SDK::Unity::SDKMatrix4x4 v) ;

/// @brief Method op_Implicit addr 0x20a0be8 size 0x44 virtual false final false
static LIV::SDK::Unity::SDKMatrix4x4 op_Implicit_LIV__SDK__Unity__SDKMatrix4x4(UnityEngine::Matrix4x4 v) ;

/// @brief Method Perspective addr 0x20a1b28 size 0xac virtual false final false
static LIV::SDK::Unity::SDKMatrix4x4 Perspective(float_t vFov, float_t aspect, float_t zNear, float_t zFar) ;

/// @brief Method op_Multiply addr 0x20a1bd4 size 0x10c virtual false final false
static LIV::SDK::Unity::SDKMatrix4x4 op_Multiply(LIV::SDK::Unity::SDKMatrix4x4 lhs, LIV::SDK::Unity::SDKMatrix4x4 rhs) ;

/// @brief Method op_Multiply addr 0x20a1ce0 size 0x58 virtual false final false
static LIV::SDK::Unity::SDKVector3 op_Multiply(LIV::SDK::Unity::SDKMatrix4x4 lhs, LIV::SDK::Unity::SDKVector3 rhs) ;

/// @brief Method Translate addr 0x20a1d38 size 0x3c virtual false final false
static LIV::SDK::Unity::SDKMatrix4x4 Translate(LIV::SDK::Unity::SDKVector3 value) ;

/// @brief Method Rotate addr 0x20a1d74 size 0x94 virtual false final false
static LIV::SDK::Unity::SDKMatrix4x4 Rotate(LIV::SDK::Unity::SDKQuaternion value) ;

/// @brief Method Scale addr 0x20a1e08 size 0x2c virtual false final false
static LIV::SDK::Unity::SDKMatrix4x4 Scale(LIV::SDK::Unity::SDKVector3 value) ;

/// @brief Method TRS addr 0x20a1e34 size 0xe4 virtual false final false
static LIV::SDK::Unity::SDKMatrix4x4 TRS(LIV::SDK::Unity::SDKVector3 translation, LIV::SDK::Unity::SDKQuaternion rotation, LIV::SDK::Unity::SDKVector3 scale) ;

/// @brief Method ToString addr 0x20a1f18 size 0x4ac virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(LIV::SDK::Unity::SDKMatrix4x4, "LIV.SDK.Unity", "SDKMatrix4x4");
