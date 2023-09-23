#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Clickable_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ClampedDragger_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseSlider_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection::UnityEngine__UIElements__ClampedDragger_1__DragDirection(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T>  UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection::None{0};
constexpr UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T>  UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection::LowToHigh{1};
constexpr UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T>  UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection::HighToLow{2};
constexpr UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T>  UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection::Free{4};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1.add_dragging
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ClampedDragger_1::*)(System::Action)>(&UnityEngine::UIElements::ClampedDragger_1::add_dragging)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1>::get(),
                            "add_dragging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1.remove_dragging
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ClampedDragger_1::*)(System::Action)>(&UnityEngine::UIElements::ClampedDragger_1::remove_dragging)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1>::get(),
                            "remove_dragging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1.get_dragDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T> (UnityEngine::UIElements::ClampedDragger_1::*)()>(&UnityEngine::UIElements::ClampedDragger_1::get_dragDirection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1>::get(),
                            "get_dragDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1.set_dragDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ClampedDragger_1::*)(UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T>)>(&UnityEngine::UIElements::ClampedDragger_1::set_dragDirection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1>::get(),
                            "set_dragDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1.set_slider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ClampedDragger_1::*)(UnityEngine::UIElements::BaseSlider_1<T>)>(&UnityEngine::UIElements::ClampedDragger_1::set_slider)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1>::get(),
                            "set_slider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::BaseSlider_1<T>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1.get_startMousePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::UIElements::ClampedDragger_1::*)()>(&UnityEngine::UIElements::ClampedDragger_1::get_startMousePosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1>::get(),
                            "get_startMousePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1.set_startMousePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ClampedDragger_1::*)(UnityEngine::Vector2)>(&UnityEngine::UIElements::ClampedDragger_1::set_startMousePosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1>::get(),
                            "set_startMousePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1.get_delta
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::UIElements::ClampedDragger_1::*)()>(&UnityEngine::UIElements::ClampedDragger_1::get_delta)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1>::get(),
                            "get_delta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ClampedDragger_1::*)(UnityEngine::UIElements::BaseSlider_1<T>, System::Action, System::Action)>(&UnityEngine::UIElements::ClampedDragger_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::BaseSlider_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1.ProcessDownEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ClampedDragger_1::*)(UnityEngine::UIElements::EventBase, UnityEngine::Vector2, int32_t)>(&UnityEngine::UIElements::ClampedDragger_1::ProcessDownEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::ClampedDragger_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1.ProcessMoveEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ClampedDragger_1::*)(UnityEngine::UIElements::EventBase, UnityEngine::Vector2)>(&UnityEngine::UIElements::ClampedDragger_1::ProcessMoveEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::ClampedDragger_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::ClampedDragger_1::__set_dragging(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action UnityEngine::UIElements::ClampedDragger_1::__get_dragging() const {
