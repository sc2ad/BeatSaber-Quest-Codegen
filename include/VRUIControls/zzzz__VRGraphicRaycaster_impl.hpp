#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_impl.hpp"
#include "VRUIControls/zzzz__VRGraphicRaycaster_def.hpp"
#include "HMUI/zzzz__CurvedCanvasSettingsHelper_def.hpp"
#include "VRUIControls/zzzz__PhysicsRaycasterWithCache_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult::*)(UnityEngine::UI::Graphic, float_t, UnityEngine::Vector3, UnityEngine::Vector2)>(&VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d3c8fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Graphic>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "graphic", ty: "UnityEngine::UI::Graphic", modifiers: "", def_value: Some("csnull") }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "position", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "insideRootCanvasPosition", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult(UnityEngine::UI::Graphic graphic, float_t distance, UnityEngine::Vector3 position, UnityEngine::Vector2 insideRootCanvasPosition) noexcept : ::bs_hook::ValueTypeWrapper() {this->graphic = graphic;
this->distance = distance;
this->position = position;
this->insideRootCanvasPosition = insideRootCanvasPosition;
}
constexpr void VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult::__set_graphic(UnityEngine::UI::Graphic value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Graphic, 0x0>(this->__instance, std::forward<UnityEngine::UI::Graphic>(value));
}
constexpr UnityEngine::UI::Graphic VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult::__get_graphic() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Graphic, 0x0>(this->__instance);
}
constexpr void VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult::__set_distance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult::__get_distance() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
constexpr void VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult::__set_position(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xc>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult::__get_position() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xc>(this->__instance);
}
constexpr void VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult::__set_insideRootCanvasPosition(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x18>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult::__get_insideRootCanvasPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x18>(this->__instance);
}
 void VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult::_ctor(UnityEngine::UI::Graphic graphic, float_t distance, UnityEngine::Vector3 position, UnityEngine::Vector2 insideRootCanvasPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Graphic>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, graphic, distance, position, insideRootCanvasPosition);
}
//  Writing Method size for method: VRUIControls::VRUIControls__VRGraphicRaycaster____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRUIControls__VRGraphicRaycaster____c::*)()>(&VRUIControls::VRUIControls__VRGraphicRaycaster____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3ca98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::VRUIControls__VRGraphicRaycaster____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: VRUIControls::VRUIControls__VRGraphicRaycaster____c._RaycastCanvas_b__12_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (VRUIControls::VRUIControls__VRGraphicRaycaster____c::*)(VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult, VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult)>(&VRUIControls::VRUIControls__VRGraphicRaycaster____c::_RaycastCanvas_b__12_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2d3caa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::VRUIControls__VRGraphicRaycaster____c>::get(),
                            "<RaycastCanvas>b__12_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult>::get()}
                        )));
    return ___internal_method;
  }
};
 void VRUIControls::VRUIControls__VRGraphicRaycaster____c::__set___9(VRUIControls::VRUIControls__VRGraphicRaycaster____c value)  {
::cordl_internals::setStaticField<VRUIControls::VRUIControls__VRGraphicRaycaster____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::VRUIControls__VRGraphicRaycaster____c>::get>(std::forward<VRUIControls::VRUIControls__VRGraphicRaycaster____c>(value));
}
 VRUIControls::VRUIControls__VRGraphicRaycaster____c VRUIControls::VRUIControls__VRGraphicRaycaster____c::__get___9()  {
return ::cordl_internals::getStaticField<VRUIControls::VRUIControls__VRGraphicRaycaster____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::VRUIControls__VRGraphicRaycaster____c>::get>();
}
 void VRUIControls::VRUIControls__VRGraphicRaycaster____c::__set___9__12_0(System::Comparison_1<VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult> value)  {
::cordl_internals::setStaticField<System::Comparison_1<VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult>, "<>9__12_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::VRUIControls__VRGraphicRaycaster____c>::get>(std::forward<System::Comparison_1<VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult>>(value));
}
 System::Comparison_1<VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult> VRUIControls::VRUIControls__VRGraphicRaycaster____c::__get___9__12_0()  {
return ::cordl_internals::getStaticField<System::Comparison_1<VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult>, "<>9__12_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::VRUIControls__VRGraphicRaycaster____c>::get>();
}
// Ctor Parameters []
 VRUIControls::VRUIControls__VRGraphicRaycaster____c::VRUIControls__VRGraphicRaycaster____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<VRUIControls__VRGraphicRaycaster____c>())) {}
 void VRUIControls::VRUIControls__VRGraphicRaycaster____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::VRUIControls__VRGraphicRaycaster____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t VRUIControls::VRUIControls__VRGraphicRaycaster____c::_RaycastCanvas_b__12_0(VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult g1, VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult g2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::VRUIControls__VRGraphicRaycaster____c>::get(),
                            "<RaycastCanvas>b__12_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, g1, g2);
}
//  Writing Method size for method: VRUIControls::VRGraphicRaycaster.get_eventCamera
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Camera (VRUIControls::VRGraphicRaycaster::*)()>(&VRUIControls::VRGraphicRaycaster::get_eventCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3b6ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(VRUIControls::VRGraphicRaycaster),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::VRGraphicRaycaster>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: VRUIControls::VRGraphicRaycaster.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRGraphicRaycaster::*)()>(&VRUIControls::VRGraphicRaycaster::OnEnable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d3b6b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(VRUIControls::VRGraphicRaycaster),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::VRGraphicRaycaster>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: VRUIControls::VRGraphicRaycaster.Raycast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRGraphicRaycaster::*)(UnityEngine::EventSystems::PointerEventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>)>(&VRUIControls::VRGraphicRaycaster::Raycast)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x2d3b724;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(VRUIControls::VRGraphicRaycaster),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::VRGraphicRaycaster>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: VRUIControls::VRGraphicRaycaster.RaycastCanvas
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Canvas, UnityEngine::Ray, float_t, float_t, System::Collections::Generic::List_1<VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult>)>(&VRUIControls::VRGraphicRaycaster::RaycastCanvas)> {
  constexpr static std::size_t size = 0xb48;
  constexpr static std::size_t addrs = 0x2d3bdb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::VRGraphicRaycaster>::get(),
                            "RaycastCanvas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Canvas>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: VRUIControls::VRGraphicRaycaster._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRGraphicRaycaster::*)()>(&VRUIControls::VRGraphicRaycaster::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2d3c910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::VRGraphicRaycaster>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void VRUIControls::VRGraphicRaycaster::__set__blockingMask(UnityEngine::LayerMask value)  {
::cordl_internals::setInstanceField<UnityEngine::LayerMask, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::LayerMask>(value));
}
constexpr UnityEngine::LayerMask VRUIControls::VRGraphicRaycaster::__get__blockingMask() const {
return ::cordl_internals::getInstanceField<UnityEngine::LayerMask, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void VRUIControls::VRGraphicRaycaster::__set__physicsRaycaster(VRUIControls::PhysicsRaycasterWithCache value)  {
::cordl_internals::setInstanceField<VRUIControls::PhysicsRaycasterWithCache, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<VRUIControls::PhysicsRaycasterWithCache>(value));
}
constexpr VRUIControls::PhysicsRaycasterWithCache VRUIControls::VRGraphicRaycaster::__get__physicsRaycaster() const {
return ::cordl_internals::getInstanceField<VRUIControls::PhysicsRaycasterWithCache, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void VRUIControls::VRGraphicRaycaster::__set__canvas(UnityEngine::Canvas value)  {
::cordl_internals::setInstanceField<UnityEngine::Canvas, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Canvas>(value));
}
constexpr UnityEngine::Canvas VRUIControls::VRGraphicRaycaster::__get__canvas() const {
return ::cordl_internals::getInstanceField<UnityEngine::Canvas, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void VRUIControls::VRGraphicRaycaster::__set__raycastResults(System::Collections::Generic::List_1<VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult>>(value));
}
constexpr System::Collections::Generic::List_1<VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult> VRUIControls::VRGraphicRaycaster::__get__raycastResults() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void VRUIControls::VRGraphicRaycaster::__set__curvedCanvasSettingsHelper(HMUI::CurvedCanvasSettingsHelper value)  {
::cordl_internals::setInstanceField<HMUI::CurvedCanvasSettingsHelper, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::CurvedCanvasSettingsHelper>(value));
}
constexpr HMUI::CurvedCanvasSettingsHelper VRUIControls::VRGraphicRaycaster::__get__curvedCanvasSettingsHelper() const {
return ::cordl_internals::getInstanceField<HMUI::CurvedCanvasSettingsHelper, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void VRUIControls::VRGraphicRaycaster::__set__ray2DCircleIntersectionDistances(::ArrayW<float_t> value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "_ray2DCircleIntersectionDistances", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::VRGraphicRaycaster>::get>(std::forward<::ArrayW<float_t>>(value));
}
 ::ArrayW<float_t> VRUIControls::VRGraphicRaycaster::__get__ray2DCircleIntersectionDistances()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "_ray2DCircleIntersectionDistances", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::VRGraphicRaycaster>::get>();
}
 UnityEngine::Camera VRUIControls::VRGraphicRaycaster::get_eventCamera()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::VRGraphicRaycaster>::get(),
                            "get_eventCamera",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Camera, false>(const_cast<void*>(instance), ___internal_method);
}
 void VRUIControls::VRGraphicRaycaster::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::VRGraphicRaycaster>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void VRUIControls::VRGraphicRaycaster::Raycast(UnityEngine::EventSystems::PointerEventData eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult> resultAppendList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::VRGraphicRaycaster>::get(),
                            "Raycast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData, resultAppendList);
}
 void VRUIControls::VRGraphicRaycaster::RaycastCanvas(UnityEngine::Canvas canvas, UnityEngine::Ray ray, float_t hitDistance, float_t curvedUIRadius, System::Collections::Generic::List_1<VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult> results)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::VRGraphicRaycaster>::get(),
                            "RaycastCanvas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Canvas>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<VRUIControls::VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, canvas, ray, hitDistance, curvedUIRadius, results);
}
// Ctor Parameters []
 VRUIControls::VRGraphicRaycaster::VRGraphicRaycaster()  : UnityEngine::EventSystems::BaseRaycaster(THROW_UNLESS(::il2cpp_utils::New<VRGraphicRaycaster>())) {}
 void VRUIControls::VRGraphicRaycaster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::VRGraphicRaycaster>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
