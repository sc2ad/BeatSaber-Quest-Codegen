#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct InputAnalogActionData_t;
}
// Type: OVR.OpenVR::InputAnalogActionData_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9503))
// CS Name: OVR.OpenVR.InputAnalogActionData_t
struct CORDL_TYPE InputAnalogActionData_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "bActive", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "activeOrigin", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "deltaX", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "deltaY", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "deltaZ", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fUpdateTime", ty: "float_t", modifiers: "", def_value: None }]
constexpr InputAnalogActionData_t(bool bActive, uint64_t activeOrigin, float_t x, float_t y, float_t z, float_t deltaX, float_t deltaY, float_t deltaZ, float_t fUpdateTime) noexcept;


                    constexpr InputAnalogActionData_t(InputAnalogActionData_t const&) = default;
                    constexpr InputAnalogActionData_t(InputAnalogActionData_t&&) = default;
                    constexpr InputAnalogActionData_t& operator=(InputAnalogActionData_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputAnalogActionData_t& operator=(InputAnalogActionData_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputAnalogActionData_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_bActive, put=__set_bActive))  bActive;

constexpr void __set_bActive(bool value) ;

constexpr bool __get_bActive() const;

 uint64_t __declspec(property(get=__get_activeOrigin, put=__set_activeOrigin))  activeOrigin;

constexpr void __set_activeOrigin(uint64_t value) ;

constexpr uint64_t __get_activeOrigin() const;

 float_t __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(float_t value) ;

constexpr float_t __get_x() const;

 float_t __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(float_t value) ;

constexpr float_t __get_y() const;

 float_t __declspec(property(get=__get_z, put=__set_z))  z;

constexpr void __set_z(float_t value) ;

constexpr float_t __get_z() const;

 float_t __declspec(property(get=__get_deltaX, put=__set_deltaX))  deltaX;

constexpr void __set_deltaX(float_t value) ;

constexpr float_t __get_deltaX() const;

 float_t __declspec(property(get=__get_deltaY, put=__set_deltaY))  deltaY;

constexpr void __set_deltaY(float_t value) ;

constexpr float_t __get_deltaY() const;

 float_t __declspec(property(get=__get_deltaZ, put=__set_deltaZ))  deltaZ;

constexpr void __set_deltaZ(float_t value) ;

constexpr float_t __get_deltaZ() const;

 float_t __declspec(property(get=__get_fUpdateTime, put=__set_fUpdateTime))  fUpdateTime;

constexpr void __set_fUpdateTime(float_t value) ;

constexpr float_t __get_fUpdateTime() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::InputAnalogActionData_t, "OVR.OpenVR", "InputAnalogActionData_t");
