#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace {
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct PanelClearSettings;
}
// Type: UnityEngine.UIElements::PanelClearSettings
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6952))
// CS Name: UnityEngine.UIElements.PanelClearSettings
struct CORDL_TYPE PanelClearSettings : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "clearDepthStencil", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "clearColor", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
constexpr PanelClearSettings(bool clearDepthStencil, bool clearColor, ::UnityEngine::Color color) noexcept;


                    constexpr PanelClearSettings(PanelClearSettings const&) = default;
                    constexpr PanelClearSettings(PanelClearSettings&&) = default;
                    constexpr PanelClearSettings& operator=(PanelClearSettings const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PanelClearSettings& operator=(PanelClearSettings&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PanelClearSettings(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_clearDepthStencil, put=__set_clearDepthStencil))  clearDepthStencil;

constexpr void __set_clearDepthStencil(bool value) ;

constexpr bool __get_clearDepthStencil() const;

 bool __declspec(property(get=__get_clearColor, put=__set_clearColor))  clearColor;

constexpr void __set_clearColor(bool value) ;

constexpr bool __get_clearColor() const;

 ::UnityEngine::Color __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_color() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PanelClearSettings, "UnityEngine.UIElements", "PanelClearSettings");
