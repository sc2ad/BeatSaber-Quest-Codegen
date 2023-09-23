#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__TrackedDeviceRaycaster_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__ExtendedPointerEventData_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData::*)(UnityEngine::UI::Graphic, UnityEngine::Vector3, UnityEngine::Vector2, float_t)>(&UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2943a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Graphic>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData.get_graphic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Graphic (UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData::*)()>(&UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData::get_graphic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2943b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData>::get(),
                            "get_graphic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData.get_worldHitPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData::*)()>(&UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData::get_worldHitPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2943b68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData>::get(),
                            "get_worldHitPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData.get_screenPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData::*)()>(&UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData::get_screenPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2943b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData>::get(),
                            "get_screenPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData.get_distance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData::*)()>(&UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData::get_distance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2943b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData>::get(),
                            "get_distance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "_graphic_k__BackingField", ty: "UnityEngine::UI::Graphic", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_worldHitPosition_k__BackingField", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "_screenPosition_k__BackingField", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "_distance_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData(UnityEngine::UI::Graphic _graphic_k__BackingField, UnityEngine::Vector3 _worldHitPosition_k__BackingField, UnityEngine::Vector2 _screenPosition_k__BackingField, float_t _distance_k__BackingField) noexcept : ::bs_hook::ValueTypeWrapper() {this->_graphic_k__BackingField = _graphic_k__BackingField;
this->_worldHitPosition_k__BackingField = _worldHitPosition_k__BackingField;
this->_screenPosition_k__BackingField = _screenPosition_k__BackingField;
this->_distance_k__BackingField = _distance_k__BackingField;
}
constexpr void UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData::__set__graphic_k__BackingField(UnityEngine::UI::Graphic value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Graphic, 0x0>(this->__instance, std::forward<UnityEngine::UI::Graphic>(value));
}
constexpr UnityEngine::UI::Graphic UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData::__get__graphic_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Graphic, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData::__set__worldHitPosition_k__BackingField(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x8>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData::__get__worldHitPosition_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData::__set__screenPosition_k__BackingField(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x14>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData::__get__screenPosition_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x14>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData::__set__distance_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData::__get__distance_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->__instance);
}
 void UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData::_ctor(UnityEngine::UI::Graphic graphic, UnityEngine::Vector3 worldHitPosition, UnityEngine::Vector2 screenPosition, float_t distance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Graphic>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, graphic, worldHitPosition, screenPosition, distance);
}
 UnityEngine::UI::Graphic UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData::get_graphic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData>::get(),
                            "get_graphic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::Graphic, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::Vector3 UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData::get_worldHitPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData>::get(),
                            "get_worldHitPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::Vector2 UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData::get_screenPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData>::get(),
                            "get_screenPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 float_t UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData::get_distance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData>::get(),
                            "get_distance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c::*)()>(&UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2943be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c._SortedRaycastGraphics_b__25_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c::*)(UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData, UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData)>(&UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c::_SortedRaycastGraphics_b__25_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2943bf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c>::get(),
                            "<SortedRaycastGraphics>b__25_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c::__set___9(UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c value)  {
