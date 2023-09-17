#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct EVRMouseButton;
}
// Type: OVR.OpenVR::EVRMouseButton
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9377))
// CS Name: OVR.OpenVR.EVRMouseButton
struct CORDL_TYPE EVRMouseButton : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRMouseButton(int32_t value__) noexcept;


                    constexpr EVRMouseButton(EVRMouseButton const&) = default;
                    constexpr EVRMouseButton(EVRMouseButton&&) = default;
                    constexpr EVRMouseButton& operator=(EVRMouseButton const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVRMouseButton& operator=(EVRMouseButton&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVRMouseButton(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVRMouseButton_Unwrapped : int32_t {
__Left = 1,
__Right = 2,
__Middle = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRMouseButton_Unwrapped () const noexcept {
return std::bit_cast<__EVRMouseButton_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Left offset 0
static ::OVR::OpenVR::EVRMouseButton const Left;

/// @brief Field Right offset 0
static ::OVR::OpenVR::EVRMouseButton const Right;

/// @brief Field Middle offset 0
static ::OVR::OpenVR::EVRMouseButton const Middle;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRMouseButton, "OVR.OpenVR", "EVRMouseButton");