return ::cordl_internals::getInstanceField<System::Action, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::ClampedDragger_1::__set__dragDirection_k__BackingField(UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T> value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T>>(value));
}
constexpr UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T> UnityEngine::UIElements::ClampedDragger_1::__get__dragDirection_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::ClampedDragger_1::__set__slider_k__BackingField(UnityEngine::UIElements::BaseSlider_1<T> value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::BaseSlider_1<T>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::BaseSlider_1<T>>(value));
}
constexpr UnityEngine::UIElements::BaseSlider_1<T> UnityEngine::UIElements::ClampedDragger_1::__get__slider_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::BaseSlider_1<T>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::ClampedDragger_1::__set__startMousePosition_k__BackingField(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::UIElements::ClampedDragger_1::__get__startMousePosition_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UIElements::ClampedDragger_1::add_dragging(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1>::get(),
                            "add_dragging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::UIElements::ClampedDragger_1::remove_dragging(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1>::get(),
                            "remove_dragging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T> UnityEngine::UIElements::ClampedDragger_1::get_dragDirection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1>::get(),
                            "get_dragDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::ClampedDragger_1::set_dragDirection(UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1>::get(),
                            "set_dragDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::UIElements::ClampedDragger_1::set_slider(UnityEngine::UIElements::BaseSlider_1<T> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1>::get(),
                            "set_slider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::BaseSlider_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Vector2 UnityEngine::UIElements::ClampedDragger_1::get_startMousePosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1>::get(),
                            "get_startMousePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::ClampedDragger_1::set_startMousePosition(UnityEngine::Vector2 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1>::get(),
                            "set_startMousePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Vector2 UnityEngine::UIElements::ClampedDragger_1::get_delta()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1>::get(),
                            "get_delta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "slider", ty: "UnityEngine::UIElements::BaseSlider_1<T>", modifiers: "", def_value: None }, CppParam { name: "clickHandler", ty: "System::Action", modifiers: "", def_value: None }, CppParam { name: "dragHandler", ty: "System::Action", modifiers: "", def_value: None }]
 UnityEngine::UIElements::ClampedDragger_1::ClampedDragger_1(UnityEngine::UIElements::BaseSlider_1<T> slider, System::Action clickHandler, System::Action dragHandler)  : UnityEngine::UIElements::Clickable(THROW_UNLESS(::il2cpp_utils::New<ClampedDragger_1>(slider, clickHandler, dragHandler))) {}
 void UnityEngine::UIElements::ClampedDragger_1::_ctor(UnityEngine::UIElements::BaseSlider_1<T> slider, System::Action clickHandler, System::Action dragHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::BaseSlider_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, slider, clickHandler, dragHandler);
}
 void UnityEngine::UIElements::ClampedDragger_1::ProcessDownEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::Vector2 localPosition, int32_t pointerId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1>::get(),
                            "ProcessDownEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt, localPosition, pointerId);
}
 void UnityEngine::UIElements::ClampedDragger_1::ProcessMoveEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::Vector2 localPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1>::get(),
                            "ProcessMoveEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt, localPosition);
}
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1<int32_t>.add_dragging
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ClampedDragger_1<int32_t>::*)(System::Action)>(&UnityEngine::UIElements::ClampedDragger_1<int32_t>::add_dragging)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<int32_t>>::get(),
                            "add_dragging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1<int32_t>.remove_dragging
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ClampedDragger_1<int32_t>::*)(System::Action)>(&UnityEngine::UIElements::ClampedDragger_1<int32_t>::remove_dragging)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<int32_t>>::get(),
                            "remove_dragging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1<int32_t>.get_dragDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<int32_t> (UnityEngine::UIElements::ClampedDragger_1<int32_t>::*)()>(&UnityEngine::UIElements::ClampedDragger_1<int32_t>::get_dragDirection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<int32_t>>::get(),
                            "get_dragDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1<int32_t>.set_dragDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ClampedDragger_1<int32_t>::*)(UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<int32_t>)>(&UnityEngine::UIElements::ClampedDragger_1<int32_t>::set_dragDirection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<int32_t>>::get(),
                            "set_dragDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1<int32_t>.set_slider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ClampedDragger_1<int32_t>::*)(UnityEngine::UIElements::BaseSlider_1<int32_t>)>(&UnityEngine::UIElements::ClampedDragger_1<int32_t>::set_slider)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<int32_t>>::get(),
                            "set_slider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::BaseSlider_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1<int32_t>.get_startMousePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::UIElements::ClampedDragger_1<int32_t>::*)()>(&UnityEngine::UIElements::ClampedDragger_1<int32_t>::get_startMousePosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<int32_t>>::get(),
                            "get_startMousePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1<int32_t>.set_startMousePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ClampedDragger_1<int32_t>::*)(UnityEngine::Vector2)>(&UnityEngine::UIElements::ClampedDragger_1<int32_t>::set_startMousePosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<int32_t>>::get(),
                            "set_startMousePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1<int32_t>.get_delta
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::UIElements::ClampedDragger_1<int32_t>::*)()>(&UnityEngine::UIElements::ClampedDragger_1<int32_t>::get_delta)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<int32_t>>::get(),
                            "get_delta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1<int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ClampedDragger_1<int32_t>::*)(UnityEngine::UIElements::BaseSlider_1<int32_t>, System::Action, System::Action)>(&UnityEngine::UIElements::ClampedDragger_1<int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::BaseSlider_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1<int32_t>.ProcessDownEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ClampedDragger_1<int32_t>::*)(UnityEngine::UIElements::EventBase, UnityEngine::Vector2, int32_t)>(&UnityEngine::UIElements::ClampedDragger_1<int32_t>::ProcessDownEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::ClampedDragger_1<int32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1<int32_t>.ProcessMoveEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ClampedDragger_1<int32_t>::*)(UnityEngine::UIElements::EventBase, UnityEngine::Vector2)>(&UnityEngine::UIElements::ClampedDragger_1<int32_t>::ProcessMoveEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::ClampedDragger_1<int32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::ClampedDragger_1<int32_t>::__set_dragging(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action UnityEngine::UIElements::ClampedDragger_1<int32_t>::__get_dragging() const {
