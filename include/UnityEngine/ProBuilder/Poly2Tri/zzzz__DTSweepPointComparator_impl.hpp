#pragma once
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DTSweepPointComparator_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
//  Writing Method size for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator.Compare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint)>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator::Compare)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x29a13cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator::*)()>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a0b30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IComparer_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint>
constexpr  UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator::operator System::Collections::Generic::IComparer_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint>() const noexcept {
return System::Collections::Generic::IComparer_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint>(::bs_hook::Il2CppWrapperType::instance);
}
 int32_t UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator::Compare(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p1, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, p1, p2);
}
 UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator::New_ctor()  {
UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator>())};
return o;
}
 void UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
