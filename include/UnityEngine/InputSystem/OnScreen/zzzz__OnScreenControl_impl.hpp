#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/InputSystem/OnScreen/zzzz__OnScreenControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/InputSystem/OnScreen/zzzz__OnScreenControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo.AddControl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo (UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo::*)(UnityEngine::InputSystem::OnScreen::OnScreenControl)>(&UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo::AddControl)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2945c00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo>::get(),
                            "AddControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::OnScreen::OnScreenControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo.RemoveControl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo (UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo::*)(UnityEngine::InputSystem::OnScreen::OnScreenControl)>(&UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo::RemoveControl)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2945f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo>::get(),
                            "RemoveControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::OnScreen::OnScreenControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo.Destroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo::*)()>(&UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo::Destroy)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2945b4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo>::get(),
                            "Destroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "eventPtr", ty: "UnityEngine::InputSystem::LowLevel::InputEventPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "buffer", ty: "Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "device", ty: "UnityEngine::InputSystem::InputDevice", modifiers: "", def_value: Some("csnull") }, CppParam { name: "firstControl", ty: "UnityEngine::InputSystem::OnScreen::OnScreenControl", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, Unity::Collections::NativeArray_1<uint8_t> buffer, UnityEngine::InputSystem::InputDevice device, UnityEngine::InputSystem::OnScreen::OnScreenControl firstControl) noexcept : ::bs_hook::ValueTypeWrapper() {this->eventPtr = eventPtr;
