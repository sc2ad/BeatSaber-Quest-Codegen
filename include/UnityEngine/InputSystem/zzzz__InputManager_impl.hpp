#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventStream_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceMatcher_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDeviceChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSettings_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TypeTable_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateBuffers_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceFindControlLayoutDelegate_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateChangeMonitor_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputMetrics_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlLayoutChange_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceExecuteCommandDelegate_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventBuffer_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateBlock_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateBuffers_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommandDelegate_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputRuntime_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/InputSystem/zzzz__DynamicBitfield_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__MemoryHelpers_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__DeviceDisableScope::UnityEngine__InputSystem__InputManager__DeviceDisableScope(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__DeviceDisableScope::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__DeviceDisableScope::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__DeviceDisableScope  UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__DeviceDisableScope::Everywhere{0};
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__DeviceDisableScope  UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__DeviceDisableScope::InFrontendOnly{1};
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__DeviceDisableScope  UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__DeviceDisableScope::TemporaryWhilePlayerIsInBackground{2};
// Ctor Parameters [CppParam { name: "description", ty: "UnityEngine::InputSystem::Layouts::InputDeviceDescription", modifiers: "", def_value: Some("{}") }, CppParam { name: "deviceId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "isNative", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isRemoved", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__AvailableDevice::UnityEngine__InputSystem__InputManager__AvailableDevice(UnityEngine::InputSystem::Layouts::InputDeviceDescription description, int32_t deviceId, bool isNative, bool isRemoved) noexcept : ::bs_hook::ValueTypeWrapper() {this->description = description;
this->deviceId = deviceId;
this->isNative = isNative;
this->isRemoved = isRemoved;
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__AvailableDevice::__set_description(UnityEngine::InputSystem::Layouts::InputDeviceDescription value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Layouts::InputDeviceDescription, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::Layouts::InputDeviceDescription>(value));
}
constexpr UnityEngine::InputSystem::Layouts::InputDeviceDescription UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__AvailableDevice::__get_description() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Layouts::InputDeviceDescription, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__AvailableDevice::__set_deviceId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__AvailableDevice::__get_deviceId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__AvailableDevice::__set_isNative(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3c>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__AvailableDevice::__get_isNative() const {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__AvailableDevice::__set_isRemoved(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3d>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__AvailableDevice::__get_isRemoved() const {
return ::cordl_internals::getInstanceField<bool, 0x3d>(this->__instance);
}
// Ctor Parameters [CppParam { name: "control", ty: "UnityEngine::InputSystem::InputControl", modifiers: "", def_value: Some("csnull") }, CppParam { name: "time", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "monitor", ty: "UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor", modifiers: "", def_value: Some("csnull") }, CppParam { name: "monitorIndex", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "timerIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout::UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout(UnityEngine::InputSystem::InputControl control, double_t time, UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor monitor, int64_t monitorIndex, int32_t timerIndex) noexcept : ::bs_hook::ValueTypeWrapper() {this->control = control;
this->time = time;
this->monitor = monitor;
this->monitorIndex = monitorIndex;
this->timerIndex = timerIndex;
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout::__set_control(UnityEngine::InputSystem::InputControl value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputControl, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::InputControl>(value));
}
constexpr UnityEngine::InputSystem::InputControl UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout::__get_control() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputControl, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout::__set_time(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x8>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout::__get_time() const {
return ::cordl_internals::getInstanceField<double_t, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout::__set_monitor(UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor, 0x10>(this->__instance, std::forward<UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout::__get_monitor() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor, 0x10>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout::__set_monitorIndex(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x18>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout::__get_monitorIndex() const {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout::__set_timerIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout::__get_timerIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->__instance);
}
// Ctor Parameters [CppParam { name: "control", ty: "UnityEngine::InputSystem::InputControl", modifiers: "", def_value: Some("csnull") }, CppParam { name: "monitor", ty: "UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor", modifiers: "", def_value: Some("csnull") }, CppParam { name: "monitorIndex", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "groupIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorListener::UnityEngine__InputSystem__InputManager__StateChangeMonitorListener(UnityEngine::InputSystem::InputControl control, UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor monitor, int64_t monitorIndex, uint32_t groupIndex) noexcept : ::bs_hook::ValueTypeWrapper() {this->control = control;
this->monitor = monitor;
this->monitorIndex = monitorIndex;
this->groupIndex = groupIndex;
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorListener::__set_control(UnityEngine::InputSystem::InputControl value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputControl, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::InputControl>(value));
}
constexpr UnityEngine::InputSystem::InputControl UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorListener::__get_control() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputControl, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorListener::__set_monitor(UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor, 0x8>(this->__instance, std::forward<UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorListener::__get_monitor() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorListener::__set_monitorIndex(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x10>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorListener::__get_monitorIndex() const {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorListener::__set_groupIndex(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x18>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorListener::__get_groupIndex() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x18>(this->__instance);
}
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice.get_count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::get_count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x292438c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice>::get(),
                            "get_count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::*)(UnityEngine::InputSystem::InputControl, UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor, int64_t, uint32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::Add)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2924394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::*)(UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor, int64_t, bool)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::Remove)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x292451c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::Clear)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2924714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice.CompactArrays
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::CompactArrays)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2924778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice>::get(),
                            "CompactArrays",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice.RemoveAt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::*)(int32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::RemoveAt)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2924668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice>::get(),
                            "RemoveAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice.SortMonitorsByIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::SortMonitorsByIndex)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x29247e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice>::get(),
                            "SortMonitorsByIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "memoryRegions", ty: "::ArrayW<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MemoryHelpers__BitRegion>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "listeners", ty: "::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorListener>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "signalled", ty: "UnityEngine::InputSystem::DynamicBitfield", modifiers: "", def_value: Some("{}") }, CppParam { name: "needToUpdateOrderingOfMonitors", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "needToCompactArrays", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice(::ArrayW<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MemoryHelpers__BitRegion> memoryRegions, ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorListener> listeners, UnityEngine::InputSystem::DynamicBitfield signalled, bool needToUpdateOrderingOfMonitors, bool needToCompactArrays) noexcept : ::bs_hook::ValueTypeWrapper() {this->memoryRegions = memoryRegions;
this->listeners = listeners;
this->signalled = signalled;
this->needToUpdateOrderingOfMonitors = needToUpdateOrderingOfMonitors;
this->needToCompactArrays = needToCompactArrays;
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::__set_memoryRegions(::ArrayW<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MemoryHelpers__BitRegion> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MemoryHelpers__BitRegion>, 0x0>(this->__instance, std::forward<::ArrayW<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MemoryHelpers__BitRegion>>(value));
}
constexpr ::ArrayW<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MemoryHelpers__BitRegion> UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::__get_memoryRegions() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MemoryHelpers__BitRegion>, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::__set_listeners(::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorListener> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorListener>, 0x8>(this->__instance, std::forward<::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorListener>>(value));
}
constexpr ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorListener> UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::__get_listeners() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorListener>, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::__set_signalled(UnityEngine::InputSystem::DynamicBitfield value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::DynamicBitfield, 0x10>(this->__instance, std::forward<UnityEngine::InputSystem::DynamicBitfield>(value));
}
constexpr UnityEngine::InputSystem::DynamicBitfield UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::__get_signalled() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::DynamicBitfield, 0x10>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::__set_needToUpdateOrderingOfMonitors(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::__get_needToUpdateOrderingOfMonitors() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::__set_needToCompactArrays(bool value)  {
::cordl_internals::setInstanceField<bool, 0x31>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::__get_needToCompactArrays() const {
return ::cordl_internals::getInstanceField<bool, 0x31>(this->__instance);
}
 int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::get_count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice>::get(),
                            "get_count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::Add(UnityEngine::InputSystem::InputControl control, UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor monitor, int64_t monitorIndex, uint32_t groupIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, control, monitor, monitorIndex, groupIndex);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::Remove(UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor monitor, int64_t monitorIndex, bool deferRemoval)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, monitor, monitorIndex, deferRemoval);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::CompactArrays()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice>::get(),
                            "CompactArrays",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::RemoveAt(int32_t i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice>::get(),
                            "RemoveAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, i);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice::SortMonitorsByIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice>::get(),
                            "SortMonitorsByIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::*)(int32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x292491c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2924950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::MoveNext)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x2924994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75.__m__Finally1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2925038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75.__m__Finally2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__m__Finally2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2925088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75>::get(),
                            "<>m__Finally2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75.__m__Finally3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__m__Finally3)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x29250d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75>::get(),
                            "<>m__Finally3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75.__m__Finally4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__m__Finally4)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2925128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75>::get(),
                            "<>m__Finally4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75.__m__Finally5
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__m__Finally5)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2925178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75>::get(),
                            "<>m__Finally5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75.__m__Finally6
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__m__Finally6)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x29251c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75>::get(),
                            "<>m__Finally6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75.System_Collections_Generic_IEnumerator_System_String__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::System_Collections_Generic_IEnumerator_System_String__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2925218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75>::get(),
                            "System.Collections.Generic.IEnumerator<System.String>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2925220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2925260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75.System_Collections_Generic_IEnumerable_System_String__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<::StringW> (UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::System_Collections_Generic_IEnumerable_System_String__GetEnumerator)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2925268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75>::get(),
                            "System.Collections.Generic.IEnumerable<System.String>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2925314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<::StringW>
constexpr  UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::operator System::Collections::Generic::IEnumerable_1<::StringW>() const noexcept {
return System::Collections::Generic::IEnumerable_1<::StringW>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::StringW>
constexpr  UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::operator System::Collections::Generic::IEnumerator_1<::StringW>() const noexcept {
return System::Collections::Generic::IEnumerator_1<::StringW>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__set___2__current(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__get___2__current() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__set_basedOn(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__get_basedOn() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__set___3__basedOn(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__get___3__basedOn() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__set___4__this(UnityEngine::InputSystem::InputManager value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputManager, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::InputManager>(value));
}
constexpr UnityEngine::InputSystem::InputManager UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__get___4__this() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputManager, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__set__internedBasedOn_5__2(UnityEngine::InputSystem::Utilities::InternedString value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::InternedString, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Utilities::InternedString>(value));
}
constexpr UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__get__internedBasedOn_5__2() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::InternedString, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__set___7__wrap2(System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<UnityEngine::InputSystem::Utilities::InternedString,System::Type> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<UnityEngine::InputSystem::Utilities::InternedString,System::Type>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<UnityEngine::InputSystem::Utilities::InternedString,System::Type>>(value));
}
constexpr System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<UnityEngine::InputSystem::Utilities::InternedString,System::Type> UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__get___7__wrap2() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<UnityEngine::InputSystem::Utilities::InternedString,System::Type>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__set___7__wrap3(System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<UnityEngine::InputSystem::Utilities::InternedString,::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<UnityEngine::InputSystem::Utilities::InternedString,::StringW>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<UnityEngine::InputSystem::Utilities::InternedString,::StringW>>(value));
}
constexpr System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<UnityEngine::InputSystem::Utilities::InternedString,::StringW> UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__get___7__wrap3() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<UnityEngine::InputSystem::Utilities::InternedString,::StringW>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__set___7__wrap4(System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<UnityEngine::InputSystem::Utilities::InternedString,System::Func_1<UnityEngine::InputSystem::Layouts::InputControlLayout>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<UnityEngine::InputSystem::Utilities::InternedString,System::Func_1<UnityEngine::InputSystem::Layouts::InputControlLayout>>, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<UnityEngine::InputSystem::Utilities::InternedString,System::Func_1<UnityEngine::InputSystem::Layouts::InputControlLayout>>>(value));
}
constexpr System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<UnityEngine::InputSystem::Utilities::InternedString,System::Func_1<UnityEngine::InputSystem::Layouts::InputControlLayout>> UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__get___7__wrap4() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<UnityEngine::InputSystem::Utilities::InternedString,System::Func_1<UnityEngine::InputSystem::Layouts::InputControlLayout>>, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75>(__1__state))) {}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__m__Finally2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75>::get(),
                            "<>m__Finally2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__m__Finally3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75>::get(),
                            "<>m__Finally3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__m__Finally4()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75>::get(),
                            "<>m__Finally4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__m__Finally5()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75>::get(),
                            "<>m__Finally5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::__m__Finally6()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75>::get(),
                            "<>m__Finally6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::System_Collections_Generic_IEnumerator_System_String__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75>::get(),
                            "System.Collections.Generic.IEnumerator<System.String>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<::StringW> UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::System_Collections_Generic_IEnumerable_System_String__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75>::get(),
                            "System.Collections.Generic.IEnumerable<System.String>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x292537c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c._MakeDeviceNameUnique_b__144_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c::*)(UnityEngine::InputSystem::InputDevice)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c::_MakeDeviceNameUnique_b__144_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2925384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c>::get(),
                            "<MakeDeviceNameUnique>b__144_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c::__set___9(UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c value)  {
::cordl_internals::setStaticField<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c>::get>(std::forward<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c>(value));
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c::__get___9()  {
return ::cordl_internals::getStaticField<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c>::get>();
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c::__set___9__144_0(System::Func_2<UnityEngine::InputSystem::InputDevice,::StringW> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::InputSystem::InputDevice,::StringW>, "<>9__144_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c>::get>(std::forward<System::Func_2<UnityEngine::InputSystem::InputDevice,::StringW>>(value));
}
 System::Func_2<UnityEngine::InputSystem::InputDevice,::StringW> UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c::__get___9__144_0()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::InputSystem::InputDevice,::StringW>, "<>9__144_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c>::get>();
}
// Ctor Parameters []
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c::UnityEngine__InputSystem__InputManager____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__InputSystem__InputManager____c>())) {}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c::_MakeDeviceNameUnique_b__144_0(UnityEngine::InputSystem::InputDevice x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c>::get(),
                            "<MakeDeviceNameUnique>b__144_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.get_devices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputDevice> (UnityEngine::InputSystem::InputManager::*)()>(&UnityEngine::InputSystem::InputManager::get_devices)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2912554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "get_devices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.get_processors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::TypeTable (UnityEngine::InputSystem::InputManager::*)()>(&UnityEngine::InputSystem::InputManager::get_processors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29183cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "get_processors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.get_interactions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::TypeTable (UnityEngine::InputSystem::InputManager::*)()>(&UnityEngine::InputSystem::InputManager::get_interactions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29183d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "get_interactions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.get_composites
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::TypeTable (UnityEngine::InputSystem::InputManager::*)()>(&UnityEngine::InputSystem::InputManager::get_composites)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29183dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "get_composites",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.get_metrics
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::LowLevel::InputMetrics (UnityEngine::InputSystem::InputManager::*)()>(&UnityEngine::InputSystem::InputManager::get_metrics)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x29183e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "get_metrics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.get_settings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputSettings (UnityEngine::InputSystem::InputManager::*)()>(&UnityEngine::InputSystem::InputManager::get_settings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2918580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "get_settings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.set_settings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::InputSettings)>(&UnityEngine::InputSystem::InputManager::set_settings)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2918588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "set_settings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.get_updateMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::LowLevel::InputUpdateType (UnityEngine::InputSystem::InputManager::*)()>(&UnityEngine::InputSystem::InputManager::get_updateMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2918a10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "get_updateMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.set_updateMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&UnityEngine::InputSystem::InputManager::set_updateMask)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2918a18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "set_updateMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputUpdateType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.get_defaultUpdateType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::LowLevel::InputUpdateType (UnityEngine::InputSystem::InputManager::*)()>(&UnityEngine::InputSystem::InputManager::get_defaultUpdateType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2918bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "get_defaultUpdateType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.get_pollingFrequency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::InputManager::*)()>(&UnityEngine::InputSystem::InputManager::get_pollingFrequency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2918bec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "get_pollingFrequency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.set_pollingFrequency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(float_t)>(&UnityEngine::InputSystem::InputManager::set_pollingFrequency)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2918bf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "set_pollingFrequency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.add_onDeviceChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::InputDeviceChange>)>(&UnityEngine::InputSystem::InputManager::add_onDeviceChange)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2910e34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "add_onDeviceChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::InputDeviceChange>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.remove_onDeviceChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::InputDeviceChange>)>(&UnityEngine::InputSystem::InputManager::remove_onDeviceChange)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x29110b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "remove_onDeviceChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::InputDeviceChange>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.add_onDeviceStateChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr>)>(&UnityEngine::InputSystem::InputManager::add_onDeviceStateChange)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2918d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "add_onDeviceStateChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.remove_onDeviceStateChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr>)>(&UnityEngine::InputSystem::InputManager::remove_onDeviceStateChange)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2918d78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "remove_onDeviceStateChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.add_onDeviceCommand
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate)>(&UnityEngine::InputSystem::InputManager::add_onDeviceCommand)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2918dd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "add_onDeviceCommand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.remove_onDeviceCommand
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate)>(&UnityEngine::InputSystem::InputManager::remove_onDeviceCommand)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2918e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "remove_onDeviceCommand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.add_onFindControlLayoutForDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate)>(&UnityEngine::InputSystem::InputManager::add_onFindControlLayoutForDevice)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2918e80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "add_onFindControlLayoutForDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.remove_onFindControlLayoutForDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate)>(&UnityEngine::InputSystem::InputManager::remove_onFindControlLayoutForDevice)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2919188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "remove_onFindControlLayoutForDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.add_onLayoutChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(System::Action_2<::StringW,UnityEngine::InputSystem::InputControlLayoutChange>)>(&UnityEngine::InputSystem::InputManager::add_onLayoutChange)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2910e8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "add_onLayoutChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<::StringW,UnityEngine::InputSystem::InputControlLayoutChange>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.remove_onLayoutChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(System::Action_2<::StringW,UnityEngine::InputSystem::InputControlLayoutChange>)>(&UnityEngine::InputSystem::InputManager::remove_onLayoutChange)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x291110c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "remove_onLayoutChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<::StringW,UnityEngine::InputSystem::InputControlLayoutChange>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.add_onEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice>)>(&UnityEngine::InputSystem::InputManager::add_onEvent)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2910ddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "add_onEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.remove_onEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice>)>(&UnityEngine::InputSystem::InputManager::remove_onEvent)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x291105c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "remove_onEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.add_onBeforeUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(System::Action)>(&UnityEngine::InputSystem::InputManager::add_onBeforeUpdate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x29191e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "add_onBeforeUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.remove_onBeforeUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(System::Action)>(&UnityEngine::InputSystem::InputManager::remove_onBeforeUpdate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x291934c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "remove_onBeforeUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.add_onAfterUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(System::Action)>(&UnityEngine::InputSystem::InputManager::add_onAfterUpdate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x29193a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "add_onAfterUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.remove_onAfterUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(System::Action)>(&UnityEngine::InputSystem::InputManager::remove_onAfterUpdate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x29193fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "remove_onAfterUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.add_onSettingsChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(System::Action)>(&UnityEngine::InputSystem::InputManager::add_onSettingsChange)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2919454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "add_onSettingsChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.remove_onSettingsChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(System::Action)>(&UnityEngine::InputSystem::InputManager::remove_onSettingsChange)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x29194ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "remove_onSettingsChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.get_isProcessingEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputManager::*)()>(&UnityEngine::InputSystem::InputManager::get_isProcessingEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2919504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "get_isProcessingEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.get_gameIsPlaying
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputManager::*)()>(&UnityEngine::InputSystem::InputManager::get_gameIsPlaying)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x291950c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "get_gameIsPlaying",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.get_gameHasFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputManager::*)()>(&UnityEngine::InputSystem::InputManager::get_gameHasFocus)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2919514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "get_gameHasFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.get_gameShouldGetInputRegardlessOfFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputManager::*)()>(&UnityEngine::InputSystem::InputManager::get_gameShouldGetInputRegardlessOfFocus)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2919548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "get_gameShouldGetInputRegardlessOfFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.RegisterControlLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(::StringW, System::Type)>(&UnityEngine::InputSystem::InputManager::RegisterControlLayout)> {
  constexpr static std::size_t size = 0x618;
  constexpr static std::size_t addrs = 0x291956c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "RegisterControlLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.RegisterControlLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(::StringW, ::StringW, bool)>(&UnityEngine::InputSystem::InputManager::RegisterControlLayout)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x29136f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "RegisterControlLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.RegisterControlLayoutBuilder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(System::Func_1<UnityEngine::InputSystem::Layouts::InputControlLayout>, ::StringW, ::StringW)>(&UnityEngine::InputSystem::InputManager::RegisterControlLayoutBuilder)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x291a0fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "RegisterControlLayoutBuilder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<UnityEngine::InputSystem::Layouts::InputControlLayout>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.PerformLayoutPostRegistration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::Utilities::InternedString, UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Utilities::InternedString>, bool, bool, bool)>(&UnityEngine::InputSystem::InputManager::PerformLayoutPostRegistration)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x2919b84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "PerformLayoutPostRegistration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Utilities::InternedString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.RecreateDevicesUsingLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::Utilities::InternedString, bool)>(&UnityEngine::InputSystem::InputManager::RecreateDevicesUsingLayout)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x291a290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "RecreateDevicesUsingLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.IsControlOrChildUsingLayoutRecursive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::InputControl, UnityEngine::InputSystem::Utilities::InternedString)>(&UnityEngine::InputSystem::InputManager::IsControlOrChildUsingLayoutRecursive)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x291a5d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "IsControlOrChildUsingLayoutRecursive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.IsControlUsingLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::InputControl, UnityEngine::InputSystem::Utilities::InternedString)>(&UnityEngine::InputSystem::InputManager::IsControlUsingLayout)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x291a504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "IsControlUsingLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.RegisterControlLayoutMatcher
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(::StringW, UnityEngine::InputSystem::Layouts::InputDeviceMatcher)>(&UnityEngine::InputSystem::InputManager::RegisterControlLayoutMatcher)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2919fdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "RegisterControlLayoutMatcher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.RegisterControlLayoutMatcher
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(System::Type, UnityEngine::InputSystem::Layouts::InputDeviceMatcher)>(&UnityEngine::InputSystem::InputManager::RegisterControlLayoutMatcher)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x291ad94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "RegisterControlLayoutMatcher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.RecreateDevicesUsingLayoutWithInferiorMatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::Layouts::InputDeviceMatcher)>(&UnityEngine::InputSystem::InputManager::RecreateDevicesUsingLayoutWithInferiorMatch)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x291a820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "RecreateDevicesUsingLayoutWithInferiorMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.RecreateDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::InputDevice, UnityEngine::InputSystem::Utilities::InternedString)>(&UnityEngine::InputSystem::InputManager::RecreateDevice)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x291a6c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "RecreateDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.AddAvailableDevicesMatchingDescription
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::Layouts::InputDeviceMatcher, UnityEngine::InputSystem::Utilities::InternedString)>(&UnityEngine::InputSystem::InputManager::AddAvailableDevicesMatchingDescription)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x291aa0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "AddAvailableDevicesMatchingDescription",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.RemoveControlLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(::StringW)>(&UnityEngine::InputSystem::InputManager::RemoveControlLayout)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x291ba88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "RemoveControlLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.TryLoadControlLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::InputControlLayout (UnityEngine::InputSystem::InputManager::*)(System::Type)>(&UnityEngine::InputSystem::InputManager::TryLoadControlLayout)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x291bc9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "TryLoadControlLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.TryLoadControlLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::InputControlLayout (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::Utilities::InternedString)>(&UnityEngine::InputSystem::InputManager::TryLoadControlLayout)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x29136e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "TryLoadControlLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.TryFindMatchingControlLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::InternedString (UnityEngine::InputSystem::InputManager::*)(ByRef<UnityEngine::InputSystem::Layouts::InputDeviceDescription>, int32_t)>(&UnityEngine::InputSystem::InputManager::TryFindMatchingControlLayout)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x291af98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "TryFindMatchingControlLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Layouts::InputDeviceDescription>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.FindOrRegisterDeviceLayoutForType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::InternedString (UnityEngine::InputSystem::InputManager::*)(System::Type)>(&UnityEngine::InputSystem::InputManager::FindOrRegisterDeviceLayoutForType)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x291becc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "FindOrRegisterDeviceLayoutForType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.IsDeviceLayoutMarkedAsSupportedInSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::Utilities::InternedString)>(&UnityEngine::InputSystem::InputManager::IsDeviceLayoutMarkedAsSupportedInSettings)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x291bf6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "IsDeviceLayoutMarkedAsSupportedInSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.ListControlLayouts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<::StringW> (UnityEngine::InputSystem::InputManager::*)(::StringW)>(&UnityEngine::InputSystem::InputManager::ListControlLayouts)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x291c078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "ListControlLayouts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.SetDeviceUsage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::InputDevice, UnityEngine::InputSystem::Utilities::InternedString)>(&UnityEngine::InputSystem::InputManager::SetDeviceUsage)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x291c0ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "SetDeviceUsage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.AddDeviceUsage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::InputDevice, UnityEngine::InputSystem::Utilities::InternedString)>(&UnityEngine::InputSystem::InputManager::AddDeviceUsage)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2913cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "AddDeviceUsage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.RemoveDeviceUsage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::InputDevice, UnityEngine::InputSystem::Utilities::InternedString)>(&UnityEngine::InputSystem::InputManager::RemoveDeviceUsage)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2913eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "RemoveDeviceUsage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.NotifyUsageChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::InputDevice)>(&UnityEngine::InputSystem::InputManager::NotifyUsageChanged)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x291c248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "NotifyUsageChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.AddDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputDevice (UnityEngine::InputSystem::InputManager::*)(System::Type, ::StringW)>(&UnityEngine::InputSystem::InputManager::AddDevice)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x291c2ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "AddDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.AddDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputDevice (UnityEngine::InputSystem::InputManager::*)(::StringW, ::StringW, UnityEngine::InputSystem::Utilities::InternedString)>(&UnityEngine::InputSystem::InputManager::AddDevice)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2913bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "AddDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.AddDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputDevice (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::Utilities::InternedString, int32_t, ::StringW, UnityEngine::InputSystem::Layouts::InputDeviceDescription, UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags, UnityEngine::InputSystem::Utilities::InternedString)>(&UnityEngine::InputSystem::InputManager::AddDevice)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x291b8d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "AddDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.AddDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::InputDevice)>(&UnityEngine::InputSystem::InputManager::AddDevice)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x291b3c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "AddDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.AddDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputDevice (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(&UnityEngine::InputSystem::InputManager::AddDevice)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x291cd74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "AddDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.AddDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputDevice (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::Layouts::InputDeviceDescription, bool, ::StringW, int32_t, UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags)>(&UnityEngine::InputSystem::InputManager::AddDevice)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x291cdb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "AddDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.AddDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputDevice (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::Layouts::InputDeviceDescription, UnityEngine::InputSystem::Utilities::InternedString, ::StringW, int32_t, UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags)>(&UnityEngine::InputSystem::InputManager::AddDevice)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x291cf90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "AddDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.RemoveDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::InputDevice, bool)>(&UnityEngine::InputSystem::InputManager::RemoveDevice)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x2913224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "RemoveDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.FlushDisconnectedDevices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)()>(&UnityEngine::InputSystem::InputManager::FlushDisconnectedDevices)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x291d190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "FlushDisconnectedDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.ResetDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::InputDevice, bool, System::Nullable_1<bool>)>(&UnityEngine::InputSystem::InputManager::ResetDevice)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x291d1e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "ResetDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.TryGetDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputDevice (UnityEngine::InputSystem::InputManager::*)(::StringW)>(&UnityEngine::InputSystem::InputManager::TryGetDevice)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x291d928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "TryGetDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.GetDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputDevice (UnityEngine::InputSystem::InputManager::*)(::StringW)>(&UnityEngine::InputSystem::InputManager::GetDevice)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x291da50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "GetDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.TryGetDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputDevice (UnityEngine::InputSystem::InputManager::*)(System::Type)>(&UnityEngine::InputSystem::InputManager::TryGetDevice)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x291daf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "TryGetDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.TryGetDeviceById
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputDevice (UnityEngine::InputSystem::InputManager::*)(int32_t)>(&UnityEngine::InputSystem::InputManager::TryGetDeviceById)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x29130a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "TryGetDeviceById",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.GetUnsupportedDevices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::InputManager::*)(System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::InputDeviceDescription>)>(&UnityEngine::InputSystem::InputManager::GetUnsupportedDevices)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x291db4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "GetUnsupportedDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::InputDeviceDescription>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.EnableOrDisableDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::InputDevice, bool, UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__DeviceDisableScope)>(&UnityEngine::InputSystem::InputManager::EnableOrDisableDevice)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x291c948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "EnableOrDisableDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__DeviceDisableScope>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.QueueEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(void*)>(&UnityEngine::InputSystem::InputManager::QueueEvent)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x291dd38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "QueueEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.QueueEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&UnityEngine::InputSystem::InputManager::QueueEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2913eb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "QueueEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)()>(&UnityEngine::InputSystem::InputManager::Update)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x291de04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&UnityEngine::InputSystem::InputManager::Update)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x291de30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputUpdateType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::LowLevel::IInputRuntime, UnityEngine::InputSystem::InputSettings)>(&UnityEngine::InputSystem::InputManager::Initialize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x291dedc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::IInputRuntime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.Destroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)()>(&UnityEngine::InputSystem::InputManager::Destroy)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x291fc74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "Destroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.InitializeData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)()>(&UnityEngine::InputSystem::InputManager::InitializeData)> {
  constexpr static std::size_t size = 0x146c;
  constexpr static std::size_t addrs = 0x291df18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "InitializeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.InstallRuntime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::LowLevel::IInputRuntime)>(&UnityEngine::InputSystem::InputManager::InstallRuntime)> {
  constexpr static std::size_t size = 0x6e0;
  constexpr static std::size_t addrs = 0x291f384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "InstallRuntime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::IInputRuntime>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.InstallGlobals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)()>(&UnityEngine::InputSystem::InputManager::InstallGlobals)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x291fa64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "InstallGlobals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.UninstallGlobals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)()>(&UnityEngine::InputSystem::InputManager::UninstallGlobals)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x291fd80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "UninstallGlobals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.MakeDeviceNameUnique
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::InputDevice)>(&UnityEngine::InputSystem::InputManager::MakeDeviceNameUnique)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x291c3d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "MakeDeviceNameUnique",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.ResetControlPathsRecursive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputManager::ResetControlPathsRecursive)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x292010c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "ResetControlPathsRecursive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.AssignUniqueDeviceId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::InputDevice)>(&UnityEngine::InputSystem::InputManager::AssignUniqueDeviceId)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x291c558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "AssignUniqueDeviceId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.ReallocateStateBuffers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)()>(&UnityEngine::InputSystem::InputManager::ReallocateStateBuffers)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2918a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "ReallocateStateBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.InitializeDefaultState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::InputDevice)>(&UnityEngine::InputSystem::InputManager::InitializeDefaultState)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x29201b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "InitializeDefaultState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.InitializeDeviceState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::InputDevice)>(&UnityEngine::InputSystem::InputManager::InitializeDeviceState)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x291c6e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "InitializeDeviceState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.OnNativeDeviceDiscovered
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(int32_t, ::StringW)>(&UnityEngine::InputSystem::InputManager::OnNativeDeviceDiscovered)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x2920308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "OnNativeDeviceDiscovered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.TryMatchDisconnectedDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputDevice (UnityEngine::InputSystem::InputManager::*)(::StringW)>(&UnityEngine::InputSystem::InputManager::TryMatchDisconnectedDevice)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x29206f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "TryMatchDisconnectedDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.InstallBeforeUpdateHookIfNecessary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)()>(&UnityEngine::InputSystem::InputManager::InstallBeforeUpdateHookIfNecessary)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2919240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "InstallBeforeUpdateHookIfNecessary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.RestoreDevicesAfterDomainReloadIfNecessary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)()>(&UnityEngine::InputSystem::InputManager::RestoreDevicesAfterDomainReloadIfNecessary)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29206f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "RestoreDevicesAfterDomainReloadIfNecessary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.WarnAboutDevicesFailingToRecreateAfterDomainReload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)()>(&UnityEngine::InputSystem::InputManager::WarnAboutDevicesFailingToRecreateAfterDomainReload)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29208d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "WarnAboutDevicesFailingToRecreateAfterDomainReload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.OnBeforeUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&UnityEngine::InputSystem::InputManager::OnBeforeUpdate)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x29208dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "OnBeforeUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputUpdateType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.ApplySettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)()>(&UnityEngine::InputSystem::InputManager::ApplySettings)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x2918684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "ApplySettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.AddAvailableDevicesThatAreNowRecognized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)()>(&UnityEngine::InputSystem::InputManager::AddAvailableDevicesThatAreNowRecognized)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x2918ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "AddAvailableDevicesThatAreNowRecognized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.ShouldRunDeviceInBackground
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::InputDevice)>(&UnityEngine::InputSystem::InputManager::ShouldRunDeviceInBackground)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x291c90c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "ShouldRunDeviceInBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.OnFocusChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(bool)>(&UnityEngine::InputSystem::InputManager::OnFocusChanged)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x2920a9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "OnFocusChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.ShouldRunUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&UnityEngine::InputSystem::InputManager::ShouldRunUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2920cdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "ShouldRunUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputUpdateType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.OnUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::LowLevel::InputUpdateType, ByRef<UnityEngine::InputSystem::LowLevel::InputEventBuffer>)>(&UnityEngine::InputSystem::InputManager::OnUpdate)> {
  constexpr static std::size_t size = 0x12e0;
  constexpr static std::size_t addrs = 0x2920cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "OnUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputUpdateType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::LowLevel::InputEventBuffer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.InvokeAfterUpdateCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&UnityEngine::InputSystem::InputManager::InvokeAfterUpdateCallback)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x292228c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "InvokeAfterUpdateCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputUpdateType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.UpdateState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::InputDevice, void*, UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&UnityEngine::InputSystem::InputManager::UpdateState)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x29222f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "UpdateState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputUpdateType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.UpdateState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::InputDevice, UnityEngine::InputSystem::LowLevel::InputUpdateType, void*, uint32_t, uint32_t, double_t, UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&UnityEngine::InputSystem::InputManager::UpdateState)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x291d760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "UpdateState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputUpdateType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.WriteStateChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers, int32_t, ByRef<UnityEngine::InputSystem::LowLevel::InputStateBlock>, uint32_t, void*, uint32_t, bool)>(&UnityEngine::InputSystem::InputManager::WriteStateChange)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x29227c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "WriteStateChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::LowLevel::InputStateBlock>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.FlipBuffersForDeviceIfNecessary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::InputDevice, UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&UnityEngine::InputSystem::InputManager::FlipBuffersForDeviceIfNecessary)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2922724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "FlipBuffersForDeviceIfNecessary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputUpdateType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.AddStateChangeMonitor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::InputControl, UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor, int64_t, uint32_t)>(&UnityEngine::InputSystem::InputManager::AddStateChangeMonitor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2922c94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "AddStateChangeMonitor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.RemoveStateChangeMonitors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::InputDevice)>(&UnityEngine::InputSystem::InputManager::RemoveStateChangeMonitors)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x291d064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "RemoveStateChangeMonitors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.RemoveStateChangeMonitor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::InputControl, UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor, int64_t)>(&UnityEngine::InputSystem::InputManager::RemoveStateChangeMonitor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2922dd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "RemoveStateChangeMonitor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.AddStateChangeMonitorTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::InputControl, UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor, double_t, int64_t, int32_t)>(&UnityEngine::InputSystem::InputManager::AddStateChangeMonitorTimeout)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2922f28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "AddStateChangeMonitorTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.RemoveStateChangeMonitorTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor, int64_t, int32_t)>(&UnityEngine::InputSystem::InputManager::RemoveStateChangeMonitorTimeout)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2922fbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "RemoveStateChangeMonitorTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.SortStateChangeMonitorsIfNecessary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(int32_t)>(&UnityEngine::InputSystem::InputManager::SortStateChangeMonitorsIfNecessary)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2922448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "SortStateChangeMonitorsIfNecessary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.SignalStateChangeMonitor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(UnityEngine::InputSystem::InputControl, UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor)>(&UnityEngine::InputSystem::InputManager::SignalStateChangeMonitor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x29230e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "SignalStateChangeMonitor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.FireStateChangeNotifications
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)()>(&UnityEngine::InputSystem::InputManager::FireStateChangeNotifications)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x29231d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "FireStateChangeNotifications",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.ProcessStateChangeMonitors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputManager::*)(int32_t, void*, void*, uint32_t, uint32_t)>(&UnityEngine::InputSystem::InputManager::ProcessStateChangeMonitors)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x292249c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "ProcessStateChangeMonitors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.FireStateChangeNotifications
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)(int32_t, double_t, void*)>(&UnityEngine::InputSystem::InputManager::FireStateChangeNotifications)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x292287c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "FireStateChangeNotifications",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager.ProcessStateChangeMonitorTimeouts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)()>(&UnityEngine::InputSystem::InputManager::ProcessStateChangeMonitorTimeouts)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x2921fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "ProcessStateChangeMonitorTimeouts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::*)()>(&UnityEngine::InputSystem::InputManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x292331c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputManager._TryFindMatchingControlLayout_b__72_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UnityEngine::InputSystem::InputManager::*)(ByRef<UnityEngine::InputSystem::LowLevel::InputDeviceCommand>)>(&UnityEngine::InputSystem::InputManager::_TryFindMatchingControlLayout_b__72_0)> {
  constexpr static std::size_t size = 0x1068;
  constexpr static std::size_t addrs = 0x2923324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "<TryFindMatchingControlLayout>b__72_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::LowLevel::InputDeviceCommand>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::InputManager::__set_m_LayoutRegistrationVersion(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::InputManager::__get_m_LayoutRegistrationVersion() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_PollingFrequency(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::InputManager::__get_m_PollingFrequency() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_Layouts(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>(value));
}
constexpr UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection UnityEngine::InputSystem::InputManager::__get_m_Layouts() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_Processors(UnityEngine::InputSystem::Utilities::TypeTable value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::TypeTable, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Utilities::TypeTable>(value));
}
constexpr UnityEngine::InputSystem::Utilities::TypeTable UnityEngine::InputSystem::InputManager::__get_m_Processors() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::TypeTable, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_Interactions(UnityEngine::InputSystem::Utilities::TypeTable value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::TypeTable, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Utilities::TypeTable>(value));
}
constexpr UnityEngine::InputSystem::Utilities::TypeTable UnityEngine::InputSystem::InputManager::__get_m_Interactions() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::TypeTable, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_Composites(UnityEngine::InputSystem::Utilities::TypeTable value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::TypeTable, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Utilities::TypeTable>(value));
}
constexpr UnityEngine::InputSystem::Utilities::TypeTable UnityEngine::InputSystem::InputManager::__get_m_Composites() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::TypeTable, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_DevicesCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::InputManager::__get_m_DevicesCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_Devices(::ArrayW<UnityEngine::InputSystem::InputDevice> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::InputSystem::InputDevice>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::InputSystem::InputDevice>>(value));
}
constexpr ::ArrayW<UnityEngine::InputSystem::InputDevice> UnityEngine::InputSystem::InputManager::__get_m_Devices() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::InputSystem::InputDevice>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_DevicesById(System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::InputSystem::InputDevice> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::InputSystem::InputDevice>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::InputSystem::InputDevice>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::InputSystem::InputDevice> UnityEngine::InputSystem::InputManager::__get_m_DevicesById() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::InputSystem::InputDevice>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_AvailableDeviceCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::InputManager::__get_m_AvailableDeviceCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_AvailableDevices(::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__AvailableDevice> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__AvailableDevice>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__AvailableDevice>>(value));
}
constexpr ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__AvailableDevice> UnityEngine::InputSystem::InputManager::__get_m_AvailableDevices() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__AvailableDevice>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_DisconnectedDevicesCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::InputManager::__get_m_DisconnectedDevicesCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_DisconnectedDevices(::ArrayW<UnityEngine::InputSystem::InputDevice> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::InputSystem::InputDevice>, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::InputSystem::InputDevice>>(value));
}
constexpr ::ArrayW<UnityEngine::InputSystem::InputDevice> UnityEngine::InputSystem::InputManager::__get_m_DisconnectedDevices() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::InputSystem::InputDevice>, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_UpdateMask(UnityEngine::InputSystem::LowLevel::InputUpdateType value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::InputUpdateType, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::LowLevel::InputUpdateType>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::InputUpdateType UnityEngine::InputSystem::InputManager::__get_m_UpdateMask() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::InputUpdateType, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_CurrentUpdate(UnityEngine::InputSystem::LowLevel::InputUpdateType value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::InputUpdateType, 0xac>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::LowLevel::InputUpdateType>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::InputUpdateType UnityEngine::InputSystem::InputManager::__get_m_CurrentUpdate() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::InputUpdateType, 0xac>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_StateBuffers(UnityEngine::InputSystem::LowLevel::InputStateBuffers value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::InputStateBuffers, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::LowLevel::InputStateBuffers>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::InputStateBuffers UnityEngine::InputSystem::InputManager::__get_m_StateBuffers() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::InputStateBuffers, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_DeviceChangeListeners(UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::InputDeviceChange>> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::InputDeviceChange>>, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::InputDeviceChange>>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::InputDeviceChange>> UnityEngine::InputSystem::InputManager::__get_m_DeviceChangeListeners() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::InputDeviceChange>>, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_DeviceStateChangeListeners(UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr>> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr>>, 0x130>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr>>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr>> UnityEngine::InputSystem::InputManager::__get_m_DeviceStateChangeListeners() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr>>, 0x130>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_DeviceFindLayoutCallbacks(UnityEngine::InputSystem::Utilities::CallbackArray_1<UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::CallbackArray_1<UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate>, 0x180>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Utilities::CallbackArray_1<UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::CallbackArray_1<UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate> UnityEngine::InputSystem::InputManager::__get_m_DeviceFindLayoutCallbacks() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::CallbackArray_1<UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate>, 0x180>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_DeviceCommandCallbacks(UnityEngine::InputSystem::Utilities::CallbackArray_1<UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::CallbackArray_1<UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate>, 0x1d0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Utilities::CallbackArray_1<UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::CallbackArray_1<UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate> UnityEngine::InputSystem::InputManager::__get_m_DeviceCommandCallbacks() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::CallbackArray_1<UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate>, 0x1d0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_LayoutChangeListeners(UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<::StringW,UnityEngine::InputSystem::InputControlLayoutChange>> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<::StringW,UnityEngine::InputSystem::InputControlLayoutChange>>, 0x220>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<::StringW,UnityEngine::InputSystem::InputControlLayoutChange>>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<::StringW,UnityEngine::InputSystem::InputControlLayoutChange>> UnityEngine::InputSystem::InputManager::__get_m_LayoutChangeListeners() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<::StringW,UnityEngine::InputSystem::InputControlLayoutChange>>, 0x220>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_EventListeners(UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice>> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice>>, 0x270>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice>>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice>> UnityEngine::InputSystem::InputManager::__get_m_EventListeners() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice>>, 0x270>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_BeforeUpdateListeners(UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action>, 0x2c0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action> UnityEngine::InputSystem::InputManager::__get_m_BeforeUpdateListeners() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action>, 0x2c0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_AfterUpdateListeners(UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action>, 0x310>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action> UnityEngine::InputSystem::InputManager::__get_m_AfterUpdateListeners() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action>, 0x310>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_SettingsChangedListeners(UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action>, 0x360>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action> UnityEngine::InputSystem::InputManager::__get_m_SettingsChangedListeners() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action>, 0x360>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_NativeBeforeUpdateHooked(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3b0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::InputManager::__get_m_NativeBeforeUpdateHooked() const {
return ::cordl_internals::getInstanceField<bool, 0x3b0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_HaveDevicesWithStateCallbackReceivers(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3b1>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::InputManager::__get_m_HaveDevicesWithStateCallbackReceivers() const {
return ::cordl_internals::getInstanceField<bool, 0x3b1>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_HasFocus(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3b2>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::InputManager::__get_m_HasFocus() const {
return ::cordl_internals::getInstanceField<bool, 0x3b2>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_InputEventStream(UnityEngine::InputSystem::LowLevel::InputEventStream value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::InputEventStream, 0x3b8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::LowLevel::InputEventStream>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::InputEventStream UnityEngine::InputSystem::InputManager::__get_m_InputEventStream() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::InputEventStream, 0x3b8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_DeviceFindExecuteCommandDelegate(UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate, 0x430>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate UnityEngine::InputSystem::InputManager::__get_m_DeviceFindExecuteCommandDelegate() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate, 0x430>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_DeviceFindExecuteCommandDeviceId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x438>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::InputManager::__get_m_DeviceFindExecuteCommandDeviceId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x438>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_Runtime(UnityEngine::InputSystem::LowLevel::IInputRuntime value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::IInputRuntime, 0x440>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::LowLevel::IInputRuntime>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::IInputRuntime UnityEngine::InputSystem::InputManager::__get_m_Runtime() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::IInputRuntime, 0x440>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_Metrics(UnityEngine::InputSystem::LowLevel::InputMetrics value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::InputMetrics, 0x448>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::LowLevel::InputMetrics>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::InputMetrics UnityEngine::InputSystem::InputManager::__get_m_Metrics() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::InputMetrics, 0x448>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_Settings(UnityEngine::InputSystem::InputSettings value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputSettings, 0x480>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::InputSettings>(value));
}
constexpr UnityEngine::InputSystem::InputSettings UnityEngine::InputSystem::InputManager::__get_m_Settings() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputSettings, 0x480>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_StateChangeMonitors(::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice>, 0x488>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice>>(value));
}
constexpr ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice> UnityEngine::InputSystem::InputManager::__get_m_StateChangeMonitors() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice>, 0x488>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputManager::__set_m_StateChangeMonitorTimeouts(UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout>, 0x490>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout> UnityEngine::InputSystem::InputManager::__get_m_StateChangeMonitorTimeouts() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout>, 0x490>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputDevice> UnityEngine::InputSystem::InputManager::get_devices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "get_devices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputDevice>, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Utilities::TypeTable UnityEngine::InputSystem::InputManager::get_processors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "get_processors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::TypeTable, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Utilities::TypeTable UnityEngine::InputSystem::InputManager::get_interactions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "get_interactions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::TypeTable, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Utilities::TypeTable UnityEngine::InputSystem::InputManager::get_composites()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "get_composites",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::TypeTable, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::LowLevel::InputMetrics UnityEngine::InputSystem::InputManager::get_metrics()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "get_metrics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::LowLevel::InputMetrics, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::InputSettings UnityEngine::InputSystem::InputManager::get_settings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "get_settings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputSettings, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputManager::set_settings(UnityEngine::InputSystem::InputSettings value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "set_settings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::InputSystem::LowLevel::InputUpdateType UnityEngine::InputSystem::InputManager::get_updateMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "get_updateMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::LowLevel::InputUpdateType, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputManager::set_updateMask(UnityEngine::InputSystem::LowLevel::InputUpdateType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "set_updateMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputUpdateType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::InputSystem::LowLevel::InputUpdateType UnityEngine::InputSystem::InputManager::get_defaultUpdateType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "get_defaultUpdateType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::LowLevel::InputUpdateType, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::InputSystem::InputManager::get_pollingFrequency()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "get_pollingFrequency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputManager::set_pollingFrequency(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "set_pollingFrequency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::InputSystem::InputManager::add_onDeviceChange(System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::InputDeviceChange> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "add_onDeviceChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::InputDeviceChange>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::InputSystem::InputManager::remove_onDeviceChange(System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::InputDeviceChange> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "remove_onDeviceChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::InputDeviceChange>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::InputSystem::InputManager::add_onDeviceStateChange(System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "add_onDeviceStateChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::InputSystem::InputManager::remove_onDeviceStateChange(System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "remove_onDeviceStateChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::InputSystem::InputManager::add_onDeviceCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "add_onDeviceCommand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::InputSystem::InputManager::remove_onDeviceCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "remove_onDeviceCommand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::InputSystem::InputManager::add_onFindControlLayoutForDevice(UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "add_onFindControlLayoutForDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::InputSystem::InputManager::remove_onFindControlLayoutForDevice(UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "remove_onFindControlLayoutForDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::InputSystem::InputManager::add_onLayoutChange(System::Action_2<::StringW,UnityEngine::InputSystem::InputControlLayoutChange> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "add_onLayoutChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<::StringW,UnityEngine::InputSystem::InputControlLayoutChange>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::InputSystem::InputManager::remove_onLayoutChange(System::Action_2<::StringW,UnityEngine::InputSystem::InputControlLayoutChange> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "remove_onLayoutChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<::StringW,UnityEngine::InputSystem::InputControlLayoutChange>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::InputSystem::InputManager::add_onEvent(System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "add_onEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::InputSystem::InputManager::remove_onEvent(System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "remove_onEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::InputSystem::InputManager::add_onBeforeUpdate(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "add_onBeforeUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::InputSystem::InputManager::remove_onBeforeUpdate(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "remove_onBeforeUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::InputSystem::InputManager::add_onAfterUpdate(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "add_onAfterUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::InputSystem::InputManager::remove_onAfterUpdate(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "remove_onAfterUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::InputSystem::InputManager::add_onSettingsChange(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "add_onSettingsChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::InputSystem::InputManager::remove_onSettingsChange(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "remove_onSettingsChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::InputSystem::InputManager::get_isProcessingEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "get_isProcessingEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::InputManager::get_gameIsPlaying()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "get_gameIsPlaying",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::InputManager::get_gameHasFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "get_gameHasFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::InputManager::get_gameShouldGetInputRegardlessOfFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "get_gameShouldGetInputRegardlessOfFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputManager::RegisterControlLayout(::StringW name, System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "RegisterControlLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, type);
}
/// @param name: ::StringW (default: csnull)
/// @param isOverride: bool (default: false)
 void UnityEngine::InputSystem::InputManager::RegisterControlLayout(::StringW json, ::StringW name, bool isOverride)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "RegisterControlLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, json, name, isOverride);
}
/// @param baseLayout: ::StringW (default: csnull)
 void UnityEngine::InputSystem::InputManager::RegisterControlLayoutBuilder(System::Func_1<UnityEngine::InputSystem::Layouts::InputControlLayout> method, ::StringW name, ::StringW baseLayout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "RegisterControlLayoutBuilder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<UnityEngine::InputSystem::Layouts::InputControlLayout>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, method, name, baseLayout);
}
/// @param isKnownToBeDeviceLayout: bool (default: false)
/// @param isOverride: bool (default: false)
 void UnityEngine::InputSystem::InputManager::PerformLayoutPostRegistration(UnityEngine::InputSystem::Utilities::InternedString layoutName, UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Utilities::InternedString> baseLayouts, bool isReplacement, bool isKnownToBeDeviceLayout, bool isOverride)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "PerformLayoutPostRegistration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Utilities::InternedString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, layoutName, baseLayouts, isReplacement, isKnownToBeDeviceLayout, isOverride);
}
template<typename TDevice>
 void UnityEngine::InputSystem::InputManager::RegisterPrecompiledLayout(::StringW metadata)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                        "RegisterPrecompiledLayout",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevice>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevice>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, metadata);
}
/// @param isKnownToBeDeviceLayout: bool (default: false)
 void UnityEngine::InputSystem::InputManager::RecreateDevicesUsingLayout(UnityEngine::InputSystem::Utilities::InternedString layout, bool isKnownToBeDeviceLayout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "RecreateDevicesUsingLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, layout, isKnownToBeDeviceLayout);
}
 bool UnityEngine::InputSystem::InputManager::IsControlOrChildUsingLayoutRecursive(UnityEngine::InputSystem::InputControl control, UnityEngine::InputSystem::Utilities::InternedString layout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "IsControlOrChildUsingLayoutRecursive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, control, layout);
}
 bool UnityEngine::InputSystem::InputManager::IsControlUsingLayout(UnityEngine::InputSystem::InputControl control, UnityEngine::InputSystem::Utilities::InternedString layout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "IsControlUsingLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, control, layout);
}
 void UnityEngine::InputSystem::InputManager::RegisterControlLayoutMatcher(::StringW layoutName, UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "RegisterControlLayoutMatcher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, layoutName, matcher);
}
 void UnityEngine::InputSystem::InputManager::RegisterControlLayoutMatcher(System::Type type, UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "RegisterControlLayoutMatcher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type, matcher);
}
 void UnityEngine::InputSystem::InputManager::RecreateDevicesUsingLayoutWithInferiorMatch(UnityEngine::InputSystem::Layouts::InputDeviceMatcher deviceMatcher)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "RecreateDevicesUsingLayoutWithInferiorMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, deviceMatcher);
}
 void UnityEngine::InputSystem::InputManager::RecreateDevice(UnityEngine::InputSystem::InputDevice oldDevice, UnityEngine::InputSystem::Utilities::InternedString newLayout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "RecreateDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, oldDevice, newLayout);
}
 void UnityEngine::InputSystem::InputManager::AddAvailableDevicesMatchingDescription(UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher, UnityEngine::InputSystem::Utilities::InternedString layout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "AddAvailableDevicesMatchingDescription",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, matcher, layout);
}
 void UnityEngine::InputSystem::InputManager::RemoveControlLayout(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "RemoveControlLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name);
}
 UnityEngine::InputSystem::Layouts::InputControlLayout UnityEngine::InputSystem::InputManager::TryLoadControlLayout(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "TryLoadControlLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::InputControlLayout, false>(const_cast<void*>(instance), ___internal_method, type);
}
 UnityEngine::InputSystem::Layouts::InputControlLayout UnityEngine::InputSystem::InputManager::TryLoadControlLayout(UnityEngine::InputSystem::Utilities::InternedString name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "TryLoadControlLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::InputControlLayout, false>(const_cast<void*>(instance), ___internal_method, name);
}
/// @param deviceId: int32_t (default: 0)
 UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::InputManager::TryFindMatchingControlLayout(ByRef<UnityEngine::InputSystem::Layouts::InputDeviceDescription> deviceDescription, int32_t deviceId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "TryFindMatchingControlLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Layouts::InputDeviceDescription>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::InternedString, false>(const_cast<void*>(instance), ___internal_method, deviceDescription, deviceId);
}
 UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::InputManager::FindOrRegisterDeviceLayoutForType(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "FindOrRegisterDeviceLayoutForType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::InternedString, false>(const_cast<void*>(instance), ___internal_method, type);
}
 bool UnityEngine::InputSystem::InputManager::IsDeviceLayoutMarkedAsSupportedInSettings(UnityEngine::InputSystem::Utilities::InternedString layoutName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "IsDeviceLayoutMarkedAsSupportedInSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, layoutName);
}
/// @param basedOn: ::StringW (default: csnull)
 System::Collections::Generic::IEnumerable_1<::StringW> UnityEngine::InputSystem::InputManager::ListControlLayouts(::StringW basedOn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "ListControlLayouts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<::StringW>, false>(const_cast<void*>(instance), ___internal_method, basedOn);
}
template<typename TControl>
 int32_t UnityEngine::InputSystem::InputManager::GetControls(::StringW path, ByRef<UnityEngine::InputSystem::InputControlList_1<TControl>> controls)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                        "GetControls",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::InputControlList_1<TControl>>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, path, controls);
}
 void UnityEngine::InputSystem::InputManager::SetDeviceUsage(UnityEngine::InputSystem::InputDevice device, UnityEngine::InputSystem::Utilities::InternedString usage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "SetDeviceUsage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, device, usage);
}
 void UnityEngine::InputSystem::InputManager::AddDeviceUsage(UnityEngine::InputSystem::InputDevice device, UnityEngine::InputSystem::Utilities::InternedString usage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "AddDeviceUsage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, device, usage);
}
 void UnityEngine::InputSystem::InputManager::RemoveDeviceUsage(UnityEngine::InputSystem::InputDevice device, UnityEngine::InputSystem::Utilities::InternedString usage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "RemoveDeviceUsage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, device, usage);
}
 void UnityEngine::InputSystem::InputManager::NotifyUsageChanged(UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "NotifyUsageChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, device);
}
/// @param name: ::StringW (default: csnull)
 UnityEngine::InputSystem::InputDevice UnityEngine::InputSystem::InputManager::AddDevice(System::Type type, ::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "AddDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputDevice, false>(const_cast<void*>(instance), ___internal_method, type, name);
}
/// @param name: ::StringW (default: csnull)
/// @param variants: UnityEngine::InputSystem::Utilities::InternedString (default: {})
 UnityEngine::InputSystem::InputDevice UnityEngine::InputSystem::InputManager::AddDevice(::StringW layout, ::StringW name, UnityEngine::InputSystem::Utilities::InternedString variants)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "AddDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputDevice, false>(const_cast<void*>(instance), ___internal_method, layout, name, variants);
}
/// @param deviceName: ::StringW (default: csnull)
/// @param deviceDescription: UnityEngine::InputSystem::Layouts::InputDeviceDescription (default: {})
/// @param deviceFlags: UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags (default: 0)
/// @param variants: UnityEngine::InputSystem::Utilities::InternedString (default: {})
 UnityEngine::InputSystem::InputDevice UnityEngine::InputSystem::InputManager::AddDevice(UnityEngine::InputSystem::Utilities::InternedString layout, int32_t deviceId, ::StringW deviceName, UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription, UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags deviceFlags, UnityEngine::InputSystem::Utilities::InternedString variants)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "AddDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputDevice, false>(const_cast<void*>(instance), ___internal_method, layout, deviceId, deviceName, deviceDescription, deviceFlags, variants);
}
 void UnityEngine::InputSystem::InputManager::AddDevice(UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "AddDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, device);
}
 UnityEngine::InputSystem::InputDevice UnityEngine::InputSystem::InputManager::AddDevice(UnityEngine::InputSystem::Layouts::InputDeviceDescription description)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "AddDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputDevice, false>(const_cast<void*>(instance), ___internal_method, description);
}
/// @param deviceName: ::StringW (default: csnull)
/// @param deviceId: int32_t (default: 0)
/// @param deviceFlags: UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags (default: 0)
 UnityEngine::InputSystem::InputDevice UnityEngine::InputSystem::InputManager::AddDevice(UnityEngine::InputSystem::Layouts::InputDeviceDescription description, bool throwIfNoLayoutFound, ::StringW deviceName, int32_t deviceId, UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags deviceFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "AddDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputDevice, false>(const_cast<void*>(instance), ___internal_method, description, throwIfNoLayoutFound, deviceName, deviceId, deviceFlags);
}
/// @param deviceName: ::StringW (default: csnull)
/// @param deviceId: int32_t (default: 0)
/// @param deviceFlags: UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags (default: 0)
 UnityEngine::InputSystem::InputDevice UnityEngine::InputSystem::InputManager::AddDevice(UnityEngine::InputSystem::Layouts::InputDeviceDescription description, UnityEngine::InputSystem::Utilities::InternedString layout, ::StringW deviceName, int32_t deviceId, UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags deviceFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "AddDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputDevice, false>(const_cast<void*>(instance), ___internal_method, description, layout, deviceName, deviceId, deviceFlags);
}
/// @param keepOnListOfAvailableDevices: bool (default: false)
 void UnityEngine::InputSystem::InputManager::RemoveDevice(UnityEngine::InputSystem::InputDevice device, bool keepOnListOfAvailableDevices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "RemoveDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, device, keepOnListOfAvailableDevices);
}
 void UnityEngine::InputSystem::InputManager::FlushDisconnectedDevices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "FlushDisconnectedDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param alsoResetDontResetControls: bool (default: false)
/// @param issueResetCommand: System::Nullable_1<bool> (default: {})
 void UnityEngine::InputSystem::InputManager::ResetDevice(UnityEngine::InputSystem::InputDevice device, bool alsoResetDontResetControls, System::Nullable_1<bool> issueResetCommand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "ResetDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, device, alsoResetDontResetControls, issueResetCommand);
}
 UnityEngine::InputSystem::InputDevice UnityEngine::InputSystem::InputManager::TryGetDevice(::StringW nameOrLayout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "TryGetDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputDevice, false>(const_cast<void*>(instance), ___internal_method, nameOrLayout);
}
 UnityEngine::InputSystem::InputDevice UnityEngine::InputSystem::InputManager::GetDevice(::StringW nameOrLayout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "GetDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputDevice, false>(const_cast<void*>(instance), ___internal_method, nameOrLayout);
}
 UnityEngine::InputSystem::InputDevice UnityEngine::InputSystem::InputManager::TryGetDevice(System::Type layoutType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "TryGetDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputDevice, false>(const_cast<void*>(instance), ___internal_method, layoutType);
}
 UnityEngine::InputSystem::InputDevice UnityEngine::InputSystem::InputManager::TryGetDeviceById(int32_t id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "TryGetDeviceById",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputDevice, false>(const_cast<void*>(instance), ___internal_method, id);
}
 int32_t UnityEngine::InputSystem::InputManager::GetUnsupportedDevices(System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::InputDeviceDescription> descriptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "GetUnsupportedDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::InputDeviceDescription>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, descriptions);
}
/// @param scope: UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__DeviceDisableScope (default: 0)
 void UnityEngine::InputSystem::InputManager::EnableOrDisableDevice(UnityEngine::InputSystem::InputDevice device, bool enable, UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__DeviceDisableScope scope)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "EnableOrDisableDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager__DeviceDisableScope>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, device, enable, scope);
}
 void UnityEngine::InputSystem::InputManager::QueueEvent(void* eventPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "QueueEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventPtr);
}
 void UnityEngine::InputSystem::InputManager::QueueEvent(UnityEngine::InputSystem::LowLevel::InputEventPtr ptr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "QueueEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ptr);
}
template<typename TEvent>
 void UnityEngine::InputSystem::InputManager::QueueEvent(ByRef<TEvent> inputEvent)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                        "QueueEvent",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEvent>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TEvent>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEvent>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inputEvent);
}
 void UnityEngine::InputSystem::InputManager::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputManager::Update(UnityEngine::InputSystem::LowLevel::InputUpdateType updateType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputUpdateType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, updateType);
}
 void UnityEngine::InputSystem::InputManager::Initialize(UnityEngine::InputSystem::LowLevel::IInputRuntime runtime, UnityEngine::InputSystem::InputSettings settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::IInputRuntime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, runtime, settings);
}
 void UnityEngine::InputSystem::InputManager::Destroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "Destroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputManager::InitializeData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "InitializeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputManager::InstallRuntime(UnityEngine::InputSystem::LowLevel::IInputRuntime runtime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "InstallRuntime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::IInputRuntime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, runtime);
}
 void UnityEngine::InputSystem::InputManager::InstallGlobals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "InstallGlobals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputManager::UninstallGlobals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "UninstallGlobals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputManager::MakeDeviceNameUnique(UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "MakeDeviceNameUnique",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, device);
}
 void UnityEngine::InputSystem::InputManager::ResetControlPathsRecursive(UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "ResetControlPathsRecursive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control);
}
 void UnityEngine::InputSystem::InputManager::AssignUniqueDeviceId(UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "AssignUniqueDeviceId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, device);
}
 void UnityEngine::InputSystem::InputManager::ReallocateStateBuffers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "ReallocateStateBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputManager::InitializeDefaultState(UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "InitializeDefaultState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, device);
}
 void UnityEngine::InputSystem::InputManager::InitializeDeviceState(UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "InitializeDeviceState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, device);
}
 void UnityEngine::InputSystem::InputManager::OnNativeDeviceDiscovered(int32_t deviceId, ::StringW deviceDescriptor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "OnNativeDeviceDiscovered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, deviceId, deviceDescriptor);
}
 UnityEngine::InputSystem::InputDevice UnityEngine::InputSystem::InputManager::TryMatchDisconnectedDevice(::StringW deviceDescriptor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "TryMatchDisconnectedDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputDevice, false>(const_cast<void*>(instance), ___internal_method, deviceDescriptor);
}
 void UnityEngine::InputSystem::InputManager::InstallBeforeUpdateHookIfNecessary()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "InstallBeforeUpdateHookIfNecessary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputManager::RestoreDevicesAfterDomainReloadIfNecessary()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "RestoreDevicesAfterDomainReloadIfNecessary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputManager::WarnAboutDevicesFailingToRecreateAfterDomainReload()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "WarnAboutDevicesFailingToRecreateAfterDomainReload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputManager::OnBeforeUpdate(UnityEngine::InputSystem::LowLevel::InputUpdateType updateType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "OnBeforeUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputUpdateType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, updateType);
}
 void UnityEngine::InputSystem::InputManager::ApplySettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "ApplySettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename TCommand>
 int64_t UnityEngine::InputSystem::InputManager::ExecuteGlobalCommand(ByRef<TCommand> command)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                        "ExecuteGlobalCommand",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TCommand>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TCommand>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TCommand>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method, command);
}
 void UnityEngine::InputSystem::InputManager::AddAvailableDevicesThatAreNowRecognized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "AddAvailableDevicesThatAreNowRecognized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::InputManager::ShouldRunDeviceInBackground(UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "ShouldRunDeviceInBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, device);
}
 void UnityEngine::InputSystem::InputManager::OnFocusChanged(bool focus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "OnFocusChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, focus);
}
 bool UnityEngine::InputSystem::InputManager::ShouldRunUpdate(UnityEngine::InputSystem::LowLevel::InputUpdateType updateType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "ShouldRunUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputUpdateType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, updateType);
}
 void UnityEngine::InputSystem::InputManager::OnUpdate(UnityEngine::InputSystem::LowLevel::InputUpdateType updateType, ByRef<UnityEngine::InputSystem::LowLevel::InputEventBuffer> eventBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "OnUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputUpdateType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::LowLevel::InputEventBuffer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, updateType, eventBuffer);
}
 void UnityEngine::InputSystem::InputManager::InvokeAfterUpdateCallback(UnityEngine::InputSystem::LowLevel::InputUpdateType updateType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "InvokeAfterUpdateCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputUpdateType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, updateType);
}
 bool UnityEngine::InputSystem::InputManager::UpdateState(UnityEngine::InputSystem::InputDevice device, void* eventPtr, UnityEngine::InputSystem::LowLevel::InputUpdateType updateType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "UpdateState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputUpdateType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, device, eventPtr, updateType);
}
/// @param eventPtr: UnityEngine::InputSystem::LowLevel::InputEventPtr (default: {})
 bool UnityEngine::InputSystem::InputManager::UpdateState(UnityEngine::InputSystem::InputDevice device, UnityEngine::InputSystem::LowLevel::InputUpdateType updateType, void* statePtr, uint32_t stateOffsetInDevice, uint32_t stateSize, double_t internalTime, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "UpdateState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputUpdateType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, device, updateType, statePtr, stateOffsetInDevice, stateSize, internalTime, eventPtr);
}
 void UnityEngine::InputSystem::InputManager::WriteStateChange(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers buffers, int32_t deviceIndex, ByRef<UnityEngine::InputSystem::LowLevel::InputStateBlock> deviceStateBlock, uint32_t stateOffsetInDevice, void* statePtr, uint32_t stateSizeInBytes, bool flippedBuffers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "WriteStateChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::LowLevel::InputStateBlock>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buffers, deviceIndex, deviceStateBlock, stateOffsetInDevice, statePtr, stateSizeInBytes, flippedBuffers);
}
 bool UnityEngine::InputSystem::InputManager::FlipBuffersForDeviceIfNecessary(UnityEngine::InputSystem::InputDevice device, UnityEngine::InputSystem::LowLevel::InputUpdateType updateType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "FlipBuffersForDeviceIfNecessary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputUpdateType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, device, updateType);
}
 void UnityEngine::InputSystem::InputManager::AddStateChangeMonitor(UnityEngine::InputSystem::InputControl control, UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor monitor, int64_t monitorIndex, uint32_t groupIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "AddStateChangeMonitor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, control, monitor, monitorIndex, groupIndex);
}
 void UnityEngine::InputSystem::InputManager::RemoveStateChangeMonitors(UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "RemoveStateChangeMonitors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, device);
}
 void UnityEngine::InputSystem::InputManager::RemoveStateChangeMonitor(UnityEngine::InputSystem::InputControl control, UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor monitor, int64_t monitorIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "RemoveStateChangeMonitor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, control, monitor, monitorIndex);
}
 void UnityEngine::InputSystem::InputManager::AddStateChangeMonitorTimeout(UnityEngine::InputSystem::InputControl control, UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor monitor, double_t time, int64_t monitorIndex, int32_t timerIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "AddStateChangeMonitorTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, control, monitor, time, monitorIndex, timerIndex);
}
 void UnityEngine::InputSystem::InputManager::RemoveStateChangeMonitorTimeout(UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor monitor, int64_t monitorIndex, int32_t timerIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "RemoveStateChangeMonitorTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, monitor, monitorIndex, timerIndex);
}
 void UnityEngine::InputSystem::InputManager::SortStateChangeMonitorsIfNecessary(int32_t deviceIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "SortStateChangeMonitorsIfNecessary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, deviceIndex);
}
 void UnityEngine::InputSystem::InputManager::SignalStateChangeMonitor(UnityEngine::InputSystem::InputControl control, UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor monitor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "SignalStateChangeMonitor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, control, monitor);
}
 void UnityEngine::InputSystem::InputManager::FireStateChangeNotifications()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "FireStateChangeNotifications",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::InputManager::ProcessStateChangeMonitors(int32_t deviceIndex, void* newStateFromEvent, void* oldStateOfDevice, uint32_t newStateSizeInBytes, uint32_t newStateOffsetInBytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "ProcessStateChangeMonitors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, deviceIndex, newStateFromEvent, oldStateOfDevice, newStateSizeInBytes, newStateOffsetInBytes);
}
 void UnityEngine::InputSystem::InputManager::FireStateChangeNotifications(int32_t deviceIndex, double_t internalTime, void* eventPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "FireStateChangeNotifications",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, deviceIndex, internalTime, eventPtr);
}
 void UnityEngine::InputSystem::InputManager::ProcessStateChangeMonitorTimeouts()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "ProcessStateChangeMonitorTimeouts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 UnityEngine::InputSystem::InputManager::InputManager()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<InputManager>())) {}
 void UnityEngine::InputSystem::InputManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t UnityEngine::InputSystem::InputManager::_TryFindMatchingControlLayout_b__72_0(ByRef<UnityEngine::InputSystem::LowLevel::InputDeviceCommand> commandRef)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputManager>::get(),
                            "<TryFindMatchingControlLayout>b__72_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::LowLevel::InputDeviceCommand>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method, commandRef);
}
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c__60_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c__60_1::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c__60_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c__60_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c__60_1._RegisterPrecompiledLayout_b__60_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputDevice (UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c__60_1::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c__60_1::_RegisterPrecompiledLayout_b__60_0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c__60_1>::get(),
                            "<RegisterPrecompiledLayout>b__60_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c__60_1::__set___9(UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c__60_1<TDevice> value)  {
::cordl_internals::setStaticField<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c__60_1<TDevice>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c__60_1>::get>(std::forward<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c__60_1<TDevice>>(value));
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c__60_1<TDevice> UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c__60_1::__get___9()  {
return ::cordl_internals::getStaticField<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c__60_1<TDevice>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c__60_1>::get>();
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c__60_1::__set___9__60_0(System::Func_1<UnityEngine::InputSystem::InputDevice> value)  {
::cordl_internals::setStaticField<System::Func_1<UnityEngine::InputSystem::InputDevice>, "<>9__60_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c__60_1>::get>(std::forward<System::Func_1<UnityEngine::InputSystem::InputDevice>>(value));
}
 System::Func_1<UnityEngine::InputSystem::InputDevice> UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c__60_1::__get___9__60_0()  {
return ::cordl_internals::getStaticField<System::Func_1<UnityEngine::InputSystem::InputDevice>, "<>9__60_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c__60_1>::get>();
}
// Ctor Parameters []
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c__60_1::UnityEngine__InputSystem__InputManager____c__60_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__InputSystem__InputManager____c__60_1>())) {}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c__60_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c__60_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::InputDevice UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c__60_1::_RegisterPrecompiledLayout_b__60_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputManager____c__60_1>::get(),
                            "<RegisterPrecompiledLayout>b__60_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputDevice, false>(const_cast<void*>(instance), ___internal_method);
}
