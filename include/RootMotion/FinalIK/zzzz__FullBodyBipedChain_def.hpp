#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace RootMotion::FinalIK {
struct FullBodyBipedChain;
}
// Type: RootMotion.FinalIK::FullBodyBipedChain
namespace RootMotion::FinalIK {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12514))
// CS Name: RootMotion.FinalIK.FullBodyBipedChain
struct CORDL_TYPE FullBodyBipedChain : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FullBodyBipedChain(int32_t value__) noexcept;


                    constexpr FullBodyBipedChain(FullBodyBipedChain const&) = default;
                    constexpr FullBodyBipedChain(FullBodyBipedChain&&) = default;
                    constexpr FullBodyBipedChain& operator=(FullBodyBipedChain const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FullBodyBipedChain& operator=(FullBodyBipedChain&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FullBodyBipedChain(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __FullBodyBipedChain_Unwrapped : int32_t {
__LeftArm = 0,
__RightArm = 1,
__LeftLeg = 2,
__RightLeg = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FullBodyBipedChain_Unwrapped () const noexcept {
return std::bit_cast<__FullBodyBipedChain_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field LeftArm offset 0
static ::RootMotion::FinalIK::FullBodyBipedChain const LeftArm;

/// @brief Field RightArm offset 0
static ::RootMotion::FinalIK::FullBodyBipedChain const RightArm;

/// @brief Field LeftLeg offset 0
static ::RootMotion::FinalIK::FullBodyBipedChain const LeftLeg;

/// @brief Field RightLeg offset 0
static ::RootMotion::FinalIK::FullBodyBipedChain const RightLeg;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::FullBodyBipedChain, "RootMotion.FinalIK", "FullBodyBipedChain");
