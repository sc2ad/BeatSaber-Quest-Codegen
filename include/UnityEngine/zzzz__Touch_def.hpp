#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct TouchType;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct TouchPhase;
}
// Forward declare root types
namespace UnityEngine {
struct Touch;
}
// Type: UnityEngine::Touch
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15837))
// CS Name: UnityEngine.Touch
struct CORDL_TYPE Touch : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_FingerId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_RawPosition", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_PositionDelta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_TimeDelta", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_TapCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Phase", ty: "::UnityEngine::TouchPhase", modifiers: "", def_value: None }, CppParam { name: "m_Type", ty: "::UnityEngine::TouchType", modifiers: "", def_value: None }, CppParam { name: "m_Pressure", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_maximumPossiblePressure", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Radius", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_RadiusVariance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_AltitudeAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_AzimuthAngle", ty: "float_t", modifiers: "", def_value: None }]
constexpr Touch(int32_t m_FingerId, ::UnityEngine::Vector2 m_Position, ::UnityEngine::Vector2 m_RawPosition, ::UnityEngine::Vector2 m_PositionDelta, float_t m_TimeDelta, int32_t m_TapCount, ::UnityEngine::TouchPhase m_Phase, ::UnityEngine::TouchType m_Type, float_t m_Pressure, float_t m_maximumPossiblePressure, float_t m_Radius, float_t m_RadiusVariance, float_t m_AltitudeAngle, float_t m_AzimuthAngle) noexcept;


                    constexpr Touch(Touch const&) = default;
                    constexpr Touch(Touch&&) = default;
                    constexpr Touch& operator=(Touch const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Touch& operator=(Touch&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x44};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Touch(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_FingerId, put=__set_m_FingerId))  m_FingerId;

constexpr void __set_m_FingerId(int32_t value) ;

constexpr int32_t __get_m_FingerId() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_Position, put=__set_m_Position))  m_Position;

constexpr void __set_m_Position(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_Position() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_RawPosition, put=__set_m_RawPosition))  m_RawPosition;

constexpr void __set_m_RawPosition(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_RawPosition() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_PositionDelta, put=__set_m_PositionDelta))  m_PositionDelta;

