#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct EVRComponentProperty;
}
// Type: OVR.OpenVR::EVRComponentProperty
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9416))
// CS Name: OVR.OpenVR.EVRComponentProperty
struct CORDL_TYPE EVRComponentProperty : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRComponentProperty(int32_t value__) noexcept;


                    constexpr EVRComponentProperty(EVRComponentProperty const&) = default;
                    constexpr EVRComponentProperty(EVRComponentProperty&&) = default;
                    constexpr EVRComponentProperty& operator=(EVRComponentProperty const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVRComponentProperty& operator=(EVRComponentProperty&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVRComponentProperty(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVRComponentProperty_Unwrapped : int32_t {
__IsStatic = 1,
__IsVisible = 2,
__IsTouched = 4,
__IsPressed = 8,
__IsScrolled = 16,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRComponentProperty_Unwrapped () const noexcept {
return std::bit_cast<__EVRComponentProperty_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field IsStatic offset 0
static ::OVR::OpenVR::EVRComponentProperty const IsStatic;

/// @brief Field IsVisible offset 0
static ::OVR::OpenVR::EVRComponentProperty const IsVisible;

/// @brief Field IsTouched offset 0
static ::OVR::OpenVR::EVRComponentProperty const IsTouched;

/// @brief Field IsPressed offset 0
static ::OVR::OpenVR::EVRComponentProperty const IsPressed;

/// @brief Field IsScrolled offset 0
static ::OVR::OpenVR::EVRComponentProperty const IsScrolled;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRComponentProperty, "OVR.OpenVR", "EVRComponentProperty");
