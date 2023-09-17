#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct EVRNotificationStyle;
}
// Type: OVR.OpenVR::EVRNotificationStyle
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9418))
// CS Name: OVR.OpenVR.EVRNotificationStyle
struct CORDL_TYPE EVRNotificationStyle : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRNotificationStyle(int32_t value__) noexcept;


                    constexpr EVRNotificationStyle(EVRNotificationStyle const&) = default;
                    constexpr EVRNotificationStyle(EVRNotificationStyle&&) = default;
                    constexpr EVRNotificationStyle& operator=(EVRNotificationStyle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVRNotificationStyle& operator=(EVRNotificationStyle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVRNotificationStyle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVRNotificationStyle_Unwrapped : int32_t {
__None = 0,
__Application = 100,
__Contact_Disabled = 200,
__Contact_Enabled = 201,
__Contact_Active = 202,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRNotificationStyle_Unwrapped () const noexcept {
return std::bit_cast<__EVRNotificationStyle_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::OVR::OpenVR::EVRNotificationStyle const None;

/// @brief Field Application offset 0
static ::OVR::OpenVR::EVRNotificationStyle const Application;

/// @brief Field Contact_Disabled offset 0
static ::OVR::OpenVR::EVRNotificationStyle const Contact_Disabled;

/// @brief Field Contact_Enabled offset 0
static ::OVR::OpenVR::EVRNotificationStyle const Contact_Enabled;

/// @brief Field Contact_Active offset 0
static ::OVR::OpenVR::EVRNotificationStyle const Contact_Active;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRNotificationStyle, "OVR.OpenVR", "EVRNotificationStyle");
