#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
namespace {
namespace UnityEngine {
struct Quaternion;
}
namespace LIV::SDK::Unity {
struct SDKVector3;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKQuaternion;
}
// Type: LIV.SDK.Unity::SDKQuaternion
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15158))
// CS Name: LIV.SDK.Unity.SDKQuaternion
struct CORDL_TYPE SDKQuaternion : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None }]
constexpr SDKQuaternion(float_t x, float_t y, float_t z, float_t w) noexcept;


                    constexpr SDKQuaternion(SDKQuaternion const&) = default;
                    constexpr SDKQuaternion(SDKQuaternion&&) = default;
                    constexpr SDKQuaternion& operator=(SDKQuaternion const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SDKQuaternion& operator=(SDKQuaternion&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SDKQuaternion(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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


// Properties

static ::LIV::SDK::Unity::SDKQuaternion __declspec(property(get=get_identity))  identity;


// Methods

/// @brief Method get_identity addr 0x20a176c size 0x14 virtual false final false
static ::LIV::SDK::Unity::SDKQuaternion get_identity() ;

/// @brief Method op_Implicit addr 0x20a1780 size 0x4 virtual false final false
static ::UnityEngine::Quaternion op_Implicit___UnityEngine__Quaternion(::LIV::SDK::Unity::SDKQuaternion v) ;

/// @brief Method op_Implicit addr 0x20a0be4 size 0x4 virtual false final false
static ::LIV::SDK::Unity::SDKQuaternion op_Implicit___LIV__SDK__Unity__SDKQuaternion(::UnityEngine::Quaternion v) ;

/// @brief Method Euler addr 0x20a1784 size 0xb4 virtual false final false
static ::LIV::SDK::Unity::SDKQuaternion Euler(float_t pitch, float_t yaw, float_t roll) ;

/// @brief Method op_Multiply addr 0x20a1838 size 0x74 virtual false final false
static ::LIV::SDK::Unity::SDKQuaternion op_Multiply(::LIV::SDK::Unity::SDKQuaternion lhs, ::LIV::SDK::Unity::SDKQuaternion rhs) ;

/// @brief Method op_Multiply addr 0x20a18ac size 0xa4 virtual false final false
static ::LIV::SDK::Unity::SDKVector3 op_Multiply(::LIV::SDK::Unity::SDKQuaternion lhs, ::LIV::SDK::Unity::SDKVector3 rhs) ;

/// @brief Method ToString addr 0x20a1950 size 0x1ac virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LIV::SDK::Unity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKQuaternion, "LIV.SDK.Unity", "SDKQuaternion");
