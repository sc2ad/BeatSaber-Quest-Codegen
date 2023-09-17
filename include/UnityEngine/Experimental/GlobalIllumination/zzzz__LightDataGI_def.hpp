#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct PointLight;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct SpotLight;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct LightType;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct FalloffType;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct LightMode;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct Cookie;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct DiscLight;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct RectangleLight;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct DirectionalLight;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct LinearColor;
}
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
struct LightDataGI;
}
// Type: UnityEngine.Experimental.GlobalIllumination::LightDataGI
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10333))
// CS Name: UnityEngine.Experimental.GlobalIllumination.LightDataGI
struct CORDL_TYPE LightDataGI : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "instanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cookieID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cookieScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Experimental::GlobalIllumination::LinearColor", modifiers: "", def_value: None }, CppParam { name: "indirectColor", ty: "::UnityEngine::Experimental::GlobalIllumination::LinearColor", modifiers: "", def_value: None }, CppParam { name: "orientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "range", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "coneAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "innerConeAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "shape0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "shape1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::UnityEngine::Experimental::GlobalIllumination::LightType", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "::UnityEngine::Experimental::GlobalIllumination::LightMode", modifiers: "", def_value: None }, CppParam { name: "shadow", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "falloff", ty: "::UnityEngine::Experimental::GlobalIllumination::FalloffType", modifiers: "", def_value: None }]
constexpr LightDataGI(int32_t instanceID, int32_t cookieID, float_t cookieScale, ::UnityEngine::Experimental::GlobalIllumination::LinearColor color, ::UnityEngine::Experimental::GlobalIllumination::LinearColor indirectColor, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 position, float_t range, float_t coneAngle, float_t innerConeAngle, float_t shape0, float_t shape1, ::UnityEngine::Experimental::GlobalIllumination::LightType type, ::UnityEngine::Experimental::GlobalIllumination::LightMode mode, uint8_t shadow, ::UnityEngine::Experimental::GlobalIllumination::FalloffType falloff) noexcept;


                    constexpr LightDataGI(LightDataGI const&) = default;
                    constexpr LightDataGI(LightDataGI&&) = default;
                    constexpr LightDataGI& operator=(LightDataGI const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LightDataGI& operator=(LightDataGI&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x60};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LightDataGI(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_instanceID, put=__set_instanceID))  instanceID;

constexpr void __set_instanceID(int32_t value) ;

constexpr int32_t __get_instanceID() const;

 int32_t __declspec(property(get=__get_cookieID, put=__set_cookieID))  cookieID;

constexpr void __set_cookieID(int32_t value) ;

constexpr int32_t __get_cookieID() const;

 float_t __declspec(property(get=__get_cookieScale, put=__set_cookieScale))  cookieScale;

constexpr void __set_cookieScale(float_t value) ;

constexpr float_t __get_cookieScale() const;

 ::UnityEngine::Experimental::GlobalIllumination::LinearColor __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(::UnityEngine::Experimental::GlobalIllumination::LinearColor value) ;

constexpr ::UnityEngine::Experimental::GlobalIllumination::LinearColor __get_color() const;

 ::UnityEngine::Experimental::GlobalIllumination::LinearColor __declspec(property(get=__get_indirectColor, put=__set_indirectColor))  indirectColor;

constexpr void __set_indirectColor(::UnityEngine::Experimental::GlobalIllumination::LinearColor value) ;

constexpr ::UnityEngine::Experimental::GlobalIllumination::LinearColor __get_indirectColor() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_orientation, put=__set_orientation))  orientation;

constexpr void __set_orientation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_orientation() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_position() const;

 float_t __declspec(property(get=__get_range, put=__set_range))  range;

constexpr void __set_range(float_t value) ;

constexpr float_t __get_range() const;

 float_t __declspec(property(get=__get_coneAngle, put=__set_coneAngle))  coneAngle;

constexpr void __set_coneAngle(float_t value) ;

constexpr float_t __get_coneAngle() const;

 float_t __declspec(property(get=__get_innerConeAngle, put=__set_innerConeAngle))  innerConeAngle;

constexpr void __set_innerConeAngle(float_t value) ;

constexpr float_t __get_innerConeAngle() const;

 float_t __declspec(property(get=__get_shape0, put=__set_shape0))  shape0;

constexpr void __set_shape0(float_t value) ;

constexpr float_t __get_shape0() const;

 float_t __declspec(property(get=__get_shape1, put=__set_shape1))  shape1;

constexpr void __set_shape1(float_t value) ;

constexpr float_t __get_shape1() const;

 ::UnityEngine::Experimental::GlobalIllumination::LightType __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(::UnityEngine::Experimental::GlobalIllumination::LightType value) ;

constexpr ::UnityEngine::Experimental::GlobalIllumination::LightType __get_type() const;

 ::UnityEngine::Experimental::GlobalIllumination::LightMode __declspec(property(get=__get_mode, put=__set_mode))  mode;

constexpr void __set_mode(::UnityEngine::Experimental::GlobalIllumination::LightMode value) ;

constexpr ::UnityEngine::Experimental::GlobalIllumination::LightMode __get_mode() const;

 uint8_t __declspec(property(get=__get_shadow, put=__set_shadow))  shadow;

constexpr void __set_shadow(uint8_t value) ;

constexpr uint8_t __get_shadow() const;

 ::UnityEngine::Experimental::GlobalIllumination::FalloffType __declspec(property(get=__get_falloff, put=__set_falloff))  falloff;

constexpr void __set_falloff(::UnityEngine::Experimental::GlobalIllumination::FalloffType value) ;

constexpr ::UnityEngine::Experimental::GlobalIllumination::FalloffType __get_falloff() const;


// Methods

/// @brief Method Init addr 0x2b792f0 size 0x68 virtual false final false
 void Init(ByRef<::UnityEngine::Experimental::GlobalIllumination::DirectionalLight> light, ByRef<::UnityEngine::Experimental::GlobalIllumination::Cookie> cookie) ;

/// @brief Method Init addr 0x2b79358 size 0x70 virtual false final false
 void Init(ByRef<::UnityEngine::Experimental::GlobalIllumination::PointLight> light, ByRef<::UnityEngine::Experimental::GlobalIllumination::Cookie> cookie) ;

/// @brief Method Init addr 0x2b793c8 size 0x78 virtual false final false
 void Init(ByRef<::UnityEngine::Experimental::GlobalIllumination::SpotLight> light, ByRef<::UnityEngine::Experimental::GlobalIllumination::Cookie> cookie) ;

/// @brief Method Init addr 0x2b79440 size 0x70 virtual false final false
 void Init(ByRef<::UnityEngine::Experimental::GlobalIllumination::RectangleLight> light, ByRef<::UnityEngine::Experimental::GlobalIllumination::Cookie> cookie) ;

/// @brief Method Init addr 0x2b794b0 size 0x70 virtual false final false
 void Init(ByRef<::UnityEngine::Experimental::GlobalIllumination::DiscLight> light, ByRef<::UnityEngine::Experimental::GlobalIllumination::Cookie> cookie) ;

/// @brief Method InitNoBake addr 0x2b79520 size 0x10 virtual false final false
 void InitNoBake(int32_t lightInstanceID) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::GlobalIllumination
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::LightDataGI, "UnityEngine.Experimental.GlobalIllumination", "LightDataGI");
