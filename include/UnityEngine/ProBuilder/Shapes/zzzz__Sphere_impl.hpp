#pragma once
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_impl.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Sphere_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
//  Writing Method size for method: UnityEngine::ProBuilder::Shapes::Sphere.CopyShape
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Shapes::Sphere::*)(UnityEngine::ProBuilder::Shapes::Shape)>(&UnityEngine::ProBuilder::Shapes::Sphere::CopyShape)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x29f82ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ProBuilder::Shapes::Sphere),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Sphere>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::Shapes::Sphere.UpdateBounds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Bounds (UnityEngine::ProBuilder::Shapes::Sphere::*)(UnityEngine::ProBuilder::ProBuilderMesh, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Bounds)>(&UnityEngine::ProBuilder::Shapes::Sphere::UpdateBounds)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29f8370;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ProBuilder::Shapes::Sphere),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Sphere>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::Shapes::Sphere.RebuildMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Bounds (UnityEngine::ProBuilder::Shapes::Sphere::*)(UnityEngine::ProBuilder::ProBuilderMesh, UnityEngine::Vector3, UnityEngine::Quaternion)>(&UnityEngine::ProBuilder::Shapes::Sphere::RebuildMesh)> {
  constexpr static std::size_t size = 0x8fc;
  constexpr static std::size_t addrs = 0x29f83dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ProBuilder::Shapes::Sphere),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Sphere>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::Shapes::Sphere.SubdivideIcosahedron
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Vector3> (*)(::ArrayW<UnityEngine::Vector3>, float_t)>(&UnityEngine::ProBuilder::Shapes::Sphere::SubdivideIcosahedron)> {
  constexpr static std::size_t size = 0x62c;
  constexpr static std::size_t addrs = 0x29f8cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Sphere>::get(),
                            "SubdivideIcosahedron",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::Shapes::Sphere._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Shapes::Sphere::*)()>(&UnityEngine::ProBuilder::Shapes::Sphere::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29f9304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Sphere>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::ProBuilder::Shapes::Sphere::__set_k_IcosphereVertices(::ArrayW<UnityEngine::Vector3> value)  {
::cordl_internals::setStaticField<::ArrayW<UnityEngine::Vector3>, "k_IcosphereVertices", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Sphere>::get>(std::forward<::ArrayW<UnityEngine::Vector3>>(value));
}
 ::ArrayW<UnityEngine::Vector3> UnityEngine::ProBuilder::Shapes::Sphere::__get_k_IcosphereVertices()  {
return ::cordl_internals::getStaticField<::ArrayW<UnityEngine::Vector3>, "k_IcosphereVertices", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Sphere>::get>();
}
 void UnityEngine::ProBuilder::Shapes::Sphere::__set_k_IcosphereTriangles(::ArrayW<int32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "k_IcosphereTriangles", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Sphere>::get>(std::forward<::ArrayW<int32_t>>(value));
}
 ::ArrayW<int32_t> UnityEngine::ProBuilder::Shapes::Sphere::__get_k_IcosphereTriangles()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "k_IcosphereTriangles", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Sphere>::get>();
}
constexpr void UnityEngine::ProBuilder::Shapes::Sphere::__set_m_Subdivisions(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ProBuilder::Shapes::Sphere::__get_m_Subdivisions() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::Shapes::Sphere::__set_m_BottomMostVertexIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ProBuilder::Shapes::Sphere::__get_m_BottomMostVertexIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::Shapes::Sphere::__set_m_Smooth(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::ProBuilder::Shapes::Sphere::__get_m_Smooth() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::ProBuilder::Shapes::Sphere::CopyShape(UnityEngine::ProBuilder::Shapes::Shape shape)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Sphere>::get(),
                            "CopyShape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Shapes::Shape>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shape);
}
 UnityEngine::Bounds UnityEngine::ProBuilder::Shapes::Sphere::UpdateBounds(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Vector3 size, UnityEngine::Quaternion rotation, UnityEngine::Bounds bounds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Sphere>::get(),
                            "UpdateBounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Bounds>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Bounds, false>(const_cast<void*>(instance), ___internal_method, mesh, size, rotation, bounds);
}
 UnityEngine::Bounds UnityEngine::ProBuilder::Shapes::Sphere::RebuildMesh(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Vector3 size, UnityEngine::Quaternion rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Sphere>::get(),
                            "RebuildMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Bounds, false>(const_cast<void*>(instance), ___internal_method, mesh, size, rotation);
}
 ::ArrayW<UnityEngine::Vector3> UnityEngine::ProBuilder::Shapes::Sphere::SubdivideIcosahedron(::ArrayW<UnityEngine::Vector3> vertices, float_t radius)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Sphere>::get(),
                            "SubdivideIcosahedron",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::Vector3>, false>(nullptr, ___internal_method, vertices, radius);
}
// Ctor Parameters []
 UnityEngine::ProBuilder::Shapes::Sphere::Sphere()  : UnityEngine::ProBuilder::Shapes::Shape(THROW_UNLESS(::il2cpp_utils::New<Sphere>())) {}
 void UnityEngine::ProBuilder::Shapes::Sphere::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Sphere>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
