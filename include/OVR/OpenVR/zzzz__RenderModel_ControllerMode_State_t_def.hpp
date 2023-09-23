#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
// Forward declare root types
namespace OVR::OpenVR {
struct RenderModel_ControllerMode_State_t;
}
// Type: OVR.OpenVR::RenderModel_ControllerMode_State_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9500))
// CS Name: OVR.OpenVR.RenderModel_ControllerMode_State_t
struct CORDL_TYPE RenderModel_ControllerMode_State_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "bScrollWheelVisible", ty: "bool", modifiers: "", def_value: None }]
constexpr RenderModel_ControllerMode_State_t(bool bScrollWheelVisible) noexcept;


                    constexpr RenderModel_ControllerMode_State_t(RenderModel_ControllerMode_State_t const&) = default;
                    constexpr RenderModel_ControllerMode_State_t(RenderModel_ControllerMode_State_t&&) = default;
                    constexpr RenderModel_ControllerMode_State_t& operator=(RenderModel_ControllerMode_State_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RenderModel_ControllerMode_State_t& operator=(RenderModel_ControllerMode_State_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RenderModel_ControllerMode_State_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_bScrollWheelVisible, put=__set_bScrollWheelVisible))  bScrollWheelVisible;

constexpr void __set_bScrollWheelVisible(bool value) ;

constexpr bool __get_bScrollWheelVisible() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::RenderModel_ControllerMode_State_t, "OVR.OpenVR", "RenderModel_ControllerMode_State_t");
