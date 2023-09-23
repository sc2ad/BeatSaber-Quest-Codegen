#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingResolver_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionPhase_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ISavedState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDeviceChange_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputInteraction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateChangeMonitor_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__SavedStructState_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::UnityEngine__InputSystem__InputActionState__InteractionState__Flags::UnityEngine__InputSystem__InputActionState__InteractionState__Flags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__InputActionState__InteractionState__Flags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::UnityEngine__InputSystem__InputActionState__InteractionState__Flags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::UnityEngine__InputSystem__InputActionState__InteractionState__Flags  GlobalNamespace::UnityEngine__InputSystem__InputActionState__InteractionState__Flags::TimerRunning{1};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState.get_triggerControlIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::get_triggerControlIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28bc0d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "get_triggerControlIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState.set_triggerControlIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::*)(int32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::set_triggerControlIndex)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x28bcef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "set_triggerControlIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState.get_startTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::get_startTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c1a9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "get_startTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState.set_startTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::*)(double_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::set_startTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c1aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "set_startTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState.get_performedTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::get_performedTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c1aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "get_performedTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState.set_performedTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::*)(double_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::set_performedTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c1ab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "set_performedTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState.get_timerStartTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::get_timerStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c1abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "get_timerStartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState.set_timerStartTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::*)(double_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::set_timerStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c1ac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "set_timerStartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState.get_timerDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::get_timerDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c1acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "get_timerDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState.set_timerDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::*)(float_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::set_timerDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c1ad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "set_timerDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState.get_totalTimeoutCompletionDone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::get_totalTimeoutCompletionDone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c1adc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "get_totalTimeoutCompletionDone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState.set_totalTimeoutCompletionDone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::*)(float_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::set_totalTimeoutCompletionDone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c1ae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "set_totalTimeoutCompletionDone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState.get_totalTimeoutCompletionTimeRemaining
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::get_totalTimeoutCompletionTimeRemaining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c1aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "get_totalTimeoutCompletionTimeRemaining",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState.set_totalTimeoutCompletionTimeRemaining
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::*)(float_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::set_totalTimeoutCompletionTimeRemaining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c1af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "set_totalTimeoutCompletionTimeRemaining",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState.get_timerMonitorIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::get_timerMonitorIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c1afc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "get_timerMonitorIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState.set_timerMonitorIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::*)(int64_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::set_timerMonitorIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c1b04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "set_timerMonitorIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState.get_isTimerRunning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::get_isTimerRunning)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28bcf68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "get_isTimerRunning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState.set_isTimerRunning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::*)(bool)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::set_isTimerRunning)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28bf5b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "set_isTimerRunning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState.get_phase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputActionPhase (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::get_phase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c1b0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "get_phase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState.set_phase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::*)(UnityEngine::InputSystem::InputActionPhase)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::set_phase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28bceec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "set_phase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionPhase>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_TriggerControlIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Phase", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Flags", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TimerDuration", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StartTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TimerStartTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PerformedTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TotalTimeoutCompletionTimeDone", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TotalTimeoutCompletionTimeRemaining", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TimerMonitorIndex", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::UnityEngine__InputSystem__InputActionState__InteractionState(uint16_t m_TriggerControlIndex, uint8_t m_Phase, uint8_t m_Flags, float_t m_TimerDuration, double_t m_StartTime, double_t m_TimerStartTime, double_t m_PerformedTime, float_t m_TotalTimeoutCompletionTimeDone, float_t m_TotalTimeoutCompletionTimeRemaining, int64_t m_TimerMonitorIndex) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_TriggerControlIndex = m_TriggerControlIndex;
this->m_Phase = m_Phase;
this->m_Flags = m_Flags;
this->m_TimerDuration = m_TimerDuration;
this->m_StartTime = m_StartTime;
this->m_TimerStartTime = m_TimerStartTime;
this->m_PerformedTime = m_PerformedTime;
this->m_TotalTimeoutCompletionTimeDone = m_TotalTimeoutCompletionTimeDone;
this->m_TotalTimeoutCompletionTimeRemaining = m_TotalTimeoutCompletionTimeRemaining;
this->m_TimerMonitorIndex = m_TimerMonitorIndex;
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::__set_m_TriggerControlIndex(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x0>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::__get_m_TriggerControlIndex() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::__set_m_Phase(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x2>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::__get_m_Phase() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x2>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::__set_m_Flags(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x3>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::__get_m_Flags() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x3>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::__set_m_TimerDuration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::__get_m_TimerDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::__set_m_StartTime(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x8>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::__get_m_StartTime() const {
return ::cordl_internals::getInstanceField<double_t, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::__set_m_TimerStartTime(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x10>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::__get_m_TimerStartTime() const {
return ::cordl_internals::getInstanceField<double_t, 0x10>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::__set_m_PerformedTime(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x18>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::__get_m_PerformedTime() const {
return ::cordl_internals::getInstanceField<double_t, 0x18>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::__set_m_TotalTimeoutCompletionTimeDone(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::__get_m_TotalTimeoutCompletionTimeDone() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::__set_m_TotalTimeoutCompletionTimeRemaining(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::__get_m_TotalTimeoutCompletionTimeRemaining() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::__set_m_TimerMonitorIndex(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x28>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::__get_m_TimerMonitorIndex() const {
return ::cordl_internals::getInstanceField<int64_t, 0x28>(this->__instance);
}
 int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::get_triggerControlIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "get_triggerControlIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::set_triggerControlIndex(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "set_triggerControlIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 double_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::get_startTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "get_startTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::set_startTime(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "set_startTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 double_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::get_performedTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "get_performedTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::set_performedTime(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "set_performedTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 double_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::get_timerStartTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "get_timerStartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::set_timerStartTime(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "set_timerStartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 float_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::get_timerDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "get_timerDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::set_timerDuration(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "set_timerDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 float_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::get_totalTimeoutCompletionDone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "get_totalTimeoutCompletionDone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::set_totalTimeoutCompletionDone(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "set_totalTimeoutCompletionDone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 float_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::get_totalTimeoutCompletionTimeRemaining()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "get_totalTimeoutCompletionTimeRemaining",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::set_totalTimeoutCompletionTimeRemaining(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "set_totalTimeoutCompletionTimeRemaining",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 int64_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::get_timerMonitorIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "get_timerMonitorIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::set_timerMonitorIndex(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "set_timerMonitorIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::get_isTimerRunning()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "get_isTimerRunning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::set_isTimerRunning(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "set_isTimerRunning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::InputSystem::InputActionPhase UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::get_phase()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "get_phase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputActionPhase, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState::set_phase(UnityEngine::InputSystem::InputActionPhase value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__InteractionState>::get(),
                            "set_phase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionPhase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::UnityEngine__InputSystem__InputActionState__BindingState__Flags::UnityEngine__InputSystem__InputActionState__BindingState__Flags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__InputActionState__BindingState__Flags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::UnityEngine__InputSystem__InputActionState__BindingState__Flags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::UnityEngine__InputSystem__InputActionState__BindingState__Flags  GlobalNamespace::UnityEngine__InputSystem__InputActionState__BindingState__Flags::ChainsWithNext{1};
constexpr GlobalNamespace::UnityEngine__InputSystem__InputActionState__BindingState__Flags  GlobalNamespace::UnityEngine__InputSystem__InputActionState__BindingState__Flags::EndOfChain{2};
constexpr GlobalNamespace::UnityEngine__InputSystem__InputActionState__BindingState__Flags  GlobalNamespace::UnityEngine__InputSystem__InputActionState__BindingState__Flags::Composite{4};
constexpr GlobalNamespace::UnityEngine__InputSystem__InputActionState__BindingState__Flags  GlobalNamespace::UnityEngine__InputSystem__InputActionState__BindingState__Flags::PartOfComposite{8};
constexpr GlobalNamespace::UnityEngine__InputSystem__InputActionState__BindingState__Flags  GlobalNamespace::UnityEngine__InputSystem__InputActionState__BindingState__Flags::InitialStateCheckPending{16};
constexpr GlobalNamespace::UnityEngine__InputSystem__InputActionState__BindingState__Flags  GlobalNamespace::UnityEngine__InputSystem__InputActionState__BindingState__Flags::WantsInitialStateCheck{32};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.get_controlStartIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_controlStartIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c1b14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_controlStartIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.set_controlStartIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)(int32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_controlStartIndex)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x28c1b1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_controlStartIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.get_controlCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_controlCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c1bb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_controlCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.set_controlCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)(int32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_controlCount)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x28c1bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_controlCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.get_interactionStartIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_interactionStartIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28bc0bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_interactionStartIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.set_interactionStartIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)(int32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_interactionStartIndex)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x28c1c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_interactionStartIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.get_interactionCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_interactionCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c1cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_interactionCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.set_interactionCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)(int32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_interactionCount)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x28c1d04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_interactionCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.get_processorStartIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_processorStartIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28c04fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_processorStartIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.set_processorStartIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)(int32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_processorStartIndex)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x28c1d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_processorStartIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.get_processorCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_processorCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c1e44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_processorCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.set_processorCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)(int32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_processorCount)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x28c1e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_processorCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.get_actionIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_actionIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28bcba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_actionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.set_actionIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)(int32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_actionIndex)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x28c1ee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_actionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.get_mapIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_mapIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c1f8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_mapIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.set_mapIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)(int32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_mapIndex)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x28c1f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_mapIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.get_compositeOrCompositeBindingIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_compositeOrCompositeBindingIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28bae7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_compositeOrCompositeBindingIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.set_compositeOrCompositeBindingIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)(int32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_compositeOrCompositeBindingIndex)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x28c202c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_compositeOrCompositeBindingIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.get_triggerEventIdForComposite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_triggerEventIdForComposite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c20d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_triggerEventIdForComposite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.set_triggerEventIdForComposite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)(int32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_triggerEventIdForComposite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c20dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_triggerEventIdForComposite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.get_pressTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_pressTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c20e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_pressTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.set_pressTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)(double_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_pressTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c20ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_pressTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.get_flags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::UnityEngine__InputSystem__InputActionState__BindingState__Flags (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c20f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.set_flags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)(GlobalNamespace::UnityEngine__InputSystem__InputActionState__BindingState__Flags)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c20fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::UnityEngine__InputSystem__InputActionState__BindingState__Flags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.get_chainsWithNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_chainsWithNext)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28c2104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_chainsWithNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.set_chainsWithNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)(bool)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_chainsWithNext)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28c2110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_chainsWithNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.get_isEndOfChain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_isEndOfChain)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28c212c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_isEndOfChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.set_isEndOfChain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)(bool)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_isEndOfChain)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28c2138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_isEndOfChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.get_isPartOfChain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_isPartOfChain)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28c2154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_isPartOfChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.get_isComposite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_isComposite)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28bba90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_isComposite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.set_isComposite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)(bool)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_isComposite)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28c2164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_isComposite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.get_isPartOfComposite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_isPartOfComposite)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28bae70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_isPartOfComposite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.set_isPartOfComposite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)(bool)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_isPartOfComposite)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28c2180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_isPartOfComposite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.get_initialStateCheckPending
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_initialStateCheckPending)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28be15c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_initialStateCheckPending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.set_initialStateCheckPending
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)(bool)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_initialStateCheckPending)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28bcbd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_initialStateCheckPending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.get_wantsInitialStateCheck
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_wantsInitialStateCheck)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28bcbcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_wantsInitialStateCheck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.set_wantsInitialStateCheck
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)(bool)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_wantsInitialStateCheck)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28c219c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_wantsInitialStateCheck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.get_partIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_partIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c21b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_partIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState.set_partIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::*)(int32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_partIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c21c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_partIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_ControlCount", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InteractionCount", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ProcessorCount", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MapIndex", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Flags", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PartIndex", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ActionIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CompositeOrCompositeBindingIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ProcessorStartIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InteractionStartIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ControlStartIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PressTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TriggerEventIdForComposite", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__padding", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::UnityEngine__InputSystem__InputActionState__BindingState(uint8_t m_ControlCount, uint8_t m_InteractionCount, uint8_t m_ProcessorCount, uint8_t m_MapIndex, uint8_t m_Flags, uint8_t m_PartIndex, uint16_t m_ActionIndex, uint16_t m_CompositeOrCompositeBindingIndex, uint16_t m_ProcessorStartIndex, uint16_t m_InteractionStartIndex, uint16_t m_ControlStartIndex, double_t m_PressTime, int32_t m_TriggerEventIdForComposite, int32_t __padding) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_ControlCount = m_ControlCount;
this->m_InteractionCount = m_InteractionCount;
this->m_ProcessorCount = m_ProcessorCount;
this->m_MapIndex = m_MapIndex;
this->m_Flags = m_Flags;
this->m_PartIndex = m_PartIndex;
this->m_ActionIndex = m_ActionIndex;
this->m_CompositeOrCompositeBindingIndex = m_CompositeOrCompositeBindingIndex;
this->m_ProcessorStartIndex = m_ProcessorStartIndex;
this->m_InteractionStartIndex = m_InteractionStartIndex;
this->m_ControlStartIndex = m_ControlStartIndex;
this->m_PressTime = m_PressTime;
this->m_TriggerEventIdForComposite = m_TriggerEventIdForComposite;
this->__padding = __padding;
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::__set_m_ControlCount(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::__get_m_ControlCount() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::__set_m_InteractionCount(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x1>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::__get_m_InteractionCount() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x1>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::__set_m_ProcessorCount(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x2>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::__get_m_ProcessorCount() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x2>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::__set_m_MapIndex(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x3>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::__get_m_MapIndex() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x3>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::__set_m_Flags(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x4>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::__get_m_Flags() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x4>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::__set_m_PartIndex(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x5>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::__get_m_PartIndex() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x5>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::__set_m_ActionIndex(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x6>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::__get_m_ActionIndex() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x6>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::__set_m_CompositeOrCompositeBindingIndex(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x8>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::__get_m_CompositeOrCompositeBindingIndex() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::__set_m_ProcessorStartIndex(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0xa>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::__get_m_ProcessorStartIndex() const {
return ::cordl_internals::getInstanceField<uint16_t, 0xa>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::__set_m_InteractionStartIndex(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0xc>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::__get_m_InteractionStartIndex() const {
return ::cordl_internals::getInstanceField<uint16_t, 0xc>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::__set_m_ControlStartIndex(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0xe>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::__get_m_ControlStartIndex() const {
return ::cordl_internals::getInstanceField<uint16_t, 0xe>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::__set_m_PressTime(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x10>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::__get_m_PressTime() const {
return ::cordl_internals::getInstanceField<double_t, 0x10>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::__set_m_TriggerEventIdForComposite(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::__get_m_TriggerEventIdForComposite() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::__set___padding(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::__get___padding() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->__instance);
}
 int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_controlStartIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_controlStartIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_controlStartIndex(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_controlStartIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_controlCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_controlCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_controlCount(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_controlCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_interactionStartIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_interactionStartIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_interactionStartIndex(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_interactionStartIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_interactionCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_interactionCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_interactionCount(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_interactionCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_processorStartIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_processorStartIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_processorStartIndex(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_processorStartIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_processorCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_processorCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_processorCount(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_processorCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_actionIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_actionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_actionIndex(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_actionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_mapIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_mapIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_mapIndex(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_mapIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_compositeOrCompositeBindingIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_compositeOrCompositeBindingIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_compositeOrCompositeBindingIndex(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_compositeOrCompositeBindingIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_triggerEventIdForComposite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_triggerEventIdForComposite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_triggerEventIdForComposite(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_triggerEventIdForComposite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 double_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_pressTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_pressTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_pressTime(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_pressTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 GlobalNamespace::UnityEngine__InputSystem__InputActionState__BindingState__Flags UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_flags()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::UnityEngine__InputSystem__InputActionState__BindingState__Flags, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_flags(GlobalNamespace::UnityEngine__InputSystem__InputActionState__BindingState__Flags value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::UnityEngine__InputSystem__InputActionState__BindingState__Flags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_chainsWithNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_chainsWithNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_chainsWithNext(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_chainsWithNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_isEndOfChain()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_isEndOfChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_isEndOfChain(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_isEndOfChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_isPartOfChain()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_isPartOfChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_isComposite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_isComposite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_isComposite(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_isComposite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_isPartOfComposite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_isPartOfComposite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_isPartOfComposite(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_isPartOfComposite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_initialStateCheckPending()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_initialStateCheckPending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_initialStateCheckPending(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_initialStateCheckPending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_wantsInitialStateCheck()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_wantsInitialStateCheck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_wantsInitialStateCheck(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_wantsInitialStateCheck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::get_partIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "get_partIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState::set_partIndex(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>::get(),
                            "set_partIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::UnityEngine__InputSystem__InputActionState__TriggerState__Flags::UnityEngine__InputSystem__InputActionState__TriggerState__Flags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__InputActionState__TriggerState__Flags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::UnityEngine__InputSystem__InputActionState__TriggerState__Flags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::UnityEngine__InputSystem__InputActionState__TriggerState__Flags  GlobalNamespace::UnityEngine__InputSystem__InputActionState__TriggerState__Flags::HaveMagnitude{1};
constexpr GlobalNamespace::UnityEngine__InputSystem__InputActionState__TriggerState__Flags  GlobalNamespace::UnityEngine__InputSystem__InputActionState__TriggerState__Flags::PassThrough{2};
constexpr GlobalNamespace::UnityEngine__InputSystem__InputActionState__TriggerState__Flags  GlobalNamespace::UnityEngine__InputSystem__InputActionState__TriggerState__Flags::MayNeedConflictResolution{4};
constexpr GlobalNamespace::UnityEngine__InputSystem__InputActionState__TriggerState__Flags  GlobalNamespace::UnityEngine__InputSystem__InputActionState__TriggerState__Flags::HasMultipleConcurrentActuations{8};
constexpr GlobalNamespace::UnityEngine__InputSystem__InputActionState__TriggerState__Flags  GlobalNamespace::UnityEngine__InputSystem__InputActionState__TriggerState__Flags::InProcessing{16};
constexpr GlobalNamespace::UnityEngine__InputSystem__InputActionState__TriggerState__Flags  GlobalNamespace::UnityEngine__InputSystem__InputActionState__TriggerState__Flags::Button{32};
constexpr GlobalNamespace::UnityEngine__InputSystem__InputActionState__TriggerState__Flags  GlobalNamespace::UnityEngine__InputSystem__InputActionState__TriggerState__Flags::Pressed{64};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.get_phase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputActionPhase (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_phase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c21c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_phase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.set_phase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)(UnityEngine::InputSystem::InputActionPhase)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_phase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28bcba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_phase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionPhase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.get_isDisabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_isDisabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28bcbbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_isDisabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.get_isWaiting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_isWaiting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28c21d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_isWaiting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.get_isStarted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_isStarted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28c21e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_isStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.get_isPerformed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_isPerformed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28c21f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_isPerformed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.get_isCanceled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_isCanceled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28c2200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_isCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.get_time
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c2210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.set_time
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)(double_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c2218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.get_startTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_startTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c2220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_startTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.set_startTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)(double_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_startTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c2228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_startTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.get_magnitude
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_magnitude)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c2230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_magnitude",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.set_magnitude
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)(float_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_magnitude)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28bce50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_magnitude",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.get_haveMagnitude
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_haveMagnitude)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28c2238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_haveMagnitude",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.get_mapIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_mapIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c2244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_mapIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.set_mapIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)(int32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_mapIndex)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x28bcf74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_mapIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.get_controlIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_controlIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28bc0a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_controlIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.set_controlIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)(int32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_controlIndex)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x28bcddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_controlIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.get_bindingIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_bindingIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c224c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_bindingIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.set_bindingIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)(int32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_bindingIndex)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x28bcfd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_bindingIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.get_interactionIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_interactionIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28bce64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_interactionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.set_interactionIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)(int32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_interactionIndex)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x28bce78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_interactionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.get_lastPerformedInUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_lastPerformedInUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c2254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_lastPerformedInUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.set_lastPerformedInUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)(uint32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_lastPerformedInUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c225c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_lastPerformedInUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.get_lastCanceledInUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_lastCanceledInUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c2264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_lastCanceledInUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.set_lastCanceledInUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)(uint32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_lastCanceledInUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c226c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_lastCanceledInUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.get_pressedInUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_pressedInUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c2274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_pressedInUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.set_pressedInUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)(uint32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_pressedInUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c227c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_pressedInUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.get_releasedInUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_releasedInUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c2284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_releasedInUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.set_releasedInUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)(uint32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_releasedInUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c228c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_releasedInUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.get_isPassThrough
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_isPassThrough)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28bd648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_isPassThrough",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.set_isPassThrough
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)(bool)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_isPassThrough)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28be970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_isPassThrough",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.get_isButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_isButton)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28be98c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_isButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.set_isButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)(bool)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_isButton)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28be998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_isButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.get_isPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_isPressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28bf4ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_isPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.set_isPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)(bool)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_isPressed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28bda10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_isPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.get_mayNeedConflictResolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_mayNeedConflictResolution)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28bf4f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_mayNeedConflictResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.set_mayNeedConflictResolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)(bool)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_mayNeedConflictResolution)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28c2294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_mayNeedConflictResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.get_hasMultipleConcurrentActuations
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_hasMultipleConcurrentActuations)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28bf504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_hasMultipleConcurrentActuations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.set_hasMultipleConcurrentActuations
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)(bool)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_hasMultipleConcurrentActuations)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28bd9d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_hasMultipleConcurrentActuations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.get_inProcessing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_inProcessing)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28bfd38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_inProcessing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.set_inProcessing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)(bool)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_inProcessing)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28bd9f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_inProcessing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.get_flags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::UnityEngine__InputSystem__InputActionState__TriggerState__Flags (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c22b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState.set_flags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::*)(GlobalNamespace::UnityEngine__InputSystem__InputActionState__TriggerState__Flags)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28bfd44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::UnityEngine__InputSystem__InputActionState__TriggerState__Flags>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_Phase", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Flags", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MapIndex", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ControlIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Time", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StartTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BindingIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InteractionIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Magnitude", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LastPerformedInUpdate", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LastCanceledInUpdate", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PressedInUpdate", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ReleasedInUpdate", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::UnityEngine__InputSystem__InputActionState__TriggerState(uint8_t m_Phase, uint8_t m_Flags, uint8_t m_MapIndex, uint16_t m_ControlIndex, double_t m_Time, double_t m_StartTime, uint16_t m_BindingIndex, uint16_t m_InteractionIndex, float_t m_Magnitude, uint32_t m_LastPerformedInUpdate, uint32_t m_LastCanceledInUpdate, uint32_t m_PressedInUpdate, uint32_t m_ReleasedInUpdate) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Phase = m_Phase;
this->m_Flags = m_Flags;
this->m_MapIndex = m_MapIndex;
this->m_ControlIndex = m_ControlIndex;
this->m_Time = m_Time;
this->m_StartTime = m_StartTime;
this->m_BindingIndex = m_BindingIndex;
this->m_InteractionIndex = m_InteractionIndex;
this->m_Magnitude = m_Magnitude;
this->m_LastPerformedInUpdate = m_LastPerformedInUpdate;
this->m_LastCanceledInUpdate = m_LastCanceledInUpdate;
this->m_PressedInUpdate = m_PressedInUpdate;
this->m_ReleasedInUpdate = m_ReleasedInUpdate;
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::__set_m_Phase(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::__get_m_Phase() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::__set_m_Flags(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x1>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::__get_m_Flags() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x1>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::__set_m_MapIndex(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x2>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::__get_m_MapIndex() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x2>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::__set_m_ControlIndex(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x4>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::__get_m_ControlIndex() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x4>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::__set_m_Time(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x8>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::__get_m_Time() const {
return ::cordl_internals::getInstanceField<double_t, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::__set_m_StartTime(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x10>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::__get_m_StartTime() const {
return ::cordl_internals::getInstanceField<double_t, 0x10>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::__set_m_BindingIndex(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x18>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::__get_m_BindingIndex() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x18>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::__set_m_InteractionIndex(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x1a>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::__get_m_InteractionIndex() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x1a>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::__set_m_Magnitude(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::__get_m_Magnitude() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::__set_m_LastPerformedInUpdate(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x20>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::__get_m_LastPerformedInUpdate() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x20>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::__set_m_LastCanceledInUpdate(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x24>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::__get_m_LastCanceledInUpdate() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x24>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::__set_m_PressedInUpdate(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x28>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::__get_m_PressedInUpdate() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x28>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::__set_m_ReleasedInUpdate(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x2c>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::__get_m_ReleasedInUpdate() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x2c>(this->__instance);
}
 UnityEngine::InputSystem::InputActionPhase UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_phase()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_phase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputActionPhase, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_phase(UnityEngine::InputSystem::InputActionPhase value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_phase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionPhase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_isDisabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_isDisabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_isWaiting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_isWaiting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_isStarted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_isStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_isPerformed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_isPerformed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_isCanceled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_isCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 double_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_time()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_time(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 double_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_startTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_startTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_startTime(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_startTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 float_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_magnitude()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_magnitude",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_magnitude(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_magnitude",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_haveMagnitude()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_haveMagnitude",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_mapIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_mapIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_mapIndex(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_mapIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_controlIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_controlIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_controlIndex(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_controlIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_bindingIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_bindingIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_bindingIndex(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_bindingIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_interactionIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_interactionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_interactionIndex(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_interactionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 uint32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_lastPerformedInUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_lastPerformedInUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_lastPerformedInUpdate(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_lastPerformedInUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 uint32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_lastCanceledInUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_lastCanceledInUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_lastCanceledInUpdate(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_lastCanceledInUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 uint32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_pressedInUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_pressedInUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_pressedInUpdate(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_pressedInUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 uint32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_releasedInUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_releasedInUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_releasedInUpdate(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_releasedInUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_isPassThrough()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_isPassThrough",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_isPassThrough(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_isPassThrough",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_isButton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_isButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_isButton(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_isButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_isPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_isPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_isPressed(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_isPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_mayNeedConflictResolution()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_mayNeedConflictResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_mayNeedConflictResolution(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_mayNeedConflictResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_hasMultipleConcurrentActuations()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_hasMultipleConcurrentActuations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_hasMultipleConcurrentActuations(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_hasMultipleConcurrentActuations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_inProcessing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_inProcessing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_inProcessing(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_inProcessing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 GlobalNamespace::UnityEngine__InputSystem__InputActionState__TriggerState__Flags UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::get_flags()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "get_flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::UnityEngine__InputSystem__InputActionState__TriggerState__Flags, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState::set_flags(GlobalNamespace::UnityEngine__InputSystem__InputActionState__TriggerState__Flags value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>::get(),
                            "set_flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::UnityEngine__InputSystem__InputActionState__TriggerState__Flags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "actionStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "actionCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "controlStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "controlCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bindingStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bindingCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "interactionStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "interactionCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "processorStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "processorCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "compositeStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "compositeCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__ActionMapIndices::UnityEngine__InputSystem__InputActionState__ActionMapIndices(int32_t actionStartIndex, int32_t actionCount, int32_t controlStartIndex, int32_t controlCount, int32_t bindingStartIndex, int32_t bindingCount, int32_t interactionStartIndex, int32_t interactionCount, int32_t processorStartIndex, int32_t processorCount, int32_t compositeStartIndex, int32_t compositeCount) noexcept : ::bs_hook::ValueTypeWrapper() {this->actionStartIndex = actionStartIndex;
this->actionCount = actionCount;
this->controlStartIndex = controlStartIndex;
this->controlCount = controlCount;
this->bindingStartIndex = bindingStartIndex;
this->bindingCount = bindingCount;
this->interactionStartIndex = interactionStartIndex;
this->interactionCount = interactionCount;
this->processorStartIndex = processorStartIndex;
this->processorCount = processorCount;
this->compositeStartIndex = compositeStartIndex;
this->compositeCount = compositeCount;
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__ActionMapIndices::__set_actionStartIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__ActionMapIndices::__get_actionStartIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__ActionMapIndices::__set_actionCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__ActionMapIndices::__get_actionCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__ActionMapIndices::__set_controlStartIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__ActionMapIndices::__get_controlStartIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__ActionMapIndices::__set_controlCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__ActionMapIndices::__get_controlCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__ActionMapIndices::__set_bindingStartIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__ActionMapIndices::__get_bindingStartIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__ActionMapIndices::__set_bindingCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__ActionMapIndices::__get_bindingCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__ActionMapIndices::__set_interactionStartIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__ActionMapIndices::__get_interactionStartIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__ActionMapIndices::__set_interactionCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__ActionMapIndices::__get_interactionCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__ActionMapIndices::__set_processorStartIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__ActionMapIndices::__get_processorStartIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__ActionMapIndices::__set_processorCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__ActionMapIndices::__get_processorCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__ActionMapIndices::__set_compositeStartIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__ActionMapIndices::__get_compositeStartIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__ActionMapIndices::__set_compositeCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__ActionMapIndices::__get_compositeCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->__instance);
}
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory.get_isAllocated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::get_isAllocated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28c22b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory>::get(),
                            "get_isAllocated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory.get_sizeInBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::get_sizeInBytes)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x28c22c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory>::get(),
                            "get_sizeInBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory.Allocate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::Allocate)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x28c2314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory>::get(),
                            "Allocate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x28bb378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory.CopyDataFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::*)(UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::CopyDataFrom)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x28c243c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory>::get(),
                            "CopyDataFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory.Clone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::Clone)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x28bb50c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::operator System::IDisposable() const {
return System::IDisposable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "basePtr", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "mapCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "actionCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "interactionCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bindingCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "controlCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "compositeCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "actionStates", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "bindingStates", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "interactionStates", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "controlMagnitudes", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "compositeMagnitudes", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "enabledControls", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "actionBindingIndicesAndCounts", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "actionBindingIndices", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "controlIndexToBindingIndex", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "controlGroupingAndComplexity", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "controlGroupingInitialized", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "mapIndices", ty: "void*", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::UnityEngine__InputSystem__InputActionState__UnmanagedMemory(void* basePtr, int32_t mapCount, int32_t actionCount, int32_t interactionCount, int32_t bindingCount, int32_t controlCount, int32_t compositeCount, void* actionStates, void* bindingStates, void* interactionStates, void* controlMagnitudes, void* compositeMagnitudes, void* enabledControls, void* actionBindingIndicesAndCounts, void* actionBindingIndices, void* controlIndexToBindingIndex, void* controlGroupingAndComplexity, bool controlGroupingInitialized, void* mapIndices) noexcept : ::bs_hook::ValueTypeWrapper() {this->basePtr = basePtr;
this->mapCount = mapCount;
this->actionCount = actionCount;
this->interactionCount = interactionCount;
this->bindingCount = bindingCount;
this->controlCount = controlCount;
this->compositeCount = compositeCount;
this->actionStates = actionStates;
this->bindingStates = bindingStates;
this->interactionStates = interactionStates;
this->controlMagnitudes = controlMagnitudes;
this->compositeMagnitudes = compositeMagnitudes;
this->enabledControls = enabledControls;
this->actionBindingIndicesAndCounts = actionBindingIndicesAndCounts;
this->actionBindingIndices = actionBindingIndices;
this->controlIndexToBindingIndex = controlIndexToBindingIndex;
this->controlGroupingAndComplexity = controlGroupingAndComplexity;
this->controlGroupingInitialized = controlGroupingInitialized;
this->mapIndices = mapIndices;
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__set_basePtr(void* value)  {
::cordl_internals::setInstanceField<void*, 0x0>(this->__instance, std::forward<void*>(value));
}
constexpr void* UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__get_basePtr() const {
return ::cordl_internals::getInstanceField<void*, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__set_mapCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__get_mapCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__set_actionCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__get_actionCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__set_interactionCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__get_interactionCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__set_bindingCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__get_bindingCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__set_controlCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__get_controlCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__set_compositeCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__get_compositeCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__set_actionStates(void* value)  {
::cordl_internals::setInstanceField<void*, 0x20>(this->__instance, std::forward<void*>(value));
}
constexpr void* UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__get_actionStates() const {
return ::cordl_internals::getInstanceField<void*, 0x20>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__set_bindingStates(void* value)  {
::cordl_internals::setInstanceField<void*, 0x28>(this->__instance, std::forward<void*>(value));
}
constexpr void* UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__get_bindingStates() const {
return ::cordl_internals::getInstanceField<void*, 0x28>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__set_interactionStates(void* value)  {
::cordl_internals::setInstanceField<void*, 0x30>(this->__instance, std::forward<void*>(value));
}
constexpr void* UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__get_interactionStates() const {
return ::cordl_internals::getInstanceField<void*, 0x30>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__set_controlMagnitudes(void* value)  {
::cordl_internals::setInstanceField<void*, 0x38>(this->__instance, std::forward<void*>(value));
}
constexpr void* UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__get_controlMagnitudes() const {
return ::cordl_internals::getInstanceField<void*, 0x38>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__set_compositeMagnitudes(void* value)  {
::cordl_internals::setInstanceField<void*, 0x40>(this->__instance, std::forward<void*>(value));
}
constexpr void* UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__get_compositeMagnitudes() const {
return ::cordl_internals::getInstanceField<void*, 0x40>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__set_enabledControls(void* value)  {
::cordl_internals::setInstanceField<void*, 0x48>(this->__instance, std::forward<void*>(value));
}
constexpr void* UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__get_enabledControls() const {
return ::cordl_internals::getInstanceField<void*, 0x48>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__set_actionBindingIndicesAndCounts(void* value)  {
::cordl_internals::setInstanceField<void*, 0x50>(this->__instance, std::forward<void*>(value));
}
constexpr void* UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__get_actionBindingIndicesAndCounts() const {
return ::cordl_internals::getInstanceField<void*, 0x50>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__set_actionBindingIndices(void* value)  {
::cordl_internals::setInstanceField<void*, 0x58>(this->__instance, std::forward<void*>(value));
}
constexpr void* UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__get_actionBindingIndices() const {
return ::cordl_internals::getInstanceField<void*, 0x58>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__set_controlIndexToBindingIndex(void* value)  {
::cordl_internals::setInstanceField<void*, 0x60>(this->__instance, std::forward<void*>(value));
}
constexpr void* UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__get_controlIndexToBindingIndex() const {
return ::cordl_internals::getInstanceField<void*, 0x60>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__set_controlGroupingAndComplexity(void* value)  {
::cordl_internals::setInstanceField<void*, 0x68>(this->__instance, std::forward<void*>(value));
}
constexpr void* UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__get_controlGroupingAndComplexity() const {
return ::cordl_internals::getInstanceField<void*, 0x68>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__set_controlGroupingInitialized(bool value)  {
::cordl_internals::setInstanceField<bool, 0x70>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__get_controlGroupingInitialized() const {
return ::cordl_internals::getInstanceField<bool, 0x70>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__set_mapIndices(void* value)  {
::cordl_internals::setInstanceField<void*, 0x78>(this->__instance, std::forward<void*>(value));
}
constexpr void* UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::__get_mapIndices() const {
return ::cordl_internals::getInstanceField<void*, 0x78>(this->__instance);
}
 bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::get_isAllocated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory>::get(),
                            "get_isAllocated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::get_sizeInBytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory>::get(),
                            "get_sizeInBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::Allocate(int32_t mapCount, int32_t actionCount, int32_t bindingCount, int32_t controlCount, int32_t interactionCount, int32_t compositeCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory>::get(),
                            "Allocate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, mapCount, actionCount, bindingCount, controlCount, interactionCount, compositeCount);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::CopyDataFrom(UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory memory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory>::get(),
                            "CopyDataFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, memory);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory::Clone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "globalList", ty: "UnityEngine::InputSystem::Utilities::InlinedArray_1<System::Runtime::InteropServices::GCHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "onActionChange", ty: "UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<::bs_hook::Il2CppWrapperType,UnityEngine::InputSystem::InputActionChange>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "onActionControlsChanged", ty: "UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState::UnityEngine__InputSystem__InputActionState__GlobalState(UnityEngine::InputSystem::Utilities::InlinedArray_1<System::Runtime::InteropServices::GCHandle> globalList, UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<::bs_hook::Il2CppWrapperType,UnityEngine::InputSystem::InputActionChange>> onActionChange, UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<::bs_hook::Il2CppWrapperType>> onActionControlsChanged) noexcept : ::bs_hook::ValueTypeWrapper() {this->globalList = globalList;
this->onActionChange = onActionChange;
this->onActionControlsChanged = onActionControlsChanged;
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState::__set_globalList(UnityEngine::InputSystem::Utilities::InlinedArray_1<System::Runtime::InteropServices::GCHandle> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::InlinedArray_1<System::Runtime::InteropServices::GCHandle>, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::InlinedArray_1<System::Runtime::InteropServices::GCHandle>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<System::Runtime::InteropServices::GCHandle> UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState::__get_globalList() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::InlinedArray_1<System::Runtime::InteropServices::GCHandle>, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState::__set_onActionChange(UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<::bs_hook::Il2CppWrapperType,UnityEngine::InputSystem::InputActionChange>> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<::bs_hook::Il2CppWrapperType,UnityEngine::InputSystem::InputActionChange>>, 0x18>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<::bs_hook::Il2CppWrapperType,UnityEngine::InputSystem::InputActionChange>>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<::bs_hook::Il2CppWrapperType,UnityEngine::InputSystem::InputActionChange>> UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState::__get_onActionChange() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<::bs_hook::Il2CppWrapperType,UnityEngine::InputSystem::InputActionChange>>, 0x18>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState::__set_onActionControlsChanged(UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<::bs_hook::Il2CppWrapperType>> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<::bs_hook::Il2CppWrapperType>>, 0x68>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<::bs_hook::Il2CppWrapperType>>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<::bs_hook::Il2CppWrapperType>> UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState::__get_onActionControlsChanged() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<::bs_hook::Il2CppWrapperType>>, 0x68>(this->__instance);
}
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c260c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c._SaveAndResetState_b__135_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c::*)(ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState>)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c::_SaveAndResetState_b__135_0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x28c2614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c>::get(),
                            "<SaveAndResetState>b__135_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c._SaveAndResetState_b__135_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c::_SaveAndResetState_b__135_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28c2680;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c>::get(),
                            "<SaveAndResetState>b__135_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c::__set___9(UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c value)  {
::cordl_internals::setStaticField<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c>::get>(std::forward<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c>(value));
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c::__get___9()  {
return ::cordl_internals::getStaticField<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c>::get>();
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c::__set___9__135_0(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState> value)  {
::cordl_internals::setStaticField<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState>, "<>9__135_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c>::get>(std::forward<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState>>(value));
}
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState> UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c::__get___9__135_0()  {
return ::cordl_internals::getStaticField<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState>, "<>9__135_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c>::get>();
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c::__set___9__135_1(System::Action value)  {
::cordl_internals::setStaticField<System::Action, "<>9__135_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c>::get>(std::forward<System::Action>(value));
}
 System::Action UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c::__get___9__135_1()  {
return ::cordl_internals::getStaticField<System::Action, "<>9__135_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c>::get>();
}
// Ctor Parameters []
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c::UnityEngine__InputSystem__InputActionState____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__InputSystem__InputActionState____c>())) {}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c::_SaveAndResetState_b__135_0(ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState> state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c>::get(),
                            "<SaveAndResetState>b__135_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c::_SaveAndResetState_b__135_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState____c>::get(),
                            "<SaveAndResetState>b__135_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.get_totalCompositeCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::InputActionState::*)()>(&UnityEngine::InputSystem::InputActionState::get_totalCompositeCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28baa9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "get_totalCompositeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.get_totalMapCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::InputActionState::*)()>(&UnityEngine::InputSystem::InputActionState::get_totalMapCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28baaa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "get_totalMapCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.get_totalActionCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::InputActionState::*)()>(&UnityEngine::InputSystem::InputActionState::get_totalActionCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28baaac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "get_totalActionCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.get_totalBindingCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::InputActionState::*)()>(&UnityEngine::InputSystem::InputActionState::get_totalBindingCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28baab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "get_totalBindingCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.get_totalInteractionCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::InputActionState::*)()>(&UnityEngine::InputSystem::InputActionState::get_totalInteractionCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28baabc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "get_totalInteractionCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.get_totalControlCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::InputActionState::*)()>(&UnityEngine::InputSystem::InputActionState::get_totalControlCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28baac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "get_totalControlCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.get_mapIndices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (UnityEngine::InputSystem::InputActionState::*)()>(&UnityEngine::InputSystem::InputActionState::get_mapIndices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28baacc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "get_mapIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.get_actionStates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (UnityEngine::InputSystem::InputActionState::*)()>(&UnityEngine::InputSystem::InputActionState::get_actionStates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28baad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "get_actionStates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.get_bindingStates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (UnityEngine::InputSystem::InputActionState::*)()>(&UnityEngine::InputSystem::InputActionState::get_bindingStates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28baadc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "get_bindingStates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.get_interactionStates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (UnityEngine::InputSystem::InputActionState::*)()>(&UnityEngine::InputSystem::InputActionState::get_interactionStates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28baae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "get_interactionStates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.get_controlIndexToBindingIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (UnityEngine::InputSystem::InputActionState::*)()>(&UnityEngine::InputSystem::InputActionState::get_controlIndexToBindingIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28baaec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "get_controlIndexToBindingIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.get_controlGroupingAndComplexity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (UnityEngine::InputSystem::InputActionState::*)()>(&UnityEngine::InputSystem::InputActionState::get_controlGroupingAndComplexity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28baaf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "get_controlGroupingAndComplexity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.get_controlMagnitudes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (UnityEngine::InputSystem::InputActionState::*)()>(&UnityEngine::InputSystem::InputActionState::get_controlMagnitudes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28baafc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "get_controlMagnitudes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.get_enabledControls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (UnityEngine::InputSystem::InputActionState::*)()>(&UnityEngine::InputSystem::InputActionState::get_enabledControls)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28bab04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "get_enabledControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.get_isProcessingControlStateChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputActionState::*)()>(&UnityEngine::InputSystem::InputActionState::get_isProcessingControlStateChange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28bab0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "get_isProcessingControlStateChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(UnityEngine::InputSystem::InputBindingResolver)>(&UnityEngine::InputSystem::InputActionState::Initialize)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x28bab14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputBindingResolver>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.ComputeControlGroupingIfNecessary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)()>(&UnityEngine::InputSystem::InputActionState::ComputeControlGroupingIfNecessary)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x28baca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ComputeControlGroupingIfNecessary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.ClaimDataFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(UnityEngine::InputSystem::InputBindingResolver)>(&UnityEngine::InputSystem::InputActionState::ClaimDataFrom)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x28bab8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ClaimDataFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputBindingResolver>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)()>(&UnityEngine::InputSystem::InputActionState::Finalize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x28bae90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputActionState),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)()>(&UnityEngine::InputSystem::InputActionState::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28bb0b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.Destroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(bool)>(&UnityEngine::InputSystem::InputActionState::Destroy)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x28baf28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "Destroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.Clone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputActionState (UnityEngine::InputSystem::InputActionState::*)()>(&UnityEngine::InputSystem::InputActionState::Clone)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x28bb3b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.System_ICloneable_Clone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::InputSystem::InputActionState::*)()>(&UnityEngine::InputSystem::InputActionState::System_ICloneable_Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28bb5b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "System.ICloneable.Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.IsUsingDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputActionState::*)(UnityEngine::InputSystem::InputDevice)>(&UnityEngine::InputSystem::InputActionState::IsUsingDevice)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x28bb5b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "IsUsingDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.CanUseDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputActionState::*)(UnityEngine::InputSystem::InputDevice)>(&UnityEngine::InputSystem::InputActionState::CanUseDevice)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x28bb74c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "CanUseDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.HasEnabledActions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputActionState::*)()>(&UnityEngine::InputSystem::InputActionState::HasEnabledActions)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x28bb964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "HasEnabledActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.FinishBindingCompositeSetups
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)()>(&UnityEngine::InputSystem::InputActionState::FinishBindingCompositeSetups)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x28bb9dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "FinishBindingCompositeSetups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.PrepareForBindingReResolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(bool, ByRef<UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputControl>>, ByRef<bool>)>(&UnityEngine::InputSystem::InputActionState::PrepareForBindingReResolution)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x28bbaa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "PrepareForBindingReResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputControl>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.FinishBindingResolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(bool, UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory, UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputControl>, bool)>(&UnityEngine::InputSystem::InputActionState::FinishBindingResolution)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x28bc48c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "FinishBindingResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputControl>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.RestoreActionStatesAfterReResolvingBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory, UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputControl>, bool)>(&UnityEngine::InputSystem::InputActionState::RestoreActionStatesAfterReResolvingBindings)> {
  constexpr static std::size_t size = 0x68c;
  constexpr static std::size_t addrs = 0x28bc514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "RestoreActionStatesAfterReResolvingBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputControl>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.IsActiveControl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(&UnityEngine::InputSystem::InputActionState::IsActiveControl)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x28bd368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "IsActiveControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.FindControlIndexOnBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::InputActionState::*)(int32_t, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputActionState::FindControlIndexOnBinding)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x28bcd7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "FindControlIndexOnBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.ResetActionStatesDrivenBy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(UnityEngine::InputSystem::InputDevice)>(&UnityEngine::InputSystem::InputActionState::ResetActionStatesDrivenBy)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x28bd410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ResetActionStatesDrivenBy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.IsActionBoundToControlFromDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputActionState::*)(UnityEngine::InputSystem::InputDevice, int32_t)>(&UnityEngine::InputSystem::InputActionState::IsActionBoundToControlFromDevice)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x28bd654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "IsActionBoundToControlFromDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.ResetActionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(int32_t, UnityEngine::InputSystem::InputActionPhase, bool)>(&UnityEngine::InputSystem::InputActionState::ResetActionState)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x28bc23c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ResetActionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionPhase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.FetchActionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState> (UnityEngine::InputSystem::InputActionState::*)(UnityEngine::InputSystem::InputAction)>(&UnityEngine::InputSystem::InputActionState::FetchActionState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28bda2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "FetchActionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.FetchMapIndices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__ActionMapIndices (UnityEngine::InputSystem::InputActionState::*)(UnityEngine::InputSystem::InputActionMap)>(&UnityEngine::InputSystem::InputActionState::FetchMapIndices)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x28bda50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "FetchMapIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionMap>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.EnableAllActions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(UnityEngine::InputSystem::InputActionMap)>(&UnityEngine::InputSystem::InputActionState::EnableAllActions)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x28bda84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "EnableAllActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionMap>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.EnableControls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(UnityEngine::InputSystem::InputActionMap)>(&UnityEngine::InputSystem::InputActionState::EnableControls)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28bdb30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "EnableControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionMap>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.EnableSingleAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(UnityEngine::InputSystem::InputAction)>(&UnityEngine::InputSystem::InputActionState::EnableSingleAction)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x28bdb70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "EnableSingleAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.EnableControls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(UnityEngine::InputSystem::InputAction)>(&UnityEngine::InputSystem::InputActionState::EnableControls)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x28bdbd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "EnableControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.DisableAllActions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(UnityEngine::InputSystem::InputActionMap)>(&UnityEngine::InputSystem::InputActionState::DisableAllActions)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x28bbfa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "DisableAllActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionMap>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.DisableControls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(UnityEngine::InputSystem::InputActionMap)>(&UnityEngine::InputSystem::InputActionState::DisableControls)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28bc358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "DisableControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionMap>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.DisableSingleAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(UnityEngine::InputSystem::InputAction)>(&UnityEngine::InputSystem::InputActionState::DisableSingleAction)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x28bdc84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "DisableSingleAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.DisableControls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(UnityEngine::InputSystem::InputAction)>(&UnityEngine::InputSystem::InputActionState::DisableControls)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x28bdcdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "DisableControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.EnableControls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t, int32_t)>(&UnityEngine::InputSystem::InputActionState::EnableControls)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x28bcbf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "EnableControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.DisableControls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t, int32_t)>(&UnityEngine::InputSystem::InputActionState::DisableControls)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x28bb0c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "DisableControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.SetInitialStateCheckPending
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(int32_t, bool)>(&UnityEngine::InputSystem::InputActionState::SetInitialStateCheckPending)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x28bde60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "SetInitialStateCheckPending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.SetInitialStateCheckPending
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(void*, bool)>(&UnityEngine::InputSystem::InputActionState::SetInitialStateCheckPending)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x28bdde0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "SetInitialStateCheckPending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.IsControlEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputActionState::*)(int32_t)>(&UnityEngine::InputSystem::InputActionState::IsControlEnabled)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x28bdd8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "IsControlEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.SetControlEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(int32_t, bool)>(&UnityEngine::InputSystem::InputActionState::SetControlEnabled)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x28bde28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "SetControlEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.HookOnBeforeUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)()>(&UnityEngine::InputSystem::InputActionState::HookOnBeforeUpdate)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x28bd194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "HookOnBeforeUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.UnhookOnBeforeUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)()>(&UnityEngine::InputSystem::InputActionState::UnhookOnBeforeUpdate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x28bdef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "UnhookOnBeforeUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.OnBeforeInitialUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)()>(&UnityEngine::InputSystem::InputActionState::OnBeforeInitialUpdate)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x28bdf6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "OnBeforeInitialUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(UnityEngine::InputSystem::InputControl, double_t, UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t)>(&UnityEngine::InputSystem::InputActionState::UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x28be168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyControlStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(UnityEngine::InputSystem::InputControl, double_t, int64_t, int32_t)>(&UnityEngine::InputSystem::InputActionState::UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x28be750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyTimerExpired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.ToCombinedMapAndControlAndBindingIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t, int32_t)>(&UnityEngine::InputSystem::InputActionState::ToCombinedMapAndControlAndBindingIndex)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28bddb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ToCombinedMapAndControlAndBindingIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.SplitUpMapAndControlAndBindingIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(int64_t, ByRef<int32_t>, ByRef<int32_t>, ByRef<int32_t>)>(&UnityEngine::InputSystem::InputActionState::SplitUpMapAndControlAndBindingIndex)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28be180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "SplitUpMapAndControlAndBindingIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.GetComplexityFromMonitorIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int64_t)>(&UnityEngine::InputSystem::InputActionState::GetComplexityFromMonitorIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28be968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "GetComplexityFromMonitorIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.ProcessControlStateChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t, int32_t, double_t, UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&UnityEngine::InputSystem::InputActionState::ProcessControlStateChange)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0x28be19c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ProcessControlStateChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.ProcessButtonState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>, int32_t, void*)>(&UnityEngine::InputSystem::InputActionState::ProcessButtonState)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x28befa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ProcessButtonState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.ShouldIgnoreInputOnCompositeBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(void*, void*)>(&UnityEngine::InputSystem::InputActionState::ShouldIgnoreInputOnCompositeBinding)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x28be9b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ShouldIgnoreInputOnCompositeBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.IsConflictingInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputActionState::*)(ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>, int32_t)>(&UnityEngine::InputSystem::InputActionState::IsConflictingInput)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x28beb94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "IsConflictingInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.GetActionBindingStartIndexAndCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (UnityEngine::InputSystem::InputActionState::*)(int32_t, ByRef<uint16_t>)>(&UnityEngine::InputSystem::InputActionState::GetActionBindingStartIndexAndCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28bd704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "GetActionBindingStartIndexAndCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.ProcessDefaultInteraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>, int32_t)>(&UnityEngine::InputSystem::InputActionState::ProcessDefaultInteraction)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x28bf150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ProcessDefaultInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.ProcessInteractions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>, int32_t, int32_t)>(&UnityEngine::InputSystem::InputActionState::ProcessInteractions)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x28bea00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ProcessInteractions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.ProcessTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(double_t, int32_t, int32_t, int32_t, int32_t)>(&UnityEngine::InputSystem::InputActionState::ProcessTimeout)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x28be768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ProcessTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.SetTotalTimeoutCompletionTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(float_t, ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>)>(&UnityEngine::InputSystem::InputActionState::SetTotalTimeoutCompletionTime)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x28bf5d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "SetTotalTimeoutCompletionTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.StartTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(float_t, ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>)>(&UnityEngine::InputSystem::InputActionState::StartTimeout)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x28bd03c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "StartTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.StopTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(int32_t)>(&UnityEngine::InputSystem::InputActionState::StopTimeout)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x28bf604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "StopTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.ChangePhaseOfInteraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(UnityEngine::InputSystem::InputActionPhase, ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>, UnityEngine::InputSystem::InputActionPhase, bool)>(&UnityEngine::InputSystem::InputActionState::ChangePhaseOfInteraction)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x28bf6c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ChangePhaseOfInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionPhase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionPhase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.ChangePhaseOfAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputActionState::*)(UnityEngine::InputSystem::InputActionPhase, ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>, UnityEngine::InputSystem::InputActionPhase)>(&UnityEngine::InputSystem::InputActionState::ChangePhaseOfAction)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x28bd7cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ChangePhaseOfAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionPhase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionPhase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.ChangePhaseOfActionInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(int32_t, void*, UnityEngine::InputSystem::InputActionPhase, ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>)>(&UnityEngine::InputSystem::InputActionState::ChangePhaseOfActionInternal)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x28bfac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ChangePhaseOfActionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionPhase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.CallActionListeners
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(int32_t, UnityEngine::InputSystem::InputActionMap, UnityEngine::InputSystem::InputActionPhase, ByRef<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>>>, ::StringW)>(&UnityEngine::InputSystem::InputActionState::CallActionListeners)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x28bfd4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "CallActionListeners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionMap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionPhase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.GetActionOrNoneString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::InputSystem::InputActionState::*)(ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>)>(&UnityEngine::InputSystem::InputActionState::GetActionOrNoneString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x28bff1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "GetActionOrNoneString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.GetActionOrNull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputAction (UnityEngine::InputSystem::InputActionState::*)(int32_t)>(&UnityEngine::InputSystem::InputActionState::GetActionOrNull)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x28c0014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "GetActionOrNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.GetActionOrNull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputAction (UnityEngine::InputSystem::InputActionState::*)(ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>)>(&UnityEngine::InputSystem::InputActionState::GetActionOrNull)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x28bff80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "GetActionOrNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.GetControl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputControl (UnityEngine::InputSystem::InputActionState::*)(ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>)>(&UnityEngine::InputSystem::InputActionState::GetControl)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28c00a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "GetControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.GetInteractionOrNull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::IInputInteraction (UnityEngine::InputSystem::InputActionState::*)(ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>)>(&UnityEngine::InputSystem::InputActionState::GetInteractionOrNull)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x28c00e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "GetInteractionOrNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.GetBindingIndexInMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::InputActionState::*)(int32_t)>(&UnityEngine::InputSystem::InputActionState::GetBindingIndexInMap)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x28c0134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "GetBindingIndexInMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.GetBindingIndexInState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(&UnityEngine::InputSystem::InputActionState::GetBindingIndexInState)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28c0170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "GetBindingIndexInState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.GetBindingState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState> (UnityEngine::InputSystem::InputActionState::*)(int32_t)>(&UnityEngine::InputSystem::InputActionState::GetBindingState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28c0198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "GetBindingState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.GetBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<ByRef<UnityEngine::InputSystem::InputBinding> (UnityEngine::InputSystem::InputActionState::*)(int32_t)>(&UnityEngine::InputSystem::InputActionState::GetBinding)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x28c01a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "GetBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.GetActionMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputActionMap (UnityEngine::InputSystem::InputActionState::*)(int32_t)>(&UnityEngine::InputSystem::InputActionState::GetActionMap)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28c0228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "GetActionMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.ResetInteractionStateAndCancelIfNecessary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t, int32_t)>(&UnityEngine::InputSystem::InputActionState::ResetInteractionStateAndCancelIfNecessary)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x28bd724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ResetInteractionStateAndCancelIfNecessary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.ResetInteractionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(int32_t)>(&UnityEngine::InputSystem::InputActionState::ResetInteractionState)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x28bc0e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ResetInteractionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.GetValueSizeInBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(&UnityEngine::InputSystem::InputActionState::GetValueSizeInBytes)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x28c0268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "GetValueSizeInBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.GetValueType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(&UnityEngine::InputSystem::InputActionState::GetValueType)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x28c02fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "GetValueType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.IsActuated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>, float_t)>(&UnityEngine::InputSystem::InputActionState::IsActuated)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x28bf510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "IsActuated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.ReadValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t, void*, int32_t, bool)>(&UnityEngine::InputSystem::InputActionState::ReadValue)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x28c0390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ReadValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.EvaluateCompositePartMagnitude
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(&UnityEngine::InputSystem::InputActionState::EvaluateCompositePartMagnitude)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x28c0510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "EvaluateCompositePartMagnitude",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.GetCompositePartPressTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(&UnityEngine::InputSystem::InputActionState::GetCompositePartPressTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x28c05e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "GetCompositePartPressTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.ReadCompositePartValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t, void*, int32_t)>(&UnityEngine::InputSystem::InputActionState::ReadCompositePartValue)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x28c0664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ReadCompositePartValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.ReadCompositePartValueAsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(&UnityEngine::InputSystem::InputActionState::ReadCompositePartValueAsObject)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x28c0778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ReadCompositePartValueAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.ReadValueAsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t, bool)>(&UnityEngine::InputSystem::InputActionState::ReadValueAsObject)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x28c0874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ReadValueAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.ReadValueAsButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(&UnityEngine::InputSystem::InputActionState::ReadValueAsButton)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x28c09e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ReadValueAsButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.SaveAndResetState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::ISavedState (*)()>(&UnityEngine::InputSystem::InputActionState::SaveAndResetState)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x28c0b10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "SaveAndResetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.AddToGlobalList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)()>(&UnityEngine::InputSystem::InputActionState::AddToGlobalList)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x28bac20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "AddToGlobalList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.RemoveMapFromGlobalList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)()>(&UnityEngine::InputSystem::InputActionState::RemoveMapFromGlobalList)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x28bb240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "RemoveMapFromGlobalList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.CompactGlobalList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::InputSystem::InputActionState::CompactGlobalList)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x28c0cf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "CompactGlobalList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.NotifyListenersOfActionChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)(UnityEngine::InputSystem::InputActionChange)>(&UnityEngine::InputSystem::InputActionState::NotifyListenersOfActionChange)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x28bc398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "NotifyListenersOfActionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionChange>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.NotifyListenersOfActionChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::InputSystem::InputActionChange, ::bs_hook::Il2CppWrapperType)>(&UnityEngine::InputSystem::InputActionState::NotifyListenersOfActionChange)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x28bd268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "NotifyListenersOfActionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionChange>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.ResetGlobals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::InputSystem::InputActionState::ResetGlobals)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x28c0e5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ResetGlobals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.FindAllEnabledActions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::Collections::Generic::List_1<UnityEngine::InputSystem::InputAction>)>(&UnityEngine::InputSystem::InputActionState::FindAllEnabledActions)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x28c10f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "FindAllEnabledActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::InputSystem::InputAction>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.OnDeviceChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::InputSystem::InputDevice, UnityEngine::InputSystem::InputDeviceChange)>(&UnityEngine::InputSystem::InputActionState::OnDeviceChange)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x28c13a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "OnDeviceChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDeviceChange>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.DeferredResolutionOfBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::InputSystem::InputActionState::DeferredResolutionOfBindings)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x28c16b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "DeferredResolutionOfBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.DisableAllActions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::InputSystem::InputActionState::DisableAllActions)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x28c194c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "DisableAllActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState.DestroyAllActionMapStates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::InputSystem::InputActionState::DestroyAllActionMapStates)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x28c0f80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "DestroyAllActionMapStates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputActionState._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::*)()>(&UnityEngine::InputSystem::InputActionState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28bb504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor
constexpr  UnityEngine::InputSystem::InputActionState::operator UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor() const noexcept {
return UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::ICloneable
constexpr  UnityEngine::InputSystem::InputActionState::operator System::ICloneable() const noexcept {
return System::ICloneable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  UnityEngine::InputSystem::InputActionState::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputActionState::__set_maps(::ArrayW<UnityEngine::InputSystem::InputActionMap> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::InputSystem::InputActionMap>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::InputSystem::InputActionMap>>(value));
}
constexpr ::ArrayW<UnityEngine::InputSystem::InputActionMap> UnityEngine::InputSystem::InputActionState::__get_maps() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::InputSystem::InputActionMap>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputActionState::__set_controls(::ArrayW<UnityEngine::InputSystem::InputControl> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::InputSystem::InputControl>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::InputSystem::InputControl>>(value));
}
constexpr ::ArrayW<UnityEngine::InputSystem::InputControl> UnityEngine::InputSystem::InputActionState::__get_controls() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::InputSystem::InputControl>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputActionState::__set_interactions(::ArrayW<UnityEngine::InputSystem::IInputInteraction> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::InputSystem::IInputInteraction>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::InputSystem::IInputInteraction>>(value));
}
constexpr ::ArrayW<UnityEngine::InputSystem::IInputInteraction> UnityEngine::InputSystem::InputActionState::__get_interactions() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::InputSystem::IInputInteraction>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputActionState::__set_processors(::ArrayW<UnityEngine::InputSystem::InputProcessor> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::InputSystem::InputProcessor>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::InputSystem::InputProcessor>>(value));
}
constexpr ::ArrayW<UnityEngine::InputSystem::InputProcessor> UnityEngine::InputSystem::InputActionState::__get_processors() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::InputSystem::InputProcessor>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputActionState::__set_composites(::ArrayW<UnityEngine::InputSystem::InputBindingComposite> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::InputSystem::InputBindingComposite>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::InputSystem::InputBindingComposite>>(value));
}
constexpr ::ArrayW<UnityEngine::InputSystem::InputBindingComposite> UnityEngine::InputSystem::InputActionState::__get_composites() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::InputSystem::InputBindingComposite>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputActionState::__set_totalProcessorCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::InputActionState::__get_totalProcessorCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputActionState::__set_memory(UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory>(value));
}
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory UnityEngine::InputSystem::InputActionState::__get_memory() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputActionState::__set_m_OnBeforeUpdateHooked(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::InputActionState::__get_m_OnBeforeUpdateHooked() const {
return ::cordl_internals::getInstanceField<bool, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputActionState::__set_m_OnAfterUpdateHooked(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc1>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::InputActionState::__get_m_OnAfterUpdateHooked() const {
return ::cordl_internals::getInstanceField<bool, 0xc1>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputActionState::__set_m_InProcessControlStateChange(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc2>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::InputActionState::__get_m_InProcessControlStateChange() const {
return ::cordl_internals::getInstanceField<bool, 0xc2>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputActionState::__set_m_CurrentlyProcessingThisEvent(UnityEngine::InputSystem::LowLevel::InputEventPtr value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::InputEventPtr, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::LowLevel::InputEventPtr>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::InputEventPtr UnityEngine::InputSystem::InputActionState::__get_m_CurrentlyProcessingThisEvent() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::InputEventPtr, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputActionState::__set_m_OnBeforeUpdateDelegate(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action UnityEngine::InputSystem::InputActionState::__get_m_OnBeforeUpdateDelegate() const {
return ::cordl_internals::getInstanceField<System::Action, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputActionState::__set_m_OnAfterUpdateDelegate(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action UnityEngine::InputSystem::InputActionState::__get_m_OnAfterUpdateDelegate() const {
return ::cordl_internals::getInstanceField<System::Action, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::InputSystem::InputActionState::__set_s_GlobalState(UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState value)  {
::cordl_internals::setStaticField<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState, "s_GlobalState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get>(std::forward<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState>(value));
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState UnityEngine::InputSystem::InputActionState::__get_s_GlobalState()  {
return ::cordl_internals::getStaticField<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState, "s_GlobalState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get>();
}
 int32_t UnityEngine::InputSystem::InputActionState::get_totalCompositeCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "get_totalCompositeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::InputSystem::InputActionState::get_totalMapCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "get_totalMapCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::InputSystem::InputActionState::get_totalActionCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "get_totalActionCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::InputSystem::InputActionState::get_totalBindingCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "get_totalBindingCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::InputSystem::InputActionState::get_totalInteractionCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "get_totalInteractionCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::InputSystem::InputActionState::get_totalControlCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "get_totalControlCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void* UnityEngine::InputSystem::InputActionState::get_mapIndices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "get_mapIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(const_cast<void*>(instance), ___internal_method);
}
 void* UnityEngine::InputSystem::InputActionState::get_actionStates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "get_actionStates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(const_cast<void*>(instance), ___internal_method);
}
 void* UnityEngine::InputSystem::InputActionState::get_bindingStates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "get_bindingStates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(const_cast<void*>(instance), ___internal_method);
}
 void* UnityEngine::InputSystem::InputActionState::get_interactionStates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "get_interactionStates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(const_cast<void*>(instance), ___internal_method);
}
 void* UnityEngine::InputSystem::InputActionState::get_controlIndexToBindingIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "get_controlIndexToBindingIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(const_cast<void*>(instance), ___internal_method);
}
 void* UnityEngine::InputSystem::InputActionState::get_controlGroupingAndComplexity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "get_controlGroupingAndComplexity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(const_cast<void*>(instance), ___internal_method);
}
 void* UnityEngine::InputSystem::InputActionState::get_controlMagnitudes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "get_controlMagnitudes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(const_cast<void*>(instance), ___internal_method);
}
 void* UnityEngine::InputSystem::InputActionState::get_enabledControls()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "get_enabledControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::InputActionState::get_isProcessingControlStateChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "get_isProcessingControlStateChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputActionState::Initialize(UnityEngine::InputSystem::InputBindingResolver resolver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputBindingResolver>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, resolver);
}
 void UnityEngine::InputSystem::InputActionState::ComputeControlGroupingIfNecessary()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ComputeControlGroupingIfNecessary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputActionState::ClaimDataFrom(UnityEngine::InputSystem::InputBindingResolver resolver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ClaimDataFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputBindingResolver>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, resolver);
}
 void UnityEngine::InputSystem::InputActionState::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputActionState::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param isFinalizing: bool (default: false)
 void UnityEngine::InputSystem::InputActionState::Destroy(bool isFinalizing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "Destroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, isFinalizing);
}
 UnityEngine::InputSystem::InputActionState UnityEngine::InputSystem::InputActionState::Clone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputActionState, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::InputActionState::System_ICloneable_Clone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "System.ICloneable.Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::InputActionState::IsUsingDevice(UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "IsUsingDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, device);
}
 bool UnityEngine::InputSystem::InputActionState::CanUseDevice(UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "CanUseDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, device);
}
 bool UnityEngine::InputSystem::InputActionState::HasEnabledActions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "HasEnabledActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputActionState::FinishBindingCompositeSetups()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "FinishBindingCompositeSetups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputActionState::PrepareForBindingReResolution(bool needFullResolve, ByRef<UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputControl>> activeControls, ByRef<bool> hasEnabledActions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "PrepareForBindingReResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputControl>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, needFullResolve, activeControls, hasEnabledActions);
}
 void UnityEngine::InputSystem::InputActionState::FinishBindingResolution(bool hasEnabledActions, UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory oldMemory, UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputControl> activeControls, bool isFullResolve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "FinishBindingResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputControl>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hasEnabledActions, oldMemory, activeControls, isFullResolve);
}
 void UnityEngine::InputSystem::InputActionState::RestoreActionStatesAfterReResolvingBindings(UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory oldState, UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputControl> activeControls, bool isFullResolve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "RestoreActionStatesAfterReResolvingBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputControl>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, oldState, activeControls, isFullResolve);
}
 bool UnityEngine::InputSystem::InputActionState::IsActiveControl(int32_t bindingIndex, int32_t controlIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "IsActiveControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, bindingIndex, controlIndex);
}
 int32_t UnityEngine::InputSystem::InputActionState::FindControlIndexOnBinding(int32_t bindingIndex, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "FindControlIndexOnBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bindingIndex, control);
}
 void UnityEngine::InputSystem::InputActionState::ResetActionStatesDrivenBy(UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ResetActionStatesDrivenBy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, device);
}
 bool UnityEngine::InputSystem::InputActionState::IsActionBoundToControlFromDevice(UnityEngine::InputSystem::InputDevice device, int32_t actionIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "IsActionBoundToControlFromDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, device, actionIndex);
}
/// @param toPhase: UnityEngine::InputSystem::InputActionPhase (default: 1)
/// @param hardReset: bool (default: false)
 void UnityEngine::InputSystem::InputActionState::ResetActionState(int32_t actionIndex, UnityEngine::InputSystem::InputActionPhase toPhase, bool hardReset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ResetActionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionPhase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, actionIndex, toPhase, hardReset);
}
 ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState> UnityEngine::InputSystem::InputActionState::FetchActionState(UnityEngine::InputSystem::InputAction action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "FetchActionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>, false>(const_cast<void*>(instance), ___internal_method, action);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__ActionMapIndices UnityEngine::InputSystem::InputActionState::FetchMapIndices(UnityEngine::InputSystem::InputActionMap map)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "FetchMapIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionMap>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__ActionMapIndices, false>(const_cast<void*>(instance), ___internal_method, map);
}
 void UnityEngine::InputSystem::InputActionState::EnableAllActions(UnityEngine::InputSystem::InputActionMap map)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "EnableAllActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionMap>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, map);
}
 void UnityEngine::InputSystem::InputActionState::EnableControls(UnityEngine::InputSystem::InputActionMap map)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "EnableControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionMap>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, map);
}
 void UnityEngine::InputSystem::InputActionState::EnableSingleAction(UnityEngine::InputSystem::InputAction action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "EnableSingleAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, action);
}
 void UnityEngine::InputSystem::InputActionState::EnableControls(UnityEngine::InputSystem::InputAction action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "EnableControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, action);
}
 void UnityEngine::InputSystem::InputActionState::DisableAllActions(UnityEngine::InputSystem::InputActionMap map)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "DisableAllActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionMap>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, map);
}
 void UnityEngine::InputSystem::InputActionState::DisableControls(UnityEngine::InputSystem::InputActionMap map)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "DisableControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionMap>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, map);
}
 void UnityEngine::InputSystem::InputActionState::DisableSingleAction(UnityEngine::InputSystem::InputAction action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "DisableSingleAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, action);
}
 void UnityEngine::InputSystem::InputActionState::DisableControls(UnityEngine::InputSystem::InputAction action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "DisableControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, action);
}
 void UnityEngine::InputSystem::InputActionState::EnableControls(int32_t mapIndex, int32_t controlStartIndex, int32_t numControls)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "EnableControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mapIndex, controlStartIndex, numControls);
}
 void UnityEngine::InputSystem::InputActionState::DisableControls(int32_t mapIndex, int32_t controlStartIndex, int32_t numControls)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "DisableControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mapIndex, controlStartIndex, numControls);
}
/// @param value: bool (default: true)
 void UnityEngine::InputSystem::InputActionState::SetInitialStateCheckPending(int32_t actionIndex, bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "SetInitialStateCheckPending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, actionIndex, value);
}
 void UnityEngine::InputSystem::InputActionState::SetInitialStateCheckPending(void* bindingStatePtr, bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "SetInitialStateCheckPending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindingStatePtr, value);
}
 bool UnityEngine::InputSystem::InputActionState::IsControlEnabled(int32_t controlIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "IsControlEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, controlIndex);
}
 void UnityEngine::InputSystem::InputActionState::SetControlEnabled(int32_t controlIndex, bool state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "SetControlEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, controlIndex, state);
}
 void UnityEngine::InputSystem::InputActionState::HookOnBeforeUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "HookOnBeforeUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputActionState::UnhookOnBeforeUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "UnhookOnBeforeUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputActionState::OnBeforeInitialUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "OnBeforeInitialUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputActionState::UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged(UnityEngine::InputSystem::InputControl control, double_t time, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, int64_t mapControlAndBindingIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyControlStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, control, time, eventPtr, mapControlAndBindingIndex);
}
 void UnityEngine::InputSystem::InputActionState::UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired(UnityEngine::InputSystem::InputControl control, double_t time, int64_t mapControlAndBindingIndex, int32_t interactionIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyTimerExpired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, control, time, mapControlAndBindingIndex, interactionIndex);
}
 int64_t UnityEngine::InputSystem::InputActionState::ToCombinedMapAndControlAndBindingIndex(int32_t mapIndex, int32_t controlIndex, int32_t bindingIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ToCombinedMapAndControlAndBindingIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method, mapIndex, controlIndex, bindingIndex);
}
 void UnityEngine::InputSystem::InputActionState::SplitUpMapAndControlAndBindingIndex(int64_t mapControlAndBindingIndex, ByRef<int32_t> mapIndex, ByRef<int32_t> controlIndex, ByRef<int32_t> bindingIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "SplitUpMapAndControlAndBindingIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mapControlAndBindingIndex, mapIndex, controlIndex, bindingIndex);
}
 int32_t UnityEngine::InputSystem::InputActionState::GetComplexityFromMonitorIndex(int64_t mapControlAndBindingIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "GetComplexityFromMonitorIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, mapControlAndBindingIndex);
}
 void UnityEngine::InputSystem::InputActionState::ProcessControlStateChange(int32_t mapIndex, int32_t controlIndex, int32_t bindingIndex, double_t time, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ProcessControlStateChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mapIndex, controlIndex, bindingIndex, time, eventPtr);
}
 void UnityEngine::InputSystem::InputActionState::ProcessButtonState(ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState> trigger, int32_t actionIndex, void* bindingStatePtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ProcessButtonState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, trigger, actionIndex, bindingStatePtr);
}
 bool UnityEngine::InputSystem::InputActionState::ShouldIgnoreInputOnCompositeBinding(void* binding, void* eventPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ShouldIgnoreInputOnCompositeBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, binding, eventPtr);
}
 bool UnityEngine::InputSystem::InputActionState::IsConflictingInput(ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState> trigger, int32_t actionIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "IsConflictingInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, trigger, actionIndex);
}
 uint16_t UnityEngine::InputSystem::InputActionState::GetActionBindingStartIndexAndCount(int32_t actionIndex, ByRef<uint16_t> bindingCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "GetActionBindingStartIndexAndCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(const_cast<void*>(instance), ___internal_method, actionIndex, bindingCount);
}
 void UnityEngine::InputSystem::InputActionState::ProcessDefaultInteraction(ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState> trigger, int32_t actionIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ProcessDefaultInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, trigger, actionIndex);
}
 void UnityEngine::InputSystem::InputActionState::ProcessInteractions(ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState> trigger, int32_t interactionStartIndex, int32_t interactionCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ProcessInteractions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, trigger, interactionStartIndex, interactionCount);
}
 void UnityEngine::InputSystem::InputActionState::ProcessTimeout(double_t time, int32_t mapIndex, int32_t controlIndex, int32_t bindingIndex, int32_t interactionIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ProcessTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, time, mapIndex, controlIndex, bindingIndex, interactionIndex);
}
 void UnityEngine::InputSystem::InputActionState::SetTotalTimeoutCompletionTime(float_t seconds, ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState> trigger)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "SetTotalTimeoutCompletionTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, seconds, trigger);
}
 void UnityEngine::InputSystem::InputActionState::StartTimeout(float_t seconds, ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState> trigger)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "StartTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, seconds, trigger);
}
 void UnityEngine::InputSystem::InputActionState::StopTimeout(int32_t interactionIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "StopTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, interactionIndex);
}
/// @param phaseAfterPerformed: UnityEngine::InputSystem::InputActionPhase (default: 1)
/// @param processNextInteractionOnCancel: bool (default: true)
 void UnityEngine::InputSystem::InputActionState::ChangePhaseOfInteraction(UnityEngine::InputSystem::InputActionPhase newPhase, ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState> trigger, UnityEngine::InputSystem::InputActionPhase phaseAfterPerformed, bool processNextInteractionOnCancel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ChangePhaseOfInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionPhase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionPhase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newPhase, trigger, phaseAfterPerformed, processNextInteractionOnCancel);
}
/// @param phaseAfterPerformedOrCanceled: UnityEngine::InputSystem::InputActionPhase (default: 1)
 bool UnityEngine::InputSystem::InputActionState::ChangePhaseOfAction(UnityEngine::InputSystem::InputActionPhase newPhase, ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState> trigger, UnityEngine::InputSystem::InputActionPhase phaseAfterPerformedOrCanceled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ChangePhaseOfAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionPhase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionPhase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, newPhase, trigger, phaseAfterPerformedOrCanceled);
}
 void UnityEngine::InputSystem::InputActionState::ChangePhaseOfActionInternal(int32_t actionIndex, void* actionState, UnityEngine::InputSystem::InputActionPhase newPhase, ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState> trigger)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ChangePhaseOfActionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionPhase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, actionIndex, actionState, newPhase, trigger);
}
 void UnityEngine::InputSystem::InputActionState::CallActionListeners(int32_t actionIndex, UnityEngine::InputSystem::InputActionMap actionMap, UnityEngine::InputSystem::InputActionPhase phase, ByRef<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>>> listeners, ::StringW callbackName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "CallActionListeners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionMap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionPhase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, actionIndex, actionMap, phase, listeners, callbackName);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::InputActionState::GetActionOrNoneString(ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState> trigger)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "GetActionOrNoneString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, trigger);
}
 UnityEngine::InputSystem::InputAction UnityEngine::InputSystem::InputActionState::GetActionOrNull(int32_t bindingIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "GetActionOrNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputAction, false>(const_cast<void*>(instance), ___internal_method, bindingIndex);
}
 UnityEngine::InputSystem::InputAction UnityEngine::InputSystem::InputActionState::GetActionOrNull(ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState> trigger)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "GetActionOrNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputAction, false>(const_cast<void*>(instance), ___internal_method, trigger);
}
 UnityEngine::InputSystem::InputControl UnityEngine::InputSystem::InputActionState::GetControl(ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState> trigger)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "GetControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputControl, false>(const_cast<void*>(instance), ___internal_method, trigger);
}
 UnityEngine::InputSystem::IInputInteraction UnityEngine::InputSystem::InputActionState::GetInteractionOrNull(ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState> trigger)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "GetInteractionOrNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::IInputInteraction, false>(const_cast<void*>(instance), ___internal_method, trigger);
}
 int32_t UnityEngine::InputSystem::InputActionState::GetBindingIndexInMap(int32_t bindingIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "GetBindingIndexInMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bindingIndex);
}
 int32_t UnityEngine::InputSystem::InputActionState::GetBindingIndexInState(int32_t mapIndex, int32_t bindingIndexInMap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "GetBindingIndexInState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, mapIndex, bindingIndexInMap);
}
 ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState> UnityEngine::InputSystem::InputActionState::GetBindingState(int32_t bindingIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "GetBindingState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>, false>(const_cast<void*>(instance), ___internal_method, bindingIndex);
}
 ByRef<UnityEngine::InputSystem::InputBinding> UnityEngine::InputSystem::InputActionState::GetBinding(int32_t bindingIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "GetBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<ByRef<UnityEngine::InputSystem::InputBinding>, false>(const_cast<void*>(instance), ___internal_method, bindingIndex);
}
 UnityEngine::InputSystem::InputActionMap UnityEngine::InputSystem::InputActionState::GetActionMap(int32_t bindingIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "GetActionMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputActionMap, false>(const_cast<void*>(instance), ___internal_method, bindingIndex);
}
 void UnityEngine::InputSystem::InputActionState::ResetInteractionStateAndCancelIfNecessary(int32_t mapIndex, int32_t bindingIndex, int32_t interactionIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ResetInteractionStateAndCancelIfNecessary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mapIndex, bindingIndex, interactionIndex);
}
 void UnityEngine::InputSystem::InputActionState::ResetInteractionState(int32_t interactionIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ResetInteractionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, interactionIndex);
}
 int32_t UnityEngine::InputSystem::InputActionState::GetValueSizeInBytes(int32_t bindingIndex, int32_t controlIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "GetValueSizeInBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bindingIndex, controlIndex);
}
 System::Type UnityEngine::InputSystem::InputActionState::GetValueType(int32_t bindingIndex, int32_t controlIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "GetValueType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method, bindingIndex, controlIndex);
}
/// @param threshold: float_t (default: 0)
 bool UnityEngine::InputSystem::InputActionState::IsActuated(ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState> trigger, float_t threshold)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "IsActuated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, trigger, threshold);
}
/// @param ignoreComposites: bool (default: false)
 void UnityEngine::InputSystem::InputActionState::ReadValue(int32_t bindingIndex, int32_t controlIndex, void* buffer, int32_t bufferSize, bool ignoreComposites)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ReadValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindingIndex, controlIndex, buffer, bufferSize, ignoreComposites);
}
/// @param ignoreComposites: bool (default: false)
template<typename TValue>
 TValue UnityEngine::InputSystem::InputActionState::ReadValue(int32_t bindingIndex, int32_t controlIndex, bool ignoreComposites)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                        "ReadValue",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, bindingIndex, controlIndex, ignoreComposites);
}
/// @param controlOfType: UnityEngine::InputSystem::InputControl_1<TValue> (default: csnull)
template<typename TValue>
 TValue UnityEngine::InputSystem::InputActionState::ApplyProcessors(int32_t bindingIndex, TValue value, UnityEngine::InputSystem::InputControl_1<TValue> controlOfType)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                        "ApplyProcessors",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl_1<TValue>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, bindingIndex, value, controlOfType);
}
 float_t UnityEngine::InputSystem::InputActionState::EvaluateCompositePartMagnitude(int32_t bindingIndex, int32_t partNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "EvaluateCompositePartMagnitude",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, bindingIndex, partNumber);
}
 double_t UnityEngine::InputSystem::InputActionState::GetCompositePartPressTime(int32_t bindingIndex, int32_t partNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "GetCompositePartPressTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method, bindingIndex, partNumber);
}
/// @param comparer: TComparer (default: csnull)
template<typename TValue,typename TComparer>
 TValue UnityEngine::InputSystem::InputActionState::ReadCompositePartValue(int32_t bindingIndex, int32_t partNumber, void* buttonValuePtr, ByRef<int32_t> controlIndex, TComparer comparer)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                        "ReadCompositePartValue",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComparer>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TComparer>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComparer>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, bindingIndex, partNumber, buttonValuePtr, controlIndex, comparer);
}
 bool UnityEngine::InputSystem::InputActionState::ReadCompositePartValue(int32_t bindingIndex, int32_t partNumber, void* buffer, int32_t bufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ReadCompositePartValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, bindingIndex, partNumber, buffer, bufferSize);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::InputActionState::ReadCompositePartValueAsObject(int32_t bindingIndex, int32_t partNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ReadCompositePartValueAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, bindingIndex, partNumber);
}
/// @param ignoreComposites: bool (default: false)
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::InputActionState::ReadValueAsObject(int32_t bindingIndex, int32_t controlIndex, bool ignoreComposites)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ReadValueAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, bindingIndex, controlIndex, ignoreComposites);
}
 bool UnityEngine::InputSystem::InputActionState::ReadValueAsButton(int32_t bindingIndex, int32_t controlIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ReadValueAsButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, bindingIndex, controlIndex);
}
 UnityEngine::InputSystem::Utilities::ISavedState UnityEngine::InputSystem::InputActionState::SaveAndResetState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "SaveAndResetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::ISavedState, false>(nullptr, ___internal_method);
}
 void UnityEngine::InputSystem::InputActionState::AddToGlobalList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "AddToGlobalList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputActionState::RemoveMapFromGlobalList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "RemoveMapFromGlobalList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputActionState::CompactGlobalList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "CompactGlobalList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void UnityEngine::InputSystem::InputActionState::NotifyListenersOfActionChange(UnityEngine::InputSystem::InputActionChange change)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "NotifyListenersOfActionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionChange>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, change);
}
 void UnityEngine::InputSystem::InputActionState::NotifyListenersOfActionChange(UnityEngine::InputSystem::InputActionChange change, ::bs_hook::Il2CppWrapperType actionOrMapOrAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "NotifyListenersOfActionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionChange>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, change, actionOrMapOrAsset);
}
 void UnityEngine::InputSystem::InputActionState::ResetGlobals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "ResetGlobals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 int32_t UnityEngine::InputSystem::InputActionState::FindAllEnabledActions(System::Collections::Generic::List_1<UnityEngine::InputSystem::InputAction> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "FindAllEnabledActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::InputSystem::InputAction>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, result);
}
 void UnityEngine::InputSystem::InputActionState::OnDeviceChange(UnityEngine::InputSystem::InputDevice device, UnityEngine::InputSystem::InputDeviceChange change)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "OnDeviceChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDeviceChange>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, change);
}
 void UnityEngine::InputSystem::InputActionState::DeferredResolutionOfBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "DeferredResolutionOfBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void UnityEngine::InputSystem::InputActionState::DisableAllActions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "DisableAllActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void UnityEngine::InputSystem::InputActionState::DestroyAllActionMapStates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            "DestroyAllActionMapStates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
 UnityEngine::InputSystem::InputActionState::InputActionState()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<InputActionState>())) {}
 void UnityEngine::InputSystem::InputActionState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputActionState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
