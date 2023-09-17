#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_TouchPadMove_t;
}
// Type: OVR.OpenVR::VREvent_TouchPadMove_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9452))
// CS Name: OVR.OpenVR.VREvent_TouchPadMove_t
struct CORDL_TYPE VREvent_TouchPadMove_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "bFingerDown", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "flSecondsFingerDown", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fValueXFirst", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fValueYFirst", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fValueXRaw", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fValueYRaw", ty: "float_t", modifiers: "", def_value: None }]
constexpr VREvent_TouchPadMove_t(bool bFingerDown, float_t flSecondsFingerDown, float_t fValueXFirst, float_t fValueYFirst, float_t fValueXRaw, float_t fValueYRaw) noexcept;


                    constexpr VREvent_TouchPadMove_t(VREvent_TouchPadMove_t const&) = default;
                    constexpr VREvent_TouchPadMove_t(VREvent_TouchPadMove_t&&) = default;
                    constexpr VREvent_TouchPadMove_t& operator=(VREvent_TouchPadMove_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VREvent_TouchPadMove_t& operator=(VREvent_TouchPadMove_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VREvent_TouchPadMove_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_bFingerDown, put=__set_bFingerDown))  bFingerDown;

constexpr void __set_bFingerDown(bool value) ;

constexpr bool __get_bFingerDown() const;

 float_t __declspec(property(get=__get_flSecondsFingerDown, put=__set_flSecondsFingerDown))  flSecondsFingerDown;

constexpr void __set_flSecondsFingerDown(float_t value) ;

constexpr float_t __get_flSecondsFingerDown() const;

 float_t __declspec(property(get=__get_fValueXFirst, put=__set_fValueXFirst))  fValueXFirst;

constexpr void __set_fValueXFirst(float_t value) ;

constexpr float_t __get_fValueXFirst() const;

 float_t __declspec(property(get=__get_fValueYFirst, put=__set_fValueYFirst))  fValueYFirst;

constexpr void __set_fValueYFirst(float_t value) ;

constexpr float_t __get_fValueYFirst() const;

 float_t __declspec(property(get=__get_fValueXRaw, put=__set_fValueXRaw))  fValueXRaw;

constexpr void __set_fValueXRaw(float_t value) ;

constexpr float_t __get_fValueXRaw() const;

 float_t __declspec(property(get=__get_fValueYRaw, put=__set_fValueYRaw))  fValueYRaw;

constexpr void __set_fValueYRaw(float_t value) ;

constexpr float_t __get_fValueYRaw() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_TouchPadMove_t, "OVR.OpenVR", "VREvent_TouchPadMove_t");
