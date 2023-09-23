#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: UnityEngine::EventSystems::RaycastResult.get_gameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (UnityEngine::EventSystems::RaycastResult::*)()>(&UnityEngine::EventSystems::RaycastResult::get_gameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c2823c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::RaycastResult>::get(),
                            "get_gameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::RaycastResult.set_gameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::RaycastResult::*)(UnityEngine::GameObject)>(&UnityEngine::EventSystems::RaycastResult::set_gameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c28244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::RaycastResult>::get(),
                            "set_gameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::RaycastResult.get_isValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::RaycastResult::*)()>(&UnityEngine::EventSystems::RaycastResult::get_isValid)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2c2824c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::RaycastResult>::get(),
                            "get_isValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::RaycastResult.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::RaycastResult::*)()>(&UnityEngine::EventSystems::RaycastResult::Clear)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2c282e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::RaycastResult>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::RaycastResult.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::EventSystems::RaycastResult::*)()>(&UnityEngine::EventSystems::RaycastResult::ToString)> {
  constexpr static std::size_t size = 0x6d8;
  constexpr static std::size_t addrs = 0x2c1d044;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::EventSystems::RaycastResult),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::RaycastResult>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_GameObject", ty: "UnityEngine::GameObject", modifiers: "", def_value: Some("csnull") }, CppParam { name: "module", ty: "UnityEngine::EventSystems::BaseRaycaster", modifiers: "", def_value: Some("csnull") }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "index", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sortingLayer", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sortingOrder", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "worldPosition", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "worldNormal", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "screenPosition", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "displayIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::EventSystems::RaycastResult::RaycastResult(UnityEngine::GameObject m_GameObject, UnityEngine::EventSystems::BaseRaycaster module, float_t distance, float_t index, int32_t depth, int32_t sortingLayer, int32_t sortingOrder, UnityEngine::Vector3 worldPosition, UnityEngine::Vector3 worldNormal, UnityEngine::Vector2 screenPosition, int32_t displayIndex) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_GameObject = m_GameObject;
this->module = module;
this->distance = distance;
this->index = index;
this->depth = depth;
this->sortingLayer = sortingLayer;
this->sortingOrder = sortingOrder;
this->worldPosition = worldPosition;
this->worldNormal = worldNormal;
this->screenPosition = screenPosition;
this->displayIndex = displayIndex;
}
constexpr void UnityEngine::EventSystems::RaycastResult::__set_m_GameObject(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x0>(this->__instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject UnityEngine::EventSystems::RaycastResult::__get_m_GameObject() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x0>(this->__instance);
}
constexpr void UnityEngine::EventSystems::RaycastResult::__set_module(UnityEngine::EventSystems::BaseRaycaster value)  {
::cordl_internals::setInstanceField<UnityEngine::EventSystems::BaseRaycaster, 0x8>(this->__instance, std::forward<UnityEngine::EventSystems::BaseRaycaster>(value));
}
constexpr UnityEngine::EventSystems::BaseRaycaster UnityEngine::EventSystems::RaycastResult::__get_module() const {
return ::cordl_internals::getInstanceField<UnityEngine::EventSystems::BaseRaycaster, 0x8>(this->__instance);
}
constexpr void UnityEngine::EventSystems::RaycastResult::__set_distance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::EventSystems::RaycastResult::__get_distance() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->__instance);
}
constexpr void UnityEngine::EventSystems::RaycastResult::__set_index(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::EventSystems::RaycastResult::__get_index() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->__instance);
}
constexpr void UnityEngine::EventSystems::RaycastResult::__set_depth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::EventSystems::RaycastResult::__get_depth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
constexpr void UnityEngine::EventSystems::RaycastResult::__set_sortingLayer(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::EventSystems::RaycastResult::__get_sortingLayer() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->__instance);
}
constexpr void UnityEngine::EventSystems::RaycastResult::__set_sortingOrder(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::EventSystems::RaycastResult::__get_sortingOrder() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->__instance);
}
constexpr void UnityEngine::EventSystems::RaycastResult::__set_worldPosition(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x24>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::EventSystems::RaycastResult::__get_worldPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x24>(this->__instance);
}
constexpr void UnityEngine::EventSystems::RaycastResult::__set_worldNormal(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x30>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::EventSystems::RaycastResult::__get_worldNormal() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x30>(this->__instance);
}
constexpr void UnityEngine::EventSystems::RaycastResult::__set_screenPosition(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x3c>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::EventSystems::RaycastResult::__get_screenPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x3c>(this->__instance);
}
constexpr void UnityEngine::EventSystems::RaycastResult::__set_displayIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::EventSystems::RaycastResult::__get_displayIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this->__instance);
}
 UnityEngine::GameObject UnityEngine::EventSystems::RaycastResult::get_gameObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::RaycastResult>::get(),
                            "get_gameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::EventSystems::RaycastResult::set_gameObject(UnityEngine::GameObject value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::RaycastResult>::get(),
                            "set_gameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool UnityEngine::EventSystems::RaycastResult::get_isValid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::RaycastResult>::get(),
                            "get_isValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::EventSystems::RaycastResult::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::RaycastResult>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW UnityEngine::EventSystems::RaycastResult::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::RaycastResult>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
