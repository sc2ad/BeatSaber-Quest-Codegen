#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct AvatarIKGoal;
}
// Type: UnityEngine::AvatarIKGoal
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15042))
// CS Name: UnityEngine.AvatarIKGoal
struct CORDL_TYPE AvatarIKGoal : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AvatarIKGoal(int32_t value__) noexcept;


                    constexpr AvatarIKGoal(AvatarIKGoal const&) = default;
                    constexpr AvatarIKGoal(AvatarIKGoal&&) = default;
                    constexpr AvatarIKGoal& operator=(AvatarIKGoal const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AvatarIKGoal& operator=(AvatarIKGoal&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AvatarIKGoal(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AvatarIKGoal_Unwrapped : int32_t {
__LeftFoot = 0,
__RightFoot = 1,
__LeftHand = 2,
__RightHand = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AvatarIKGoal_Unwrapped () const noexcept {
return std::bit_cast<__AvatarIKGoal_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field LeftFoot offset 0
static ::UnityEngine::AvatarIKGoal const LeftFoot;

/// @brief Field RightFoot offset 0
static ::UnityEngine::AvatarIKGoal const RightFoot;

/// @brief Field LeftHand offset 0
static ::UnityEngine::AvatarIKGoal const LeftHand;

/// @brief Field RightHand offset 0
static ::UnityEngine::AvatarIKGoal const RightHand;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AvatarIKGoal, "UnityEngine", "AvatarIKGoal");
