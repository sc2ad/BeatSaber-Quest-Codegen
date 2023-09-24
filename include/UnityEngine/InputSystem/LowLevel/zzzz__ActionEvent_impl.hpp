#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__ActionEvent_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__ActionEvent_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputEventTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionPhase_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__ActionEvent___m_ValueData_e__FixedBuffer::UnityEngine__InputSystem__LowLevel__ActionEvent___m_ValueData_e__FixedBuffer(uint8_t FixedElementField) noexcept : ::bs_hook::ValueTypeWrapper() {this->FixedElementField = FixedElementField;
}
constexpr void UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__ActionEvent___m_ValueData_e__FixedBuffer::__set_FixedElementField(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__ActionEvent___m_ValueData_e__FixedBuffer::__get_FixedElementField() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::ActionEvent.get_Type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (*)()>(&UnityEngine::InputSystem::LowLevel::ActionEvent::get_Type)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2956860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::ActionEvent.get_startTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::InputSystem::LowLevel::ActionEvent::*)()>(&UnityEngine::InputSystem::LowLevel::ActionEvent::get_startTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2956890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "get_startTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::ActionEvent.set_startTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::ActionEvent::*)(double_t)>(&UnityEngine::InputSystem::LowLevel::ActionEvent::set_startTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2956898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "set_startTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::ActionEvent.get_phase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputActionPhase (UnityEngine::InputSystem::LowLevel::ActionEvent::*)()>(&UnityEngine::InputSystem::LowLevel::ActionEvent::get_phase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29568a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "get_phase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::ActionEvent.set_phase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::ActionEvent::*)(UnityEngine::InputSystem::InputActionPhase)>(&UnityEngine::InputSystem::LowLevel::ActionEvent::set_phase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29568a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "set_phase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionPhase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::ActionEvent.get_valueData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (UnityEngine::InputSystem::LowLevel::ActionEvent::*)()>(&UnityEngine::InputSystem::LowLevel::ActionEvent::get_valueData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29568b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "get_valueData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::ActionEvent.get_valueSizeInBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::LowLevel::ActionEvent::*)()>(&UnityEngine::InputSystem::LowLevel::ActionEvent::get_valueSizeInBytes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29568b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "get_valueSizeInBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::ActionEvent.get_stateIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::LowLevel::ActionEvent::*)()>(&UnityEngine::InputSystem::LowLevel::ActionEvent::get_stateIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29568cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "get_stateIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::ActionEvent.set_stateIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::ActionEvent::*)(int32_t)>(&UnityEngine::InputSystem::LowLevel::ActionEvent::set_stateIndex)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x29568d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "set_stateIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::ActionEvent.get_controlIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::LowLevel::ActionEvent::*)()>(&UnityEngine::InputSystem::LowLevel::ActionEvent::get_controlIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2956938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "get_controlIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::ActionEvent.set_controlIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::ActionEvent::*)(int32_t)>(&UnityEngine::InputSystem::LowLevel::ActionEvent::set_controlIndex)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2956940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "set_controlIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::ActionEvent.get_bindingIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::LowLevel::ActionEvent::*)()>(&UnityEngine::InputSystem::LowLevel::ActionEvent::get_bindingIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29569a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "get_bindingIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::ActionEvent.set_bindingIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::ActionEvent::*)(int32_t)>(&UnityEngine::InputSystem::LowLevel::ActionEvent::set_bindingIndex)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x29569ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "set_bindingIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::ActionEvent.get_interactionIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::LowLevel::ActionEvent::*)()>(&UnityEngine::InputSystem::LowLevel::ActionEvent::get_interactionIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2956a10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "get_interactionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::ActionEvent.set_interactionIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::ActionEvent::*)(int32_t)>(&UnityEngine::InputSystem::LowLevel::ActionEvent::set_interactionIndex)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2956a24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "set_interactionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::ActionEvent.ToEventPtr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::LowLevel::InputEventPtr (UnityEngine::InputSystem::LowLevel::ActionEvent::*)()>(&UnityEngine::InputSystem::LowLevel::ActionEvent::ToEventPtr)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2956a98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "ToEventPtr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::ActionEvent.get_typeStatic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::LowLevel::ActionEvent::*)()>(&UnityEngine::InputSystem::LowLevel::ActionEvent::get_typeStatic)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2956a9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::ActionEvent.GetEventSizeWithValueSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&UnityEngine::InputSystem::LowLevel::ActionEvent::GetEventSizeWithValueSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2956acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "GetEventSizeWithValueSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::ActionEvent.From
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&UnityEngine::InputSystem::LowLevel::ActionEvent::From)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2956ad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "From",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo
constexpr  UnityEngine::InputSystem::LowLevel::ActionEvent::operator UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo() const {
return UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "baseEvent", ty: "UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ControlIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BindingIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InteractionIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StateIndex", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Phase", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StartTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ValueData", ty: "UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__ActionEvent___m_ValueData_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::LowLevel::ActionEvent::ActionEvent(UnityEngine::InputSystem::LowLevel::InputEvent baseEvent, uint16_t m_ControlIndex, uint16_t m_BindingIndex, uint16_t m_InteractionIndex, uint8_t m_StateIndex, uint8_t m_Phase, double_t m_StartTime, UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__ActionEvent___m_ValueData_e__FixedBuffer m_ValueData) noexcept : ::bs_hook::ValueTypeWrapper() {this->baseEvent = baseEvent;
this->m_ControlIndex = m_ControlIndex;
this->m_BindingIndex = m_BindingIndex;
this->m_InteractionIndex = m_InteractionIndex;
this->m_StateIndex = m_StateIndex;
this->m_Phase = m_Phase;
this->m_StartTime = m_StartTime;
this->m_ValueData = m_ValueData;
}
constexpr void UnityEngine::InputSystem::LowLevel::ActionEvent::__set_baseEvent(UnityEngine::InputSystem::LowLevel::InputEvent value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::InputEvent, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::LowLevel::InputEvent>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::InputEvent UnityEngine::InputSystem::LowLevel::ActionEvent::__get_baseEvent() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::InputEvent, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::ActionEvent::__set_m_ControlIndex(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x14>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t UnityEngine::InputSystem::LowLevel::ActionEvent::__get_m_ControlIndex() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x14>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::ActionEvent::__set_m_BindingIndex(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x16>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t UnityEngine::InputSystem::LowLevel::ActionEvent::__get_m_BindingIndex() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x16>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::ActionEvent::__set_m_InteractionIndex(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x18>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t UnityEngine::InputSystem::LowLevel::ActionEvent::__get_m_InteractionIndex() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x18>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::ActionEvent::__set_m_StateIndex(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x1a>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t UnityEngine::InputSystem::LowLevel::ActionEvent::__get_m_StateIndex() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x1a>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::ActionEvent::__set_m_Phase(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x1b>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t UnityEngine::InputSystem::LowLevel::ActionEvent::__get_m_Phase() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x1b>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::ActionEvent::__set_m_StartTime(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x1c>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t UnityEngine::InputSystem::LowLevel::ActionEvent::__get_m_StartTime() const {
return ::cordl_internals::getInstanceField<double_t, 0x1c>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::ActionEvent::__set_m_ValueData(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__ActionEvent___m_ValueData_e__FixedBuffer value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__ActionEvent___m_ValueData_e__FixedBuffer, 0x24>(this->__instance, std::forward<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__ActionEvent___m_ValueData_e__FixedBuffer>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__ActionEvent___m_ValueData_e__FixedBuffer UnityEngine::InputSystem::LowLevel::ActionEvent::__get_m_ValueData() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__ActionEvent___m_ValueData_e__FixedBuffer, 0x24>(this->__instance);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::ActionEvent::get_Type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
 double_t UnityEngine::InputSystem::LowLevel::ActionEvent::get_startTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "get_startTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::LowLevel::ActionEvent::set_startTime(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "set_startTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::InputSystem::InputActionPhase UnityEngine::InputSystem::LowLevel::ActionEvent::get_phase()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "get_phase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputActionPhase, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::LowLevel::ActionEvent::set_phase(UnityEngine::InputSystem::InputActionPhase value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "set_phase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionPhase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void* UnityEngine::InputSystem::LowLevel::ActionEvent::get_valueData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "get_valueData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t UnityEngine::InputSystem::LowLevel::ActionEvent::get_valueSizeInBytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "get_valueSizeInBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t UnityEngine::InputSystem::LowLevel::ActionEvent::get_stateIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "get_stateIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::LowLevel::ActionEvent::set_stateIndex(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "set_stateIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 int32_t UnityEngine::InputSystem::LowLevel::ActionEvent::get_controlIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "get_controlIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::LowLevel::ActionEvent::set_controlIndex(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "set_controlIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 int32_t UnityEngine::InputSystem::LowLevel::ActionEvent::get_bindingIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "get_bindingIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::LowLevel::ActionEvent::set_bindingIndex(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "set_bindingIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 int32_t UnityEngine::InputSystem::LowLevel::ActionEvent::get_interactionIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "get_interactionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::LowLevel::ActionEvent::set_interactionIndex(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "set_interactionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::InputSystem::LowLevel::InputEventPtr UnityEngine::InputSystem::LowLevel::ActionEvent::ToEventPtr()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "ToEventPtr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::LowLevel::InputEventPtr, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::ActionEvent::get_typeStatic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t UnityEngine::InputSystem::LowLevel::ActionEvent::GetEventSizeWithValueSize(int32_t valueSizeInBytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "GetEventSizeWithValueSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, valueSizeInBytes);
}
 void* UnityEngine::InputSystem::LowLevel::ActionEvent::From(UnityEngine::InputSystem::LowLevel::InputEventPtr ptr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                            "From",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, ptr);
}
