#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags::UnityEngine__InputSystem__InputDevice__DeviceFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags  UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags::UpdateBeforeRender{1};
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags  UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags::HasStateCallbacks{2};
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags  UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags::HasControlsWithDefaultState{4};
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags  UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags::HasDontResetControls{1024};
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags  UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags::HasEventMerger{8192};
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags  UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags::HasEventPreProcessor{16384};
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags  UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags::Remote{8};
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags  UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags::Native{16};
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags  UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags::DisabledInFrontend{32};
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags  UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags::DisabledInRuntime{128};
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags  UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags::DisabledWhileInBackground{256};
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags  UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags::DisabledStateHasBeenQueriedFromRuntime{64};
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags  UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags::CanRunInBackground{2048};
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags  UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags::CanRunInBackgroundHasBeenQueried{4096};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.get_description
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::InputDeviceDescription (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::get_description)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28d7674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_description",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.get_enabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::get_enabled)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28d7698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.get_canRunInBackground
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::get_canRunInBackground)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x28d775c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_canRunInBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.get_added
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::get_added)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28cca4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_added",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.get_remote
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::get_remote)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28d7814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_remote",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.get_native
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::get_native)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28d7820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_native",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.get_updateBeforeRender
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::get_updateBeforeRender)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28d782c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_updateBeforeRender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.get_deviceId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::get_deviceId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28d7838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_deviceId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.get_lastUpdateTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::get_lastUpdateTime)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x28d7840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_lastUpdateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.get_wasUpdatedThisFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::get_wasUpdatedThisFrame)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x28d7894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_wasUpdatedThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.get_allControls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputControl> (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::get_allControls)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x28d78ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_allControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.get_valueType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::get_valueType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x28d794c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputDevice),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.get_valueSizeInBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::get_valueSizeInBytes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28d79b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputDevice),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.get_all
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputDevice> (*)()>(&UnityEngine::InputSystem::InputDevice::get_all)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x28d79c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_all",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x28d7648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.ReadValueFromBufferAsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::InputSystem::InputDevice::*)(void*, int32_t)>(&UnityEngine::InputSystem::InputDevice::ReadValueFromBufferAsObject)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28d7a10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputDevice),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.ReadValueFromStateAsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::InputSystem::InputDevice::*)(void*)>(&UnityEngine::InputSystem::InputDevice::ReadValueFromStateAsObject)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x28d7a50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputDevice),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.ReadValueFromStateIntoBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputDevice::*)(void*, void*, int32_t)>(&UnityEngine::InputSystem::InputDevice::ReadValueFromStateIntoBuffer)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x28d7b18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputDevice),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.CompareValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputDevice::*)(void*, void*)>(&UnityEngine::InputSystem::InputDevice::CompareValue)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x28d7c9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputDevice),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.NotifyConfigurationChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::NotifyConfigurationChanged)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x28d7d50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "NotifyConfigurationChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.MakeCurrent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::MakeCurrent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28d7448;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputDevice),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.OnAdded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::OnAdded)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28d7dcc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputDevice),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.OnRemoved
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::OnRemoved)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28d7dd0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputDevice),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.OnConfigurationChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::OnConfigurationChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28d7dd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputDevice),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.ExecuteCommand
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UnityEngine::InputSystem::InputDevice::*)(void*)>(&UnityEngine::InputSystem::InputDevice::ExecuteCommand)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x28d7dd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputDevice),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.QueryEnabledStateFromRuntime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::QueryEnabledStateFromRuntime)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x28d76b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "QueryEnabledStateFromRuntime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.get_disabledInFrontend
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::get_disabledInFrontend)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28d7eb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_disabledInFrontend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.set_disabledInFrontend
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputDevice::*)(bool)>(&UnityEngine::InputSystem::InputDevice::set_disabledInFrontend)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28d7ebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "set_disabledInFrontend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.get_disabledInRuntime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::get_disabledInRuntime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28d7ed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_disabledInRuntime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.set_disabledInRuntime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputDevice::*)(bool)>(&UnityEngine::InputSystem::InputDevice::set_disabledInRuntime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28d7ee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "set_disabledInRuntime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.get_disabledWhileInBackground
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::get_disabledWhileInBackground)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28d7f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_disabledWhileInBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.set_disabledWhileInBackground
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputDevice::*)(bool)>(&UnityEngine::InputSystem::InputDevice::set_disabledWhileInBackground)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28d7f0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "set_disabledWhileInBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.EncodeStateOffsetToControlMapEntry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint32_t, uint32_t, uint32_t)>(&UnityEngine::InputSystem::InputDevice::EncodeStateOffsetToControlMapEntry)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28d7f28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "EncodeStateOffsetToControlMapEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.DecodeStateOffsetToControlMapEntry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint32_t, ByRef<uint32_t>, ByRef<uint32_t>, ByRef<uint32_t>)>(&UnityEngine::InputSystem::InputDevice::DecodeStateOffsetToControlMapEntry)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28d3438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "DecodeStateOffsetToControlMapEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.get_hasControlsWithDefaultState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::get_hasControlsWithDefaultState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28d7f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_hasControlsWithDefaultState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.set_hasControlsWithDefaultState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputDevice::*)(bool)>(&UnityEngine::InputSystem::InputDevice::set_hasControlsWithDefaultState)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28d36e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "set_hasControlsWithDefaultState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.get_hasDontResetControls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::get_hasDontResetControls)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28d7f40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_hasDontResetControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.set_hasDontResetControls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputDevice::*)(bool)>(&UnityEngine::InputSystem::InputDevice::set_hasDontResetControls)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28d37d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "set_hasDontResetControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.get_hasStateCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::get_hasStateCallbacks)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28d1c9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_hasStateCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.set_hasStateCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputDevice::*)(bool)>(&UnityEngine::InputSystem::InputDevice::set_hasStateCallbacks)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28d7f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "set_hasStateCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.get_hasEventMerger
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::get_hasEventMerger)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28d7f68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_hasEventMerger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.set_hasEventMerger
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputDevice::*)(bool)>(&UnityEngine::InputSystem::InputDevice::set_hasEventMerger)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28d7f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "set_hasEventMerger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.get_hasEventPreProcessor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::get_hasEventPreProcessor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28d7f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_hasEventPreProcessor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.set_hasEventPreProcessor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputDevice::*)(bool)>(&UnityEngine::InputSystem::InputDevice::set_hasEventPreProcessor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28d7f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "set_hasEventPreProcessor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.AddDeviceUsage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputDevice::*)(UnityEngine::InputSystem::Utilities::InternedString)>(&UnityEngine::InputSystem::InputDevice::AddDeviceUsage)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x28d7fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "AddDeviceUsage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.RemoveDeviceUsage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputDevice::*)(UnityEngine::InputSystem::Utilities::InternedString)>(&UnityEngine::InputSystem::InputDevice::RemoveDeviceUsage)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x28d806c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "RemoveDeviceUsage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.ClearDeviceUsages
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::ClearDeviceUsages)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x28d8148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "ClearDeviceUsages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.RequestSync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::RequestSync)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x28cca5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "RequestSync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.RequestReset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::RequestReset)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x28ccba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "RequestReset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.ExecuteEnableCommand
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::ExecuteEnableCommand)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x28d81a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "ExecuteEnableCommand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.ExecuteDisableCommand
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::ExecuteDisableCommand)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x28d8214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "ExecuteDisableCommand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.NotifyAdded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::NotifyAdded)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28d8280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "NotifyAdded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputDevice.NotifyRemoved
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputDevice::*)()>(&UnityEngine::InputSystem::InputDevice::NotifyRemoved)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28d8290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "NotifyRemoved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::InputDevice::__set_m_DeviceFlags(UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags>(value));
}
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags UnityEngine::InputSystem::InputDevice::__get_m_DeviceFlags() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputDevice::__set_m_DeviceId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xdc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::InputDevice::__get_m_DeviceId() const {
return ::cordl_internals::getInstanceField<int32_t, 0xdc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputDevice::__set_m_ParticipantId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::InputDevice::__get_m_ParticipantId() const {
return ::cordl_internals::getInstanceField<int32_t, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputDevice::__set_m_DeviceIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xe4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::InputDevice::__get_m_DeviceIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0xe4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputDevice::__set_m_Description(UnityEngine::InputSystem::Layouts::InputDeviceDescription value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Layouts::InputDeviceDescription, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Layouts::InputDeviceDescription>(value));
}
constexpr UnityEngine::InputSystem::Layouts::InputDeviceDescription UnityEngine::InputSystem::InputDevice::__get_m_Description() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Layouts::InputDeviceDescription, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputDevice::__set_m_LastUpdateTimeInternal(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x120>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t UnityEngine::InputSystem::InputDevice::__get_m_LastUpdateTimeInternal() const {
return ::cordl_internals::getInstanceField<double_t, 0x120>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputDevice::__set_m_CurrentUpdateStepCount(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x128>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::InputSystem::InputDevice::__get_m_CurrentUpdateStepCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x128>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputDevice::__set_m_AliasesForEachControl(::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>, 0x130>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>>(value));
}
constexpr ::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> UnityEngine::InputSystem::InputDevice::__get_m_AliasesForEachControl() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>, 0x130>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputDevice::__set_m_UsagesForEachControl(::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>, 0x138>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>>(value));
}
constexpr ::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> UnityEngine::InputSystem::InputDevice::__get_m_UsagesForEachControl() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>, 0x138>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputDevice::__set_m_UsageToControl(::ArrayW<UnityEngine::InputSystem::InputControl> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::InputSystem::InputControl>, 0x140>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::InputSystem::InputControl>>(value));
}
constexpr ::ArrayW<UnityEngine::InputSystem::InputControl> UnityEngine::InputSystem::InputDevice::__get_m_UsageToControl() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::InputSystem::InputControl>, 0x140>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputDevice::__set_m_ChildrenForEachControl(::ArrayW<UnityEngine::InputSystem::InputControl> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::InputSystem::InputControl>, 0x148>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::InputSystem::InputControl>>(value));
}
constexpr ::ArrayW<UnityEngine::InputSystem::InputControl> UnityEngine::InputSystem::InputDevice::__get_m_ChildrenForEachControl() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::InputSystem::InputControl>, 0x148>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputDevice::__set_m_StateOffsetToControlMap(::ArrayW<uint32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint32_t>, 0x150>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint32_t>>(value));
}
constexpr ::ArrayW<uint32_t> UnityEngine::InputSystem::InputDevice::__get_m_StateOffsetToControlMap() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t>, 0x150>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::InputSystem::Layouts::InputDeviceDescription UnityEngine::InputSystem::InputDevice::get_description()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_description",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::InputDeviceDescription, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::InputDevice::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::InputDevice::get_canRunInBackground()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_canRunInBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::InputDevice::get_added()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_added",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::InputDevice::get_remote()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_remote",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::InputDevice::get_native()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_native",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::InputDevice::get_updateBeforeRender()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_updateBeforeRender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::InputSystem::InputDevice::get_deviceId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_deviceId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 double_t UnityEngine::InputSystem::InputDevice::get_lastUpdateTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_lastUpdateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::InputDevice::get_wasUpdatedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_wasUpdatedThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputControl> UnityEngine::InputSystem::InputDevice::get_allControls()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_allControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputControl>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type UnityEngine::InputSystem::InputDevice::get_valueType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_valueType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::InputSystem::InputDevice::get_valueSizeInBytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_valueSizeInBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputDevice> UnityEngine::InputSystem::InputDevice::get_all()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_all",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputDevice>, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
 UnityEngine::InputSystem::InputDevice::InputDevice()  : UnityEngine::InputSystem::InputControl(THROW_UNLESS(::il2cpp_utils::New<InputDevice>())) {}
 void UnityEngine::InputSystem::InputDevice::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::InputDevice::ReadValueFromBufferAsObject(void* buffer, int32_t bufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "ReadValueFromBufferAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, buffer, bufferSize);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::InputDevice::ReadValueFromStateAsObject(void* statePtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "ReadValueFromStateAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, statePtr);
}
 void UnityEngine::InputSystem::InputDevice::ReadValueFromStateIntoBuffer(void* statePtr, void* bufferPtr, int32_t bufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "ReadValueFromStateIntoBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, statePtr, bufferPtr, bufferSize);
}
 bool UnityEngine::InputSystem::InputDevice::CompareValue(void* firstStatePtr, void* secondStatePtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "CompareValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, firstStatePtr, secondStatePtr);
}
 void UnityEngine::InputSystem::InputDevice::NotifyConfigurationChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "NotifyConfigurationChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputDevice::MakeCurrent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "MakeCurrent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputDevice::OnAdded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "OnAdded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputDevice::OnRemoved()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "OnRemoved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputDevice::OnConfigurationChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "OnConfigurationChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename TCommand>
 int64_t UnityEngine::InputSystem::InputDevice::ExecuteCommand(ByRef<TCommand> command)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                        "ExecuteCommand",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TCommand>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TCommand>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TCommand>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method, command);
}
 int64_t UnityEngine::InputSystem::InputDevice::ExecuteCommand(void* commandPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "ExecuteCommand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method, commandPtr);
}
 bool UnityEngine::InputSystem::InputDevice::QueryEnabledStateFromRuntime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "QueryEnabledStateFromRuntime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::InputDevice::get_disabledInFrontend()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_disabledInFrontend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputDevice::set_disabledInFrontend(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "set_disabledInFrontend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::InputSystem::InputDevice::get_disabledInRuntime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_disabledInRuntime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputDevice::set_disabledInRuntime(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "set_disabledInRuntime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::InputSystem::InputDevice::get_disabledWhileInBackground()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_disabledWhileInBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputDevice::set_disabledWhileInBackground(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "set_disabledWhileInBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 uint32_t UnityEngine::InputSystem::InputDevice::EncodeStateOffsetToControlMapEntry(uint32_t controlIndex, uint32_t stateOffsetInBits, uint32_t stateSizeInBits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "EncodeStateOffsetToControlMapEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, controlIndex, stateOffsetInBits, stateSizeInBits);
}
 void UnityEngine::InputSystem::InputDevice::DecodeStateOffsetToControlMapEntry(uint32_t entry, ByRef<uint32_t> controlIndex, ByRef<uint32_t> stateOffset, ByRef<uint32_t> stateSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "DecodeStateOffsetToControlMapEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, entry, controlIndex, stateOffset, stateSize);
}
 bool UnityEngine::InputSystem::InputDevice::get_hasControlsWithDefaultState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_hasControlsWithDefaultState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputDevice::set_hasControlsWithDefaultState(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "set_hasControlsWithDefaultState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::InputSystem::InputDevice::get_hasDontResetControls()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_hasDontResetControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputDevice::set_hasDontResetControls(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "set_hasDontResetControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::InputSystem::InputDevice::get_hasStateCallbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_hasStateCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputDevice::set_hasStateCallbacks(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "set_hasStateCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::InputSystem::InputDevice::get_hasEventMerger()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_hasEventMerger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputDevice::set_hasEventMerger(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "set_hasEventMerger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::InputSystem::InputDevice::get_hasEventPreProcessor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "get_hasEventPreProcessor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputDevice::set_hasEventPreProcessor(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "set_hasEventPreProcessor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::InputSystem::InputDevice::AddDeviceUsage(UnityEngine::InputSystem::Utilities::InternedString usage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "AddDeviceUsage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, usage);
}
 void UnityEngine::InputSystem::InputDevice::RemoveDeviceUsage(UnityEngine::InputSystem::Utilities::InternedString usage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "RemoveDeviceUsage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, usage);
}
 void UnityEngine::InputSystem::InputDevice::ClearDeviceUsages()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "ClearDeviceUsages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::InputDevice::RequestSync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "RequestSync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::InputDevice::RequestReset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "RequestReset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::InputDevice::ExecuteEnableCommand()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "ExecuteEnableCommand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::InputDevice::ExecuteDisableCommand()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "ExecuteDisableCommand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputDevice::NotifyAdded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "NotifyAdded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputDevice::NotifyRemoved()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                            "NotifyRemoved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param layoutName: ::StringW (default: csnull)
/// @param layoutVariants: ::StringW (default: csnull)
/// @param deviceDescription: UnityEngine::InputSystem::Layouts::InputDeviceDescription (default: {})
/// @param noPrecompiledLayouts: bool (default: false)
template<typename TDevice>
 TDevice UnityEngine::InputSystem::InputDevice::Build(::StringW layoutName, ::StringW layoutVariants, UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription, bool noPrecompiledLayouts)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputDevice>::get(),
                        "Build",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevice>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevice>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TDevice, false>(nullptr, ___internal_method, layoutName, layoutVariants, deviceDescription, noPrecompiledLayouts);
}
