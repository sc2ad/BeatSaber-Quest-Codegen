#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/UI/zzzz__Selectable_impl.hpp"
namespace {
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISubmitHandler_def.hpp"
#include "UnityEngine/UI/zzzz__ICanvasElement_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/UI/zzzz__CanvasUpdate_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/UI/zzzz__ToggleGroup_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::____UnityEngine__UI__Toggle__ToggleTransition::____UnityEngine__UI__Toggle__ToggleTransition(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::UI::____UnityEngine__UI__Toggle__ToggleTransition::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UI::____UnityEngine__UI__Toggle__ToggleTransition::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::UI::____UnityEngine__UI__Toggle__ToggleTransition  ::UnityEngine::UI::____UnityEngine__UI__Toggle__ToggleTransition::None{0};
constexpr ::UnityEngine::UI::____UnityEngine__UI__Toggle__ToggleTransition  ::UnityEngine::UI::____UnityEngine__UI__Toggle__ToggleTransition::Fade{1};
//  Writing Method size for method: ::UnityEngine::UI::____UnityEngine__UI__Toggle__ToggleEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::____UnityEngine__UI__Toggle__ToggleEvent::*)()>(&::UnityEngine::UI::____UnityEngine__UI__Toggle__ToggleEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2c13660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::____UnityEngine__UI__Toggle__ToggleEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::UnityEngine::UI::____UnityEngine__UI__Toggle__ToggleEvent::____UnityEngine__UI__Toggle__ToggleEvent()  : ::UnityEngine::Events::UnityEvent_1<bool>(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__UI__Toggle__ToggleEvent>())) {}
 void ::UnityEngine::UI::____UnityEngine__UI__Toggle__ToggleEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::____UnityEngine__UI__Toggle__ToggleEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UI::Toggle.get_group
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::ToggleGroup (::UnityEngine::UI::Toggle::*)()>(&::UnityEngine::UI::Toggle::get_group)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c133ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            "get_group",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.set_group
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)(::UnityEngine::UI::ToggleGroup)>(&::UnityEngine::UI::Toggle::set_group)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2c133b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            "set_group",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::ToggleGroup>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)()>(&::UnityEngine::UI::Toggle::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2c135d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.Rebuild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)(::UnityEngine::UI::CanvasUpdate)>(&::UnityEngine::UI::Toggle::Rebuild)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c136a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UI::Toggle),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                                  46
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.LayoutComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)()>(&::UnityEngine::UI::Toggle::LayoutComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c136ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UI::Toggle),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                                  47
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.GraphicUpdateComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)()>(&::UnityEngine::UI::Toggle::GraphicUpdateComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c136b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UI::Toggle),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                                  48
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)()>(&::UnityEngine::UI::Toggle::OnDestroy)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2c136b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UI::Toggle),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)()>(&::UnityEngine::UI::Toggle::OnEnable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2c13b20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UI::Toggle),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)()>(&::UnityEngine::UI::Toggle::OnDisable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2c13b4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UI::Toggle),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.OnDidApplyAnimationProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)()>(&::UnityEngine::UI::Toggle::OnDidApplyAnimationProperties)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2c13b6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UI::Toggle),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.SetToggleGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)(::UnityEngine::UI::ToggleGroup, bool)>(&::UnityEngine::UI::Toggle::SetToggleGroup)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2c133d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            "SetToggleGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::ToggleGroup>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.get_isOn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::Toggle::*)()>(&::UnityEngine::UI::Toggle::get_isOn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c14074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            "get_isOn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.set_isOn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)(bool)>(&::UnityEngine::UI::Toggle::set_isOn)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1407c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            "set_isOn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.SetIsOnWithoutNotify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)(bool)>(&::UnityEngine::UI::Toggle::SetIsOnWithoutNotify)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c14088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            "SetIsOnWithoutNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)(bool, bool)>(&::UnityEngine::UI::Toggle::Set)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2c13c90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.PlayEffect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)(bool)>(&::UnityEngine::UI::Toggle::PlayEffect)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2c13510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            "PlayEffect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)()>(&::UnityEngine::UI::Toggle::Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c141d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UI::Toggle),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.InternalToggle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)()>(&::UnityEngine::UI::Toggle::InternalToggle)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2c141d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            "InternalToggle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.OnPointerClick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)(::UnityEngine::EventSystems::PointerEventData)>(&::UnityEngine::UI::Toggle::OnPointerClick)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c1422c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UI::Toggle),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                                  49
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.OnSubmit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Toggle::*)(::UnityEngine::EventSystems::BaseEventData)>(&::UnityEngine::UI::Toggle::OnSubmit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c14250;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UI::Toggle),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                                  50
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Toggle.UnityEngine_UI_ICanvasElement_get_transform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform (::UnityEngine::UI::Toggle::*)()>(&::UnityEngine::UI::Toggle::UnityEngine_UI_ICanvasElement_get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c14254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            "UnityEngine.UI.ICanvasElement.get_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::EventSystems::IPointerClickHandler
constexpr  ::UnityEngine::UI::Toggle::operator ::UnityEngine::EventSystems::IPointerClickHandler() const noexcept {
return ::UnityEngine::EventSystems::IPointerClickHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::EventSystems::IEventSystemHandler
constexpr  ::UnityEngine::UI::Toggle::operator ::UnityEngine::EventSystems::IEventSystemHandler() const noexcept {
return ::UnityEngine::EventSystems::IEventSystemHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::EventSystems::ISubmitHandler
constexpr  ::UnityEngine::UI::Toggle::operator ::UnityEngine::EventSystems::ISubmitHandler() const noexcept {
return ::UnityEngine::EventSystems::ISubmitHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::UI::ICanvasElement
constexpr  ::UnityEngine::UI::Toggle::operator ::UnityEngine::UI::ICanvasElement() const noexcept {
return ::UnityEngine::UI::ICanvasElement(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UI::Toggle::__set_toggleTransition(::UnityEngine::UI::____UnityEngine__UI__Toggle__ToggleTransition value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::____UnityEngine__UI__Toggle__ToggleTransition, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::____UnityEngine__UI__Toggle__ToggleTransition>(value));
}
constexpr ::UnityEngine::UI::____UnityEngine__UI__Toggle__ToggleTransition ::UnityEngine::UI::Toggle::__get_toggleTransition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::____UnityEngine__UI__Toggle__ToggleTransition, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UI::Toggle::__set_graphic(::UnityEngine::UI::Graphic value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Graphic, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Graphic>(value));
}
constexpr ::UnityEngine::UI::Graphic ::UnityEngine::UI::Toggle::__get_graphic() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Graphic, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UI::Toggle::__set_m_Group(::UnityEngine::UI::ToggleGroup value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::ToggleGroup, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::ToggleGroup>(value));
}
constexpr ::UnityEngine::UI::ToggleGroup ::UnityEngine::UI::Toggle::__get_m_Group() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::ToggleGroup, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UI::Toggle::__set_onValueChanged(::UnityEngine::UI::____UnityEngine__UI__Toggle__ToggleEvent value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::____UnityEngine__UI__Toggle__ToggleEvent, 0x110>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::____UnityEngine__UI__Toggle__ToggleEvent>(value));
}
constexpr ::UnityEngine::UI::____UnityEngine__UI__Toggle__ToggleEvent ::UnityEngine::UI::Toggle::__get_onValueChanged() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::____UnityEngine__UI__Toggle__ToggleEvent, 0x110>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UI::Toggle::__set_m_IsOn(bool value)  {
::cordl_internals::setInstanceField<bool, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UI::Toggle::__get_m_IsOn() const {
return ::cordl_internals::getInstanceField<bool, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::UI::ToggleGroup ::UnityEngine::UI::Toggle::get_group()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            "get_group",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::ToggleGroup, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UI::Toggle::set_group(::UnityEngine::UI::ToggleGroup value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            "set_group",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::ToggleGroup>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 ::UnityEngine::UI::Toggle::Toggle()  : ::UnityEngine::UI::Selectable(THROW_UNLESS(::il2cpp_utils::New<Toggle>())) {}
 void ::UnityEngine::UI::Toggle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UI::Toggle::Rebuild(::UnityEngine::UI::CanvasUpdate executing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            "Rebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::CanvasUpdate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, executing);
}
 void ::UnityEngine::UI::Toggle::LayoutComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            "LayoutComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UI::Toggle::GraphicUpdateComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            "GraphicUpdateComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UI::Toggle::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UI::Toggle::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UI::Toggle::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UI::Toggle::OnDidApplyAnimationProperties()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            "OnDidApplyAnimationProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UI::Toggle::SetToggleGroup(::UnityEngine::UI::ToggleGroup newGroup, bool setMemberValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            "SetToggleGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::ToggleGroup>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newGroup, setMemberValue);
}
 bool ::UnityEngine::UI::Toggle::get_isOn()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            "get_isOn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UI::Toggle::set_isOn(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            "set_isOn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::UI::Toggle::SetIsOnWithoutNotify(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            "SetIsOnWithoutNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
/// @param sendCallback: bool (default: true)
 void ::UnityEngine::UI::Toggle::Set(bool value, bool sendCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value, sendCallback);
}
 void ::UnityEngine::UI::Toggle::PlayEffect(bool instant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            "PlayEffect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, instant);
}
 void ::UnityEngine::UI::Toggle::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UI::Toggle::InternalToggle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            "InternalToggle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UI::Toggle::OnPointerClick(::UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            "OnPointerClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void ::UnityEngine::UI::Toggle::OnSubmit(::UnityEngine::EventSystems::BaseEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            "OnSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 ::UnityEngine::Transform ::UnityEngine::UI::Toggle::UnityEngine_UI_ICanvasElement_get_transform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Toggle>::get(),
                            "UnityEngine.UI.ICanvasElement.get_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
