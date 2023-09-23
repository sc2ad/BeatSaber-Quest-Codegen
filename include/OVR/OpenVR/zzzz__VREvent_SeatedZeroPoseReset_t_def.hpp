#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_SeatedZeroPoseReset_t;
}
// Type: OVR.OpenVR::VREvent_SeatedZeroPoseReset_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9462))
// CS Name: OVR.OpenVR.VREvent_SeatedZeroPoseReset_t
struct CORDL_TYPE VREvent_SeatedZeroPoseReset_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "bResetBySystemMenu", ty: "bool", modifiers: "", def_value: None }]
constexpr VREvent_SeatedZeroPoseReset_t(bool bResetBySystemMenu) noexcept;


                    constexpr VREvent_SeatedZeroPoseReset_t(VREvent_SeatedZeroPoseReset_t const&) = default;
                    constexpr VREvent_SeatedZeroPoseReset_t(VREvent_SeatedZeroPoseReset_t&&) = default;
                    constexpr VREvent_SeatedZeroPoseReset_t& operator=(VREvent_SeatedZeroPoseReset_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VREvent_SeatedZeroPoseReset_t& operator=(VREvent_SeatedZeroPoseReset_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VREvent_SeatedZeroPoseReset_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_bResetBySystemMenu, put=__set_bResetBySystemMenu))  bResetBySystemMenu;

constexpr void __set_bResetBySystemMenu(bool value) ;

constexpr bool __get_bResetBySystemMenu() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_SeatedZeroPoseReset_t, "OVR.OpenVR", "VREvent_SeatedZeroPoseReset_t");
