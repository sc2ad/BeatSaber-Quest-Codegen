#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
// Forward declare root types
namespace UnityEngine {
struct Vector4;
}
// Type: UnityEngine::Vector4
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10187))
// CS Name: UnityEngine.Vector4
struct CORDL_TYPE Vector4 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::Vector4>
constexpr operator  System::IEquatable_1<UnityEngine::Vector4>() const;

/// @brief Convert operator to System::IFormattable
constexpr operator  System::IFormattable() const;

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None }]
constexpr Vector4(float_t x, float_t y, float_t z, float_t w) noexcept;


                    constexpr Vector4(Vector4 const&) = default;
                    constexpr Vector4(Vector4&&) = default;
                    constexpr Vector4& operator=(Vector4 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Vector4& operator=(Vector4&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Vector4(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field kEpsilon offset 0
static constexpr float_t  kEpsilon{0.00001};

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

static UnityEngine::Vector4 __declspec(property(get=__get_zeroVector, put=__set_zeroVector))  zeroVector;

static void __set_zeroVector(UnityEngine::Vector4 value) ;

static UnityEngine::Vector4 __get_zeroVector() ;

static UnityEngine::Vector4 __declspec(property(get=__get_oneVector, put=__set_oneVector))  oneVector;

static void __set_oneVector(UnityEngine::Vector4 value) ;

static UnityEngine::Vector4 __get_oneVector() ;

static UnityEngine::Vector4 __declspec(property(get=__get_positiveInfinityVector, put=__set_positiveInfinityVector))  positiveInfinityVector;

static void __set_positiveInfinityVector(UnityEngine::Vector4 value) ;

static UnityEngine::Vector4 __get_positiveInfinityVector() ;

static UnityEngine::Vector4 __declspec(property(get=__get_negativeInfinityVector, put=__set_negativeInfinityVector))  negativeInfinityVector;

static void __set_negativeInfinityVector(UnityEngine::Vector4 value) ;

static UnityEngine::Vector4 __get_negativeInfinityVector() ;


// Properties

 float_t __declspec(property(get=get_Item, put=set_Item))  Item;

 float_t __declspec(property(get=get_magnitude))  magnitude;

 float_t __declspec(property(get=get_sqrMagnitude))  sqrMagnitude;

static UnityEngine::Vector4 __declspec(property(get=get_zero))  zero;

static UnityEngine::Vector4 __declspec(property(get=get_one))  one;


// Methods

/// @brief Method get_Item addr 0x2b60350 size 0x94 virtual false final false
 float_t get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x2b603e4 size 0x94 virtual false final false
 void set_Item(int32_t index, float_t value) ;

/// @brief Method .ctor addr 0x2b60478 size 0xc virtual false final false
 void _ctor(float_t x, float_t y, float_t z, float_t w) ;

/// @brief Method Scale addr 0x2b60484 size 0x1c virtual false final false
 void Scale(UnityEngine::Vector4 scale) ;

/// @brief Method GetHashCode addr 0x2b604a0 size 0x64 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2b60504 size 0xa8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method Equals addr 0x2b605ac size 0x3c virtual true final true
 bool Equals(UnityEngine::Vector4 other) ;

/// @brief Method Normalize addr 0x2b605e8 size 0xe0 virtual false final false
 void Normalize() ;

/// @brief Method Dot addr 0x2b606c8 size 0x20 virtual false final false
static float_t Dot(UnityEngine::Vector4 a, UnityEngine::Vector4 b) ;

/// @brief Method Magnitude addr 0x2b606e8 size 0x8c virtual false final false
static float_t Magnitude(UnityEngine::Vector4 a) ;

/// @brief Method get_magnitude addr 0x2b60774 size 0x80 virtual false final false
 float_t get_magnitude() ;

/// @brief Method get_sqrMagnitude addr 0x2b607f4 size 0x28 virtual false final false
 float_t get_sqrMagnitude() ;

/// @brief Method get_zero addr 0x2b6081c size 0x4c virtual false final false
static UnityEngine::Vector4 get_zero() ;

/// @brief Method get_one addr 0x2b60868 size 0x4c virtual false final false
static UnityEngine::Vector4 get_one() ;

/// @brief Method op_Addition addr 0x2b608b4 size 0x14 virtual false final false
static UnityEngine::Vector4 op_Addition(UnityEngine::Vector4 a, UnityEngine::Vector4 b) ;

/// @brief Method op_Subtraction addr 0x2b608c8 size 0x14 virtual false final false
static UnityEngine::Vector4 op_Subtraction(UnityEngine::Vector4 a, UnityEngine::Vector4 b) ;

/// @brief Method op_Multiply addr 0x2b608dc size 0x14 virtual false final false
static UnityEngine::Vector4 op_Multiply(UnityEngine::Vector4 a, float_t d) ;

/// @brief Method op_Division addr 0x2b608f0 size 0x14 virtual false final false
static UnityEngine::Vector4 op_Division(UnityEngine::Vector4 a, float_t d) ;

/// @brief Method op_Equality addr 0x2b60904 size 0x40 virtual false final false
static bool op_Equality(UnityEngine::Vector4 lhs, UnityEngine::Vector4 rhs) ;

/// @brief Method op_Inequality addr 0x2b60944 size 0x40 virtual false final false
static bool op_Inequality(UnityEngine::Vector4 lhs, UnityEngine::Vector4 rhs) ;

/// @brief Method op_Implicit addr 0x2b60984 size 0x8 virtual false final false
static UnityEngine::Vector4 op_Implicit_UnityEngine__Vector4(UnityEngine::Vector3 v) ;

/// @brief Method op_Implicit addr 0x2b6098c size 0x4 virtual false final false
static UnityEngine::Vector3 op_Implicit_UnityEngine__Vector3(UnityEngine::Vector4 v) ;

/// @brief Method op_Implicit addr 0x2b60990 size 0xc virtual false final false
static UnityEngine::Vector4 op_Implicit_UnityEngine__Vector4(UnityEngine::Vector2 v) ;

/// @brief Method op_Implicit addr 0x2b6099c size 0x4 virtual false final false
static UnityEngine::Vector2 op_Implicit_UnityEngine__Vector2(UnityEngine::Vector4 v) ;

/// @brief Method ToString addr 0x2b609a0 size 0xc virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x2b60bb4 size 0x8 virtual false final false
 ::StringW ToString(::StringW format) ;

/// @brief Method ToString addr 0x2b609ac size 0x208 virtual true final true
 ::StringW ToString(::StringW format, System::IFormatProvider formatProvider) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Vector4, "UnityEngine", "Vector4");
