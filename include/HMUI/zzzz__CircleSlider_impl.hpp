#pragma once
#include "UnityEngine/UI/zzzz__Selectable_impl.hpp"
namespace {
#include "HMUI/zzzz__CircleSlider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IInitializePotentialDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IBeginDragHandler_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/UI/zzzz__ICanvasElement_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDragHandler_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/UI/zzzz__CanvasUpdate_def.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_def.hpp"
//  Writing Method size for method: ::HMUI::CircleSlider.get_handleRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform (::HMUI::CircleSlider::*)()>(&::HMUI::CircleSlider::get_handleRect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fad710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "get_handleRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleSlider.set_handleRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CircleSlider::*)(::UnityEngine::RectTransform)>(&::HMUI::CircleSlider::set_handleRect)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1fad718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "set_handleRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleSlider.set_handleColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CircleSlider::*)(::UnityEngine::Color)>(&::HMUI::CircleSlider::set_handleColor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1fad8d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "set_handleColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleSlider.get_normalizedValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::HMUI::CircleSlider::*)()>(&::HMUI::CircleSlider::get_normalizedValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fad99c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "get_normalizedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleSlider.set_normalizedValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CircleSlider::*)(float_t)>(&::HMUI::CircleSlider::set_normalizedValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1fad9a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "set_normalizedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleSlider.add_normalizedValueDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CircleSlider::*)(::System::Action_2<::HMUI::CircleSlider,float_t>)>(&::HMUI::CircleSlider::add_normalizedValueDidChangeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x1fada58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "add_normalizedValueDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::CircleSlider,float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleSlider.remove_normalizedValueDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CircleSlider::*)(::System::Action_2<::HMUI::CircleSlider,float_t>)>(&::HMUI::CircleSlider::remove_normalizedValueDidChangeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x1fadb0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "remove_normalizedValueDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::CircleSlider,float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleSlider.Rebuild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CircleSlider::*)(::UnityEngine::UI::CanvasUpdate)>(&::HMUI::CircleSlider::Rebuild)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1fadbc0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HMUI::CircleSlider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                                  47
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleSlider.LayoutComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CircleSlider::*)()>(&::HMUI::CircleSlider::LayoutComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1fadbc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HMUI::CircleSlider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                                  48
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleSlider.GraphicUpdateComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CircleSlider::*)()>(&::HMUI::CircleSlider::GraphicUpdateComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1fadbc8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HMUI::CircleSlider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                                  49
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleSlider.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CircleSlider::*)()>(&::HMUI::CircleSlider::OnEnable)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1fadbcc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HMUI::CircleSlider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleSlider.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CircleSlider::*)()>(&::HMUI::CircleSlider::OnDisable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1fadc34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HMUI::CircleSlider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleSlider.UpdateCachedReferences
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CircleSlider::*)()>(&::HMUI::CircleSlider::UpdateCachedReferences)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x1fad7a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "UpdateCachedReferences",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleSlider.SetNormalizedValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CircleSlider::*)(float_t)>(&::HMUI::CircleSlider::SetNormalizedValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fadc58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "SetNormalizedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleSlider.SetNormalizedValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CircleSlider::*)(float_t, bool)>(&::HMUI::CircleSlider::SetNormalizedValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1fad9dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "SetNormalizedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleSlider.OnRectTransformDimensionsChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CircleSlider::*)()>(&::HMUI::CircleSlider::OnRectTransformDimensionsChange)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1fadc60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HMUI::CircleSlider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleSlider.UpdateVisuals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CircleSlider::*)()>(&::HMUI::CircleSlider::UpdateVisuals)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x1fadca4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HMUI::CircleSlider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                                  50
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleSlider.UpdateDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CircleSlider::*)(::UnityEngine::EventSystems::PointerEventData)>(&::HMUI::CircleSlider::UpdateDrag)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x1fade0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "UpdateDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleSlider.MayDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::CircleSlider::*)(::UnityEngine::EventSystems::PointerEventData)>(&::HMUI::CircleSlider::MayDrag)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1fae088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "MayDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleSlider.OnBeginDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CircleSlider::*)(::UnityEngine::EventSystems::PointerEventData)>(&::HMUI::CircleSlider::OnBeginDrag)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1fae0ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HMUI::CircleSlider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                                  51
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleSlider.OnDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CircleSlider::*)(::UnityEngine::EventSystems::PointerEventData)>(&::HMUI::CircleSlider::OnDrag)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1fae16c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HMUI::CircleSlider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                                  52
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleSlider.OnPointerDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CircleSlider::*)(::UnityEngine::EventSystems::PointerEventData)>(&::HMUI::CircleSlider::OnPointerDown)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1fae1fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HMUI::CircleSlider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleSlider.OnInitializePotentialDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CircleSlider::*)(::UnityEngine::EventSystems::PointerEventData)>(&::HMUI::CircleSlider::OnInitializePotentialDrag)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1fae29c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HMUI::CircleSlider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                                  53
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleSlider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CircleSlider::*)()>(&::HMUI::CircleSlider::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1fae2b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleSlider.UnityEngine_UI_ICanvasElement_get_transform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform (::HMUI::CircleSlider::*)()>(&::HMUI::CircleSlider::UnityEngine_UI_ICanvasElement_get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fae314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "UnityEngine.UI.ICanvasElement.get_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::EventSystems::IBeginDragHandler
constexpr  ::HMUI::CircleSlider::operator ::UnityEngine::EventSystems::IBeginDragHandler() const noexcept {
return ::UnityEngine::EventSystems::IBeginDragHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::EventSystems::IEventSystemHandler
constexpr  ::HMUI::CircleSlider::operator ::UnityEngine::EventSystems::IEventSystemHandler() const noexcept {
return ::UnityEngine::EventSystems::IEventSystemHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::EventSystems::IDragHandler
constexpr  ::HMUI::CircleSlider::operator ::UnityEngine::EventSystems::IDragHandler() const noexcept {
return ::UnityEngine::EventSystems::IDragHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::EventSystems::IInitializePotentialDragHandler
constexpr  ::HMUI::CircleSlider::operator ::UnityEngine::EventSystems::IInitializePotentialDragHandler() const noexcept {
return ::UnityEngine::EventSystems::IInitializePotentialDragHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::UI::ICanvasElement
constexpr  ::HMUI::CircleSlider::operator ::UnityEngine::UI::ICanvasElement() const noexcept {
return ::UnityEngine::UI::ICanvasElement(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::CircleSlider::__set__handleRect(::UnityEngine::RectTransform value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::RectTransform>(value));
}
constexpr ::UnityEngine::RectTransform ::HMUI::CircleSlider::__get__handleRect() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::CircleSlider::__set__cursorRadius(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::HMUI::CircleSlider::__get__cursorRadius() const {
return ::cordl_internals::getInstanceField<float_t, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::CircleSlider::__set__normalizedValue(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x104>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::HMUI::CircleSlider::__get__normalizedValue() const {
return ::cordl_internals::getInstanceField<float_t, 0x104>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::CircleSlider::__set_normalizedValueDidChangeEvent(::System::Action_2<::HMUI::CircleSlider,float_t> value)  {
::cordl_internals::setInstanceField<::System::Action_2<::HMUI::CircleSlider,float_t>, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_2<::HMUI::CircleSlider,float_t>>(value));
}
constexpr ::System::Action_2<::HMUI::CircleSlider,float_t> ::HMUI::CircleSlider::__get_normalizedValueDidChangeEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::HMUI::CircleSlider,float_t>, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::CircleSlider::__set__containerRect(::UnityEngine::RectTransform value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform, 0x110>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::RectTransform>(value));
}
constexpr ::UnityEngine::RectTransform ::HMUI::CircleSlider::__get__containerRect() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform, 0x110>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::CircleSlider::__set__handleGraphic(::UnityEngine::UI::Graphic value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Graphic, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Graphic>(value));
}
constexpr ::UnityEngine::UI::Graphic ::HMUI::CircleSlider::__get__handleGraphic() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Graphic, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::CircleSlider::__set__tracker(::UnityEngine::DrivenRectTransformTracker value)  {
::cordl_internals::setInstanceField<::UnityEngine::DrivenRectTransformTracker, 0x120>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::DrivenRectTransformTracker>(value));
}
constexpr ::UnityEngine::DrivenRectTransformTracker ::HMUI::CircleSlider::__get__tracker() const {
return ::cordl_internals::getInstanceField<::UnityEngine::DrivenRectTransformTracker, 0x120>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::RectTransform ::HMUI::CircleSlider::get_handleRect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "get_handleRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectTransform, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::CircleSlider::set_handleRect(::UnityEngine::RectTransform value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "set_handleRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::HMUI::CircleSlider::set_handleColor(::UnityEngine::Color value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "set_handleColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::HMUI::CircleSlider::get_normalizedValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "get_normalizedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::CircleSlider::set_normalizedValue(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "set_normalizedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::HMUI::CircleSlider::add_normalizedValueDidChangeEvent(::System::Action_2<::HMUI::CircleSlider,float_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "add_normalizedValueDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::CircleSlider,float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::HMUI::CircleSlider::remove_normalizedValueDidChangeEvent(::System::Action_2<::HMUI::CircleSlider,float_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "remove_normalizedValueDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::CircleSlider,float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::HMUI::CircleSlider::Rebuild(::UnityEngine::UI::CanvasUpdate executing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "Rebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::CanvasUpdate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, executing);
}
 void ::HMUI::CircleSlider::LayoutComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "LayoutComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::CircleSlider::GraphicUpdateComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "GraphicUpdateComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::CircleSlider::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::CircleSlider::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::CircleSlider::UpdateCachedReferences()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "UpdateCachedReferences",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::CircleSlider::SetNormalizedValue(float_t input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "SetNormalizedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input);
}
 void ::HMUI::CircleSlider::SetNormalizedValue(float_t input, bool sendCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "SetNormalizedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input, sendCallback);
}
 void ::HMUI::CircleSlider::OnRectTransformDimensionsChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "OnRectTransformDimensionsChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::CircleSlider::UpdateVisuals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "UpdateVisuals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::CircleSlider::UpdateDrag(::UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "UpdateDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 bool ::HMUI::CircleSlider::MayDrag(::UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "MayDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void ::HMUI::CircleSlider::OnBeginDrag(::UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "OnBeginDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void ::HMUI::CircleSlider::OnDrag(::UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "OnDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void ::HMUI::CircleSlider::OnPointerDown(::UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "OnPointerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void ::HMUI::CircleSlider::OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "OnInitializePotentialDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
// Ctor Parameters []
 ::HMUI::CircleSlider::CircleSlider()  : ::UnityEngine::UI::Selectable(THROW_UNLESS(::il2cpp_utils::New<CircleSlider>())) {}
 void ::HMUI::CircleSlider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Transform ::HMUI::CircleSlider::UnityEngine_UI_ICanvasElement_get_transform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleSlider>::get(),
                            "UnityEngine.UI.ICanvasElement.get_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