::cordl_internals::setStaticField<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c>::get>(std::forward<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c>(value));
}
 UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c::__get___9()  {
return ::cordl_internals::getStaticField<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c>::get>();
}
 void UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c::__set___9__25_0(System::Comparison_1<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData> value)  {
::cordl_internals::setStaticField<System::Comparison_1<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData>, "<>9__25_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c>::get>(std::forward<System::Comparison_1<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData>>(value));
}
 System::Comparison_1<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData> UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c::__get___9__25_0()  {
return ::cordl_internals::getStaticField<System::Comparison_1<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData>, "<>9__25_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c>::get>();
}
// Ctor Parameters []
 UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c>())) {}
 void UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c::_SortedRaycastGraphics_b__25_0(UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData g1, UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData g2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c>::get(),
                            "<SortedRaycastGraphics>b__25_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, g1, g2);
}
//  Writing Method size for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.get_eventCamera
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Camera (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_eventCamera)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2942f5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::UI::TrackedDeviceRaycaster),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.get_blockingMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::LayerMask (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_blockingMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2943084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "get_blockingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.set_blockingMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(UnityEngine::LayerMask)>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_blockingMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x294308c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "set_blockingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::LayerMask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.get_checkFor3DOcclusion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_checkFor3DOcclusion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2943094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "get_checkFor3DOcclusion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.set_checkFor3DOcclusion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(bool)>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_checkFor3DOcclusion)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x294309c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "set_checkFor3DOcclusion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.get_checkFor2DOcclusion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_checkFor2DOcclusion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29430a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "get_checkFor2DOcclusion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.set_checkFor2DOcclusion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(bool)>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_checkFor2DOcclusion)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29430b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "set_checkFor2DOcclusion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.get_ignoreReversedGraphics
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_ignoreReversedGraphics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29430bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "get_ignoreReversedGraphics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.set_ignoreReversedGraphics
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(bool)>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_ignoreReversedGraphics)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29430c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "set_ignoreReversedGraphics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.get_maxDistance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_maxDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29430d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "get_maxDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.set_maxDistance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(float_t)>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_maxDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29430d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "set_maxDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::OnEnable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x29430e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::UI::TrackedDeviceRaycaster),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::OnDisable)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2943164;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::UI::TrackedDeviceRaycaster),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.Raycast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(UnityEngine::EventSystems::PointerEventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>)>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::Raycast)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2943258;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::UI::TrackedDeviceRaycaster),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.PerformRaycast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(UnityEngine::InputSystem::UI::ExtendedPointerEventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>)>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::PerformRaycast)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x293cf38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "PerformRaycast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UI::ExtendedPointerEventData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.SortedRaycastGraphics
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(UnityEngine::Canvas, UnityEngine::Ray, System::Collections::Generic::List_1<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData>)>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::SortedRaycastGraphics)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x2943308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "SortedRaycastGraphics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Canvas>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.RayIntersectsRectTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::RectTransform, UnityEngine::Ray, ByRef<UnityEngine::Vector3>, ByRef<float_t>)>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::RayIntersectsRectTransform)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x29437e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "RayIntersectsRectTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RectTransform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.get_canvas
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Canvas (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_canvas)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2942ff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "get_canvas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2943a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__set_m_RaycastResultsCache(System::Collections::Generic::List_1<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData> UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__get_m_RaycastResultsCache() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__set_s_Instances(UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster> value)  {
::cordl_internals::setStaticField<UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>, "s_Instances", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get>(std::forward<UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>>(value));
}
 UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster> UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__get_s_Instances()  {
return ::cordl_internals::getStaticField<UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>, "s_Instances", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get>();
}
 void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__set_s_SortedGraphics(System::Collections::Generic::List_1<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::List_1<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData>, "s_SortedGraphics", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get>(std::forward<System::Collections::Generic::List_1<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData>>(value));
}
 System::Collections::Generic::List_1<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData> UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__get_s_SortedGraphics()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::List_1<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData>, "s_SortedGraphics", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get>();
}
constexpr void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__set_m_IgnoreReversedGraphics(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__get_m_IgnoreReversedGraphics() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__set_m_CheckFor2DOcclusion(bool value)  {
::cordl_internals::setInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__get_m_CheckFor2DOcclusion() const {
return ::cordl_internals::getInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__set_m_CheckFor3DOcclusion(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__get_m_CheckFor3DOcclusion() const {
return ::cordl_internals::getInstanceField<bool, 0x2a>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__set_m_MaxDistance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__get_m_MaxDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__set_m_BlockingMask(UnityEngine::LayerMask value)  {
::cordl_internals::setInstanceField<UnityEngine::LayerMask, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::LayerMask>(value));
}
constexpr UnityEngine::LayerMask UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__get_m_BlockingMask() const {
return ::cordl_internals::getInstanceField<UnityEngine::LayerMask, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__set_m_Canvas(UnityEngine::Canvas value)  {
::cordl_internals::setInstanceField<UnityEngine::Canvas, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Canvas>(value));
}
constexpr UnityEngine::Canvas UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__get_m_Canvas() const {
return ::cordl_internals::getInstanceField<UnityEngine::Canvas, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Camera UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_eventCamera()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "get_eventCamera",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Camera, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::LayerMask UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_blockingMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "get_blockingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::LayerMask, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_blockingMask(UnityEngine::LayerMask value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "set_blockingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::LayerMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_checkFor3DOcclusion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "get_checkFor3DOcclusion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_checkFor3DOcclusion(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "set_checkFor3DOcclusion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_checkFor2DOcclusion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "get_checkFor2DOcclusion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_checkFor2DOcclusion(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "set_checkFor2DOcclusion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_ignoreReversedGraphics()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "get_ignoreReversedGraphics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_ignoreReversedGraphics(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "set_ignoreReversedGraphics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_maxDistance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "get_maxDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_maxDistance(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "set_maxDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::Raycast(UnityEngine::EventSystems::PointerEventData eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult> resultAppendList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "Raycast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData, resultAppendList);
}
 void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::PerformRaycast(UnityEngine::InputSystem::UI::ExtendedPointerEventData eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult> resultAppendList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "PerformRaycast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UI::ExtendedPointerEventData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData, resultAppendList);
}
 void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::SortedRaycastGraphics(UnityEngine::Canvas canvas, UnityEngine::Ray ray, System::Collections::Generic::List_1<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData> results)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "SortedRaycastGraphics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Canvas>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, canvas, ray, results);
}
 bool UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::RayIntersectsRectTransform(UnityEngine::RectTransform transform, UnityEngine::Ray ray, ByRef<UnityEngine::Vector3> worldPosition, ByRef<float_t> distance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "RayIntersectsRectTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RectTransform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, transform, ray, worldPosition, distance);
}
 UnityEngine::Canvas UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_canvas()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            "get_canvas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Canvas, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::TrackedDeviceRaycaster()  : UnityEngine::EventSystems::BaseRaycaster(THROW_UNLESS(::il2cpp_utils::New<TrackedDeviceRaycaster>())) {}
 void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
