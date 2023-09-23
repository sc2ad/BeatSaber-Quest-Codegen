#pragma once
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_impl.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Cylinder_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
//  Writing Method size for method: UnityEngine::ProBuilder::Shapes::Cylinder.CopyShape
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Shapes::Cylinder::*)(UnityEngine::ProBuilder::Shapes::Shape)>(&UnityEngine::ProBuilder::Shapes::Cylinder::CopyShape)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x29f3354;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ProBuilder::Shapes::Cylinder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Cylinder>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::Shapes::Cylinder.UpdateBounds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Bounds (UnityEngine::ProBuilder::Shapes::Cylinder::*)(UnityEngine::ProBuilder::ProBuilderMesh, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Bounds)>(&UnityEngine::ProBuilder::Shapes::Cylinder::UpdateBounds)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x29f3428;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ProBuilder::Shapes::Cylinder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Cylinder>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::Shapes::Cylinder.RebuildMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Bounds (UnityEngine::ProBuilder::Shapes::Cylinder::*)(UnityEngine::ProBuilder::ProBuilderMesh, UnityEngine::Vector3, UnityEngine::Quaternion)>(&UnityEngine::ProBuilder::Shapes::Cylinder::RebuildMesh)> {
  constexpr static std::size_t size = 0xbfc;
  constexpr static std::size_t addrs = 0x29f3460;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ProBuilder::Shapes::Cylinder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Cylinder>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::Shapes::Cylinder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Shapes::Cylinder::*)()>(&UnityEngine::ProBuilder::Shapes::Cylinder::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29f405c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Cylinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ProBuilder::Shapes::Cylinder::__set_m_AxisDivisions(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ProBuilder::Shapes::Cylinder::__get_m_AxisDivisions() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::Shapes::Cylinder::__set_m_HeightCuts(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ProBuilder::Shapes::Cylinder::__get_m_HeightCuts() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::Shapes::Cylinder::__set_m_Smooth(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::ProBuilder::Shapes::Cylinder::__get_m_Smooth() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::ProBuilder::Shapes::Cylinder::CopyShape(UnityEngine::ProBuilder::Shapes::Shape shape)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Cylinder>::get(),
                            "CopyShape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Shapes::Shape>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shape);
}
 UnityEngine::Bounds UnityEngine::ProBuilder::Shapes::Cylinder::UpdateBounds(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Vector3 size, UnityEngine::Quaternion rotation, UnityEngine::Bounds bounds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Cylinder>::get(),
                            "UpdateBounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Bounds>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Bounds, false>(const_cast<void*>(instance), ___internal_method, mesh, size, rotation, bounds);
}
 UnityEngine::Bounds UnityEngine::ProBuilder::Shapes::Cylinder::RebuildMesh(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Vector3 size, UnityEngine::Quaternion rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Cylinder>::get(),
                            "RebuildMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Bounds, false>(const_cast<void*>(instance), ___internal_method, mesh, size, rotation);
}
// Ctor Parameters []
 UnityEngine::ProBuilder::Shapes::Cylinder::Cylinder()  : UnityEngine::ProBuilder::Shapes::Shape(THROW_UNLESS(::il2cpp_utils::New<Cylinder>())) {}
 void UnityEngine::ProBuilder::Shapes::Cylinder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Cylinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
