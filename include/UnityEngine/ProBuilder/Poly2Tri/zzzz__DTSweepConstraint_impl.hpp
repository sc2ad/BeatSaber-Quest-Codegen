#pragma once
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationConstraint_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DTSweepConstraint_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint)>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x299ff7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint>::get()}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint::New_ctor(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p1, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p2)  {
UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint>(p1, p2))};
return o;
}
 void UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint::_ctor(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p1, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, p1, p2);
}
