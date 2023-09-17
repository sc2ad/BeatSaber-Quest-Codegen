#pragma once
namespace {
#include "UnityEngine/InputSystem/Utilities/zzzz__ForDeviceEventObservable_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice::*)(::System::Type, ::UnityEngine::InputSystem::InputDevice, ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>)>(&::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2983428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice.OnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice::*)()>(&::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice::OnCompleted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2983464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice>::get(),
                            "OnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice.OnError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice::*)(::System::Exception)>(&::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice::OnError)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2983468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice>::get(),
                            "OnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice.OnNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice::OnNext)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x29834c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice>::get(),
                            "OnNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>
constexpr  ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice::operator ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() const noexcept {
return ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice::__set_m_Observer(::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr> value)  {
::cordl_internals::setInstanceField<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>>(value));
}
constexpr ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr> ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice::__get_m_Observer() const {
return ::cordl_internals::getInstanceField<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice::__set_m_Device(::UnityEngine::InputSystem::InputDevice value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputDevice, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::InputDevice>(value));
}
constexpr ::UnityEngine::InputSystem::InputDevice ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice::__get_m_Device() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputDevice, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice::__set_m_DeviceType(::System::Type value)  {
::cordl_internals::setInstanceField<::System::Type, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Type>(value));
}
constexpr ::System::Type ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice::__get_m_DeviceType() const {
return ::cordl_internals::getInstanceField<::System::Type, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "deviceType", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "device", ty: "::UnityEngine::InputSystem::InputDevice", modifiers: "", def_value: None }, CppParam { name: "observer", ty: "::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>", modifiers: "", def_value: None }]
 ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice(::System::Type deviceType, ::UnityEngine::InputSystem::InputDevice device, ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr> observer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice>(deviceType, device, observer))) {}
 void ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice::_ctor(::System::Type deviceType, ::UnityEngine::InputSystem::InputDevice device, ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr> observer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, deviceType, device, observer);
}
 void ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice::OnCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice>::get(),
                            "OnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice::OnError(::System::Exception error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice>::get(),
                            "OnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, error);
}
 void ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice::OnNext(::UnityEngine::InputSystem::LowLevel::InputEventPtr value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice>::get(),
                            "OnNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::*)(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>, ::System::Type, ::UnityEngine::InputSystem::InputDevice)>(&::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x29832fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable.Subscribe
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IDisposable (::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::*)(::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>)>(&::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::Subscribe)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2983338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable>::get(),
                            "Subscribe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>
constexpr  ::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::operator ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() const noexcept {
return ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::__set_m_Source(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr> value)  {
::cordl_internals::setInstanceField<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>>(value));
}
constexpr ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr> ::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::__get_m_Source() const {
return ::cordl_internals::getInstanceField<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::__set_m_Device(::UnityEngine::InputSystem::InputDevice value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputDevice, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::InputDevice>(value));
}
constexpr ::UnityEngine::InputSystem::InputDevice ::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::__get_m_Device() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputDevice, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::__set_m_DeviceType(::System::Type value)  {
::cordl_internals::setInstanceField<::System::Type, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Type>(value));
}
constexpr ::System::Type ::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::__get_m_DeviceType() const {
return ::cordl_internals::getInstanceField<::System::Type, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "source", ty: "::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>", modifiers: "", def_value: None }, CppParam { name: "deviceType", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "device", ty: "::UnityEngine::InputSystem::InputDevice", modifiers: "", def_value: None }]
 ::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::ForDeviceEventObservable(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr> source, ::System::Type deviceType, ::UnityEngine::InputSystem::InputDevice device)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ForDeviceEventObservable>(source, deviceType, device))) {}
 void ::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::_ctor(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr> source, ::System::Type deviceType, ::UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, source, deviceType, device);
}
 ::System::IDisposable ::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::Subscribe(::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr> observer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable>::get(),
                            "Subscribe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable, false>(const_cast<void*>(instance), ___internal_method, observer);
}
} // end anonymous namespace
