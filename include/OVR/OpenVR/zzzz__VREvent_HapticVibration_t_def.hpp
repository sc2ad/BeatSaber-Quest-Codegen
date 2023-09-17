#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_HapticVibration_t;
}
// Type: OVR.OpenVR::VREvent_HapticVibration_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9470))
// CS Name: OVR.OpenVR.VREvent_HapticVibration_t
struct CORDL_TYPE VREvent_HapticVibration_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "containerHandle", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "componentHandle", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "fDurationSeconds", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fFrequency", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fAmplitude", ty: "float_t", modifiers: "", def_value: None }]
constexpr VREvent_HapticVibration_t(uint64_t containerHandle, uint64_t componentHandle, float_t fDurationSeconds, float_t fFrequency, float_t fAmplitude) noexcept;


                    constexpr VREvent_HapticVibration_t(VREvent_HapticVibration_t const&) = default;
                    constexpr VREvent_HapticVibration_t(VREvent_HapticVibration_t&&) = default;
                    constexpr VREvent_HapticVibration_t& operator=(VREvent_HapticVibration_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VREvent_HapticVibration_t& operator=(VREvent_HapticVibration_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VREvent_HapticVibration_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_containerHandle, put=__set_containerHandle))  containerHandle;

constexpr void __set_containerHandle(uint64_t value) ;

constexpr uint64_t __get_containerHandle() const;

 uint64_t __declspec(property(get=__get_componentHandle, put=__set_componentHandle))  componentHandle;

constexpr void __set_componentHandle(uint64_t value) ;

constexpr uint64_t __get_componentHandle() const;

 float_t __declspec(property(get=__get_fDurationSeconds, put=__set_fDurationSeconds))  fDurationSeconds;

constexpr void __set_fDurationSeconds(float_t value) ;

constexpr float_t __get_fDurationSeconds() const;

 float_t __declspec(property(get=__get_fFrequency, put=__set_fFrequency))  fFrequency;

constexpr void __set_fFrequency(float_t value) ;

constexpr float_t __get_fFrequency() const;

 float_t __declspec(property(get=__get_fAmplitude, put=__set_fAmplitude))  fAmplitude;

constexpr void __set_fAmplitude(float_t value) ;

constexpr float_t __get_fAmplitude() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_HapticVibration_t, "OVR.OpenVR", "VREvent_HapticVibration_t");
