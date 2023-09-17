#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace {
namespace UnityEngine::UIElements {
struct AddressMode;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine::UIElements {
struct GradientType;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct GradientSettings;
}
// Type: UnityEngine.UIElements::GradientSettings
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6890))
// CS Name: UnityEngine.UIElements.GradientSettings
struct CORDL_TYPE GradientSettings : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "gradientType", ty: "::UnityEngine::UIElements::GradientType", modifiers: "", def_value: None }, CppParam { name: "addressMode", ty: "::UnityEngine::UIElements::AddressMode", modifiers: "", def_value: None }, CppParam { name: "radialFocus", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "location", ty: "::UnityEngine::RectInt", modifiers: "", def_value: None }]
constexpr GradientSettings(::UnityEngine::UIElements::GradientType gradientType, ::UnityEngine::UIElements::AddressMode addressMode, ::UnityEngine::Vector2 radialFocus, ::UnityEngine::RectInt location) noexcept;


                    constexpr GradientSettings(GradientSettings const&) = default;
                    constexpr GradientSettings(GradientSettings&&) = default;
                    constexpr GradientSettings& operator=(GradientSettings const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GradientSettings& operator=(GradientSettings&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GradientSettings(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::UIElements::GradientType __declspec(property(get=__get_gradientType, put=__set_gradientType))  gradientType;

constexpr void __set_gradientType(::UnityEngine::UIElements::GradientType value) ;

constexpr ::UnityEngine::UIElements::GradientType __get_gradientType() const;

 ::UnityEngine::UIElements::AddressMode __declspec(property(get=__get_addressMode, put=__set_addressMode))  addressMode;

constexpr void __set_addressMode(::UnityEngine::UIElements::AddressMode value) ;

constexpr ::UnityEngine::UIElements::AddressMode __get_addressMode() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_radialFocus, put=__set_radialFocus))  radialFocus;

constexpr void __set_radialFocus(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_radialFocus() const;

 ::UnityEngine::RectInt __declspec(property(get=__get_location, put=__set_location))  location;

constexpr void __set_location(::UnityEngine::RectInt value) ;

constexpr ::UnityEngine::RectInt __get_location() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::GradientSettings, "UnityEngine.UIElements", "GradientSettings");
