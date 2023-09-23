#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct EOverlayDirection;
}
// Type: OVR.OpenVR::EOverlayDirection
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9413))
// CS Name: OVR.OpenVR.EOverlayDirection
struct CORDL_TYPE EOverlayDirection : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EOverlayDirection(int32_t value__) noexcept;


                    constexpr EOverlayDirection(EOverlayDirection const&) = default;
                    constexpr EOverlayDirection(EOverlayDirection&&) = default;
                    constexpr EOverlayDirection& operator=(EOverlayDirection const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EOverlayDirection& operator=(EOverlayDirection&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EOverlayDirection(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EOverlayDirection_Unwrapped : int32_t {
__Up = 0,
__Down = 1,
__Left = 2,
__Right = 3,
__Count = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EOverlayDirection_Unwrapped () const noexcept {
return std::bit_cast<__EOverlayDirection_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Up offset 0
static OVR::OpenVR::EOverlayDirection const Up;

/// @brief Field Down offset 0
static OVR::OpenVR::EOverlayDirection const Down;

/// @brief Field Left offset 0
static OVR::OpenVR::EOverlayDirection const Left;

/// @brief Field Right offset 0
static OVR::OpenVR::EOverlayDirection const Right;

/// @brief Field Count offset 0
static OVR::OpenVR::EOverlayDirection const Count;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EOverlayDirection, "OVR.OpenVR", "EOverlayDirection");
