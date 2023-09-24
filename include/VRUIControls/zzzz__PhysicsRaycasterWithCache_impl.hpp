#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "VRUIControls/zzzz__PhysicsRaycasterWithCache_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "VRUIControls/zzzz__PhysicsRaycasterWithCache_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
//  Writing Method size for method: VRUIControls::VRUIControls__PhysicsRaycasterWithCache__CachedRaycast._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRUIControls__PhysicsRaycasterWithCache__CachedRaycast::*)(bool, UnityEngine::Ray, UnityEngine::RaycastHit, float_t, int32_t)>(&VRUIControls::VRUIControls__PhysicsRaycasterWithCache__CachedRaycast::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2d3b5e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::VRUIControls__PhysicsRaycasterWithCache__CachedRaycast>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RaycastHit>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "wasHit", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "ray", ty: "UnityEngine::Ray", modifiers: "", def_value: Some("{}") }, CppParam { name: "hitInfo", ty: "UnityEngine::RaycastHit", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "layerMask", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr VRUIControls::VRUIControls__PhysicsRaycasterWithCache__CachedRaycast::VRUIControls__PhysicsRaycasterWithCache__CachedRaycast(bool wasHit, UnityEngine::Ray ray, UnityEngine::RaycastHit hitInfo, float_t maxDistance, int32_t layerMask) noexcept : ::bs_hook::ValueTypeWrapper() {this->wasHit = wasHit;
this->ray = ray;
this->hitInfo = hitInfo;
this->maxDistance = maxDistance;
this->layerMask = layerMask;
}
constexpr void VRUIControls::VRUIControls__PhysicsRaycasterWithCache__CachedRaycast::__set_wasHit(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool VRUIControls::VRUIControls__PhysicsRaycasterWithCache__CachedRaycast::__get_wasHit() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void VRUIControls::VRUIControls__PhysicsRaycasterWithCache__CachedRaycast::__set_ray(UnityEngine::Ray value)  {
::cordl_internals::setInstanceField<UnityEngine::Ray, 0x4>(this->__instance, std::forward<UnityEngine::Ray>(value));
}
constexpr UnityEngine::Ray VRUIControls::VRUIControls__PhysicsRaycasterWithCache__CachedRaycast::__get_ray() const {
return ::cordl_internals::getInstanceField<UnityEngine::Ray, 0x4>(this->__instance);
}
constexpr void VRUIControls::VRUIControls__PhysicsRaycasterWithCache__CachedRaycast::__set_hitInfo(UnityEngine::RaycastHit value)  {
::cordl_internals::setInstanceField<UnityEngine::RaycastHit, 0x1c>(this->__instance, std::forward<UnityEngine::RaycastHit>(value));
}
constexpr UnityEngine::RaycastHit VRUIControls::VRUIControls__PhysicsRaycasterWithCache__CachedRaycast::__get_hitInfo() const {
return ::cordl_internals::getInstanceField<UnityEngine::RaycastHit, 0x1c>(this->__instance);
}
constexpr void VRUIControls::VRUIControls__PhysicsRaycasterWithCache__CachedRaycast::__set_maxDistance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t VRUIControls::VRUIControls__PhysicsRaycasterWithCache__CachedRaycast::__get_maxDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->__instance);
}
constexpr void VRUIControls::VRUIControls__PhysicsRaycasterWithCache__CachedRaycast::__set_layerMask(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t VRUIControls::VRUIControls__PhysicsRaycasterWithCache__CachedRaycast::__get_layerMask() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4c>(this->__instance);
}
 void VRUIControls::VRUIControls__PhysicsRaycasterWithCache__CachedRaycast::_ctor(bool wasHit, UnityEngine::Ray ray, UnityEngine::RaycastHit hitInfo, float_t maxDistance, int32_t layerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::VRUIControls__PhysicsRaycasterWithCache__CachedRaycast>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RaycastHit>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, wasHit, ray, hitInfo, maxDistance, layerMask);
}
//  Writing Method size for method: VRUIControls::PhysicsRaycasterWithCache.Raycast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VRUIControls::PhysicsRaycasterWithCache::*)(UnityEngine::Ray, ByRef<UnityEngine::RaycastHit>, float_t, int32_t)>(&VRUIControls::PhysicsRaycasterWithCache::Raycast)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x2d3b07c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::PhysicsRaycasterWithCache>::get(),
                            "Raycast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: VRUIControls::PhysicsRaycasterWithCache._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::PhysicsRaycasterWithCache::*)()>(&VRUIControls::PhysicsRaycasterWithCache::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2d3b628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::PhysicsRaycasterWithCache>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void VRUIControls::PhysicsRaycasterWithCache::__set__cachedRaycasts(System::Collections::Generic::List_1<VRUIControls::VRUIControls__PhysicsRaycasterWithCache__CachedRaycast> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<VRUIControls::VRUIControls__PhysicsRaycasterWithCache__CachedRaycast>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<VRUIControls::VRUIControls__PhysicsRaycasterWithCache__CachedRaycast>>(value));
}
constexpr System::Collections::Generic::List_1<VRUIControls::VRUIControls__PhysicsRaycasterWithCache__CachedRaycast> VRUIControls::PhysicsRaycasterWithCache::__get__cachedRaycasts() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<VRUIControls::VRUIControls__PhysicsRaycasterWithCache__CachedRaycast>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void VRUIControls::PhysicsRaycasterWithCache::__set__lastFrameCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t VRUIControls::PhysicsRaycasterWithCache::__get__lastFrameCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool VRUIControls::PhysicsRaycasterWithCache::Raycast(UnityEngine::Ray ray, ByRef<UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::PhysicsRaycasterWithCache>::get(),
                            "Raycast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, ray, hitInfo, maxDistance, layerMask);
}
 VRUIControls::PhysicsRaycasterWithCache VRUIControls::PhysicsRaycasterWithCache::New_ctor()  {
VRUIControls::PhysicsRaycasterWithCache o{THROW_UNLESS(::il2cpp_utils::New<VRUIControls::PhysicsRaycasterWithCache>())};
return o;
}
 void VRUIControls::PhysicsRaycasterWithCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::PhysicsRaycasterWithCache>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
