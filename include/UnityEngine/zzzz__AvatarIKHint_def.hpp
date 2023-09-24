#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct AvatarIKHint;
}
// Type: UnityEngine::AvatarIKHint
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15043))
// CS Name: UnityEngine.AvatarIKHint
struct CORDL_TYPE AvatarIKHint : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AvatarIKHint(int32_t value__) noexcept;


                    constexpr AvatarIKHint(AvatarIKHint const&) = default;
                    constexpr AvatarIKHint(AvatarIKHint&&) = default;
                    constexpr AvatarIKHint& operator=(AvatarIKHint const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AvatarIKHint& operator=(AvatarIKHint&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AvatarIKHint(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AvatarIKHint_Unwrapped : int32_t {
__LeftKnee = 0,
__RightKnee = 1,
__LeftElbow = 2,
__RightElbow = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AvatarIKHint_Unwrapped () const noexcept {
return std::bit_cast<__AvatarIKHint_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field LeftKnee offset 0
static UnityEngine::AvatarIKHint const LeftKnee;

/// @brief Field RightKnee offset 0
static UnityEngine::AvatarIKHint const RightKnee;

/// @brief Field LeftElbow offset 0
static UnityEngine::AvatarIKHint const LeftElbow;

/// @brief Field RightElbow offset 0
static UnityEngine::AvatarIKHint const RightElbow;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AvatarIKHint, "UnityEngine", "AvatarIKHint");
