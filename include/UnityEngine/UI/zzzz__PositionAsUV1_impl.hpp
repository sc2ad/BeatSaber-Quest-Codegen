#pragma once
#include "UnityEngine/UI/zzzz__BaseMeshEffect_impl.hpp"
#include "UnityEngine/UI/zzzz__PositionAsUV1_def.hpp"
#include "UnityEngine/UI/zzzz__VertexHelper_def.hpp"
//  Writing Method size for method: UnityEngine::UI::PositionAsUV1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::PositionAsUV1::*)()>(&UnityEngine::UI::PositionAsUV1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c183cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::PositionAsUV1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::PositionAsUV1.ModifyMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::PositionAsUV1::*)(UnityEngine::UI::VertexHelper)>(&UnityEngine::UI::PositionAsUV1::ModifyMesh)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2c183d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::PositionAsUV1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::PositionAsUV1>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
 UnityEngine::UI::PositionAsUV1 UnityEngine::UI::PositionAsUV1::New_ctor()  {
UnityEngine::UI::PositionAsUV1 o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::UI::PositionAsUV1>())};
return o;
}
 void UnityEngine::UI::PositionAsUV1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::PositionAsUV1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::PositionAsUV1::ModifyMesh(UnityEngine::UI::VertexHelper vh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::PositionAsUV1>::get(),
                            "ModifyMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::VertexHelper>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, vh);
}
