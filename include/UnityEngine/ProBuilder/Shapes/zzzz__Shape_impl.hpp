#pragma once
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
//  Writing Method size for method: UnityEngine::ProBuilder::Shapes::Shape.UpdateBounds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Bounds (UnityEngine::ProBuilder::Shapes::Shape::*)(UnityEngine::ProBuilder::ProBuilderMesh, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Bounds)>(&UnityEngine::ProBuilder::Shapes::Shape::UpdateBounds)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x29f8278;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ProBuilder::Shapes::Shape),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Shape>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::Shapes::Shape.RebuildMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Bounds (UnityEngine::ProBuilder::Shapes::Shape::*)(UnityEngine::ProBuilder::ProBuilderMesh, UnityEngine::Vector3, UnityEngine::Quaternion)>(&UnityEngine::ProBuilder::Shapes::Shape::RebuildMesh)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ProBuilder::Shapes::Shape),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Shape>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::Shapes::Shape.CopyShape
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Shapes::Shape::*)(UnityEngine::ProBuilder::Shapes::Shape)>(&UnityEngine::ProBuilder::Shapes::Shape::CopyShape)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ProBuilder::Shapes::Shape),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Shape>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::Shapes::Shape._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Shapes::Shape::*)()>(&UnityEngine::ProBuilder::Shapes::Shape::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29f2168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Shape>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::Bounds UnityEngine::ProBuilder::Shapes::Shape::UpdateBounds(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Vector3 size, UnityEngine::Quaternion rotation, UnityEngine::Bounds bounds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Shape>::get(),
                            "UpdateBounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Bounds>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Bounds, false>(const_cast<void*>(instance), ___internal_method, mesh, size, rotation, bounds);
}
 UnityEngine::Bounds UnityEngine::ProBuilder::Shapes::Shape::RebuildMesh(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Vector3 size, UnityEngine::Quaternion rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Shape>::get(),
                            "RebuildMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Bounds, false>(const_cast<void*>(instance), ___internal_method, mesh, size, rotation);
}
 void UnityEngine::ProBuilder::Shapes::Shape::CopyShape(UnityEngine::ProBuilder::Shapes::Shape shape)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Shape>::get(),
                            "CopyShape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Shapes::Shape>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shape);
}
// Ctor Parameters []
 UnityEngine::ProBuilder::Shapes::Shape::Shape()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Shape>())) {}
 void UnityEngine::ProBuilder::Shapes::Shape::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Shape>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
