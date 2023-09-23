#pragma once
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_impl.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Cone_def.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
//  Writing Method size for method: UnityEngine::ProBuilder::Shapes::Cone.CopyShape
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Shapes::Cone::*)(UnityEngine::ProBuilder::Shapes::Shape)>(&UnityEngine::ProBuilder::Shapes::Cone::CopyShape)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x29f2170;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ProBuilder::Shapes::Cone),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Cone>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::Shapes::Cone.UpdateBounds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Bounds (UnityEngine::ProBuilder::Shapes::Cone::*)(UnityEngine::ProBuilder::ProBuilderMesh, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Bounds)>(&UnityEngine::ProBuilder::Shapes::Cone::UpdateBounds)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x29f21f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ProBuilder::Shapes::Cone),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Cone>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::Shapes::Cone.RebuildMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Bounds (UnityEngine::ProBuilder::Shapes::Cone::*)(UnityEngine::ProBuilder::ProBuilderMesh, UnityEngine::Vector3, UnityEngine::Quaternion)>(&UnityEngine::ProBuilder::Shapes::Cone::RebuildMesh)> {
  constexpr static std::size_t size = 0xc4c;
  constexpr static std::size_t addrs = 0x29f2368;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ProBuilder::Shapes::Cone),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Cone>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::Shapes::Cone._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Shapes::Cone::*)()>(&UnityEngine::ProBuilder::Shapes::Cone::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29f2fb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Cone>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ProBuilder::Shapes::Cone::__set_m_NumberOfSides(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ProBuilder::Shapes::Cone::__get_m_NumberOfSides() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::Shapes::Cone::__set_m_Radius(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::ProBuilder::Shapes::Cone::__get_m_Radius() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::Shapes::Cone::__set_m_Smooth(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::ProBuilder::Shapes::Cone::__get_m_Smooth() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::ProBuilder::Shapes::Cone::CopyShape(UnityEngine::ProBuilder::Shapes::Shape shape)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Cone>::get(),
                            "CopyShape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Shapes::Shape>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shape);
}
 UnityEngine::Bounds UnityEngine::ProBuilder::Shapes::Cone::UpdateBounds(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Vector3 size, UnityEngine::Quaternion rotation, UnityEngine::Bounds bounds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Cone>::get(),
                            "UpdateBounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Bounds>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Bounds, false>(const_cast<void*>(instance), ___internal_method, mesh, size, rotation, bounds);
}
 UnityEngine::Bounds UnityEngine::ProBuilder::Shapes::Cone::RebuildMesh(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Vector3 size, UnityEngine::Quaternion rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Cone>::get(),
                            "RebuildMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Bounds, false>(const_cast<void*>(instance), ___internal_method, mesh, size, rotation);
}
// Ctor Parameters []
 UnityEngine::ProBuilder::Shapes::Cone::Cone()  : UnityEngine::ProBuilder::Shapes::Shape(THROW_UNLESS(::il2cpp_utils::New<Cone>())) {}
 void UnityEngine::ProBuilder::Shapes::Cone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Cone>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
