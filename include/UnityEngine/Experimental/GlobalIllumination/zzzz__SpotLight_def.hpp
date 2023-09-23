#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::Experimental::GlobalIllumination {
struct AngularFalloffType;
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
namespace UnityEngine::Experimental::GlobalIllumination {
struct FalloffType;
}
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
struct SpotLight;
}
// Type: UnityEngine.Experimental.GlobalIllumination::SpotLight
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10329))
// CS Name: UnityEngine.Experimental.GlobalIllumination.SpotLight
struct CORDL_TYPE SpotLight : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "instanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "shadow", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "UnityEngine::Experimental::GlobalIllumination::LightMode", modifiers: "", def_value: None }, CppParam { name: "position", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "orientation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "color", ty: "UnityEngine::Experimental::GlobalIllumination::LinearColor", modifiers: "", def_value: None }, CppParam { name: "indirectColor", ty: "UnityEngine::Experimental::GlobalIllumination::LinearColor", modifiers: "", def_value: None }, CppParam { name: "range", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "sphereRadius", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "coneAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "innerConeAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "falloff", ty: "UnityEngine::Experimental::GlobalIllumination::FalloffType", modifiers: "", def_value: None }, CppParam { name: "angularFalloff", ty: "UnityEngine::Experimental::GlobalIllumination::AngularFalloffType", modifiers: "", def_value: None }]
constexpr SpotLight(int32_t instanceID, bool shadow, UnityEngine::Experimental::GlobalIllumination::LightMode mode, UnityEngine::Vector3 position, UnityEngine::Quaternion orientation, UnityEngine::Experimental::GlobalIllumination::LinearColor color, UnityEngine::Experimental::GlobalIllumination::LinearColor indirectColor, float_t range, float_t sphereRadius, float_t coneAngle, float_t innerConeAngle, UnityEngine::Experimental::GlobalIllumination::FalloffType falloff, UnityEngine::Experimental::GlobalIllumination::AngularFalloffType angularFalloff) noexcept;


                    constexpr SpotLight(SpotLight const&) = default;
                    constexpr SpotLight(SpotLight&&) = default;
                    constexpr SpotLight& operator=(SpotLight const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SpotLight& operator=(SpotLight&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SpotLight(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 UnityEngine::Experimental::GlobalIllumination::LightMode __declspec(property(get=__get_mode, put=__set_mode))  mode;

constexpr void __set_mode(UnityEngine::Experimental::GlobalIllumination::LightMode value) ;

constexpr UnityEngine::Experimental::GlobalIllumination::LightMode __get_mode() const;

 UnityEngine::Vector3 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_position() const;

 UnityEngine::Quaternion __declspec(property(get=__get_orientation, put=__set_orientation))  orientation;

constexpr void __set_orientation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_orientation() const;

 UnityEngine::Experimental::GlobalIllumination::LinearColor __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(UnityEngine::Experimental::GlobalIllumination::LinearColor value) ;

constexpr UnityEngine::Experimental::GlobalIllumination::LinearColor __get_color() const;

 UnityEngine::Experimental::GlobalIllumination::LinearColor __declspec(property(get=__get_indirectColor, put=__set_indirectColor))  indirectColor;

constexpr void __set_indirectColor(UnityEngine::Experimental::GlobalIllumination::LinearColor value) ;

constexpr UnityEngine::Experimental::GlobalIllumination::LinearColor __get_indirectColor() const;

 float_t __declspec(property(get=__get_range, put=__set_range))  range;

constexpr void __set_range(float_t value) ;

constexpr float_t __get_range() const;

 float_t __declspec(property(get=__get_sphereRadius, put=__set_sphereRadius))  sphereRadius;

constexpr void __set_sphereRadius(float_t value) ;

constexpr float_t __get_sphereRadius() const;

 float_t __declspec(property(get=__get_coneAngle, put=__set_coneAngle))  coneAngle;

constexpr void __set_coneAngle(float_t value) ;

constexpr float_t __get_coneAngle() const;

 float_t __declspec(property(get=__get_innerConeAngle, put=__set_innerConeAngle))  innerConeAngle;

constexpr void __set_innerConeAngle(float_t value) ;

constexpr float_t __get_innerConeAngle() const;

 UnityEngine::Experimental::GlobalIllumination::FalloffType __declspec(property(get=__get_falloff, put=__set_falloff))  falloff;

constexpr void __set_falloff(UnityEngine::Experimental::GlobalIllumination::FalloffType value) ;

constexpr UnityEngine::Experimental::GlobalIllumination::FalloffType __get_falloff() const;

 UnityEngine::Experimental::GlobalIllumination::AngularFalloffType __declspec(property(get=__get_angularFalloff, put=__set_angularFalloff))  angularFalloff;

constexpr void __set_angularFalloff(UnityEngine::Experimental::GlobalIllumination::AngularFalloffType value) ;

constexpr UnityEngine::Experimental::GlobalIllumination::AngularFalloffType __get_angularFalloff() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::GlobalIllumination
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::GlobalIllumination::SpotLight, "UnityEngine.Experimental.GlobalIllumination", "SpotLight");
