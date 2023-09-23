#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
class IFormattable;
}
namespace System {
class IFormatProvider;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine {
struct Quaternion;
}
// Type: UnityEngine::Quaternion
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10193))
// CS Name: UnityEngine.Quaternion
struct CORDL_TYPE Quaternion : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::Quaternion>
constexpr operator  System::IEquatable_1<UnityEngine::Quaternion>() const;

/// @brief Convert operator to System::IFormattable
constexpr operator  System::IFormattable() const;

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None }]
constexpr Quaternion(float_t x, float_t y, float_t z, float_t w) noexcept;


                    constexpr Quaternion(Quaternion const&) = default;
                    constexpr Quaternion(Quaternion&&) = default;
                    constexpr Quaternion& operator=(Quaternion const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Quaternion& operator=(Quaternion&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Quaternion(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 float_t __declspec(property(get=__get_z, put=__set_z))  z;

constexpr void __set_z(float_t value) ;

constexpr float_t __get_z() const;

 float_t __declspec(property(get=__get_w, put=__set_w))  w;

constexpr void __set_w(float_t value) ;

constexpr float_t __get_w() const;

static UnityEngine::Quaternion __declspec(property(get=__get_identityQuaternion, put=__set_identityQuaternion))  identityQuaternion;

static void __set_identityQuaternion(UnityEngine::Quaternion value) ;

static UnityEngine::Quaternion __get_identityQuaternion() ;

/// @brief Field kEpsilon offset 0
static constexpr float_t  kEpsilon{0.000001};


// Properties

 float_t __declspec(property(get=get_Item, put=set_Item))  Item;

static UnityEngine::Quaternion __declspec(property(get=get_identity))  identity;

 UnityEngine::Vector3 __declspec(property(get=get_eulerAngles, put=set_eulerAngles))  eulerAngles;


// Methods

/// @brief Method FromToRotation addr 0x2b64d70 size 0x60 virtual false final false
static UnityEngine::Quaternion FromToRotation(UnityEngine::Vector3 fromDirection, UnityEngine::Vector3 toDirection) ;

/// @brief Method Inverse addr 0x2b64e24 size 0x54 virtual false final false
static UnityEngine::Quaternion Inverse(UnityEngine::Quaternion rotation) ;

/// @brief Method Slerp addr 0x2b64ebc size 0x70 virtual false final false
static UnityEngine::Quaternion Slerp(UnityEngine::Quaternion a, UnityEngine::Quaternion b, float_t t) ;

/// @brief Method SlerpUnclamped addr 0x2b64f90 size 0x70 virtual false final false
static UnityEngine::Quaternion SlerpUnclamped(UnityEngine::Quaternion a, UnityEngine::Quaternion b, float_t t) ;

/// @brief Method Lerp addr 0x2b65064 size 0x70 virtual false final false
static UnityEngine::Quaternion Lerp(UnityEngine::Quaternion a, UnityEngine::Quaternion b, float_t t) ;

/// @brief Method Internal_FromEulerRad addr 0x2b65138 size 0x54 virtual false final false
static UnityEngine::Quaternion Internal_FromEulerRad(UnityEngine::Vector3 euler) ;

/// @brief Method Internal_ToEulerRad addr 0x2b651d0 size 0x58 virtual false final false
static UnityEngine::Vector3 Internal_ToEulerRad(UnityEngine::Quaternion rotation) ;

/// @brief Method Internal_ToAxisAngleRad addr 0x2b6526c size 0x5c virtual false final false
static void Internal_ToAxisAngleRad(UnityEngine::Quaternion q, ByRef<UnityEngine::Vector3> axis, ByRef<float_t> angle) ;

/// @brief Method AngleAxis addr 0x2b6531c size 0x64 virtual false final false
static UnityEngine::Quaternion AngleAxis(float_t angle, UnityEngine::Vector3 axis) ;

/// @brief Method LookRotation addr 0x2b653d4 size 0x60 virtual false final false
static UnityEngine::Quaternion LookRotation(UnityEngine::Vector3 forward, UnityEngine::Vector3 upwards) ;

/// @brief Method LookRotation addr 0x2b65488 size 0x6c virtual false final false
static UnityEngine::Quaternion LookRotation(UnityEngine::Vector3 forward) ;

/// @brief Method get_Item addr 0x2b654f4 size 0x94 virtual false final false
 float_t get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x2b65588 size 0x94 virtual false final false
 void set_Item(int32_t index, float_t value) ;

/// @brief Method .ctor addr 0x2b6561c size 0xc virtual false final false
 void _ctor(float_t x, float_t y, float_t z, float_t w) ;

/// @brief Method get_identity addr 0x2b65628 size 0x4c virtual false final false
static UnityEngine::Quaternion get_identity() ;

/// @brief Method op_Multiply addr 0x2b65674 size 0x74 virtual false final false
static UnityEngine::Quaternion op_Multiply(UnityEngine::Quaternion lhs, UnityEngine::Quaternion rhs) ;

/// @brief Method op_Multiply addr 0x2b656e8 size 0xa4 virtual false final false
static UnityEngine::Vector3 op_Multiply(UnityEngine::Quaternion rotation, UnityEngine::Vector3 point) ;

/// @brief Method IsEqualUsingDot addr 0x2b6578c size 0x14 virtual false final false
static bool IsEqualUsingDot(float_t dot) ;

/// @brief Method op_Equality addr 0x2b657a0 size 0x30 virtual false final false
static bool op_Equality(UnityEngine::Quaternion lhs, UnityEngine::Quaternion rhs) ;

/// @brief Method op_Inequality addr 0x2b657d0 size 0x30 virtual false final false
static bool op_Inequality(UnityEngine::Quaternion lhs, UnityEngine::Quaternion rhs) ;

/// @brief Method Dot addr 0x2b65800 size 0x20 virtual false final false
static float_t Dot(UnityEngine::Quaternion a, UnityEngine::Quaternion b) ;

/// @brief Method SetLookRotation addr 0x2b65820 size 0x84 virtual false final false
 void SetLookRotation(UnityEngine::Vector3 view) ;

/// @brief Method SetLookRotation addr 0x2b658a4 size 0x1c virtual false final false
 void SetLookRotation(UnityEngine::Vector3 view, UnityEngine::Vector3 up) ;

/// @brief Method Angle addr 0x2b658c0 size 0x60 virtual false final false
static float_t Angle(UnityEngine::Quaternion a, UnityEngine::Quaternion b) ;

/// @brief Method Internal_MakePositive addr 0x2b65920 size 0x88 virtual false final false
static UnityEngine::Vector3 Internal_MakePositive(UnityEngine::Vector3 euler) ;

/// @brief Method get_eulerAngles addr 0x2b659a8 size 0x2c virtual false final false
 UnityEngine::Vector3 get_eulerAngles() ;

/// @brief Method set_eulerAngles addr 0x2b659d4 size 0x30 virtual false final false
 void set_eulerAngles(UnityEngine::Vector3 value) ;

/// @brief Method Euler addr 0x2b65a04 size 0x18 virtual false final false
static UnityEngine::Quaternion Euler(float_t x, float_t y, float_t z) ;

/// @brief Method Euler addr 0x2b65a1c size 0x18 virtual false final false
static UnityEngine::Quaternion Euler(UnityEngine::Vector3 euler) ;

/// @brief Method ToAngleAxis addr 0x2b65a34 size 0x34 virtual false final false
 void ToAngleAxis(ByRef<float_t> angle, ByRef<UnityEngine::Vector3> axis) ;

/// @brief Method RotateTowards addr 0x2b65a68 size 0x100 virtual false final false
static UnityEngine::Quaternion RotateTowards(UnityEngine::Quaternion from, UnityEngine::Quaternion to, float_t maxDegreesDelta) ;

/// @brief Method Normalize addr 0x2b65b68 size 0xdc virtual false final false
static UnityEngine::Quaternion Normalize(UnityEngine::Quaternion q) ;

/// @brief Method Normalize addr 0x2b65c44 size 0xc8 virtual false final false
 void Normalize() ;

/// @brief Method GetHashCode addr 0x2b65d0c size 0x64 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2b65d70 size 0xd4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method Equals addr 0x2b65e44 size 0x80 virtual true final true
 bool Equals(UnityEngine::Quaternion other) ;

/// @brief Method ToString addr 0x2b65ec4 size 0xc virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x2b65ed0 size 0x208 virtual true final true
 ::StringW ToString(::StringW format, System::IFormatProvider formatProvider) ;

/// @brief Method FromToRotation_Injected addr 0x2b64dd0 size 0x54 virtual false final false
static void FromToRotation_Injected(ByRef<UnityEngine::Vector3> fromDirection, ByRef<UnityEngine::Vector3> toDirection, ByRef<UnityEngine::Quaternion> ret) ;

/// @brief Method Inverse_Injected addr 0x2b64e78 size 0x44 virtual false final false
static void Inverse_Injected(ByRef<UnityEngine::Quaternion> rotation, ByRef<UnityEngine::Quaternion> ret) ;

/// @brief Method Slerp_Injected addr 0x2b64f2c size 0x64 virtual false final false
static void Slerp_Injected(ByRef<UnityEngine::Quaternion> a, ByRef<UnityEngine::Quaternion> b, float_t t, ByRef<UnityEngine::Quaternion> ret) ;

/// @brief Method SlerpUnclamped_Injected addr 0x2b65000 size 0x64 virtual false final false
static void SlerpUnclamped_Injected(ByRef<UnityEngine::Quaternion> a, ByRef<UnityEngine::Quaternion> b, float_t t, ByRef<UnityEngine::Quaternion> ret) ;

/// @brief Method Lerp_Injected addr 0x2b650d4 size 0x64 virtual false final false
static void Lerp_Injected(ByRef<UnityEngine::Quaternion> a, ByRef<UnityEngine::Quaternion> b, float_t t, ByRef<UnityEngine::Quaternion> ret) ;

/// @brief Method Internal_FromEulerRad_Injected addr 0x2b6518c size 0x44 virtual false final false
static void Internal_FromEulerRad_Injected(ByRef<UnityEngine::Vector3> euler, ByRef<UnityEngine::Quaternion> ret) ;

/// @brief Method Internal_ToEulerRad_Injected addr 0x2b65228 size 0x44 virtual false final false
static void Internal_ToEulerRad_Injected(ByRef<UnityEngine::Quaternion> rotation, ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method Internal_ToAxisAngleRad_Injected addr 0x2b652c8 size 0x54 virtual false final false
static void Internal_ToAxisAngleRad_Injected(ByRef<UnityEngine::Quaternion> q, ByRef<UnityEngine::Vector3> axis, ByRef<float_t> angle) ;

/// @brief Method AngleAxis_Injected addr 0x2b65380 size 0x54 virtual false final false
static void AngleAxis_Injected(float_t angle, ByRef<UnityEngine::Vector3> axis, ByRef<UnityEngine::Quaternion> ret) ;

/// @brief Method LookRotation_Injected addr 0x2b65434 size 0x54 virtual false final false
static void LookRotation_Injected(ByRef<UnityEngine::Vector3> forward, ByRef<UnityEngine::Vector3> upwards, ByRef<UnityEngine::Quaternion> ret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Quaternion, "UnityEngine", "Quaternion");
