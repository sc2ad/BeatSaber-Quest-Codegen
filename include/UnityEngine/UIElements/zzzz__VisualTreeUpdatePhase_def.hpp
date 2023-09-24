#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements {
struct VisualTreeUpdatePhase;
}
// Type: UnityEngine.UIElements::VisualTreeUpdatePhase
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6834))
// CS Name: UnityEngine.UIElements.VisualTreeUpdatePhase
struct CORDL_TYPE VisualTreeUpdatePhase : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VisualTreeUpdatePhase(int32_t value__) noexcept;


                    constexpr VisualTreeUpdatePhase(VisualTreeUpdatePhase const&) = default;
                    constexpr VisualTreeUpdatePhase(VisualTreeUpdatePhase&&) = default;
                    constexpr VisualTreeUpdatePhase& operator=(VisualTreeUpdatePhase const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VisualTreeUpdatePhase& operator=(VisualTreeUpdatePhase&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VisualTreeUpdatePhase(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __VisualTreeUpdatePhase_Unwrapped : int32_t {
__ViewData = 0,
__Bindings = 1,
__Animation = 2,
__Styles = 3,
__Layout = 4,
__TransformClip = 5,
__Repaint = 6,
__Count = 7,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VisualTreeUpdatePhase_Unwrapped () const noexcept {
return std::bit_cast<__VisualTreeUpdatePhase_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ViewData offset 0
static UnityEngine::UIElements::VisualTreeUpdatePhase const ViewData;

/// @brief Field Bindings offset 0
static UnityEngine::UIElements::VisualTreeUpdatePhase const Bindings;

/// @brief Field Animation offset 0
static UnityEngine::UIElements::VisualTreeUpdatePhase const Animation;

/// @brief Field Styles offset 0
static UnityEngine::UIElements::VisualTreeUpdatePhase const Styles;

/// @brief Field Layout offset 0
static UnityEngine::UIElements::VisualTreeUpdatePhase const Layout;

/// @brief Field TransformClip offset 0
static UnityEngine::UIElements::VisualTreeUpdatePhase const TransformClip;

/// @brief Field Repaint offset 0
static UnityEngine::UIElements::VisualTreeUpdatePhase const Repaint;

/// @brief Field Count offset 0
static UnityEngine::UIElements::VisualTreeUpdatePhase const Count;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::VisualTreeUpdatePhase, "UnityEngine.UIElements", "VisualTreeUpdatePhase");
