#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidSensorType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::AndroidSensorType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::None{0};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::Accelerometer{1};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::MagneticField{2};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::Orientation{3};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::Gyroscope{4};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::Light{5};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::Pressure{6};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::Temperature{7};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::Proximity{8};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::Gravity{9};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::LinearAcceleration{10};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::RotationVector{11};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::RelativeHumidity{12};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::AmbientTemperature{13};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::MagneticFieldUncalibrated{14};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::GameRotationVector{15};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::GyroscopeUncalibrated{16};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::SignificantMotion{17};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::StepDetector{18};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::StepCounter{19};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::GeomagneticRotationVector{20};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::HeartRate{21};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::Pose6DOF{28};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::StationaryDetect{29};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::MotionDetect{30};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::HeartBeat{31};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::LowLatencyOffBodyDetect{34};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::AccelerometerUncalibrated{35};
