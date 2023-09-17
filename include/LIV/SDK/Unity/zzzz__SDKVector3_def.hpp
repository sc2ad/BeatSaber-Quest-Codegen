#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
namespace {
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKVector3;
}
// Type: LIV.SDK.Unity::SDKVector3
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15157))
// CS Name: LIV.SDK.Unity.SDKVector3
struct CORDL_TYPE SDKVector3 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None }]
constexpr SDKVector3(float_t x, float_t y, float_t z) noexcept;


                    constexpr SDKVector3(SDKVector3 const&) = default;
                    constexpr SDKVector3(SDKVector3&&) = default;
                    constexpr SDKVector3& operator=(SDKVector3 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SDKVector3& operator=(SDKVector3&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SDKVector3(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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


// Properties

static ::LIV::SDK::Unity::SDKVector3 __declspec(property(get=get_zero))  zero;

static ::LIV::SDK::Unity::SDKVector3 __declspec(property(get=get_one))  one;

static ::LIV::SDK::Unity::SDKVector3 __declspec(property(get=get_forward))  forward;

static ::LIV::SDK::Unity::SDKVector3 __declspec(property(get=get_up))  up;

static ::LIV::SDK::Unity::SDKVector3 __declspec(property(get=get_right))  right;


// Methods

/// @brief Method get_zero addr 0x20a1614 size 0x10 virtual false final false
static ::LIV::SDK::Unity::SDKVector3 get_zero() ;

/// @brief Method get_one addr 0x20a1624 size 0x10 virtual false final false
static ::LIV::SDK::Unity::SDKVector3 get_one() ;

/// @brief Method get_forward addr 0x20a1634 size 0x10 virtual false final false
static ::LIV::SDK::Unity::SDKVector3 get_forward() ;

/// @brief Method get_up addr 0x20a1644 size 0x10 virtual false final false
static ::LIV::SDK::Unity::SDKVector3 get_up() ;

/// @brief Method get_right addr 0x20a1654 size 0x10 virtual false final false
static ::LIV::SDK::Unity::SDKVector3 get_right() ;

/// @brief Method op_Implicit addr 0x20a1664 size 0x4 virtual false final false
static ::UnityEngine::Vector3 op_Implicit___UnityEngine__Vector3(::LIV::SDK::Unity::SDKVector3 v) ;

/// @brief Method op_Implicit addr 0x20a0be0 size 0x4 virtual false final false
static ::LIV::SDK::Unity::SDKVector3 op_Implicit___LIV__SDK__Unity__SDKVector3(::UnityEngine::Vector3 v) ;

/// @brief Method op_Addition addr 0x20a1668 size 0x10 virtual false final false
static ::LIV::SDK::Unity::SDKVector3 op_Addition(::LIV::SDK::Unity::SDKVector3 lhs, ::LIV::SDK::Unity::SDKVector3 rhs) ;

/// @brief Method op_Subtraction addr 0x20a1678 size 0x10 virtual false final false
static ::LIV::SDK::Unity::SDKVector3 op_Subtraction(::LIV::SDK::Unity::SDKVector3 lhs, ::LIV::SDK::Unity::SDKVector3 rhs) ;

/// @brief Method op_Multiply addr 0x20a1688 size 0x10 virtual false final false
static ::LIV::SDK::Unity::SDKVector3 op_Multiply(::LIV::SDK::Unity::SDKVector3 lhs, ::LIV::SDK::Unity::SDKVector3 rhs) ;

/// @brief Method op_Multiply addr 0x20a1698 size 0x10 virtual false final false
static ::LIV::SDK::Unity::SDKVector3 op_Multiply(::LIV::SDK::Unity::SDKVector3 lhs, float_t rhs) ;

/// @brief Method ToString addr 0x20a16a8 size 0xc4 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LIV::SDK::Unity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKVector3, "LIV.SDK.Unity", "SDKVector3");
