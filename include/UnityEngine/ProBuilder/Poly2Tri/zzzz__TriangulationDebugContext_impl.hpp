#pragma once
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationDebugContext_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationContext_def.hpp"
//  Writing Method size for method: UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext)>(&UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x29a1358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Poly2Tri::TriangulationContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::*)()>(&UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::__set__tcx(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext value)  {
::cordl_internals::setInstanceField<UnityEngine::ProBuilder::Poly2Tri::TriangulationContext, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ProBuilder::Poly2Tri::TriangulationContext>(value));
}
constexpr UnityEngine::ProBuilder::Poly2Tri::TriangulationContext UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::__get__tcx() const {
return ::cordl_internals::getInstanceField<UnityEngine::ProBuilder::Poly2Tri::TriangulationContext, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::New_ctor(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext tcx)  {
UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext>(tcx))};
return o;
}
 void UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::_ctor(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext tcx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Poly2Tri::TriangulationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tcx);
}
 void UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