return ::cordl_internals::getInstanceField<System::Action, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::ClampedDragger_1<int32_t>::__set__dragDirection_k__BackingField(UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<int32_t> value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<int32_t>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<int32_t>>(value));
}
constexpr UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<int32_t> UnityEngine::UIElements::ClampedDragger_1<int32_t>::__get__dragDirection_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<int32_t>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::ClampedDragger_1<int32_t>::__set__slider_k__BackingField(UnityEngine::UIElements::BaseSlider_1<int32_t> value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::BaseSlider_1<int32_t>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::BaseSlider_1<int32_t>>(value));
}
constexpr UnityEngine::UIElements::BaseSlider_1<int32_t> UnityEngine::UIElements::ClampedDragger_1<int32_t>::__get__slider_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::BaseSlider_1<int32_t>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::ClampedDragger_1<int32_t>::__set__startMousePosition_k__BackingField(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::UIElements::ClampedDragger_1<int32_t>::__get__startMousePosition_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UIElements::ClampedDragger_1<int32_t>::add_dragging(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<int32_t>>::get(),
                            "add_dragging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::UIElements::ClampedDragger_1<int32_t>::remove_dragging(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<int32_t>>::get(),
                            "remove_dragging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<int32_t> UnityEngine::UIElements::ClampedDragger_1<int32_t>::get_dragDirection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<int32_t>>::get(),
                            "get_dragDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::ClampedDragger_1<int32_t>::set_dragDirection(UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<int32_t>>::get(),
                            "set_dragDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::UIElements::ClampedDragger_1<int32_t>::set_slider(UnityEngine::UIElements::BaseSlider_1<int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<int32_t>>::get(),
                            "set_slider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::BaseSlider_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Vector2 UnityEngine::UIElements::ClampedDragger_1<int32_t>::get_startMousePosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<int32_t>>::get(),
                            "get_startMousePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::ClampedDragger_1<int32_t>::set_startMousePosition(UnityEngine::Vector2 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<int32_t>>::get(),
                            "set_startMousePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Vector2 UnityEngine::UIElements::ClampedDragger_1<int32_t>::get_delta()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<int32_t>>::get(),
                            "get_delta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "slider", ty: "UnityEngine::UIElements::BaseSlider_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "clickHandler", ty: "System::Action", modifiers: "", def_value: None }, CppParam { name: "dragHandler", ty: "System::Action", modifiers: "", def_value: None }]
 UnityEngine::UIElements::ClampedDragger_1<int32_t>::ClampedDragger_1(UnityEngine::UIElements::BaseSlider_1<int32_t> slider, System::Action clickHandler, System::Action dragHandler)  : UnityEngine::UIElements::Clickable(THROW_UNLESS(::il2cpp_utils::New<ClampedDragger_1>(slider, clickHandler, dragHandler))) {}
 void UnityEngine::UIElements::ClampedDragger_1<int32_t>::_ctor(UnityEngine::UIElements::BaseSlider_1<int32_t> slider, System::Action clickHandler, System::Action dragHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::BaseSlider_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, slider, clickHandler, dragHandler);
}
 void UnityEngine::UIElements::ClampedDragger_1<int32_t>::ProcessDownEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::Vector2 localPosition, int32_t pointerId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<int32_t>>::get(),
                            "ProcessDownEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt, localPosition, pointerId);
}
 void UnityEngine::UIElements::ClampedDragger_1<int32_t>::ProcessMoveEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::Vector2 localPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<int32_t>>::get(),
                            "ProcessMoveEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt, localPosition);
}
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1<float_t>.add_dragging
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ClampedDragger_1<float_t>::*)(System::Action)>(&UnityEngine::UIElements::ClampedDragger_1<float_t>::add_dragging)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<float_t>>::get(),
                            "add_dragging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1<float_t>.remove_dragging
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ClampedDragger_1<float_t>::*)(System::Action)>(&UnityEngine::UIElements::ClampedDragger_1<float_t>::remove_dragging)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<float_t>>::get(),
                            "remove_dragging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1<float_t>.get_dragDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<float_t> (UnityEngine::UIElements::ClampedDragger_1<float_t>::*)()>(&UnityEngine::UIElements::ClampedDragger_1<float_t>::get_dragDirection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<float_t>>::get(),
                            "get_dragDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1<float_t>.set_dragDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ClampedDragger_1<float_t>::*)(UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<float_t>)>(&UnityEngine::UIElements::ClampedDragger_1<float_t>::set_dragDirection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<float_t>>::get(),
                            "set_dragDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1<float_t>.set_slider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ClampedDragger_1<float_t>::*)(UnityEngine::UIElements::BaseSlider_1<float_t>)>(&UnityEngine::UIElements::ClampedDragger_1<float_t>::set_slider)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<float_t>>::get(),
                            "set_slider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::BaseSlider_1<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1<float_t>.get_startMousePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::UIElements::ClampedDragger_1<float_t>::*)()>(&UnityEngine::UIElements::ClampedDragger_1<float_t>::get_startMousePosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<float_t>>::get(),
                            "get_startMousePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1<float_t>.set_startMousePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ClampedDragger_1<float_t>::*)(UnityEngine::Vector2)>(&UnityEngine::UIElements::ClampedDragger_1<float_t>::set_startMousePosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<float_t>>::get(),
                            "set_startMousePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1<float_t>.get_delta
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::UIElements::ClampedDragger_1<float_t>::*)()>(&UnityEngine::UIElements::ClampedDragger_1<float_t>::get_delta)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<float_t>>::get(),
                            "get_delta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1<float_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ClampedDragger_1<float_t>::*)(UnityEngine::UIElements::BaseSlider_1<float_t>, System::Action, System::Action)>(&UnityEngine::UIElements::ClampedDragger_1<float_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::BaseSlider_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1<float_t>.ProcessDownEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ClampedDragger_1<float_t>::*)(UnityEngine::UIElements::EventBase, UnityEngine::Vector2, int32_t)>(&UnityEngine::UIElements::ClampedDragger_1<float_t>::ProcessDownEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::ClampedDragger_1<float_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ClampedDragger_1<float_t>.ProcessMoveEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ClampedDragger_1<float_t>::*)(UnityEngine::UIElements::EventBase, UnityEngine::Vector2)>(&UnityEngine::UIElements::ClampedDragger_1<float_t>::ProcessMoveEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::ClampedDragger_1<float_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::ClampedDragger_1<float_t>::__set_dragging(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action UnityEngine::UIElements::ClampedDragger_1<float_t>::__get_dragging() const {
