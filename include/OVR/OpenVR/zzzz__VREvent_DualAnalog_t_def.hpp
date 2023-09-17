#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace {
namespace OVR::OpenVR {
struct EDualAnalogWhich;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_DualAnalog_t;
}
// Type: OVR.OpenVR::VREvent_DualAnalog_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9469))
// CS Name: OVR.OpenVR.VREvent_DualAnalog_t
struct CORDL_TYPE VREvent_DualAnalog_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "transformedX", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "transformedY", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "which", ty: "::OVR::OpenVR::EDualAnalogWhich", modifiers: "", def_value: None }]
constexpr VREvent_DualAnalog_t(float_t x, float_t y, float_t transformedX, float_t transformedY, ::OVR::OpenVR::EDualAnalogWhich which) noexcept;


                    constexpr VREvent_DualAnalog_t(VREvent_DualAnalog_t const&) = default;
                    constexpr VREvent_DualAnalog_t(VREvent_DualAnalog_t&&) = default;
                    constexpr VREvent_DualAnalog_t& operator=(VREvent_DualAnalog_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VREvent_DualAnalog_t& operator=(VREvent_DualAnalog_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VREvent_DualAnalog_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 float_t __declspec(property(get=__get_transformedX, put=__set_transformedX))  transformedX;

constexpr void __set_transformedX(float_t value) ;

constexpr float_t __get_transformedX() const;

 float_t __declspec(property(get=__get_transformedY, put=__set_transformedY))  transformedY;

constexpr void __set_transformedY(float_t value) ;

constexpr float_t __get_transformedY() const;

 ::OVR::OpenVR::EDualAnalogWhich __declspec(property(get=__get_which, put=__set_which))  which;

constexpr void __set_which(::OVR::OpenVR::EDualAnalogWhich value) ;

constexpr ::OVR::OpenVR::EDualAnalogWhich __get_which() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_DualAnalog_t, "OVR.OpenVR", "VREvent_DualAnalog_t");
