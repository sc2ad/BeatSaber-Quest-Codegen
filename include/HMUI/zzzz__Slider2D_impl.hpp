#pragma once
#include "UnityEngine/UI/zzzz__Selectable_impl.hpp"
namespace {
#include "HMUI/zzzz__Slider2D_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IBeginDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IInitializePotentialDragHandler_def.hpp"
#include "UnityEngine/UI/zzzz__ICanvasElement_def.hpp"
#include "UnityEngine/UI/zzzz__CanvasUpdate_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
//  Writing Method size for method: ::HMUI::Slider2D.get_handleRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform (::HMUI::Slider2D::*)()>(&::HMUI::Slider2D::get_handleRect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fafa7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "get_handleRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.set_handleRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)(::UnityEngine::RectTransform)>(&::HMUI::Slider2D::set_handleRect)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1fafa84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "set_handleRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.set_handleColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)(::UnityEngine::Color)>(&::HMUI::Slider2D::set_handleColor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1fafc44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "set_handleColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.get_normalizedValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::HMUI::Slider2D::*)()>(&::HMUI::Slider2D::get_normalizedValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fafd08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "get_normalizedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.set_normalizedValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)(::UnityEngine::Vector2)>(&::HMUI::Slider2D::set_normalizedValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fafd14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "set_normalizedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.add_normalizedValueDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)(::System::Action_2<::HMUI::Slider2D,::UnityEngine::Vector2>)>(&::HMUI::Slider2D::add_normalizedValueDidChangeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x1fafdcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "add_normalizedValueDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::Slider2D,::UnityEngine::Vector2>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.remove_normalizedValueDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)(::System::Action_2<::HMUI::Slider2D,::UnityEngine::Vector2>)>(&::HMUI::Slider2D::remove_normalizedValueDidChangeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x1fafe80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "remove_normalizedValueDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::Slider2D,::UnityEngine::Vector2>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.Rebuild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)(::UnityEngine::UI::CanvasUpdate)>(&::HMUI::Slider2D::Rebuild)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1faff34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HMUI::Slider2D),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                                  47
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.LayoutComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)()>(&::HMUI::Slider2D::LayoutComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1faff38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HMUI::Slider2D),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                                  48
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.GraphicUpdateComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)()>(&::HMUI::Slider2D::GraphicUpdateComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1faff3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HMUI::Slider2D),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                                  49
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)()>(&::HMUI::Slider2D::OnEnable)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1faff40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HMUI::Slider2D),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)()>(&::HMUI::Slider2D::OnDisable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1faff84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HMUI::Slider2D),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.UpdateCachedReferences
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)()>(&::HMUI::Slider2D::UpdateCachedReferences)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x1fafb0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "UpdateCachedReferences",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.SetNormalizedValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)(::UnityEngine::Vector2)>(&::HMUI::Slider2D::SetNormalizedValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1faffa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "SetNormalizedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.SetNormalizedValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)(::UnityEngine::Vector2, bool)>(&::HMUI::Slider2D::SetNormalizedValue)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1fafd1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "SetNormalizedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.OnRectTransformDimensionsChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)()>(&::HMUI::Slider2D::OnRectTransformDimensionsChange)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1faffb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HMUI::Slider2D),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.UpdateVisuals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)()>(&::HMUI::Slider2D::UpdateVisuals)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x1fafff4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HMUI::Slider2D),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                                  50
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.UpdateDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)(::UnityEngine::EventSystems::PointerEventData)>(&::HMUI::Slider2D::UpdateDrag)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1fb017c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "UpdateDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.MayDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::Slider2D::*)(::UnityEngine::EventSystems::PointerEventData)>(&::HMUI::Slider2D::MayDrag)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1fb03ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "MayDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.OnBeginDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)(::UnityEngine::EventSystems::PointerEventData)>(&::HMUI::Slider2D::OnBeginDrag)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1fb0410;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HMUI::Slider2D),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                                  51
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.OnDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)(::UnityEngine::EventSystems::PointerEventData)>(&::HMUI::Slider2D::OnDrag)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1fb0490;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HMUI::Slider2D),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                                  52
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.OnPointerDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)(::UnityEngine::EventSystems::PointerEventData)>(&::HMUI::Slider2D::OnPointerDown)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1fb0520;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HMUI::Slider2D),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.OnPointerEnter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)(::UnityEngine::EventSystems::PointerEventData)>(&::HMUI::Slider2D::OnPointerEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fb05c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HMUI::Slider2D),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.DoStateTransition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)(::UnityEngine::UI::____UnityEngine__UI__Selectable__SelectionState, bool)>(&::HMUI::Slider2D::DoStateTransition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fb05c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HMUI::Slider2D),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.OnInitializePotentialDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)(::UnityEngine::EventSystems::PointerEventData)>(&::HMUI::Slider2D::OnInitializePotentialDrag)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1fb05d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HMUI::Slider2D),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                                  53
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)()>(&::HMUI::Slider2D::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1fb05ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.UnityEngine_UI_ICanvasElement_get_transform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform (::HMUI::Slider2D::*)()>(&::HMUI::Slider2D::UnityEngine_UI_ICanvasElement_get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fb0644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "UnityEngine.UI.ICanvasElement.get_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::EventSystems::IBeginDragHandler
constexpr  ::HMUI::Slider2D::operator ::UnityEngine::EventSystems::IBeginDragHandler() const noexcept {
return ::UnityEngine::EventSystems::IBeginDragHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::EventSystems::IEventSystemHandler
constexpr  ::HMUI::Slider2D::operator ::UnityEngine::EventSystems::IEventSystemHandler() const noexcept {
return ::UnityEngine::EventSystems::IEventSystemHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::EventSystems::IDragHandler
constexpr  ::HMUI::Slider2D::operator ::UnityEngine::EventSystems::IDragHandler() const noexcept {
return ::UnityEngine::EventSystems::IDragHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::EventSystems::IInitializePotentialDragHandler
constexpr  ::HMUI::Slider2D::operator ::UnityEngine::EventSystems::IInitializePotentialDragHandler() const noexcept {
return ::UnityEngine::EventSystems::IInitializePotentialDragHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::UI::ICanvasElement
constexpr  ::HMUI::Slider2D::operator ::UnityEngine::UI::ICanvasElement() const noexcept {
return ::UnityEngine::UI::ICanvasElement(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::Slider2D::__set__handleRect(::UnityEngine::RectTransform value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::RectTransform>(value));
}
constexpr ::UnityEngine::RectTransform ::HMUI::Slider2D::__get__handleRect() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::Slider2D::__set__normalizedValue(::UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2 ::HMUI::Slider2D::__get__normalizedValue() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::Slider2D::__set_normalizedValueDidChangeEvent(::System::Action_2<::HMUI::Slider2D,::UnityEngine::Vector2> value)  {
::cordl_internals::setInstanceField<::System::Action_2<::HMUI::Slider2D,::UnityEngine::Vector2>, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_2<::HMUI::Slider2D,::UnityEngine::Vector2>>(value));
}
constexpr ::System::Action_2<::HMUI::Slider2D,::UnityEngine::Vector2> ::HMUI::Slider2D::__get_normalizedValueDidChangeEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::HMUI::Slider2D,::UnityEngine::Vector2>, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::Slider2D::__set__containerRect(::UnityEngine::RectTransform value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform, 0x110>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::RectTransform>(value));
}
constexpr ::UnityEngine::RectTransform ::HMUI::Slider2D::__get__containerRect() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform, 0x110>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::Slider2D::__set__handleGraphic(::UnityEngine::UI::Graphic value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Graphic, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Graphic>(value));
}
constexpr ::UnityEngine::UI::Graphic ::HMUI::Slider2D::__get__handleGraphic() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Graphic, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::Slider2D::__set__tracker(::UnityEngine::DrivenRectTransformTracker value)  {
::cordl_internals::setInstanceField<::UnityEngine::DrivenRectTransformTracker, 0x120>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::DrivenRectTransformTracker>(value));
}
constexpr ::UnityEngine::DrivenRectTransformTracker ::HMUI::Slider2D::__get__tracker() const {
return ::cordl_internals::getInstanceField<::UnityEngine::DrivenRectTransformTracker, 0x120>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::RectTransform ::HMUI::Slider2D::get_handleRect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "get_handleRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectTransform, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::Slider2D::set_handleRect(::UnityEngine::RectTransform value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "set_handleRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::HMUI::Slider2D::set_handleColor(::UnityEngine::Color value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "set_handleColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::Vector2 ::HMUI::Slider2D::get_normalizedValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "get_normalizedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::Slider2D::set_normalizedValue(::UnityEngine::Vector2 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "set_normalizedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::HMUI::Slider2D::add_normalizedValueDidChangeEvent(::System::Action_2<::HMUI::Slider2D,::UnityEngine::Vector2> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "add_normalizedValueDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::Slider2D,::UnityEngine::Vector2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::HMUI::Slider2D::remove_normalizedValueDidChangeEvent(::System::Action_2<::HMUI::Slider2D,::UnityEngine::Vector2> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "remove_normalizedValueDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::Slider2D,::UnityEngine::Vector2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::HMUI::Slider2D::Rebuild(::UnityEngine::UI::CanvasUpdate executing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "Rebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::CanvasUpdate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, executing);
}
 void ::HMUI::Slider2D::LayoutComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "LayoutComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::Slider2D::GraphicUpdateComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "GraphicUpdateComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::Slider2D::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::Slider2D::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::Slider2D::UpdateCachedReferences()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "UpdateCachedReferences",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::Slider2D::SetNormalizedValue(::UnityEngine::Vector2 input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "SetNormalizedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input);
}
 void ::HMUI::Slider2D::SetNormalizedValue(::UnityEngine::Vector2 input, bool sendCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "SetNormalizedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input, sendCallback);
}
 void ::HMUI::Slider2D::OnRectTransformDimensionsChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "OnRectTransformDimensionsChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::Slider2D::UpdateVisuals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "UpdateVisuals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::Slider2D::UpdateDrag(::UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "UpdateDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 bool ::HMUI::Slider2D::MayDrag(::UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "MayDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void ::HMUI::Slider2D::OnBeginDrag(::UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "OnBeginDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void ::HMUI::Slider2D::OnDrag(::UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "OnDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void ::HMUI::Slider2D::OnPointerDown(::UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "OnPointerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void ::HMUI::Slider2D::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "OnPointerEnter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void ::HMUI::Slider2D::DoStateTransition(::UnityEngine::UI::____UnityEngine__UI__Selectable__SelectionState state, bool instant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "DoStateTransition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::____UnityEngine__UI__Selectable__SelectionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, instant);
}
 void ::HMUI::Slider2D::OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "OnInitializePotentialDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
// Ctor Parameters []
 ::HMUI::Slider2D::Slider2D()  : ::UnityEngine::UI::Selectable(THROW_UNLESS(::il2cpp_utils::New<Slider2D>())) {}
 void ::HMUI::Slider2D::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Transform ::HMUI::Slider2D::UnityEngine_UI_ICanvasElement_get_transform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D>::get(),
                            "UnityEngine.UI.ICanvasElement.get_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
