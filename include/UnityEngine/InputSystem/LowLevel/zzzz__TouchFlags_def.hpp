#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct TouchFlags;
}
// Type: UnityEngine.InputSystem.LowLevel::TouchFlags
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6596))
// CS Name: UnityEngine.InputSystem.LowLevel.TouchFlags
struct CORDL_TYPE TouchFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr TouchFlags(uint8_t value__) noexcept;


                    constexpr TouchFlags(TouchFlags const&) = default;
                    constexpr TouchFlags(TouchFlags&&) = default;
                    constexpr TouchFlags& operator=(TouchFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TouchFlags& operator=(TouchFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TouchFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TouchFlags_Unwrapped : uint8_t {
__IndirectTouch = 1u,
__PrimaryTouch = 8u,
__TapPress = 16u,
__TapRelease = 32u,
__OrphanedPrimaryTouch = 64u,
__BeganInSameFrame = 128u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TouchFlags_Unwrapped () const noexcept {
return std::bit_cast<__TouchFlags_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field IndirectTouch offset 0
static UnityEngine::InputSystem::LowLevel::TouchFlags const IndirectTouch;

/// @brief Field PrimaryTouch offset 0
static UnityEngine::InputSystem::LowLevel::TouchFlags const PrimaryTouch;

/// @brief Field TapPress offset 0
static UnityEngine::InputSystem::LowLevel::TouchFlags const TapPress;

/// @brief Field TapRelease offset 0
static UnityEngine::InputSystem::LowLevel::TouchFlags const TapRelease;

/// @brief Field OrphanedPrimaryTouch offset 0
static UnityEngine::InputSystem::LowLevel::TouchFlags const OrphanedPrimaryTouch;

/// @brief Field BeganInSameFrame offset 0
static UnityEngine::InputSystem::LowLevel::TouchFlags const BeganInSameFrame;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::TouchFlags, "UnityEngine.InputSystem.LowLevel", "TouchFlags");
