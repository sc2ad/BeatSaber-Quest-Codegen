#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct EVRControllerEventOutputType;
}
// Type: OVR.OpenVR::EVRControllerEventOutputType
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9383))
// CS Name: OVR.OpenVR.EVRControllerEventOutputType
struct CORDL_TYPE EVRControllerEventOutputType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRControllerEventOutputType(int32_t value__) noexcept;


                    constexpr EVRControllerEventOutputType(EVRControllerEventOutputType const&) = default;
                    constexpr EVRControllerEventOutputType(EVRControllerEventOutputType&&) = default;
                    constexpr EVRControllerEventOutputType& operator=(EVRControllerEventOutputType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVRControllerEventOutputType& operator=(EVRControllerEventOutputType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVRControllerEventOutputType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVRControllerEventOutputType_Unwrapped : int32_t {
__ControllerEventOutput_OSEvents = 0,
__ControllerEventOutput_VREvents = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRControllerEventOutputType_Unwrapped () const noexcept {
return std::bit_cast<__EVRControllerEventOutputType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ControllerEventOutput_OSEvents offset 0
static ::OVR::OpenVR::EVRControllerEventOutputType const ControllerEventOutput_OSEvents;

/// @brief Field ControllerEventOutput_VREvents offset 0
static ::OVR::OpenVR::EVRControllerEventOutputType const ControllerEventOutput_VREvents;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRControllerEventOutputType, "OVR.OpenVR", "EVRControllerEventOutputType");
