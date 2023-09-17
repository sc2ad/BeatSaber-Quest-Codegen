#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace OVR::OpenVR {
struct HmdVector3d_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct ImuSample_t;
}
// Type: OVR.OpenVR::ImuSample_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9485))
// CS Name: OVR.OpenVR.ImuSample_t
struct CORDL_TYPE ImuSample_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "fSampleTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "vAccel", ty: "::OVR::OpenVR::HmdVector3d_t", modifiers: "", def_value: None }, CppParam { name: "vGyro", ty: "::OVR::OpenVR::HmdVector3d_t", modifiers: "", def_value: None }, CppParam { name: "unOffScaleFlags", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr ImuSample_t(double_t fSampleTime, ::OVR::OpenVR::HmdVector3d_t vAccel, ::OVR::OpenVR::HmdVector3d_t vGyro, uint32_t unOffScaleFlags) noexcept;


                    constexpr ImuSample_t(ImuSample_t const&) = default;
                    constexpr ImuSample_t(ImuSample_t&&) = default;
                    constexpr ImuSample_t& operator=(ImuSample_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ImuSample_t& operator=(ImuSample_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ImuSample_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 double_t __declspec(property(get=__get_fSampleTime, put=__set_fSampleTime))  fSampleTime;

constexpr void __set_fSampleTime(double_t value) ;

constexpr double_t __get_fSampleTime() const;

 ::OVR::OpenVR::HmdVector3d_t __declspec(property(get=__get_vAccel, put=__set_vAccel))  vAccel;

constexpr void __set_vAccel(::OVR::OpenVR::HmdVector3d_t value) ;

constexpr ::OVR::OpenVR::HmdVector3d_t __get_vAccel() const;

 ::OVR::OpenVR::HmdVector3d_t __declspec(property(get=__get_vGyro, put=__set_vGyro))  vGyro;

constexpr void __set_vGyro(::OVR::OpenVR::HmdVector3d_t value) ;

constexpr ::OVR::OpenVR::HmdVector3d_t __get_vGyro() const;

 uint32_t __declspec(property(get=__get_unOffScaleFlags, put=__set_unOffScaleFlags))  unOffScaleFlags;

constexpr void __set_unOffScaleFlags(uint32_t value) ;

constexpr uint32_t __get_unOffScaleFlags() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::ImuSample_t, "OVR.OpenVR", "ImuSample_t");
