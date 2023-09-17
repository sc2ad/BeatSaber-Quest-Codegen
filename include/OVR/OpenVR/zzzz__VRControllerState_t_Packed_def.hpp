#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace OVR::OpenVR {
struct VRControllerState_t;
}
namespace OVR::OpenVR {
struct VRControllerAxis_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VRControllerState_t_Packed;
}
// Type: OVR.OpenVR::VRControllerState_t_Packed
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9480))
// CS Name: OVR.OpenVR.VRControllerState_t_Packed
struct CORDL_TYPE VRControllerState_t_Packed : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "unPacketNum", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ulButtonPressed", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "ulButtonTouched", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "rAxis0", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: None }, CppParam { name: "rAxis1", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: None }, CppParam { name: "rAxis2", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: None }, CppParam { name: "rAxis3", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: None }, CppParam { name: "rAxis4", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: None }]
constexpr VRControllerState_t_Packed(uint32_t unPacketNum, uint64_t ulButtonPressed, uint64_t ulButtonTouched, ::OVR::OpenVR::VRControllerAxis_t rAxis0, ::OVR::OpenVR::VRControllerAxis_t rAxis1, ::OVR::OpenVR::VRControllerAxis_t rAxis2, ::OVR::OpenVR::VRControllerAxis_t rAxis3, ::OVR::OpenVR::VRControllerAxis_t rAxis4) noexcept;


                    constexpr VRControllerState_t_Packed(VRControllerState_t_Packed const&) = default;
                    constexpr VRControllerState_t_Packed(VRControllerState_t_Packed&&) = default;
                    constexpr VRControllerState_t_Packed& operator=(VRControllerState_t_Packed const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VRControllerState_t_Packed& operator=(VRControllerState_t_Packed&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x3c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VRControllerState_t_Packed(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_unPacketNum, put=__set_unPacketNum))  unPacketNum;

constexpr void __set_unPacketNum(uint32_t value) ;

constexpr uint32_t __get_unPacketNum() const;

 uint64_t __declspec(property(get=__get_ulButtonPressed, put=__set_ulButtonPressed))  ulButtonPressed;

constexpr void __set_ulButtonPressed(uint64_t value) ;

constexpr uint64_t __get_ulButtonPressed() const;

 uint64_t __declspec(property(get=__get_ulButtonTouched, put=__set_ulButtonTouched))  ulButtonTouched;

constexpr void __set_ulButtonTouched(uint64_t value) ;

constexpr uint64_t __get_ulButtonTouched() const;

 ::OVR::OpenVR::VRControllerAxis_t __declspec(property(get=__get_rAxis0, put=__set_rAxis0))  rAxis0;

constexpr void __set_rAxis0(::OVR::OpenVR::VRControllerAxis_t value) ;

constexpr ::OVR::OpenVR::VRControllerAxis_t __get_rAxis0() const;

 ::OVR::OpenVR::VRControllerAxis_t __declspec(property(get=__get_rAxis1, put=__set_rAxis1))  rAxis1;

constexpr void __set_rAxis1(::OVR::OpenVR::VRControllerAxis_t value) ;

constexpr ::OVR::OpenVR::VRControllerAxis_t __get_rAxis1() const;

 ::OVR::OpenVR::VRControllerAxis_t __declspec(property(get=__get_rAxis2, put=__set_rAxis2))  rAxis2;

constexpr void __set_rAxis2(::OVR::OpenVR::VRControllerAxis_t value) ;

constexpr ::OVR::OpenVR::VRControllerAxis_t __get_rAxis2() const;

 ::OVR::OpenVR::VRControllerAxis_t __declspec(property(get=__get_rAxis3, put=__set_rAxis3))  rAxis3;

constexpr void __set_rAxis3(::OVR::OpenVR::VRControllerAxis_t value) ;

constexpr ::OVR::OpenVR::VRControllerAxis_t __get_rAxis3() const;

 ::OVR::OpenVR::VRControllerAxis_t __declspec(property(get=__get_rAxis4, put=__set_rAxis4))  rAxis4;

constexpr void __set_rAxis4(::OVR::OpenVR::VRControllerAxis_t value) ;

constexpr ::OVR::OpenVR::VRControllerAxis_t __get_rAxis4() const;


// Methods

/// @brief Method .ctor addr 0x2663ae8 size 0x44 virtual false final false
 void _ctor(::OVR::OpenVR::VRControllerState_t unpacked) ;

/// @brief Method Unpack addr 0x2663b2c size 0x3c virtual false final false
 void Unpack(ByRef<::OVR::OpenVR::VRControllerState_t> unpacked) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VRControllerState_t_Packed, "OVR.OpenVR", "VRControllerState_t_Packed");
