#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct AvatarTarget;
}
// Type: UnityEngine::AvatarTarget
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15041))
// CS Name: UnityEngine.AvatarTarget
struct CORDL_TYPE AvatarTarget : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AvatarTarget(int32_t value__) noexcept;


                    constexpr AvatarTarget(AvatarTarget const&) = default;
                    constexpr AvatarTarget(AvatarTarget&&) = default;
                    constexpr AvatarTarget& operator=(AvatarTarget const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AvatarTarget& operator=(AvatarTarget&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AvatarTarget(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AvatarTarget_Unwrapped : int32_t {
__Root = 0,
__Body = 1,
__LeftFoot = 2,
__RightFoot = 3,
__LeftHand = 4,
__RightHand = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AvatarTarget_Unwrapped () const noexcept {
return std::bit_cast<__AvatarTarget_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Root offset 0
static ::UnityEngine::AvatarTarget const Root;

/// @brief Field Body offset 0
static ::UnityEngine::AvatarTarget const Body;

/// @brief Field LeftFoot offset 0
static ::UnityEngine::AvatarTarget const LeftFoot;

/// @brief Field RightFoot offset 0
static ::UnityEngine::AvatarTarget const RightFoot;

/// @brief Field LeftHand offset 0
static ::UnityEngine::AvatarTarget const LeftHand;

/// @brief Field RightHand offset 0
static ::UnityEngine::AvatarTarget const RightHand;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AvatarTarget, "UnityEngine", "AvatarTarget");
