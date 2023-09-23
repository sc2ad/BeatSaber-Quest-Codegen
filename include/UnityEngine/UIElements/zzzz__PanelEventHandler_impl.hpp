#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PanelEventHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ICancelHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__BlurEvent_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IMoveHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerMoveHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISubmitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISelectHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerDownHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDeselectHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/EventSystems/zzzz__AxisEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IScrollHandler_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerUpHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__IRuntimePanelComponent_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseRuntimePanel_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPointerEvent_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEventType::UnityEngine__UIElements__PanelEventHandler__PointerEventType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEventType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEventType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEventType  UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEventType::Default{0};
constexpr UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEventType  UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEventType::Down{1};
constexpr UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEventType  UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEventType::Up{2};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.get_pointerId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_pointerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1b890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_pointerId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.set_pointerId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)(int32_t)>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_pointerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1b898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_pointerId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.get_pointerType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_pointerType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1b8a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_pointerType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.set_pointerType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)(::StringW)>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_pointerType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1b8a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_pointerType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.get_isPrimary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_isPrimary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1b8b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_isPrimary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.set_isPrimary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)(bool)>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_isPrimary)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1b8b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_isPrimary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.get_button
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_button)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1b8c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_button",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.set_button
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)(int32_t)>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_button)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1b8cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_button",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.get_pressedButtons
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_pressedButtons)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1b8d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_pressedButtons",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.set_pressedButtons
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)(int32_t)>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_pressedButtons)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1b8dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_pressedButtons",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.get_position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1b8e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.set_position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)(UnityEngine::Vector3)>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1b8f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.get_localPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_localPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1b8fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_localPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.set_localPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)(UnityEngine::Vector3)>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_localPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1b908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_localPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.get_deltaPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_deltaPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1b914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_deltaPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.set_deltaPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)(UnityEngine::Vector3)>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_deltaPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1b920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_deltaPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.get_deltaTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_deltaTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1b92c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_deltaTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.set_deltaTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)(float_t)>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_deltaTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1b934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_deltaTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.get_clickCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_clickCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1b93c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_clickCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.set_clickCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)(int32_t)>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_clickCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1b944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_clickCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.get_pressure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_pressure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1b94c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_pressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.set_pressure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)(float_t)>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_pressure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1b954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_pressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.get_tangentialPressure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_tangentialPressure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1b95c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_tangentialPressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.set_tangentialPressure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)(float_t)>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_tangentialPressure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1b964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_tangentialPressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.get_altitudeAngle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_altitudeAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1b96c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_altitudeAngle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.set_altitudeAngle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)(float_t)>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_altitudeAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1b974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_altitudeAngle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.get_azimuthAngle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_azimuthAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1b97c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_azimuthAngle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.set_azimuthAngle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)(float_t)>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_azimuthAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1b984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_azimuthAngle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.get_twist
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_twist)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1b98c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_twist",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.set_twist
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)(float_t)>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_twist)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1b994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_twist",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.get_radius
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1b99c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_radius",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.set_radius
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)(UnityEngine::Vector2)>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1b9a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_radius",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.get_radiusVariance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_radiusVariance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1b9ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_radiusVariance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.set_radiusVariance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)(UnityEngine::Vector2)>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_radiusVariance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1b9b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_radiusVariance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.get_modifiers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::EventModifiers (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_modifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1b9bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_modifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.set_modifiers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)(UnityEngine::EventModifiers)>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_modifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1b9c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_modifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventModifiers>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.get_shiftKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_shiftKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1b9cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_shiftKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.get_ctrlKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_ctrlKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1b9d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_ctrlKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.get_commandKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_commandKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1b9e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_commandKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.get_altKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_altKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1b9f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_altKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.get_actionKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_actionKey)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2c1b9fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_actionKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)(UnityEngine::UIElements::PanelEventHandler, UnityEngine::EventSystems::PointerEventData, UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEventType)>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::Read)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x2c1b340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::PanelEventHandler>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEventType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent.SetPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::SetPosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c1b7d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "SetPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1b880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent._Read_g__InRange_82_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, int32_t, int32_t)>(&UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::_Read_g__InRange_82_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c1ba40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "<Read>g__InRange|82_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::UIElements::IPointerEvent
constexpr  UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::operator UnityEngine::UIElements::IPointerEvent() const noexcept {
return UnityEngine::UIElements::IPointerEvent(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__set__pointerId_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__get__pointerId_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__set__pointerType_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__get__pointerType_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__set__isPrimary_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__get__isPrimary_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__set__button_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__get__button_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__set__pressedButtons_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__get__pressedButtons_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__set__position_k__BackingField(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__get__position_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__set__localPosition_k__BackingField(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__get__localPosition_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__set__deltaPosition_k__BackingField(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__get__deltaPosition_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__set__deltaTime_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__get__deltaTime_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__set__clickCount_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__get__clickCount_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__set__pressure_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__get__pressure_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__set__tangentialPressure_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__get__tangentialPressure_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__set__altitudeAngle_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__get__altitudeAngle_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__set__azimuthAngle_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__get__azimuthAngle_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__set__twist_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__get__twist_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__set__radius_k__BackingField(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__get__radius_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__set__radiusVariance_k__BackingField(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x74>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__get__radiusVariance_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x74>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__set__modifiers_k__BackingField(UnityEngine::EventModifiers value)  {
::cordl_internals::setInstanceField<UnityEngine::EventModifiers, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::EventModifiers>(value));
}
constexpr UnityEngine::EventModifiers UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::__get__modifiers_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::EventModifiers, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_pointerId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_pointerId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_pointerId(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_pointerId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_pointerType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_pointerType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_pointerType(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_pointerType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_isPrimary()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_isPrimary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_isPrimary(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_isPrimary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_button()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_button",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_button(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_button",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_pressedButtons()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_pressedButtons",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_pressedButtons(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_pressedButtons",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Vector3 UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_position()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_position(UnityEngine::Vector3 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Vector3 UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_localPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_localPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_localPosition(UnityEngine::Vector3 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_localPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Vector3 UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_deltaPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_deltaPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_deltaPosition(UnityEngine::Vector3 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_deltaPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_deltaTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_deltaTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_deltaTime(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_deltaTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_clickCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_clickCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_clickCount(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_clickCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_pressure()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_pressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_pressure(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_pressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_tangentialPressure()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_tangentialPressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_tangentialPressure(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_tangentialPressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_altitudeAngle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_altitudeAngle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_altitudeAngle(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_altitudeAngle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_azimuthAngle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_azimuthAngle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_azimuthAngle(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_azimuthAngle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_twist()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_twist",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_twist(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_twist",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Vector2 UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_radius()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_radius",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_radius(UnityEngine::Vector2 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_radius",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Vector2 UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_radiusVariance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_radiusVariance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_radiusVariance(UnityEngine::Vector2 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_radiusVariance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::EventModifiers UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_modifiers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_modifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::EventModifiers, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::set_modifiers(UnityEngine::EventModifiers value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "set_modifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventModifiers>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_shiftKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_shiftKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_ctrlKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_ctrlKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_commandKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_commandKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_altKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_altKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::get_actionKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "get_actionKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::Read(UnityEngine::UIElements::PanelEventHandler self, UnityEngine::EventSystems::PointerEventData eventData, UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEventType eventType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::PanelEventHandler>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEventType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, self, eventData, eventType);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::SetPosition(UnityEngine::Vector3 positionOverride, UnityEngine::Vector3 deltaOverride)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "SetPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, positionOverride, deltaOverride);
}
// Ctor Parameters []
 UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::UnityEngine__UIElements__PanelEventHandler__PointerEvent()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__UIElements__PanelEventHandler__PointerEvent>())) {}
 void UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent::_Read_g__InRange_82_0(int32_t i, int32_t start, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(),
                            "<Read>g__InRange|82_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, i, start, count);
}
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.get_panel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::IPanel (UnityEngine::UIElements::PanelEventHandler::*)()>(&UnityEngine::UIElements::PanelEventHandler::get_panel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c19248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "get_panel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.set_panel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PanelEventHandler::*)(UnityEngine::UIElements::IPanel)>(&UnityEngine::UIElements::PanelEventHandler::set_panel)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2c19250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "set_panel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPanel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.get_selectableGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (UnityEngine::UIElements::PanelEventHandler::*)()>(&UnityEngine::UIElements::PanelEventHandler::get_selectableGameObject)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c19674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "get_selectableGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.get_eventSystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::EventSystems::EventSystem (UnityEngine::UIElements::PanelEventHandler::*)()>(&UnityEngine::UIElements::PanelEventHandler::get_eventSystem)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2c1968c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "get_eventSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PanelEventHandler::*)()>(&UnityEngine::UIElements::PanelEventHandler::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c19760;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::PanelEventHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PanelEventHandler::*)()>(&UnityEngine::UIElements::PanelEventHandler::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c19768;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::PanelEventHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.RegisterCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PanelEventHandler::*)()>(&UnityEngine::UIElements::PanelEventHandler::RegisterCallbacks)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2c194b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "RegisterCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.UnregisterCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PanelEventHandler::*)()>(&UnityEngine::UIElements::PanelEventHandler::UnregisterCallbacks)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2c192f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "UnregisterCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.OnPanelDestroyed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PanelEventHandler::*)()>(&UnityEngine::UIElements::PanelEventHandler::OnPanelDestroyed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c19770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "OnPanelDestroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.OnElementFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PanelEventHandler::*)(UnityEngine::UIElements::FocusEvent)>(&UnityEngine::UIElements::PanelEventHandler::OnElementFocus)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2c19778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "OnElementFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::FocusEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.OnElementBlur
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PanelEventHandler::*)(UnityEngine::UIElements::BlurEvent)>(&UnityEngine::UIElements::PanelEventHandler::OnElementBlur)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c19860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "OnElementBlur",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::BlurEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.OnSelect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PanelEventHandler::*)(UnityEngine::EventSystems::BaseEventData)>(&UnityEngine::UIElements::PanelEventHandler::OnSelect)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2c19864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "OnSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.OnDeselect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PanelEventHandler::*)(UnityEngine::EventSystems::BaseEventData)>(&UnityEngine::UIElements::PanelEventHandler::OnDeselect)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2c198dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "OnDeselect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.OnPointerMove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PanelEventHandler::*)(UnityEngine::EventSystems::PointerEventData)>(&UnityEngine::UIElements::PanelEventHandler::OnPointerMove)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2c198f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "OnPointerMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.OnPointerUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PanelEventHandler::*)(UnityEngine::EventSystems::PointerEventData)>(&UnityEngine::UIElements::PanelEventHandler::OnPointerUp)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x2c19c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "OnPointerUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.OnPointerDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PanelEventHandler::*)(UnityEngine::EventSystems::PointerEventData)>(&UnityEngine::UIElements::PanelEventHandler::OnPointerDown)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x2c19e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "OnPointerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.OnPointerExit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PanelEventHandler::*)(UnityEngine::EventSystems::PointerEventData)>(&UnityEngine::UIElements::PanelEventHandler::OnPointerExit)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x2c1a0e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "OnPointerExit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.OnPointerEnter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PanelEventHandler::*)(UnityEngine::EventSystems::PointerEventData)>(&UnityEngine::UIElements::PanelEventHandler::OnPointerEnter)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2c1a39c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "OnPointerEnter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.OnSubmit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PanelEventHandler::*)(UnityEngine::EventSystems::BaseEventData)>(&UnityEngine::UIElements::PanelEventHandler::OnSubmit)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2c1a3f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "OnSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.OnCancel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PanelEventHandler::*)(UnityEngine::EventSystems::BaseEventData)>(&UnityEngine::UIElements::PanelEventHandler::OnCancel)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2c1a5a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "OnCancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.OnMove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PanelEventHandler::*)(UnityEngine::EventSystems::AxisEventData)>(&UnityEngine::UIElements::PanelEventHandler::OnMove)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2c1a760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "OnMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::AxisEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.OnScroll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PanelEventHandler::*)(UnityEngine::EventSystems::PointerEventData)>(&UnityEngine::UIElements::PanelEventHandler::OnScroll)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2c1a8ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "OnScroll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.SendEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PanelEventHandler::*)(UnityEngine::UIElements::EventBase, UnityEngine::EventSystems::BaseEventData)>(&UnityEngine::UIElements::PanelEventHandler::SendEvent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2c19bdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "SendEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.SendEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PanelEventHandler::*)(UnityEngine::UIElements::EventBase, UnityEngine::Event)>(&UnityEngine::UIElements::PanelEventHandler::SendEvent)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2c1aaac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "SendEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Event>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PanelEventHandler::*)()>(&UnityEngine::UIElements::PanelEventHandler::Update)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2c1ab0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PanelEventHandler::*)()>(&UnityEngine::UIElements::PanelEventHandler::LateUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1ad34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.ProcessImguiEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PanelEventHandler::*)(bool)>(&UnityEngine::UIElements::PanelEventHandler::ProcessImguiEvents)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2c1abec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "ProcessImguiEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.ProcessKeyboardEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PanelEventHandler::*)(UnityEngine::Event)>(&UnityEngine::UIElements::PanelEventHandler::ProcessKeyboardEvent)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2c1ad3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "ProcessKeyboardEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Event>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.ProcessTabEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PanelEventHandler::*)(UnityEngine::Event)>(&UnityEngine::UIElements::PanelEventHandler::ProcessTabEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2c1adb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "ProcessTabEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Event>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.SendTabEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PanelEventHandler::*)(UnityEngine::Event, int32_t)>(&UnityEngine::UIElements::PanelEventHandler::SendTabEvent)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2c1b1c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "SendTabEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Event>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.SendKeyUpEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PanelEventHandler::*)(UnityEngine::Event)>(&UnityEngine::UIElements::PanelEventHandler::SendKeyUpEvent)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2c1ae30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "SendKeyUpEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Event>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.SendKeyDownEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PanelEventHandler::*)(UnityEngine::Event)>(&UnityEngine::UIElements::PanelEventHandler::SendKeyDownEvent)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2c1afec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "SendKeyDownEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Event>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler.ReadPointerData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::PanelEventHandler::*)(UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent, UnityEngine::EventSystems::PointerEventData, UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEventType)>(&UnityEngine::UIElements::PanelEventHandler::ReadPointerData)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2c19aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "ReadPointerData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEventType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PanelEventHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PanelEventHandler::*)()>(&UnityEngine::UIElements::PanelEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2c1b7e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::EventSystems::IPointerMoveHandler
constexpr  UnityEngine::UIElements::PanelEventHandler::operator UnityEngine::EventSystems::IPointerMoveHandler() const noexcept {
return UnityEngine::EventSystems::IPointerMoveHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr  UnityEngine::UIElements::PanelEventHandler::operator UnityEngine::EventSystems::IEventSystemHandler() const noexcept {
return UnityEngine::EventSystems::IEventSystemHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IPointerUpHandler
constexpr  UnityEngine::UIElements::PanelEventHandler::operator UnityEngine::EventSystems::IPointerUpHandler() const noexcept {
return UnityEngine::EventSystems::IPointerUpHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IPointerDownHandler
constexpr  UnityEngine::UIElements::PanelEventHandler::operator UnityEngine::EventSystems::IPointerDownHandler() const noexcept {
return UnityEngine::EventSystems::IPointerDownHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::ISubmitHandler
constexpr  UnityEngine::UIElements::PanelEventHandler::operator UnityEngine::EventSystems::ISubmitHandler() const noexcept {
return UnityEngine::EventSystems::ISubmitHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::ICancelHandler
constexpr  UnityEngine::UIElements::PanelEventHandler::operator UnityEngine::EventSystems::ICancelHandler() const noexcept {
return UnityEngine::EventSystems::ICancelHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IMoveHandler
constexpr  UnityEngine::UIElements::PanelEventHandler::operator UnityEngine::EventSystems::IMoveHandler() const noexcept {
return UnityEngine::EventSystems::IMoveHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IScrollHandler
constexpr  UnityEngine::UIElements::PanelEventHandler::operator UnityEngine::EventSystems::IScrollHandler() const noexcept {
return UnityEngine::EventSystems::IScrollHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::ISelectHandler
constexpr  UnityEngine::UIElements::PanelEventHandler::operator UnityEngine::EventSystems::ISelectHandler() const noexcept {
return UnityEngine::EventSystems::ISelectHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IDeselectHandler
constexpr  UnityEngine::UIElements::PanelEventHandler::operator UnityEngine::EventSystems::IDeselectHandler() const noexcept {
return UnityEngine::EventSystems::IDeselectHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IPointerExitHandler
constexpr  UnityEngine::UIElements::PanelEventHandler::operator UnityEngine::EventSystems::IPointerExitHandler() const noexcept {
return UnityEngine::EventSystems::IPointerExitHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IPointerEnterHandler
constexpr  UnityEngine::UIElements::PanelEventHandler::operator UnityEngine::EventSystems::IPointerEnterHandler() const noexcept {
return UnityEngine::EventSystems::IPointerEnterHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::UIElements::IRuntimePanelComponent
constexpr  UnityEngine::UIElements::PanelEventHandler::operator UnityEngine::UIElements::IRuntimePanelComponent() const noexcept {
return UnityEngine::UIElements::IRuntimePanelComponent(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::PanelEventHandler::__set_m_Panel(UnityEngine::UIElements::BaseRuntimePanel value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::BaseRuntimePanel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::BaseRuntimePanel>(value));
}
constexpr UnityEngine::UIElements::BaseRuntimePanel UnityEngine::UIElements::PanelEventHandler::__get_m_Panel() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::BaseRuntimePanel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::PanelEventHandler::__set_m_PointerEvent(UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>(value));
}
constexpr UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent UnityEngine::UIElements::PanelEventHandler::__get_m_PointerEvent() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::PanelEventHandler::__set_m_Selecting(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::PanelEventHandler::__get_m_Selecting() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::PanelEventHandler::__set_m_Event(UnityEngine::Event value)  {
::cordl_internals::setInstanceField<UnityEngine::Event, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Event>(value));
}
constexpr UnityEngine::Event UnityEngine::UIElements::PanelEventHandler::__get_m_Event() const {
return ::cordl_internals::getInstanceField<UnityEngine::Event, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UIElements::PanelEventHandler::__set_s_Modifiers(UnityEngine::EventModifiers value)  {
::cordl_internals::setStaticField<UnityEngine::EventModifiers, "s_Modifiers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get>(std::forward<UnityEngine::EventModifiers>(value));
}
 UnityEngine::EventModifiers UnityEngine::UIElements::PanelEventHandler::__get_s_Modifiers()  {
return ::cordl_internals::getStaticField<UnityEngine::EventModifiers, "s_Modifiers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get>();
}
 UnityEngine::UIElements::IPanel UnityEngine::UIElements::PanelEventHandler::get_panel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "get_panel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::IPanel, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::PanelEventHandler::set_panel(UnityEngine::UIElements::IPanel value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "set_panel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPanel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::GameObject UnityEngine::UIElements::PanelEventHandler::get_selectableGameObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "get_selectableGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::EventSystems::EventSystem UnityEngine::UIElements::PanelEventHandler::get_eventSystem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "get_eventSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::EventSystems::EventSystem, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::PanelEventHandler::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::PanelEventHandler::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::PanelEventHandler::RegisterCallbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "RegisterCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::PanelEventHandler::UnregisterCallbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "UnregisterCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::PanelEventHandler::OnPanelDestroyed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "OnPanelDestroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::PanelEventHandler::OnElementFocus(UnityEngine::UIElements::FocusEvent e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "OnElementFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::FocusEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e);
}
 void UnityEngine::UIElements::PanelEventHandler::OnElementBlur(UnityEngine::UIElements::BlurEvent e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "OnElementBlur",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::BlurEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e);
}
 void UnityEngine::UIElements::PanelEventHandler::OnSelect(UnityEngine::EventSystems::BaseEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "OnSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::UIElements::PanelEventHandler::OnDeselect(UnityEngine::EventSystems::BaseEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "OnDeselect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::UIElements::PanelEventHandler::OnPointerMove(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "OnPointerMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::UIElements::PanelEventHandler::OnPointerUp(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "OnPointerUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::UIElements::PanelEventHandler::OnPointerDown(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "OnPointerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::UIElements::PanelEventHandler::OnPointerExit(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "OnPointerExit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::UIElements::PanelEventHandler::OnPointerEnter(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "OnPointerEnter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::UIElements::PanelEventHandler::OnSubmit(UnityEngine::EventSystems::BaseEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "OnSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::UIElements::PanelEventHandler::OnCancel(UnityEngine::EventSystems::BaseEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "OnCancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::UIElements::PanelEventHandler::OnMove(UnityEngine::EventSystems::AxisEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "OnMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::AxisEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::UIElements::PanelEventHandler::OnScroll(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "OnScroll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::UIElements::PanelEventHandler::SendEvent(UnityEngine::UIElements::EventBase e, UnityEngine::EventSystems::BaseEventData sourceEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "SendEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e, sourceEventData);
}
 void UnityEngine::UIElements::PanelEventHandler::SendEvent(UnityEngine::UIElements::EventBase e, UnityEngine::Event sourceEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "SendEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Event>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e, sourceEvent);
}
 void UnityEngine::UIElements::PanelEventHandler::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::PanelEventHandler::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::PanelEventHandler::ProcessImguiEvents(bool isSelected)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "ProcessImguiEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, isSelected);
}
 void UnityEngine::UIElements::PanelEventHandler::ProcessKeyboardEvent(UnityEngine::Event e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "ProcessKeyboardEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Event>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e);
}
 void UnityEngine::UIElements::PanelEventHandler::ProcessTabEvent(UnityEngine::Event e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "ProcessTabEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Event>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e);
}
 void UnityEngine::UIElements::PanelEventHandler::SendTabEvent(UnityEngine::Event e, int32_t direction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "SendTabEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Event>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e, direction);
}
 void UnityEngine::UIElements::PanelEventHandler::SendKeyUpEvent(UnityEngine::Event e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "SendKeyUpEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Event>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e);
}
 void UnityEngine::UIElements::PanelEventHandler::SendKeyDownEvent(UnityEngine::Event e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "SendKeyDownEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Event>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e);
}
/// @param eventType: UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEventType (default: 0)
 bool UnityEngine::UIElements::PanelEventHandler::ReadPointerData(UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent pe, UnityEngine::EventSystems::PointerEventData eventData, UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEventType eventType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            "ReadPointerData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEventType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pe, eventData, eventType);
}
// Ctor Parameters []
 UnityEngine::UIElements::PanelEventHandler::PanelEventHandler()  : UnityEngine::EventSystems::UIBehaviour(THROW_UNLESS(::il2cpp_utils::New<PanelEventHandler>())) {}
 void UnityEngine::UIElements::PanelEventHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelEventHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
