#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UI/zzzz__GraphicRaycaster_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__OVRRaycaster_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
// Ctor Parameters [CppParam { name: "graphic", ty: "::UnityEngine::UI::Graphic", modifiers: "", def_value: Some("csnull") }, CppParam { name: "worldPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "fromMouse", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit::____GlobalNamespace__OVRRaycaster__RaycastHit(::UnityEngine::UI::Graphic graphic, ::UnityEngine::Vector3 worldPos, bool fromMouse) noexcept : ::bs_hook::ValueTypeWrapper() {this->graphic = graphic;
this->worldPos = worldPos;
this->fromMouse = fromMouse;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit::__set_graphic(::UnityEngine::UI::Graphic value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Graphic, 0x0>(this->__instance, std::forward<::UnityEngine::UI::Graphic>(value));
}
constexpr ::UnityEngine::UI::Graphic ::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit::__get_graphic() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Graphic, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit::__set_worldPos(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x8>(this->__instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit::__get_worldPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit::__set_fromMouse(bool value)  {
::cordl_internals::setInstanceField<bool, 0x14>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit::__get_fromMouse() const {
return ::cordl_internals::getInstanceField<bool, 0x14>(this->__instance);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRRaycaster____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OVRRaycaster____c::*)()>(&::GlobalNamespace::____GlobalNamespace__OVRRaycaster____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x262f38c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRRaycaster____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRRaycaster____c._GraphicRaycast_b__16_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::____GlobalNamespace__OVRRaycaster____c::*)(::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit, ::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit)>(&::GlobalNamespace::____GlobalNamespace__OVRRaycaster____c::_GraphicRaycast_b__16_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x262f394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRRaycaster____c>::get(),
                            "<GraphicRaycast>b__16_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::____GlobalNamespace__OVRRaycaster____c::__set___9(::GlobalNamespace::____GlobalNamespace__OVRRaycaster____c value)  {
::cordl_internals::setStaticField<::GlobalNamespace::____GlobalNamespace__OVRRaycaster____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRRaycaster____c>::get>(std::forward<::GlobalNamespace::____GlobalNamespace__OVRRaycaster____c>(value));
}
 ::GlobalNamespace::____GlobalNamespace__OVRRaycaster____c ::GlobalNamespace::____GlobalNamespace__OVRRaycaster____c::__get___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::____GlobalNamespace__OVRRaycaster____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRRaycaster____c>::get>();
}
 void ::GlobalNamespace::____GlobalNamespace__OVRRaycaster____c::__set___9__16_0(::System::Comparison_1<::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit> value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit>, "<>9__16_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRRaycaster____c>::get>(std::forward<::System::Comparison_1<::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit>>(value));
}
 ::System::Comparison_1<::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit> ::GlobalNamespace::____GlobalNamespace__OVRRaycaster____c::__get___9__16_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit>, "<>9__16_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRRaycaster____c>::get>();
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__OVRRaycaster____c::____GlobalNamespace__OVRRaycaster____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__OVRRaycaster____c>())) {}
 void ::GlobalNamespace::____GlobalNamespace__OVRRaycaster____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRRaycaster____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::GlobalNamespace::____GlobalNamespace__OVRRaycaster____c::_GraphicRaycast_b__16_0(::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit g1, ::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit g2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRRaycaster____c>::get(),
                            "<GraphicRaycast>b__16_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, g1, g2);
}
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRRaycaster::*)()>(&::GlobalNamespace::OVRRaycaster::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x262db40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.get_canvas
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Canvas (::GlobalNamespace::OVRRaycaster::*)()>(&::GlobalNamespace::OVRRaycaster::get_canvas)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x262dbe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster>::get(),
                            "get_canvas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.get_eventCamera
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Camera (::GlobalNamespace::OVRRaycaster::*)()>(&::GlobalNamespace::OVRRaycaster::get_eventCamera)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x262dc74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::OVRRaycaster),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.get_sortOrderPriority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRRaycaster::*)()>(&::GlobalNamespace::OVRRaycaster::get_sortOrderPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x262dc90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::OVRRaycaster),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRRaycaster::*)()>(&::GlobalNamespace::OVRRaycaster::Start)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x262dc98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::OVRRaycaster),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.Raycast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRRaycaster::*)(::UnityEngine::EventSystems::PointerEventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>, ::UnityEngine::Ray, bool)>(&::GlobalNamespace::OVRRaycaster::Raycast)> {
  constexpr static std::size_t size = 0x6cc;
  constexpr static std::size_t addrs = 0x262dde8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster>::get(),
                            "Raycast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.Raycast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRRaycaster::*)(::UnityEngine::EventSystems::PointerEventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>)>(&::GlobalNamespace::OVRRaycaster::Raycast)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x262eb50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::OVRRaycaster),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.RaycastPointer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRRaycaster::*)(::UnityEngine::EventSystems::PointerEventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>)>(&::GlobalNamespace::OVRRaycaster::RaycastPointer)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x262ebbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster>::get(),
                            "RaycastPointer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.GraphicRaycast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRRaycaster::*)(::UnityEngine::Canvas, ::UnityEngine::Ray, ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit>)>(&::GlobalNamespace::OVRRaycaster::GraphicRaycast)> {
  constexpr static std::size_t size = 0x69c;
  constexpr static std::size_t addrs = 0x262e4b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster>::get(),
                            "GraphicRaycast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Canvas>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.GetScreenPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::OVRRaycaster::*)(::UnityEngine::EventSystems::RaycastResult)>(&::GlobalNamespace::OVRRaycaster::GetScreenPosition)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x262f048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster>::get(),
                            "GetScreenPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::RaycastResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.RayIntersectsRectTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::RectTransform, ::UnityEngine::Ray, ByRef<::UnityEngine::Vector3>)>(&::GlobalNamespace::OVRRaycaster::RayIntersectsRectTransform)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x262ee0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster>::get(),
                            "RayIntersectsRectTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.IsFocussed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRRaycaster::*)()>(&::GlobalNamespace::OVRRaycaster::IsFocussed)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x262f080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster>::get(),
                            "IsFocussed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.OnPointerEnter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRRaycaster::*)(::UnityEngine::EventSystems::PointerEventData)>(&::GlobalNamespace::OVRRaycaster::OnPointerEnter)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x262f198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster>::get(),
                            "OnPointerEnter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::EventSystems::IPointerEnterHandler
constexpr  ::GlobalNamespace::OVRRaycaster::operator ::UnityEngine::EventSystems::IPointerEnterHandler() const noexcept {
return ::UnityEngine::EventSystems::IPointerEnterHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::EventSystems::IEventSystemHandler
constexpr  ::GlobalNamespace::OVRRaycaster::operator ::UnityEngine::EventSystems::IEventSystemHandler() const noexcept {
return ::UnityEngine::EventSystems::IEventSystemHandler(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRRaycaster::__set_pointer(::UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::GameObject>(value));
}
constexpr ::UnityEngine::GameObject ::GlobalNamespace::OVRRaycaster::__get_pointer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRRaycaster::__set_sortOrder(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::OVRRaycaster::__get_sortOrder() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRRaycaster::__set_m_Canvas(::UnityEngine::Canvas value)  {
::cordl_internals::setInstanceField<::UnityEngine::Canvas, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Canvas>(value));
}
constexpr ::UnityEngine::Canvas ::GlobalNamespace::OVRRaycaster::__get_m_Canvas() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Canvas, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRRaycaster::__set_m_RaycastResults(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit>>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit> ::GlobalNamespace::OVRRaycaster::__get_m_RaycastResults() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::OVRRaycaster::__set_s_SortedGraphics(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit> value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit>, "s_SortedGraphics", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster>::get>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit>>(value));
}
 ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit> ::GlobalNamespace::OVRRaycaster::__get_s_SortedGraphics()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit>, "s_SortedGraphics", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster>::get>();
}
// Ctor Parameters []
 ::GlobalNamespace::OVRRaycaster::OVRRaycaster()  : ::UnityEngine::UI::GraphicRaycaster(THROW_UNLESS(::il2cpp_utils::New<OVRRaycaster>())) {}
 void ::GlobalNamespace::OVRRaycaster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Canvas ::GlobalNamespace::OVRRaycaster::get_canvas()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster>::get(),
                            "get_canvas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Canvas, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Camera ::GlobalNamespace::OVRRaycaster::get_eventCamera()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster>::get(),
                            "get_eventCamera",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Camera, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::GlobalNamespace::OVRRaycaster::get_sortOrderPriority()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster>::get(),
                            "get_sortOrderPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRRaycaster::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRRaycaster::Raycast(::UnityEngine::EventSystems::PointerEventData eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult> resultAppendList, ::UnityEngine::Ray ray, bool checkForBlocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster>::get(),
                            "Raycast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData, resultAppendList, ray, checkForBlocking);
}
 void ::GlobalNamespace::OVRRaycaster::Raycast(::UnityEngine::EventSystems::PointerEventData eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult> resultAppendList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster>::get(),
                            "Raycast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData, resultAppendList);
}
 void ::GlobalNamespace::OVRRaycaster::RaycastPointer(::UnityEngine::EventSystems::PointerEventData eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult> resultAppendList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster>::get(),
                            "RaycastPointer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData, resultAppendList);
}
 void ::GlobalNamespace::OVRRaycaster::GraphicRaycast(::UnityEngine::Canvas canvas, ::UnityEngine::Ray ray, ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit> results)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster>::get(),
                            "GraphicRaycast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Canvas>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OVRRaycaster__RaycastHit>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, canvas, ray, results);
}
 ::UnityEngine::Vector2 ::GlobalNamespace::OVRRaycaster::GetScreenPosition(::UnityEngine::EventSystems::RaycastResult raycastResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster>::get(),
                            "GetScreenPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::RaycastResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method, raycastResult);
}
 bool ::GlobalNamespace::OVRRaycaster::RayIntersectsRectTransform(::UnityEngine::RectTransform rectTransform, ::UnityEngine::Ray ray, ByRef<::UnityEngine::Vector3> worldPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster>::get(),
                            "RayIntersectsRectTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rectTransform, ray, worldPos);
}
 bool ::GlobalNamespace::OVRRaycaster::IsFocussed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster>::get(),
                            "IsFocussed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRRaycaster::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster>::get(),
                            "OnPointerEnter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e);
}
} // end anonymous namespace
