#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidSensorType;
}
// Type: UnityEngine.InputSystem.Android.LowLevel::AndroidSensorType
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6537))
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidSensorType
struct CORDL_TYPE AndroidSensorType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AndroidSensorType(int32_t value__) noexcept;


                    constexpr AndroidSensorType(AndroidSensorType const&) = default;
                    constexpr AndroidSensorType(AndroidSensorType&&) = default;
                    constexpr AndroidSensorType& operator=(AndroidSensorType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AndroidSensorType& operator=(AndroidSensorType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AndroidSensorType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AndroidSensorType_Unwrapped : int32_t {
__None = 0,
__Accelerometer = 1,
__MagneticField = 2,
__Orientation = 3,
__Gyroscope = 4,
__Light = 5,
__Pressure = 6,
__Temperature = 7,
__Proximity = 8,
__Gravity = 9,
__LinearAcceleration = 10,
__RotationVector = 11,
__RelativeHumidity = 12,
__AmbientTemperature = 13,
__MagneticFieldUncalibrated = 14,
__GameRotationVector = 15,
__GyroscopeUncalibrated = 16,
__SignificantMotion = 17,
__StepDetector = 18,
__StepCounter = 19,
__GeomagneticRotationVector = 20,
__HeartRate = 21,
__Pose6DOF = 28,
__StationaryDetect = 29,
__MotionDetect = 30,
__HeartBeat = 31,
__LowLatencyOffBodyDetect = 34,
__AccelerometerUncalibrated = 35,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AndroidSensorType_Unwrapped () const noexcept {
return std::bit_cast<__AndroidSensorType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const None;

/// @brief Field Accelerometer offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const Accelerometer;

/// @brief Field MagneticField offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const MagneticField;

/// @brief Field Orientation offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const Orientation;

/// @brief Field Gyroscope offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const Gyroscope;

/// @brief Field Light offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const Light;

/// @brief Field Pressure offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const Pressure;

/// @brief Field Temperature offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const Temperature;

/// @brief Field Proximity offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const Proximity;

/// @brief Field Gravity offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const Gravity;

/// @brief Field LinearAcceleration offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const LinearAcceleration;

/// @brief Field RotationVector offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const RotationVector;

/// @brief Field RelativeHumidity offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const RelativeHumidity;

/// @brief Field AmbientTemperature offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const AmbientTemperature;

/// @brief Field MagneticFieldUncalibrated offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const MagneticFieldUncalibrated;

/// @brief Field GameRotationVector offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const GameRotationVector;

/// @brief Field GyroscopeUncalibrated offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const GyroscopeUncalibrated;

/// @brief Field SignificantMotion offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const SignificantMotion;

/// @brief Field StepDetector offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const StepDetector;

/// @brief Field StepCounter offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const StepCounter;

/// @brief Field GeomagneticRotationVector offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const GeomagneticRotationVector;

/// @brief Field HeartRate offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const HeartRate;

/// @brief Field Pose6DOF offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const Pose6DOF;

/// @brief Field StationaryDetect offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const StationaryDetect;

/// @brief Field MotionDetect offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const MotionDetect;

/// @brief Field HeartBeat offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const HeartBeat;

/// @brief Field LowLatencyOffBodyDetect offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const LowLatencyOffBodyDetect;

/// @brief Field AccelerometerUncalibrated offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const AccelerometerUncalibrated;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android::LowLevel
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType, "UnityEngine.InputSystem.Android.LowLevel", "AndroidSensorType");
