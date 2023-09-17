#pragma once
namespace {
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputState_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateChangeMonitor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate.NotifyControlStateChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate::*)(::UnityEngine::InputSystem::InputControl, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t)>(&::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate::NotifyControlStateChanged)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x295fcdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate>::get(),
                            "NotifyControlStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate.NotifyTimerExpired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate::*)(::UnityEngine::InputSystem::InputControl, double_t, int64_t, int32_t)>(&::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate::NotifyTimerExpired)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x295fd00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate>::get(),
                            "NotifyTimerExpired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate::*)()>(&::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x295fa18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor
constexpr  ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate::operator ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor() const noexcept {
return ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate::__set_valueChangeCallback(::System::Action_4<::UnityEngine::InputSystem::InputControl,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,int64_t> value)  {
::cordl_internals::setInstanceField<::System::Action_4<::UnityEngine::InputSystem::InputControl,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,int64_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_4<::UnityEngine::InputSystem::InputControl,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,int64_t>>(value));
}
constexpr ::System::Action_4<::UnityEngine::InputSystem::InputControl,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,int64_t> ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate::__get_valueChangeCallback() const {
return ::cordl_internals::getInstanceField<::System::Action_4<::UnityEngine::InputSystem::InputControl,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,int64_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate::__set_timerExpiredCallback(::System::Action_4<::UnityEngine::InputSystem::InputControl,double_t,int64_t,int32_t> value)  {
::cordl_internals::setInstanceField<::System::Action_4<::UnityEngine::InputSystem::InputControl,double_t,int64_t,int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_4<::UnityEngine::InputSystem::InputControl,double_t,int64_t,int32_t>>(value));
}
constexpr ::System::Action_4<::UnityEngine::InputSystem::InputControl,double_t,int64_t,int32_t> ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate::__get_timerExpiredCallback() const {
return ::cordl_internals::getInstanceField<::System::Action_4<::UnityEngine::InputSystem::InputControl,double_t,int64_t,int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate::NotifyControlStateChanged(::UnityEngine::InputSystem::InputControl control, double_t time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, int64_t monitorIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate>::get(),
                            "NotifyControlStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, control, time, eventPtr, monitorIndex);
}
 void ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate::NotifyTimerExpired(::UnityEngine::InputSystem::InputControl control, double_t time, int64_t monitorIndex, int32_t timerIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate>::get(),
                            "NotifyTimerExpired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, control, time, monitorIndex, timerIndex);
}
// Ctor Parameters []
 ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate::____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate>())) {}
 void ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.get_currentUpdateType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputUpdateType (*)()>(&::UnityEngine::InputSystem::LowLevel::InputState::get_currentUpdateType)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x295f21c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState>::get(),
                            "get_currentUpdateType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.get_updateCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)()>(&::UnityEngine::InputSystem::LowLevel::InputState::get_updateCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x295f264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState>::get(),
                            "get_updateCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.get_currentTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)()>(&::UnityEngine::InputSystem::LowLevel::InputState::get_currentTime)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2952b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState>::get(),
                            "get_currentTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.add_onChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::LowLevel::InputEventPtr>)>(&::UnityEngine::InputSystem::LowLevel::InputState::add_onChange)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x295f2ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState>::get(),
                            "add_onChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.remove_onChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::LowLevel::InputEventPtr>)>(&::UnityEngine::InputSystem::LowLevel::InputState::remove_onChange)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x295f318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState>::get(),
                            "remove_onChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.Change
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&::UnityEngine::InputSystem::LowLevel::InputState::Change)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x295f384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState>::get(),
                            "Change",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.IsIntegerFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::Utilities::FourCC)>(&::UnityEngine::InputSystem::LowLevel::InputState::IsIntegerFormat)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x295f5f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState>::get(),
                            "IsIntegerFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::FourCC>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.AddChangeMonitor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor, int64_t, uint32_t)>(&::UnityEngine::InputSystem::LowLevel::InputState::AddChangeMonitor)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x295f7c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState>::get(),
                            "AddChangeMonitor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.AddChangeMonitor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor (*)(::UnityEngine::InputSystem::InputControl, ::System::Action_4<::UnityEngine::InputSystem::InputControl,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,int64_t>, int32_t, ::System::Action_4<::UnityEngine::InputSystem::InputControl,double_t,int64_t,int32_t>)>(&::UnityEngine::InputSystem::LowLevel::InputState::AddChangeMonitor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x295f93c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState>::get(),
                            "AddChangeMonitor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::UnityEngine::InputSystem::InputControl,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::UnityEngine::InputSystem::InputControl,double_t,int64_t,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.RemoveChangeMonitor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor, int64_t)>(&::UnityEngine::InputSystem::LowLevel::InputState::RemoveChangeMonitor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x295fa20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState>::get(),
                            "RemoveChangeMonitor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.AddChangeMonitorTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor, double_t, int64_t, int32_t)>(&::UnityEngine::InputSystem::LowLevel::InputState::AddChangeMonitorTimeout)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x295fb1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState>::get(),
                            "AddChangeMonitorTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.RemoveChangeMonitorTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor, int64_t, int32_t)>(&::UnityEngine::InputSystem::LowLevel::InputState::RemoveChangeMonitorTimeout)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x295fc08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState>::get(),
                            "RemoveChangeMonitorTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 ::UnityEngine::InputSystem::LowLevel::InputUpdateType ::UnityEngine::InputSystem::LowLevel::InputState::get_currentUpdateType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState>::get(),
                            "get_currentUpdateType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputUpdateType, false>(nullptr, ___internal_method);
}
 uint32_t ::UnityEngine::InputSystem::LowLevel::InputState::get_updateCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState>::get(),
                            "get_updateCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method);
}
 double_t ::UnityEngine::InputSystem::LowLevel::InputState::get_currentTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState>::get(),
                            "get_currentTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method);
}
 void ::UnityEngine::InputSystem::LowLevel::InputState::add_onChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::LowLevel::InputEventPtr> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState>::get(),
                            "add_onChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::UnityEngine::InputSystem::LowLevel::InputState::remove_onChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::LowLevel::InputEventPtr> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState>::get(),
                            "remove_onChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
