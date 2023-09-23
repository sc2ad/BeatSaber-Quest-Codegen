#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit2D_def.hpp"
#include "UnityEngine/zzzz__Collider2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: UnityEngine::RaycastHit2D.get_point
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::RaycastHit2D::*)()>(&UnityEngine::RaycastHit2D::get_point)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b9b148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::RaycastHit2D>::get(),
                            "get_point",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::RaycastHit2D.get_normal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::RaycastHit2D::*)()>(&UnityEngine::RaycastHit2D::get_normal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b9b150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::RaycastHit2D>::get(),
                            "get_normal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::RaycastHit2D.get_distance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::RaycastHit2D::*)()>(&UnityEngine::RaycastHit2D::get_distance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b9b158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::RaycastHit2D>::get(),
                            "get_distance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::RaycastHit2D.get_fraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::RaycastHit2D::*)()>(&UnityEngine::RaycastHit2D::get_fraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b9b160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::RaycastHit2D>::get(),
                            "get_fraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::RaycastHit2D.get_collider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Collider2D (UnityEngine::RaycastHit2D::*)()>(&UnityEngine::RaycastHit2D::get_collider)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2b9b168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::RaycastHit2D>::get(),
                            "get_collider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_Centroid", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Point", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Normal", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Distance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Fraction", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Collider", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::RaycastHit2D::RaycastHit2D(UnityEngine::Vector2 m_Centroid, UnityEngine::Vector2 m_Point, UnityEngine::Vector2 m_Normal, float_t m_Distance, float_t m_Fraction, int32_t m_Collider) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Centroid = m_Centroid;
this->m_Point = m_Point;
this->m_Normal = m_Normal;
this->m_Distance = m_Distance;
this->m_Fraction = m_Fraction;
this->m_Collider = m_Collider;
}
constexpr void UnityEngine::RaycastHit2D::__set_m_Centroid(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x0>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::RaycastHit2D::__get_m_Centroid() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x0>(this->__instance);
}
constexpr void UnityEngine::RaycastHit2D::__set_m_Point(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x8>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::RaycastHit2D::__get_m_Point() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x8>(this->__instance);
}
constexpr void UnityEngine::RaycastHit2D::__set_m_Normal(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x10>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::RaycastHit2D::__get_m_Normal() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x10>(this->__instance);
}
constexpr void UnityEngine::RaycastHit2D::__set_m_Distance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::RaycastHit2D::__get_m_Distance() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->__instance);
}
constexpr void UnityEngine::RaycastHit2D::__set_m_Fraction(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::RaycastHit2D::__get_m_Fraction() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->__instance);
}
constexpr void UnityEngine::RaycastHit2D::__set_m_Collider(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::RaycastHit2D::__get_m_Collider() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->__instance);
}
 UnityEngine::Vector2 UnityEngine::RaycastHit2D::get_point()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::RaycastHit2D>::get(),
                            "get_point",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::Vector2 UnityEngine::RaycastHit2D::get_normal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::RaycastHit2D>::get(),
                            "get_normal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 float_t UnityEngine::RaycastHit2D::get_distance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::RaycastHit2D>::get(),
                            "get_distance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 float_t UnityEngine::RaycastHit2D::get_fraction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::RaycastHit2D>::get(),
                            "get_fraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::Collider2D UnityEngine::RaycastHit2D::get_collider()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::RaycastHit2D>::get(),
                            "get_collider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Collider2D, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
