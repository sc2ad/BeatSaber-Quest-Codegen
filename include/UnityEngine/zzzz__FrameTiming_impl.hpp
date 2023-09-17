#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/zzzz__FrameTiming_def.hpp"
// Ctor Parameters [CppParam { name: "cpuTimePresentCalled", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cpuFrameTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cpuTimeFrameComplete", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "gpuFrameTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "heightScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "widthScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "syncInterval", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::FrameTiming::FrameTiming(uint64_t cpuTimePresentCalled, double_t cpuFrameTime, uint64_t cpuTimeFrameComplete, double_t gpuFrameTime, float_t heightScale, float_t widthScale, uint32_t syncInterval) noexcept : ::bs_hook::ValueTypeWrapper() {this->cpuTimePresentCalled = cpuTimePresentCalled;
this->cpuFrameTime = cpuFrameTime;
this->cpuTimeFrameComplete = cpuTimeFrameComplete;
this->gpuFrameTime = gpuFrameTime;
this->heightScale = heightScale;
this->widthScale = widthScale;
this->syncInterval = syncInterval;
}
constexpr void ::UnityEngine::FrameTiming::__set_cpuTimePresentCalled(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::UnityEngine::FrameTiming::__get_cpuTimePresentCalled() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::FrameTiming::__set_cpuFrameTime(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x8>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t ::UnityEngine::FrameTiming::__get_cpuFrameTime() const {
return ::cordl_internals::getInstanceField<double_t, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::FrameTiming::__set_cpuTimeFrameComplete(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x10>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::UnityEngine::FrameTiming::__get_cpuTimeFrameComplete() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::FrameTiming::__set_gpuFrameTime(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x18>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t ::UnityEngine::FrameTiming::__get_gpuFrameTime() const {
return ::cordl_internals::getInstanceField<double_t, 0x18>(this->__instance);
}
constexpr void ::UnityEngine::FrameTiming::__set_heightScale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::FrameTiming::__get_heightScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->__instance);
}
constexpr void ::UnityEngine::FrameTiming::__set_widthScale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::FrameTiming::__get_widthScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->__instance);
}
constexpr void ::UnityEngine::FrameTiming::__set_syncInterval(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x28>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::FrameTiming::__get_syncInterval() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x28>(this->__instance);
}
} // end anonymous namespace
