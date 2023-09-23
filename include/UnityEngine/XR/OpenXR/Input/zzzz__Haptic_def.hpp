#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Input {
struct Haptic;
}
// Type: UnityEngine.XR.OpenXR.Input::Haptic
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14187))
// CS Name: UnityEngine.XR.OpenXR.Input.Haptic
struct CORDL_TYPE Haptic : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr Haptic(Haptic const&) = default;
                    constexpr Haptic(Haptic&&) = default;
                    constexpr Haptic& operator=(Haptic const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Haptic& operator=(Haptic&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Haptic(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Input
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Input::Haptic, "UnityEngine.XR.OpenXR.Input", "Haptic");
