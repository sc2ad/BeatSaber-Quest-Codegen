#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
// Forward declare root types
namespace OVR::OpenVR {
struct DistortionCoordinates_t;
}
// Type: OVR.OpenVR::DistortionCoordinates_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9439))
// CS Name: OVR.OpenVR.DistortionCoordinates_t
struct CORDL_TYPE DistortionCoordinates_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "rfRed0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rfRed1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rfGreen0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rfGreen1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rfBlue0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rfBlue1", ty: "float_t", modifiers: "", def_value: None }]
constexpr DistortionCoordinates_t(float_t rfRed0, float_t rfRed1, float_t rfGreen0, float_t rfGreen1, float_t rfBlue0, float_t rfBlue1) noexcept;


                    constexpr DistortionCoordinates_t(DistortionCoordinates_t const&) = default;
                    constexpr DistortionCoordinates_t(DistortionCoordinates_t&&) = default;
                    constexpr DistortionCoordinates_t& operator=(DistortionCoordinates_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DistortionCoordinates_t& operator=(DistortionCoordinates_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DistortionCoordinates_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_rfRed0, put=__set_rfRed0))  rfRed0;

constexpr void __set_rfRed0(float_t value) ;

constexpr float_t __get_rfRed0() const;

 float_t __declspec(property(get=__get_rfRed1, put=__set_rfRed1))  rfRed1;

constexpr void __set_rfRed1(float_t value) ;

constexpr float_t __get_rfRed1() const;

 float_t __declspec(property(get=__get_rfGreen0, put=__set_rfGreen0))  rfGreen0;

constexpr void __set_rfGreen0(float_t value) ;

constexpr float_t __get_rfGreen0() const;

 float_t __declspec(property(get=__get_rfGreen1, put=__set_rfGreen1))  rfGreen1;

constexpr void __set_rfGreen1(float_t value) ;

constexpr float_t __get_rfGreen1() const;

 float_t __declspec(property(get=__get_rfBlue0, put=__set_rfBlue0))  rfBlue0;

constexpr void __set_rfBlue0(float_t value) ;

constexpr float_t __get_rfBlue0() const;

 float_t __declspec(property(get=__get_rfBlue1, put=__set_rfBlue1))  rfBlue1;

constexpr void __set_rfBlue1(float_t value) ;

constexpr float_t __get_rfBlue1() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::DistortionCoordinates_t, "OVR.OpenVR", "DistortionCoordinates_t");
