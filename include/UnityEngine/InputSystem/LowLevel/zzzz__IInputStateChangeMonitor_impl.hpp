#pragma once
namespace {
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateChangeMonitor_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor.NotifyControlStateChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor::*)(::UnityEngine::InputSystem::InputControl, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t)>(&::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor::NotifyControlStateChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor.NotifyTimerExpired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor::*)(::UnityEngine::InputSystem::InputControl, double_t, int64_t, int32_t)>(&::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor::NotifyTimerExpired)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 void ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor::NotifyControlStateChanged(::UnityEngine::InputSystem::InputControl control, double_t time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, int64_t monitorIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor>::get(),
                            "NotifyControlStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, control, time, eventPtr, monitorIndex);
}
 void ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor::NotifyTimerExpired(::UnityEngine::InputSystem::InputControl control, double_t time, int64_t monitorIndex, int32_t timerIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor>::get(),
                            "NotifyTimerExpired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, control, time, monitorIndex, timerIndex);
}
} // end anonymous namespace
