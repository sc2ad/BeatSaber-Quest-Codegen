#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace RootMotion::FinalIK {
struct FullBodyBipedEffector;
}
// Type: RootMotion.FinalIK::FullBodyBipedEffector
namespace RootMotion::FinalIK {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12513))
// CS Name: RootMotion.FinalIK.FullBodyBipedEffector
struct CORDL_TYPE FullBodyBipedEffector : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FullBodyBipedEffector(int32_t value__) noexcept;


                    constexpr FullBodyBipedEffector(FullBodyBipedEffector const&) = default;
                    constexpr FullBodyBipedEffector(FullBodyBipedEffector&&) = default;
                    constexpr FullBodyBipedEffector& operator=(FullBodyBipedEffector const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FullBodyBipedEffector& operator=(FullBodyBipedEffector&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FullBodyBipedEffector(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __FullBodyBipedEffector_Unwrapped : int32_t {
__Body = 0,
__LeftShoulder = 1,
__RightShoulder = 2,
__LeftThigh = 3,
__RightThigh = 4,
__LeftHand = 5,
__RightHand = 6,
__LeftFoot = 7,
__RightFoot = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FullBodyBipedEffector_Unwrapped () const noexcept {
return std::bit_cast<__FullBodyBipedEffector_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Body offset 0
static RootMotion::FinalIK::FullBodyBipedEffector const Body;

/// @brief Field LeftShoulder offset 0
static RootMotion::FinalIK::FullBodyBipedEffector const LeftShoulder;

/// @brief Field RightShoulder offset 0
static RootMotion::FinalIK::FullBodyBipedEffector const RightShoulder;

/// @brief Field LeftThigh offset 0
static RootMotion::FinalIK::FullBodyBipedEffector const LeftThigh;

/// @brief Field RightThigh offset 0
static RootMotion::FinalIK::FullBodyBipedEffector const RightThigh;

/// @brief Field LeftHand offset 0
static RootMotion::FinalIK::FullBodyBipedEffector const LeftHand;

/// @brief Field RightHand offset 0
static RootMotion::FinalIK::FullBodyBipedEffector const RightHand;

/// @brief Field LeftFoot offset 0
static RootMotion::FinalIK::FullBodyBipedEffector const LeftFoot;

/// @brief Field RightFoot offset 0
static RootMotion::FinalIK::FullBodyBipedEffector const RightFoot;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::FullBodyBipedEffector, "RootMotion.FinalIK", "FullBodyBipedEffector");