/// @param updateType: ::UnityEngine::InputSystem::LowLevel::InputUpdateType (default: 0)
 void ::UnityEngine::InputSystem::LowLevel::InputState::Change(::UnityEngine::InputSystem::InputDevice device, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState>::get(),
                            "Change",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, eventPtr, updateType);
}
/// @param updateType: ::UnityEngine::InputSystem::LowLevel::InputUpdateType (default: 0)
/// @param eventPtr: ::UnityEngine::InputSystem::LowLevel::InputEventPtr (default: {})
template<typename TState>
 void ::UnityEngine::InputSystem::LowLevel::InputState::Change(::UnityEngine::InputSystem::InputControl control, TState state, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState>::get(),
                        "Change",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, state, updateType, eventPtr);
}
/// @param updateType: ::UnityEngine::InputSystem::LowLevel::InputUpdateType (default: 0)
/// @param eventPtr: ::UnityEngine::InputSystem::LowLevel::InputEventPtr (default: {})
template<typename TState>
 void ::UnityEngine::InputSystem::LowLevel::InputState::Change(::UnityEngine::InputSystem::InputControl control, ByRef<TState> state, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState>::get(),
                        "Change",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, state, updateType, eventPtr);
}
 bool ::UnityEngine::InputSystem::LowLevel::InputState::IsIntegerFormat(::UnityEngine::InputSystem::Utilities::FourCC format)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState>::get(),
                            "IsIntegerFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::FourCC>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, format);
}
/// @param monitorIndex: int64_t (default: -1)
/// @param groupIndex: uint32_t (default: 0u)
 void ::UnityEngine::InputSystem::LowLevel::InputState::AddChangeMonitor(::UnityEngine::InputSystem::InputControl control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor monitor, int64_t monitorIndex, uint32_t groupIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState>::get(),
                            "AddChangeMonitor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, monitor, monitorIndex, groupIndex);
}
/// @param monitorIndex: int32_t (default: -1)
/// @param timerExpiredCallback: ::System::Action_4<::UnityEngine::InputSystem::InputControl,double_t,int64_t,int32_t> (default: csnull)
 ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor ::UnityEngine::InputSystem::LowLevel::InputState::AddChangeMonitor(::UnityEngine::InputSystem::InputControl control, ::System::Action_4<::UnityEngine::InputSystem::InputControl,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,int64_t> valueChangeCallback, int32_t monitorIndex, ::System::Action_4<::UnityEngine::InputSystem::InputControl,double_t,int64_t,int32_t> timerExpiredCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState>::get(),
                            "AddChangeMonitor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::UnityEngine::InputSystem::InputControl,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::UnityEngine::InputSystem::InputControl,double_t,int64_t,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor, false>(nullptr, ___internal_method, control, valueChangeCallback, monitorIndex, timerExpiredCallback);
}
/// @param monitorIndex: int64_t (default: -1)
 void ::UnityEngine::InputSystem::LowLevel::InputState::RemoveChangeMonitor(::UnityEngine::InputSystem::InputControl control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor monitor, int64_t monitorIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState>::get(),
                            "RemoveChangeMonitor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, monitor, monitorIndex);
}
/// @param monitorIndex: int64_t (default: -1)
/// @param timerIndex: int32_t (default: -1)
 void ::UnityEngine::InputSystem::LowLevel::InputState::AddChangeMonitorTimeout(::UnityEngine::InputSystem::InputControl control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor monitor, double_t time, int64_t monitorIndex, int32_t timerIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState>::get(),
                            "AddChangeMonitorTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, monitor, time, monitorIndex, timerIndex);
}
/// @param monitorIndex: int64_t (default: -1)
/// @param timerIndex: int32_t (default: -1)
 void ::UnityEngine::InputSystem::LowLevel::InputState::RemoveChangeMonitorTimeout(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor monitor, int64_t monitorIndex, int32_t timerIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState>::get(),
                            "RemoveChangeMonitorTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, monitor, monitorIndex, timerIndex);
}
} // end anonymous namespace
