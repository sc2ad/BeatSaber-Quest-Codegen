#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct AvatarMaskBodyPart;
}
// Type: UnityEngine::AvatarMaskBodyPart
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15029))
// CS Name: UnityEngine.AvatarMaskBodyPart
struct CORDL_TYPE AvatarMaskBodyPart : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AvatarMaskBodyPart(int32_t value__) noexcept;


                    constexpr AvatarMaskBodyPart(AvatarMaskBodyPart const&) = default;
                    constexpr AvatarMaskBodyPart(AvatarMaskBodyPart&&) = default;
                    constexpr AvatarMaskBodyPart& operator=(AvatarMaskBodyPart const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AvatarMaskBodyPart& operator=(AvatarMaskBodyPart&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AvatarMaskBodyPart(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AvatarMaskBodyPart_Unwrapped : int32_t {
__Root = 0,
__Body = 1,
__Head = 2,
__LeftLeg = 3,
__RightLeg = 4,
__LeftArm = 5,
__RightArm = 6,
__LeftFingers = 7,
__RightFingers = 8,
__LeftFootIK = 9,
__RightFootIK = 10,
__LeftHandIK = 11,
__RightHandIK = 12,
__LastBodyPart = 13,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AvatarMaskBodyPart_Unwrapped () const noexcept {
return std::bit_cast<__AvatarMaskBodyPart_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Root offset 0
static ::UnityEngine::AvatarMaskBodyPart const Root;

/// @brief Field Body offset 0
static ::UnityEngine::AvatarMaskBodyPart const Body;

/// @brief Field Head offset 0
static ::UnityEngine::AvatarMaskBodyPart const Head;

/// @brief Field LeftLeg offset 0
static ::UnityEngine::AvatarMaskBodyPart const LeftLeg;

/// @brief Field RightLeg offset 0
static ::UnityEngine::AvatarMaskBodyPart const RightLeg;

/// @brief Field LeftArm offset 0
static ::UnityEngine::AvatarMaskBodyPart const LeftArm;

/// @brief Field RightArm offset 0
static ::UnityEngine::AvatarMaskBodyPart const RightArm;

/// @brief Field LeftFingers offset 0
static ::UnityEngine::AvatarMaskBodyPart const LeftFingers;

/// @brief Field RightFingers offset 0
static ::UnityEngine::AvatarMaskBodyPart const RightFingers;

/// @brief Field LeftFootIK offset 0
static ::UnityEngine::AvatarMaskBodyPart const LeftFootIK;

/// @brief Field RightFootIK offset 0
static ::UnityEngine::AvatarMaskBodyPart const RightFootIK;

/// @brief Field LeftHandIK offset 0
static ::UnityEngine::AvatarMaskBodyPart const LeftHandIK;

/// @brief Field RightHandIK offset 0
static ::UnityEngine::AvatarMaskBodyPart const RightHandIK;

/// @brief Field LastBodyPart offset 0
static ::UnityEngine::AvatarMaskBodyPart const LastBodyPart;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AvatarMaskBodyPart, "UnityEngine", "AvatarMaskBodyPart");
