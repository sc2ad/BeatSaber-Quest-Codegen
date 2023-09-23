#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Unity::XR::Oculus {
struct SystemHeadset;
}
// Type: Unity.XR.Oculus::SystemHeadset
namespace Unity::XR::Oculus {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15228))
// CS Name: Unity.XR.Oculus.SystemHeadset
struct CORDL_TYPE SystemHeadset : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SystemHeadset(int32_t value__) noexcept;


                    constexpr SystemHeadset(SystemHeadset const&) = default;
                    constexpr SystemHeadset(SystemHeadset&&) = default;
                    constexpr SystemHeadset& operator=(SystemHeadset const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SystemHeadset& operator=(SystemHeadset&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SystemHeadset(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SystemHeadset_Unwrapped : int32_t {
__None = 0,
__Oculus_Quest = 8,
__Oculus_Quest_2 = 9,
__Placeholder_10 = 10,
__Placeholder_11 = 11,
__Placeholder_12 = 12,
__Placeholder_13 = 13,
__Placeholder_14 = 14,
__Rift_DK1 = 4096,
__Rift_DK2 = 4097,
__Rift_CV1 = 4098,
__Rift_CB = 4099,
__Rift_S = 4100,
__Oculus_Link_Quest = 4101,
__Oculus_Link_Quest_2 = 4102,
__PC_Placeholder_4103 = 4103,
__PC_Placeholder_4104 = 4104,
__PC_Placeholder_4105 = 4105,
__PC_Placeholder_4106 = 4106,
__PC_Placeholder_4107 = 4107,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SystemHeadset_Unwrapped () const noexcept {
return std::bit_cast<__SystemHeadset_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static Unity::XR::Oculus::SystemHeadset const None;

/// @brief Field Oculus_Quest offset 0
static Unity::XR::Oculus::SystemHeadset const Oculus_Quest;

/// @brief Field Oculus_Quest_2 offset 0
static Unity::XR::Oculus::SystemHeadset const Oculus_Quest_2;

/// @brief Field Placeholder_10 offset 0
static Unity::XR::Oculus::SystemHeadset const Placeholder_10;

/// @brief Field Placeholder_11 offset 0
static Unity::XR::Oculus::SystemHeadset const Placeholder_11;

/// @brief Field Placeholder_12 offset 0
static Unity::XR::Oculus::SystemHeadset const Placeholder_12;

/// @brief Field Placeholder_13 offset 0
static Unity::XR::Oculus::SystemHeadset const Placeholder_13;

/// @brief Field Placeholder_14 offset 0
static Unity::XR::Oculus::SystemHeadset const Placeholder_14;

/// @brief Field Rift_DK1 offset 0
static Unity::XR::Oculus::SystemHeadset const Rift_DK1;

/// @brief Field Rift_DK2 offset 0
static Unity::XR::Oculus::SystemHeadset const Rift_DK2;

/// @brief Field Rift_CV1 offset 0
static Unity::XR::Oculus::SystemHeadset const Rift_CV1;

/// @brief Field Rift_CB offset 0
static Unity::XR::Oculus::SystemHeadset const Rift_CB;

/// @brief Field Rift_S offset 0
static Unity::XR::Oculus::SystemHeadset const Rift_S;

/// @brief Field Oculus_Link_Quest offset 0
static Unity::XR::Oculus::SystemHeadset const Oculus_Link_Quest;

/// @brief Field Oculus_Link_Quest_2 offset 0
static Unity::XR::Oculus::SystemHeadset const Oculus_Link_Quest_2;

/// @brief Field PC_Placeholder_4103 offset 0
static Unity::XR::Oculus::SystemHeadset const PC_Placeholder_4103;

/// @brief Field PC_Placeholder_4104 offset 0
static Unity::XR::Oculus::SystemHeadset const PC_Placeholder_4104;

/// @brief Field PC_Placeholder_4105 offset 0
static Unity::XR::Oculus::SystemHeadset const PC_Placeholder_4105;

/// @brief Field PC_Placeholder_4106 offset 0
static Unity::XR::Oculus::SystemHeadset const PC_Placeholder_4106;

/// @brief Field PC_Placeholder_4107 offset 0
static Unity::XR::Oculus::SystemHeadset const PC_Placeholder_4107;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::Oculus::SystemHeadset, "Unity.XR.Oculus", "SystemHeadset");