constexpr void __set_m_PositionDelta(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_PositionDelta() const;

 float_t __declspec(property(get=__get_m_TimeDelta, put=__set_m_TimeDelta))  m_TimeDelta;

constexpr void __set_m_TimeDelta(float_t value) ;

constexpr float_t __get_m_TimeDelta() const;

 int32_t __declspec(property(get=__get_m_TapCount, put=__set_m_TapCount))  m_TapCount;

constexpr void __set_m_TapCount(int32_t value) ;

constexpr int32_t __get_m_TapCount() const;

 ::UnityEngine::TouchPhase __declspec(property(get=__get_m_Phase, put=__set_m_Phase))  m_Phase;

constexpr void __set_m_Phase(::UnityEngine::TouchPhase value) ;

constexpr ::UnityEngine::TouchPhase __get_m_Phase() const;

 ::UnityEngine::TouchType __declspec(property(get=__get_m_Type, put=__set_m_Type))  m_Type;

constexpr void __set_m_Type(::UnityEngine::TouchType value) ;

constexpr ::UnityEngine::TouchType __get_m_Type() const;

 float_t __declspec(property(get=__get_m_Pressure, put=__set_m_Pressure))  m_Pressure;

constexpr void __set_m_Pressure(float_t value) ;

constexpr float_t __get_m_Pressure() const;

 float_t __declspec(property(get=__get_m_maximumPossiblePressure, put=__set_m_maximumPossiblePressure))  m_maximumPossiblePressure;

constexpr void __set_m_maximumPossiblePressure(float_t value) ;

constexpr float_t __get_m_maximumPossiblePressure() const;

 float_t __declspec(property(get=__get_m_Radius, put=__set_m_Radius))  m_Radius;

constexpr void __set_m_Radius(float_t value) ;

constexpr float_t __get_m_Radius() const;

 float_t __declspec(property(get=__get_m_RadiusVariance, put=__set_m_RadiusVariance))  m_RadiusVariance;

constexpr void __set_m_RadiusVariance(float_t value) ;

constexpr float_t __get_m_RadiusVariance() const;

 float_t __declspec(property(get=__get_m_AltitudeAngle, put=__set_m_AltitudeAngle))  m_AltitudeAngle;

constexpr void __set_m_AltitudeAngle(float_t value) ;

constexpr float_t __get_m_AltitudeAngle() const;

 float_t __declspec(property(get=__get_m_AzimuthAngle, put=__set_m_AzimuthAngle))  m_AzimuthAngle;

constexpr void __set_m_AzimuthAngle(float_t value) ;

constexpr float_t __get_m_AzimuthAngle() const;


// Properties

 int32_t __declspec(property(get=get_fingerId))  fingerId;

 ::UnityEngine::Vector2 __declspec(property(get=get_position, put=set_position))  position;

 ::UnityEngine::Vector2 __declspec(property(get=get_rawPosition, put=set_rawPosition))  rawPosition;

 ::UnityEngine::Vector2 __declspec(property(get=get_deltaPosition, put=set_deltaPosition))  deltaPosition;

 float_t __declspec(property(get=get_deltaTime))  deltaTime;

 int32_t __declspec(property(get=get_tapCount))  tapCount;

 ::UnityEngine::TouchPhase __declspec(property(get=get_phase))  phase;

 float_t __declspec(property(get=get_pressure))  pressure;

 float_t __declspec(property(get=get_maximumPossiblePressure))  maximumPossiblePressure;

 ::UnityEngine::TouchType __declspec(property(get=get_type))  type;

 float_t __declspec(property(get=get_altitudeAngle))  altitudeAngle;

 float_t __declspec(property(get=get_azimuthAngle))  azimuthAngle;

 float_t __declspec(property(get=get_radius))  radius;

 float_t __declspec(property(get=get_radiusVariance))  radiusVariance;


// Methods

/// @brief Method get_fingerId addr 0x2b95fb0 size 0x8 virtual false final false
 int32_t get_fingerId() ;

/// @brief Method get_position addr 0x2b95fb8 size 0x8 virtual false final false
 ::UnityEngine::Vector2 get_position() ;

/// @brief Method set_position addr 0x2b95fc0 size 0x8 virtual false final false
 void set_position(::UnityEngine::Vector2 value) ;

/// @brief Method get_rawPosition addr 0x2b95fc8 size 0x8 virtual false final false
 ::UnityEngine::Vector2 get_rawPosition() ;

/// @brief Method set_rawPosition addr 0x2b95fd0 size 0x8 virtual false final false
 void set_rawPosition(::UnityEngine::Vector2 value) ;

/// @brief Method get_deltaPosition addr 0x2b95fd8 size 0x8 virtual false final false
 ::UnityEngine::Vector2 get_deltaPosition() ;

/// @brief Method set_deltaPosition addr 0x2b95fe0 size 0x8 virtual false final false
 void set_deltaPosition(::UnityEngine::Vector2 value) ;

/// @brief Method get_deltaTime addr 0x2b95fe8 size 0x8 virtual false final false
 float_t get_deltaTime() ;

/// @brief Method get_tapCount addr 0x2b95ff0 size 0x8 virtual false final false
 int32_t get_tapCount() ;

/// @brief Method get_phase addr 0x2b95ff8 size 0x8 virtual false final false
 ::UnityEngine::TouchPhase get_phase() ;

/// @brief Method get_pressure addr 0x2b96000 size 0x8 virtual false final false
 float_t get_pressure() ;

/// @brief Method get_maximumPossiblePressure addr 0x2b96008 size 0x8 virtual false final false
 float_t get_maximumPossiblePressure() ;

/// @brief Method get_type addr 0x2b96010 size 0x8 virtual false final false
 ::UnityEngine::TouchType get_type() ;

/// @brief Method get_altitudeAngle addr 0x2b96018 size 0x8 virtual false final false
 float_t get_altitudeAngle() ;

/// @brief Method get_azimuthAngle addr 0x2b96020 size 0x8 virtual false final false
 float_t get_azimuthAngle() ;

/// @brief Method get_radius addr 0x2b96028 size 0x8 virtual false final false
 float_t get_radius() ;

/// @brief Method get_radiusVariance addr 0x2b96030 size 0x8 virtual false final false
 float_t get_radiusVariance() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Touch, "UnityEngine", "Touch");
