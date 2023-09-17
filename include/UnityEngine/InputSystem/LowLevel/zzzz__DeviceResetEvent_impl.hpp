#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/LowLevel/zzzz__DeviceResetEvent_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputEventTypeInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::DeviceResetEvent.get_typeStatic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::DeviceResetEvent::*)()>(&::UnityEngine::InputSystem::LowLevel::DeviceResetEvent::get_typeStatic)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2957300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DeviceResetEvent>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::DeviceResetEvent.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::DeviceResetEvent (*)(int32_t, bool, double_t)>(&::UnityEngine::InputSystem::LowLevel::DeviceResetEvent::Create)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2957320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DeviceResetEvent>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo
constexpr  ::UnityEngine::InputSystem::LowLevel::DeviceResetEvent::operator ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo() const {
return ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "baseEvent", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: Some("{}") }, CppParam { name: "hardReset", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::DeviceResetEvent::DeviceResetEvent(::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent, bool hardReset) noexcept : ::bs_hook::ValueTypeWrapper() {this->baseEvent = baseEvent;
this->hardReset = hardReset;
}
constexpr void ::UnityEngine::InputSystem::LowLevel::DeviceResetEvent::__set_baseEvent(::UnityEngine::InputSystem::LowLevel::InputEvent value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::LowLevel::InputEvent, 0x0>(this->__instance, std::forward<::UnityEngine::InputSystem::LowLevel::InputEvent>(value));
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent ::UnityEngine::InputSystem::LowLevel::DeviceResetEvent::__get_baseEvent() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::LowLevel::InputEvent, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::LowLevel::DeviceResetEvent::__set_hardReset(bool value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::InputSystem::LowLevel::DeviceResetEvent::__get_hardReset() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->__instance);
}
 ::UnityEngine::InputSystem::Utilities::FourCC ::UnityEngine::InputSystem::LowLevel::DeviceResetEvent::get_typeStatic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DeviceResetEvent>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
/// @param hardReset: bool (default: false)
/// @param time: double_t (default: -1)
 ::UnityEngine::InputSystem::LowLevel::DeviceResetEvent ::UnityEngine::InputSystem::LowLevel::DeviceResetEvent::Create(int32_t deviceId, bool hardReset, double_t time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DeviceResetEvent>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::DeviceResetEvent, false>(nullptr, ___internal_method, deviceId, hardReset, time);
}
} // end anonymous namespace