this->buffer = buffer;
this->device = device;
this->firstControl = firstControl;
}
constexpr void UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo::__set_eventPtr(UnityEngine::InputSystem::LowLevel::InputEventPtr value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::InputEventPtr, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::LowLevel::InputEventPtr>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::InputEventPtr UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo::__get_eventPtr() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::InputEventPtr, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo::__set_buffer(Unity::Collections::NativeArray_1<uint8_t> value)  {
::cordl_internals::setInstanceField<Unity::Collections::NativeArray_1<uint8_t>, 0x8>(this->__instance, std::forward<Unity::Collections::NativeArray_1<uint8_t>>(value));
}
constexpr Unity::Collections::NativeArray_1<uint8_t> UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo::__get_buffer() const {
return ::cordl_internals::getInstanceField<Unity::Collections::NativeArray_1<uint8_t>, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo::__set_device(UnityEngine::InputSystem::InputDevice value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputDevice, 0x18>(this->__instance, std::forward<UnityEngine::InputSystem::InputDevice>(value));
}
constexpr UnityEngine::InputSystem::InputDevice UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo::__get_device() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputDevice, 0x18>(this->__instance);
}
constexpr void UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo::__set_firstControl(UnityEngine::InputSystem::OnScreen::OnScreenControl value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::OnScreen::OnScreenControl, 0x20>(this->__instance, std::forward<UnityEngine::InputSystem::OnScreen::OnScreenControl>(value));
}
constexpr UnityEngine::InputSystem::OnScreen::OnScreenControl UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo::__get_firstControl() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::OnScreen::OnScreenControl, 0x20>(this->__instance);
}
 UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo::AddControl(UnityEngine::InputSystem::OnScreen::OnScreenControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo>::get(),
                            "AddControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::OnScreen::OnScreenControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, control);
}
 UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo::RemoveControl(UnityEngine::InputSystem::OnScreen::OnScreenControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo>::get(),
                            "RemoveControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::OnScreen::OnScreenControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, control);
}
 void UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo::Destroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo>::get(),
                            "Destroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::OnScreen::OnScreenControl.get_controlPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(&UnityEngine::InputSystem::OnScreen::OnScreenControl::get_controlPath)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2945210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::OnScreen::OnScreenControl>::get(),
                            "get_controlPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::OnScreen::OnScreenControl.set_controlPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::OnScreen::OnScreenControl::*)(::StringW)>(&UnityEngine::InputSystem::OnScreen::OnScreenControl::set_controlPath)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x294521c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::OnScreen::OnScreenControl>::get(),
                            "set_controlPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::OnScreen::OnScreenControl.get_control
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputControl (UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(&UnityEngine::InputSystem::OnScreen::OnScreenControl::get_control)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2945b44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::OnScreen::OnScreenControl>::get(),
                            "get_control",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::OnScreen::OnScreenControl.get_controlPathInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(&UnityEngine::InputSystem::OnScreen::OnScreenControl::get_controlPathInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::OnScreen::OnScreenControl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::OnScreen::OnScreenControl>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::OnScreen::OnScreenControl.set_controlPathInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::OnScreen::OnScreenControl::*)(::StringW)>(&UnityEngine::InputSystem::OnScreen::OnScreenControl::set_controlPathInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::OnScreen::OnScreenControl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::OnScreen::OnScreenControl>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::OnScreen::OnScreenControl.SetupInputControl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(&UnityEngine::InputSystem::OnScreen::OnScreenControl::SetupInputControl)> {
  constexpr static std::size_t size = 0x8f0;
  constexpr static std::size_t addrs = 0x2945254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::OnScreen::OnScreenControl>::get(),
                            "SetupInputControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::OnScreen::OnScreenControl.SentDefaultValueToControl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(&UnityEngine::InputSystem::OnScreen::OnScreenControl::SentDefaultValueToControl)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2945c2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::OnScreen::OnScreenControl>::get(),
                            "SentDefaultValueToControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::OnScreen::OnScreenControl.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(&UnityEngine::InputSystem::OnScreen::OnScreenControl::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2945d60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::OnScreen::OnScreenControl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::OnScreen::OnScreenControl>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::OnScreen::OnScreenControl.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(&UnityEngine::InputSystem::OnScreen::OnScreenControl::OnDisable)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x2945d64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::OnScreen::OnScreenControl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::OnScreen::OnScreenControl>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::OnScreen::OnScreenControl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(&UnityEngine::InputSystem::OnScreen::OnScreenControl::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2945208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::OnScreen::OnScreenControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenControl::__set_m_Control(UnityEngine::InputSystem::InputControl value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputControl, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::InputControl>(value));
}
constexpr UnityEngine::InputSystem::InputControl UnityEngine::InputSystem::OnScreen::OnScreenControl::__get_m_Control() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputControl, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenControl::__set_m_NextControlOnDevice(UnityEngine::InputSystem::OnScreen::OnScreenControl value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::OnScreen::OnScreenControl, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::OnScreen::OnScreenControl>(value));
}
constexpr UnityEngine::InputSystem::OnScreen::OnScreenControl UnityEngine::InputSystem::OnScreen::OnScreenControl::__get_m_NextControlOnDevice() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::OnScreen::OnScreenControl, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenControl::__set_m_InputEventPtr(UnityEngine::InputSystem::LowLevel::InputEventPtr value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::InputEventPtr, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::LowLevel::InputEventPtr>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::InputEventPtr UnityEngine::InputSystem::OnScreen::OnScreenControl::__get_m_InputEventPtr() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::InputEventPtr, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::InputSystem::OnScreen::OnScreenControl::__set_s_OnScreenDevices(UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo> value)  {
::cordl_internals::setStaticField<UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo>, "s_OnScreenDevices", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::OnScreen::OnScreenControl>::get>(std::forward<UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo>>(value));
}
 UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo> UnityEngine::InputSystem::OnScreen::OnScreenControl::__get_s_OnScreenDevices()  {
return ::cordl_internals::getStaticField<UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo>, "s_OnScreenDevices", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::OnScreen::OnScreenControl>::get>();
}
 ::StringW UnityEngine::InputSystem::OnScreen::OnScreenControl::get_controlPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::OnScreen::OnScreenControl>::get(),
                            "get_controlPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::OnScreen::OnScreenControl::set_controlPath(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::OnScreen::OnScreenControl>::get(),
                            "set_controlPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::InputSystem::InputControl UnityEngine::InputSystem::OnScreen::OnScreenControl::get_control()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::OnScreen::OnScreenControl>::get(),
                            "get_control",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputControl, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::InputSystem::OnScreen::OnScreenControl::get_controlPathInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::OnScreen::OnScreenControl>::get(),
                            "get_controlPathInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::OnScreen::OnScreenControl::set_controlPathInternal(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::OnScreen::OnScreenControl>::get(),
                            "set_controlPathInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::InputSystem::OnScreen::OnScreenControl::SetupInputControl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::OnScreen::OnScreenControl>::get(),
                            "SetupInputControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename TValue>
 void UnityEngine::InputSystem::OnScreen::OnScreenControl::SendValueToControl(TValue value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::OnScreen::OnScreenControl>::get(),
                        "SendValueToControl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::InputSystem::OnScreen::OnScreenControl::SentDefaultValueToControl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::OnScreen::OnScreenControl>::get(),
                            "SentDefaultValueToControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::OnScreen::OnScreenControl::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::OnScreen::OnScreenControl>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::OnScreen::OnScreenControl::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::OnScreen::OnScreenControl>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::OnScreen::OnScreenControl UnityEngine::InputSystem::OnScreen::OnScreenControl::New_ctor()  {
UnityEngine::InputSystem::OnScreen::OnScreenControl o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::OnScreen::OnScreenControl>())};
return o;
}
 void UnityEngine::InputSystem::OnScreen::OnScreenControl::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::OnScreen::OnScreenControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
