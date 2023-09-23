#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrVector2f;
}
// Type: UnityEngine.XR.OpenXR.NativeTypes::XrVector2f
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14183))
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrVector2f
struct CORDL_TYPE XrVector2f : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }]
constexpr XrVector2f(float_t x, float_t y) noexcept;


                    constexpr XrVector2f(XrVector2f const&) = default;
                    constexpr XrVector2f(XrVector2f&&) = default;
                    constexpr XrVector2f& operator=(XrVector2f const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XrVector2f& operator=(XrVector2f&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XrVector2f(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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


// Methods

/// @brief Method .ctor addr 0x2aed6bc size 0x8 virtual false final false
 void _ctor(float_t x, float_t y) ;

/// @brief Method .ctor addr 0x2aed6c4 size 0x8 virtual false final false
 void _ctor(UnityEngine::Vector2 value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::NativeTypes
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::NativeTypes::XrVector2f, "UnityEngine.XR.OpenXR.NativeTypes", "XrVector2f");
