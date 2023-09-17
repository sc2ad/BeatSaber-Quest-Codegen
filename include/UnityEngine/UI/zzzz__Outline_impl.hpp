#pragma once
#include "UnityEngine/UI/zzzz__Shadow_impl.hpp"
namespace {
#include "UnityEngine/UI/zzzz__Outline_def.hpp"
#include "UnityEngine/UI/zzzz__VertexHelper_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::Outline._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Outline::*)()>(&::UnityEngine::UI::Outline::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c17784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Outline>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Outline.ModifyMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Outline::*)(::UnityEngine::UI::VertexHelper)>(&::UnityEngine::UI::Outline::ModifyMesh)> {
  constexpr static std::size_t size = 0xc40;
  constexpr static std::size_t addrs = 0x2c1778c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UI::Outline),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Outline>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::UnityEngine::UI::Outline::Outline()  : ::UnityEngine::UI::Shadow(THROW_UNLESS(::il2cpp_utils::New<Outline>())) {}
 void ::UnityEngine::UI::Outline::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Outline>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UI::Outline::ModifyMesh(::UnityEngine::UI::VertexHelper vh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Outline>::get(),
                            "ModifyMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, vh);
}
} // end anonymous namespace
