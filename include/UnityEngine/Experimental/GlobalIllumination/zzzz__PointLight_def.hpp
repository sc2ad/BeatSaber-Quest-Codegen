#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::Experimental::GlobalIllumination {
struct FalloffType;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct LinearColor;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct LightMode;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
struct PointLight;
}
// Type: UnityEngine.Experimental.GlobalIllumination::PointLight
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10328))
// CS Name: UnityEngine.Experimental.GlobalIllumination.PointLight
struct CORDL_TYPE PointLight : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "instanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "shadow", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "::UnityEngine::Experimental::GlobalIllumination::LightMode", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "orientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Experimental::GlobalIllumination::LinearColor", modifiers: "", def_value: None }, CppParam { name: "indirectColor", ty: "::UnityEngine::Experimental::GlobalIllumination::LinearColor", modifiers: "", def_value: None }, CppParam { name: "range", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "sphereRadius", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "falloff", ty: "::UnityEngine::Experimental::GlobalIllumination::FalloffType", modifiers: "", def_value: None }]
constexpr PointLight(int32_t instanceID, bool shadow, ::UnityEngine::Experimental::GlobalIllumination::LightMode mode, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion orientation, ::UnityEngine::Experimental::GlobalIllumination::LinearColor color, ::UnityEngine::Experimental::GlobalIllumination::LinearColor indirectColor, float_t range, float_t sphereRadius, ::UnityEngine::Experimental::GlobalIllumination::FalloffType falloff) noexcept;


                    constexpr PointLight(PointLight const&) = default;
                    constexpr PointLight(PointLight&&) = default;
                    constexpr PointLight& operator=(PointLight const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PointLight& operator=(PointLight&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PointLight(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_instanceID, put=__set_instanceID))  instanceID;

constexpr void __set_instanceID(int32_t value) ;

constexpr int32_t __get_instanceID() const;

 bool __declspec(property(get=__get_shadow, put=__set_shadow))  shadow;

constexpr void __set_shadow(bool value) ;

constexpr bool __get_shadow() const;

 ::UnityEngine::Experimental::GlobalIllumination::LightMode __declspec(property(get=__get_mode, put=__set_mode))  mode;

constexpr void __set_mode(::UnityEngine::Experimental::GlobalIllumination::LightMode value) ;

constexpr ::UnityEngine::Experimental::GlobalIllumination::LightMode __get_mode() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_position() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_orientation, put=__set_orientation))  orientation;

constexpr void __set_orientation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_orientation() const;

 ::UnityEngine::Experimental::GlobalIllumination::LinearColor __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(::UnityEngine::Experimental::GlobalIllumination::LinearColor value) ;

constexpr ::UnityEngine::Experimental::GlobalIllumination::LinearColor __get_color() const;

 ::UnityEngine::Experimental::GlobalIllumination::LinearColor __declspec(property(get=__get_indirectColor, put=__set_indirectColor))  indirectColor;

constexpr void __set_indirectColor(::UnityEngine::Experimental::GlobalIllumination::LinearColor value) ;

constexpr ::UnityEngine::Experimental::GlobalIllumination::LinearColor __get_indirectColor() const;

 float_t __declspec(property(get=__get_range, put=__set_range))  range;

constexpr void __set_range(float_t value) ;

constexpr float_t __get_range() const;

 float_t __declspec(property(get=__get_sphereRadius, put=__set_sphereRadius))  sphereRadius;

constexpr void __set_sphereRadius(float_t value) ;

constexpr float_t __get_sphereRadius() const;

 ::UnityEngine::Experimental::GlobalIllumination::FalloffType __declspec(property(get=__get_falloff, put=__set_falloff))  falloff;

constexpr void __set_falloff(::UnityEngine::Experimental::GlobalIllumination::FalloffType value) ;

constexpr ::UnityEngine::Experimental::GlobalIllumination::FalloffType __get_falloff() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::GlobalIllumination
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::PointLight, "UnityEngine.Experimental.GlobalIllumination", "PointLight");
