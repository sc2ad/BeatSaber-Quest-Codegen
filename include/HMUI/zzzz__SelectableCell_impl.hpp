#pragma once
#include "HMUI/zzzz__Interactable_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISubmitHandler_def.hpp"
#include "GlobalNamespace/zzzz__Signal_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HMUI::HMUI__SelectableCell__TransitionType::HMUI__SelectableCell__TransitionType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HMUI::HMUI__SelectableCell__TransitionType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HMUI::HMUI__SelectableCell__TransitionType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HMUI::HMUI__SelectableCell__TransitionType  HMUI::HMUI__SelectableCell__TransitionType::Instant{0};
constexpr HMUI::HMUI__SelectableCell__TransitionType  HMUI::HMUI__SelectableCell__TransitionType::Animated{1};
//  Writing Method size for method: HMUI::SelectableCell.add_selectionDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(System::Action_3<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType,::bs_hook::Il2CppWrapperType>)>(&HMUI::SelectableCell::add_selectionDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1fd1ffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            "add_selectionDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType,::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SelectableCell.remove_selectionDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(System::Action_3<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType,::bs_hook::Il2CppWrapperType>)>(&HMUI::SelectableCell::remove_selectionDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1fd20ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            "remove_selectionDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType,::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SelectableCell.add_highlightDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(System::Action_2<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType>)>(&HMUI::SelectableCell::add_highlightDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1fd215c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            "add_highlightDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SelectableCell.remove_highlightDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(System::Action_2<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType>)>(&HMUI::SelectableCell::remove_highlightDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1fd220c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            "remove_highlightDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SelectableCell.get_highlighted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::SelectableCell::*)()>(&HMUI::SelectableCell::get_highlighted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fd22bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            "get_highlighted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SelectableCell.set_highlighted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(bool)>(&HMUI::SelectableCell::set_highlighted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fd22c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            "set_highlighted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SelectableCell.get_selected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::SelectableCell::*)()>(&HMUI::SelectableCell::get_selected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fd22d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            "get_selected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SelectableCell.set_selected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(bool)>(&HMUI::SelectableCell::set_selected)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fd22d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            "set_selected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SelectableCell.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)()>(&HMUI::SelectableCell::Start)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1fd22e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HMUI::SelectableCell),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SelectableCell.SetSelected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(bool, HMUI::HMUI__SelectableCell__TransitionType, ::bs_hook::Il2CppWrapperType, bool)>(&HMUI::SelectableCell::SetSelected)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1fd2314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            "SetSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::HMUI__SelectableCell__TransitionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SelectableCell.ClearHighlight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(HMUI::HMUI__SelectableCell__TransitionType)>(&HMUI::SelectableCell::ClearHighlight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1fd2394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            "ClearHighlight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::HMUI__SelectableCell__TransitionType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SelectableCell.SetHighlight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(bool, HMUI::HMUI__SelectableCell__TransitionType, bool)>(&HMUI::SelectableCell::SetHighlight)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1fd23a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            "SetHighlight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::HMUI__SelectableCell__TransitionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SelectableCell.InternalToggle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)()>(&HMUI::SelectableCell::InternalToggle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HMUI::SelectableCell),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SelectableCell.SelectionDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(HMUI::HMUI__SelectableCell__TransitionType)>(&HMUI::SelectableCell::SelectionDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1fd241c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HMUI::SelectableCell),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SelectableCell.HighlightDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(HMUI::HMUI__SelectableCell__TransitionType)>(&HMUI::SelectableCell::HighlightDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1fd2420;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HMUI::SelectableCell),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SelectableCell.OnPointerClick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(UnityEngine::EventSystems::PointerEventData)>(&HMUI::SelectableCell::OnPointerClick)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1fd2424;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HMUI::SelectableCell),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SelectableCell.OnSubmit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(UnityEngine::EventSystems::BaseEventData)>(&HMUI::SelectableCell::OnSubmit)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1fd24d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HMUI::SelectableCell),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SelectableCell.OnPointerEnter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(UnityEngine::EventSystems::PointerEventData)>(&HMUI::SelectableCell::OnPointerEnter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1fd2574;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HMUI::SelectableCell),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SelectableCell.OnPointerExit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(UnityEngine::EventSystems::PointerEventData)>(&HMUI::SelectableCell::OnPointerExit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1fd2584;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HMUI::SelectableCell),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SelectableCell._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)()>(&HMUI::SelectableCell::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fd2594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::EventSystems::IPointerClickHandler
constexpr  HMUI::SelectableCell::operator UnityEngine::EventSystems::IPointerClickHandler() const noexcept {
return UnityEngine::EventSystems::IPointerClickHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr  HMUI::SelectableCell::operator UnityEngine::EventSystems::IEventSystemHandler() const noexcept {
return UnityEngine::EventSystems::IEventSystemHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::ISubmitHandler
constexpr  HMUI::SelectableCell::operator UnityEngine::EventSystems::ISubmitHandler() const noexcept {
return UnityEngine::EventSystems::ISubmitHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IPointerEnterHandler
constexpr  HMUI::SelectableCell::operator UnityEngine::EventSystems::IPointerEnterHandler() const noexcept {
return UnityEngine::EventSystems::IPointerEnterHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IPointerExitHandler
constexpr  HMUI::SelectableCell::operator UnityEngine::EventSystems::IPointerExitHandler() const noexcept {
return UnityEngine::EventSystems::IPointerExitHandler(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::SelectableCell::__set__wasPressedSignal(GlobalNamespace::Signal value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Signal, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Signal>(value));
}
constexpr GlobalNamespace::Signal HMUI::SelectableCell::__get__wasPressedSignal() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Signal, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::SelectableCell::__set_selectionDidChangeEvent(System::Action_3<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType,::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<System::Action_3<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType,::bs_hook::Il2CppWrapperType>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_3<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType,::bs_hook::Il2CppWrapperType>>(value));
}
constexpr System::Action_3<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType,::bs_hook::Il2CppWrapperType> HMUI::SelectableCell::__get_selectionDidChangeEvent() const {
return ::cordl_internals::getInstanceField<System::Action_3<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType,::bs_hook::Il2CppWrapperType>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::SelectableCell::__set_highlightDidChangeEvent(System::Action_2<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType> value)  {
::cordl_internals::setInstanceField<System::Action_2<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType>>(value));
}
constexpr System::Action_2<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType> HMUI::SelectableCell::__get_highlightDidChangeEvent() const {
return ::cordl_internals::getInstanceField<System::Action_2<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::SelectableCell::__set__highlighted_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HMUI::SelectableCell::__get__highlighted_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::SelectableCell::__set__selected_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x41>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HMUI::SelectableCell::__get__selected_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x41>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void HMUI::SelectableCell::add_selectionDidChangeEvent(System::Action_3<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType,::bs_hook::Il2CppWrapperType> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            "add_selectionDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType,::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void HMUI::SelectableCell::remove_selectionDidChangeEvent(System::Action_3<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType,::bs_hook::Il2CppWrapperType> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            "remove_selectionDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType,::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void HMUI::SelectableCell::add_highlightDidChangeEvent(System::Action_2<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            "add_highlightDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void HMUI::SelectableCell::remove_highlightDidChangeEvent(System::Action_2<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            "remove_highlightDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool HMUI::SelectableCell::get_highlighted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            "get_highlighted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::SelectableCell::set_highlighted(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            "set_highlighted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool HMUI::SelectableCell::get_selected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            "get_selected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::SelectableCell::set_selected(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            "set_selected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void HMUI::SelectableCell::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::SelectableCell::SetSelected(bool value, HMUI::HMUI__SelectableCell__TransitionType transitionType, ::bs_hook::Il2CppWrapperType changeOwner, bool ignoreCurrentValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            "SetSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::HMUI__SelectableCell__TransitionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value, transitionType, changeOwner, ignoreCurrentValue);
}
 void HMUI::SelectableCell::ClearHighlight(HMUI::HMUI__SelectableCell__TransitionType transitionType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            "ClearHighlight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::HMUI__SelectableCell__TransitionType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, transitionType);
}
 void HMUI::SelectableCell::SetHighlight(bool value, HMUI::HMUI__SelectableCell__TransitionType transitionType, bool ignoreCurrentValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            "SetHighlight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::HMUI__SelectableCell__TransitionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value, transitionType, ignoreCurrentValue);
}
 void HMUI::SelectableCell::InternalToggle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            "InternalToggle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::SelectableCell::SelectionDidChange(HMUI::HMUI__SelectableCell__TransitionType transitionType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            "SelectionDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::HMUI__SelectableCell__TransitionType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, transitionType);
}
 void HMUI::SelectableCell::HighlightDidChange(HMUI::HMUI__SelectableCell__TransitionType transitionType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            "HighlightDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::HMUI__SelectableCell__TransitionType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, transitionType);
}
 void HMUI::SelectableCell::OnPointerClick(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            "OnPointerClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void HMUI::SelectableCell::OnSubmit(UnityEngine::EventSystems::BaseEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            "OnSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void HMUI::SelectableCell::OnPointerEnter(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            "OnPointerEnter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void HMUI::SelectableCell::OnPointerExit(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            "OnPointerExit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
// Ctor Parameters []
 HMUI::SelectableCell::SelectableCell()  : HMUI::Interactable(THROW_UNLESS(::il2cpp_utils::New<SelectableCell>())) {}
 void HMUI::SelectableCell::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SelectableCell>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