return ::cordl_internals::getInstanceField<System::Action, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::ClampedDragger_1<float_t>::__set__dragDirection_k__BackingField(UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<float_t> value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<float_t>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<float_t>>(value));
}
constexpr UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<float_t> UnityEngine::UIElements::ClampedDragger_1<float_t>::__get__dragDirection_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<float_t>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::ClampedDragger_1<float_t>::__set__slider_k__BackingField(UnityEngine::UIElements::BaseSlider_1<float_t> value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::BaseSlider_1<float_t>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::BaseSlider_1<float_t>>(value));
}
constexpr UnityEngine::UIElements::BaseSlider_1<float_t> UnityEngine::UIElements::ClampedDragger_1<float_t>::__get__slider_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::BaseSlider_1<float_t>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::ClampedDragger_1<float_t>::__set__startMousePosition_k__BackingField(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::UIElements::ClampedDragger_1<float_t>::__get__startMousePosition_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UIElements::ClampedDragger_1<float_t>::add_dragging(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<float_t>>::get(),
                            "add_dragging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::UIElements::ClampedDragger_1<float_t>::remove_dragging(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<float_t>>::get(),
                            "remove_dragging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<float_t> UnityEngine::UIElements::ClampedDragger_1<float_t>::get_dragDirection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<float_t>>::get(),
                            "get_dragDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<float_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::ClampedDragger_1<float_t>::set_dragDirection(UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<float_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<float_t>>::get(),
                            "set_dragDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::UIElements::ClampedDragger_1<float_t>::set_slider(UnityEngine::UIElements::BaseSlider_1<float_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<float_t>>::get(),
                            "set_slider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::BaseSlider_1<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Vector2 UnityEngine::UIElements::ClampedDragger_1<float_t>::get_startMousePosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<float_t>>::get(),
                            "get_startMousePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::ClampedDragger_1<float_t>::set_startMousePosition(UnityEngine::Vector2 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<float_t>>::get(),
                            "set_startMousePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Vector2 UnityEngine::UIElements::ClampedDragger_1<float_t>::get_delta()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<float_t>>::get(),
                            "get_delta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "slider", ty: "UnityEngine::UIElements::BaseSlider_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "clickHandler", ty: "System::Action", modifiers: "", def_value: None }, CppParam { name: "dragHandler", ty: "System::Action", modifiers: "", def_value: None }]
 UnityEngine::UIElements::ClampedDragger_1<float_t>::ClampedDragger_1(UnityEngine::UIElements::BaseSlider_1<float_t> slider, System::Action clickHandler, System::Action dragHandler)  : UnityEngine::UIElements::Clickable(THROW_UNLESS(::il2cpp_utils::New<ClampedDragger_1>(slider, clickHandler, dragHandler))) {}
 void UnityEngine::UIElements::ClampedDragger_1<float_t>::_ctor(UnityEngine::UIElements::BaseSlider_1<float_t> slider, System::Action clickHandler, System::Action dragHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::BaseSlider_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, slider, clickHandler, dragHandler);
}
 void UnityEngine::UIElements::ClampedDragger_1<float_t>::ProcessDownEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::Vector2 localPosition, int32_t pointerId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<float_t>>::get(),
                            "ProcessDownEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt, localPosition, pointerId);
}
 void UnityEngine::UIElements::ClampedDragger_1<float_t>::ProcessMoveEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::Vector2 localPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ClampedDragger_1<float_t>>::get(),
                            "ProcessMoveEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt, localPosition);
}
