#pragma once
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_impl.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: UnityEngine::ProBuilder::Shapes::Sprite.CopyShape
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Shapes::Sprite::*)(UnityEngine::ProBuilder::Shapes::Shape)>(&UnityEngine::ProBuilder::Shapes::Sprite::CopyShape)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29f9500;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ProBuilder::Shapes::Sprite),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Sprite>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::Shapes::Sprite.RebuildMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Bounds (UnityEngine::ProBuilder::Shapes::Sprite::*)(UnityEngine::ProBuilder::ProBuilderMesh, UnityEngine::Vector3, UnityEngine::Quaternion)>(&UnityEngine::ProBuilder::Shapes::Sprite::RebuildMesh)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x29f9504;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ProBuilder::Shapes::Sprite),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Sprite>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::Shapes::Sprite._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Shapes::Sprite::*)()>(&UnityEngine::ProBuilder::Shapes::Sprite::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29f9830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Sprite>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::ProBuilder::Shapes::Sprite::CopyShape(UnityEngine::ProBuilder::Shapes::Shape shape)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Sprite>::get(),
                            "CopyShape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Shapes::Shape>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shape);
}
 UnityEngine::Bounds UnityEngine::ProBuilder::Shapes::Sprite::RebuildMesh(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Vector3 size, UnityEngine::Quaternion rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Sprite>::get(),
                            "RebuildMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Bounds, false>(const_cast<void*>(instance), ___internal_method, mesh, size, rotation);
}
// Ctor Parameters []
 UnityEngine::ProBuilder::Shapes::Sprite::Sprite()  : UnityEngine::ProBuilder::Shapes::Shape(THROW_UNLESS(::il2cpp_utils::New<Sprite>())) {}
 void UnityEngine::ProBuilder::Shapes::Sprite::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Shapes::Sprite>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
