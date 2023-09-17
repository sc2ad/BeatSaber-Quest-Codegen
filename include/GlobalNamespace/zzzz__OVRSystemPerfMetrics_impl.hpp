#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__OVRSystemPerfMetrics_def.hpp"
#include "GlobalNamespace/zzzz__OVRNetwork_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics.ToJSON
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::*)()>(&::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::ToJSON)> {
  constexpr static std::size_t size = 0x734;
  constexpr static std::size_t addrs = 0x2635b58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics>::get(),
                            "ToJSON",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics.LoadFromJSON
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::*)(::StringW)>(&::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::LoadFromJSON)> {
  constexpr static std::size_t size = 0x948;
  constexpr static std::size_t addrs = 0x263628c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics>::get(),
                            "LoadFromJSON",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::*)()>(&::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2637370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_frameCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_frameCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_frameTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_frameTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_deltaFrameTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_deltaFrameTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_appCpuTime_IsValid(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_appCpuTime_IsValid() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_appCpuTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_appCpuTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_appGpuTime_IsValid(bool value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_appGpuTime_IsValid() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_appGpuTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_appGpuTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_compositorCpuTime_IsValid(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_compositorCpuTime_IsValid() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_compositorCpuTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_compositorCpuTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_compositorGpuTime_IsValid(bool value)  {
::cordl_internals::setInstanceField<bool, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_compositorGpuTime_IsValid() const {
return ::cordl_internals::getInstanceField<bool, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_compositorGpuTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_compositorGpuTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_compositorDroppedFrameCount_IsValid(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_compositorDroppedFrameCount_IsValid() const {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_compositorDroppedFrameCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_compositorDroppedFrameCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_compositorSpaceWarpMode_IsValid(bool value)  {
::cordl_internals::setInstanceField<bool, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_compositorSpaceWarpMode_IsValid() const {
return ::cordl_internals::getInstanceField<bool, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_compositorSpaceWarpMode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_compositorSpaceWarpMode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_systemGpuUtilPercentage_IsValid(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_systemGpuUtilPercentage_IsValid() const {
return ::cordl_internals::getInstanceField<bool, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_systemGpuUtilPercentage(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_systemGpuUtilPercentage() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_systemCpuUtilAveragePercentage_IsValid(bool value)  {
::cordl_internals::setInstanceField<bool, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_systemCpuUtilAveragePercentage_IsValid() const {
return ::cordl_internals::getInstanceField<bool, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_systemCpuUtilAveragePercentage(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_systemCpuUtilAveragePercentage() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_systemCpuUtilWorstPercentage_IsValid(bool value)  {
::cordl_internals::setInstanceField<bool, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_systemCpuUtilWorstPercentage_IsValid() const {
return ::cordl_internals::getInstanceField<bool, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_systemCpuUtilWorstPercentage(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_systemCpuUtilWorstPercentage() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_deviceCpuClockFrequencyInMHz_IsValid(bool value)  {
::cordl_internals::setInstanceField<bool, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_deviceCpuClockFrequencyInMHz_IsValid() const {
return ::cordl_internals::getInstanceField<bool, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_deviceCpuClockFrequencyInMHz(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_deviceCpuClockFrequencyInMHz() const {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_deviceGpuClockFrequencyInMHz_IsValid(bool value)  {
::cordl_internals::setInstanceField<bool, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_deviceGpuClockFrequencyInMHz_IsValid() const {
return ::cordl_internals::getInstanceField<bool, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_deviceGpuClockFrequencyInMHz(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_deviceGpuClockFrequencyInMHz() const {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_deviceCpuClockLevel_IsValid(bool value)  {
::cordl_internals::setInstanceField<bool, 0x74>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_deviceCpuClockLevel_IsValid() const {
return ::cordl_internals::getInstanceField<bool, 0x74>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_deviceCpuClockLevel(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_deviceCpuClockLevel() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_deviceGpuClockLevel_IsValid(bool value)  {
::cordl_internals::setInstanceField<bool, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_deviceGpuClockLevel_IsValid() const {
return ::cordl_internals::getInstanceField<bool, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_deviceGpuClockLevel(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_deviceGpuClockLevel() const {
return ::cordl_internals::getInstanceField<int32_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_deviceCpuCoreUtilPercentage_IsValid(::ArrayW<bool> value)  {
::cordl_internals::setInstanceField<::ArrayW<bool>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<bool>>(value));
}
constexpr ::ArrayW<bool> ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_deviceCpuCoreUtilPercentage_IsValid() const {
return ::cordl_internals::getInstanceField<::ArrayW<bool>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__set_deviceCpuCoreUtilPercentage(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::__get_deviceCpuCoreUtilPercentage() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::ToJSON()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics>::get(),
                            "ToJSON",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::LoadFromJSON(::StringW json)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics>::get(),
                            "LoadFromJSON",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, json);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics>())) {}
 void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::*)()>(&::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::OnEnable)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2637428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::*)()>(&::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::OnDisable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2637538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::*)()>(&::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::Update)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26375d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer.GatherPerfMetrics
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics (::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::*)()>(&::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::GatherPerfMetrics)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x2637650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer>::get(),
                            "GatherPerfMetrics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::*)()>(&::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2637950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::__set_singleton(::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer value)  {
::cordl_internals::setStaticField<::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer, "singleton", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer>::get>(std::forward<::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer>(value));
}
 ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::__get_singleton()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer, "singleton", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer>::get>();
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::__set_tcpServer(::GlobalNamespace::____GlobalNamespace__OVRNetwork__OVRNetworkTcpServer value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__OVRNetwork__OVRNetworkTcpServer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__OVRNetwork__OVRNetworkTcpServer>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRNetwork__OVRNetworkTcpServer ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::__get_tcpServer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__OVRNetwork__OVRNetworkTcpServer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::__set_listeningPort(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::__get_listeningPort() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::GatherPerfMetrics()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer>::get(),
                            "GatherPerfMetrics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer>())) {}
 void ::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::OVRSystemPerfMetrics._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSystemPerfMetrics::*)()>(&::GlobalNamespace::OVRSystemPerfMetrics::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2635b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSystemPerfMetrics>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetrics()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<OVRSystemPerfMetrics>())) {}
 void ::GlobalNamespace::OVRSystemPerfMetrics::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSystemPerfMetrics>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
