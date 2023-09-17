#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct VRMessageOverlayResponse;
}
// Type: OVR.OpenVR::VRMessageOverlayResponse
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9410))
// CS Name: OVR.OpenVR.VRMessageOverlayResponse
struct CORDL_TYPE VRMessageOverlayResponse : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VRMessageOverlayResponse(int32_t value__) noexcept;


                    constexpr VRMessageOverlayResponse(VRMessageOverlayResponse const&) = default;
                    constexpr VRMessageOverlayResponse(VRMessageOverlayResponse&&) = default;
                    constexpr VRMessageOverlayResponse& operator=(VRMessageOverlayResponse const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VRMessageOverlayResponse& operator=(VRMessageOverlayResponse&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VRMessageOverlayResponse(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __VRMessageOverlayResponse_Unwrapped : int32_t {
__ButtonPress_0 = 0,
__ButtonPress_1 = 1,
__ButtonPress_2 = 2,
__ButtonPress_3 = 3,
__CouldntFindSystemOverlay = 4,
__CouldntFindOrCreateClientOverlay = 5,
__ApplicationQuit = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VRMessageOverlayResponse_Unwrapped () const noexcept {
return std::bit_cast<__VRMessageOverlayResponse_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ButtonPress_0 offset 0
static ::OVR::OpenVR::VRMessageOverlayResponse const ButtonPress_0;

/// @brief Field ButtonPress_1 offset 0
static ::OVR::OpenVR::VRMessageOverlayResponse const ButtonPress_1;

/// @brief Field ButtonPress_2 offset 0
static ::OVR::OpenVR::VRMessageOverlayResponse const ButtonPress_2;

/// @brief Field ButtonPress_3 offset 0
static ::OVR::OpenVR::VRMessageOverlayResponse const ButtonPress_3;

/// @brief Field CouldntFindSystemOverlay offset 0
static ::OVR::OpenVR::VRMessageOverlayResponse const CouldntFindSystemOverlay;

/// @brief Field CouldntFindOrCreateClientOverlay offset 0
static ::OVR::OpenVR::VRMessageOverlayResponse const CouldntFindOrCreateClientOverlay;

/// @brief Field ApplicationQuit offset 0
static ::OVR::OpenVR::VRMessageOverlayResponse const ApplicationQuit;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VRMessageOverlayResponse, "OVR.OpenVR", "VRMessageOverlayResponse");
