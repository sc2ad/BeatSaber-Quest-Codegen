#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrQuaternionf;
}
// Type: UnityEngine.XR.OpenXR.NativeTypes::XrQuaternionf
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14185))
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrQuaternionf
struct CORDL_TYPE XrQuaternionf : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None }]
constexpr XrQuaternionf(float_t x, float_t y, float_t z, float_t w) noexcept;


                    constexpr XrQuaternionf(XrQuaternionf const&) = default;
                    constexpr XrQuaternionf(XrQuaternionf&&) = default;
                    constexpr XrQuaternionf& operator=(XrQuaternionf const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XrQuaternionf& operator=(XrQuaternionf&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XrQuaternionf(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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


// Methods

/// @brief Method .ctor addr 0x2aed6ec size 0x14 virtual false final false
 void _ctor(float_t x, float_t y, float_t z, float_t w) ;

/// @brief Method .ctor addr 0x2aed700 size 0x14 virtual false final false
 void _ctor(UnityEngine::Quaternion quaternion) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::NativeTypes
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf, "UnityEngine.XR.OpenXR.NativeTypes", "XrQuaternionf");
