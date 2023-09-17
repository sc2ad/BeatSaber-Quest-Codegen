#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/zzzz__InputInteractionContext_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionPhase_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputInteractionContext__Flags::____UnityEngine__InputSystem__InputInteractionContext__Flags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputInteractionContext__Flags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputInteractionContext__Flags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputInteractionContext__Flags  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputInteractionContext__Flags::TimerHasExpired{2};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.get_action
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction (::UnityEngine::InputSystem::InputInteractionContext::*)()>(&::UnityEngine::InputSystem::InputInteractionContext::get_action)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28ca1a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "get_action",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.get_control
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl (::UnityEngine::InputSystem::InputInteractionContext::*)()>(&::UnityEngine::InputSystem::InputInteractionContext::get_control)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28ca1cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "get_control",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.get_phase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionPhase (::UnityEngine::InputSystem::InputInteractionContext::*)()>(&::UnityEngine::InputSystem::InputInteractionContext::get_phase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28ca1f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "get_phase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.get_time
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::InputInteractionContext::*)()>(&::UnityEngine::InputSystem::InputInteractionContext::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28ca1f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "get_time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.get_startTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::InputInteractionContext::*)()>(&::UnityEngine::InputSystem::InputInteractionContext::get_startTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28ca200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "get_startTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.get_timerHasExpired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputInteractionContext::*)()>(&::UnityEngine::InputSystem::InputInteractionContext::get_timerHasExpired)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28ca208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "get_timerHasExpired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.set_timerHasExpired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputInteractionContext::*)(bool)>(&::UnityEngine::InputSystem::InputInteractionContext::set_timerHasExpired)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28ca214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "set_timerHasExpired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.get_isWaiting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputInteractionContext::*)()>(&::UnityEngine::InputSystem::InputInteractionContext::get_isWaiting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28ca230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "get_isWaiting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.get_isStarted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputInteractionContext::*)()>(&::UnityEngine::InputSystem::InputInteractionContext::get_isStarted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28ca240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "get_isStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.ComputeMagnitude
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::InputInteractionContext::*)()>(&::UnityEngine::InputSystem::InputInteractionContext::ComputeMagnitude)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28ca250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "ComputeMagnitude",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.ControlIsActuated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputInteractionContext::*)(float_t)>(&::UnityEngine::InputSystem::InputInteractionContext::ControlIsActuated)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28ca258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "ControlIsActuated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.Started
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputInteractionContext::*)()>(&::UnityEngine::InputSystem::InputInteractionContext::Started)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x28ca264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "Started",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.Performed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputInteractionContext::*)()>(&::UnityEngine::InputSystem::InputInteractionContext::Performed)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28ca29c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "Performed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.PerformedAndStayStarted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputInteractionContext::*)()>(&::UnityEngine::InputSystem::InputInteractionContext::PerformedAndStayStarted)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28ca2dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "PerformedAndStayStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.PerformedAndStayPerformed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputInteractionContext::*)()>(&::UnityEngine::InputSystem::InputInteractionContext::PerformedAndStayPerformed)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28ca31c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "PerformedAndStayPerformed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.Canceled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputInteractionContext::*)()>(&::UnityEngine::InputSystem::InputInteractionContext::Canceled)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28ca35c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "Canceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.Waiting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputInteractionContext::*)()>(&::UnityEngine::InputSystem::InputInteractionContext::Waiting)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28ca39c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "Waiting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.SetTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputInteractionContext::*)(float_t)>(&::UnityEngine::InputSystem::InputInteractionContext::SetTimeout)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28ca3dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "SetTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.SetTotalTimeoutCompletionTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputInteractionContext::*)(float_t)>(&::UnityEngine::InputSystem::InputInteractionContext::SetTotalTimeoutCompletionTime)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x28ca400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "SetTotalTimeoutCompletionTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.get_mapIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputInteractionContext::*)()>(&::UnityEngine::InputSystem::InputInteractionContext::get_mapIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28ca494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "get_mapIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.get_controlIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputInteractionContext::*)()>(&::UnityEngine::InputSystem::InputInteractionContext::get_controlIndex)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28ca49c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "get_controlIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.get_bindingIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputInteractionContext::*)()>(&::UnityEngine::InputSystem::InputInteractionContext::get_bindingIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28ca4a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "get_bindingIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.get_interactionIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputInteractionContext::*)()>(&::UnityEngine::InputSystem::InputInteractionContext::get_interactionIndex)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28ca4b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "get_interactionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Flags", ty: "::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputInteractionContext__Flags", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TriggerState", ty: "::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__TriggerState", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputInteractionContext::InputInteractionContext(::UnityEngine::InputSystem::InputActionState m_State, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputInteractionContext__Flags m_Flags, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__TriggerState m_TriggerState) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_State = m_State;
this->m_Flags = m_Flags;
this->m_TriggerState = m_TriggerState;
}
constexpr void ::UnityEngine::InputSystem::InputInteractionContext::__set_m_State(::UnityEngine::InputSystem::InputActionState value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionState, 0x0>(this->__instance, std::forward<::UnityEngine::InputSystem::InputActionState>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionState ::UnityEngine::InputSystem::InputInteractionContext::__get_m_State() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionState, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::InputInteractionContext::__set_m_Flags(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputInteractionContext__Flags value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputInteractionContext__Flags, 0x8>(this->__instance, std::forward<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputInteractionContext__Flags>(value));
}
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputInteractionContext__Flags ::UnityEngine::InputSystem::InputInteractionContext::__get_m_Flags() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputInteractionContext__Flags, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::InputInteractionContext::__set_m_TriggerState(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__TriggerState value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__TriggerState, 0x10>(this->__instance, std::forward<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__TriggerState>(value));
}
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__TriggerState ::UnityEngine::InputSystem::InputInteractionContext::__get_m_TriggerState() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__TriggerState, 0x10>(this->__instance);
}
 ::UnityEngine::InputSystem::InputAction ::UnityEngine::InputSystem::InputInteractionContext::get_action()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "get_action",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::UnityEngine::InputSystem::InputControl ::UnityEngine::InputSystem::InputInteractionContext::get_control()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "get_control",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::UnityEngine::InputSystem::InputActionPhase ::UnityEngine::InputSystem::InputInteractionContext::get_phase()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "get_phase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionPhase, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 double_t ::UnityEngine::InputSystem::InputInteractionContext::get_time()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "get_time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 double_t ::UnityEngine::InputSystem::InputInteractionContext::get_startTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "get_startTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::UnityEngine::InputSystem::InputInteractionContext::get_timerHasExpired()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "get_timerHasExpired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputInteractionContext::set_timerHasExpired(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "set_timerHasExpired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool ::UnityEngine::InputSystem::InputInteractionContext::get_isWaiting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "get_isWaiting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::UnityEngine::InputSystem::InputInteractionContext::get_isStarted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "get_isStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 float_t ::UnityEngine::InputSystem::InputInteractionContext::ComputeMagnitude()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "ComputeMagnitude",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
/// @param threshold: float_t (default: 0)
 bool ::UnityEngine::InputSystem::InputInteractionContext::ControlIsActuated(float_t threshold)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "ControlIsActuated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, threshold);
}
 void ::UnityEngine::InputSystem::InputInteractionContext::Started()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "Started",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputInteractionContext::Performed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "Performed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputInteractionContext::PerformedAndStayStarted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "PerformedAndStayStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputInteractionContext::PerformedAndStayPerformed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "PerformedAndStayPerformed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputInteractionContext::Canceled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "Canceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputInteractionContext::Waiting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "Waiting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputInteractionContext::SetTimeout(float_t seconds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "SetTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, seconds);
}
 void ::UnityEngine::InputSystem::InputInteractionContext::SetTotalTimeoutCompletionTime(float_t seconds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "SetTotalTimeoutCompletionTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, seconds);
}
template<typename TValue>
 TValue ::UnityEngine::InputSystem::InputInteractionContext::ReadValue()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                        "ReadValue",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t ::UnityEngine::InputSystem::InputInteractionContext::get_mapIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "get_mapIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t ::UnityEngine::InputSystem::InputInteractionContext::get_controlIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "get_controlIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t ::UnityEngine::InputSystem::InputInteractionContext::get_bindingIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "get_bindingIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t ::UnityEngine::InputSystem::InputInteractionContext::get_interactionIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                            "get_interactionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace
