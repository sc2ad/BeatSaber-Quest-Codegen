#pragma once
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__PointGenerator_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: UnityEngine::ProBuilder::Poly2Tri::PointGenerator.UniformDistribution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> (*)(int32_t, double_t)>(&UnityEngine::ProBuilder::Poly2Tri::PointGenerator::UniformDistribution)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x29a1fa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Poly2Tri::PointGenerator>::get(),
                            "UniformDistribution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::Poly2Tri::PointGenerator.UniformGrid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> (*)(int32_t, double_t)>(&UnityEngine::ProBuilder::Poly2Tri::PointGenerator::UniformGrid)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x29a2168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Poly2Tri::PointGenerator>::get(),
                            "UniformGrid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::Poly2Tri::PointGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::PointGenerator::*)()>(&UnityEngine::ProBuilder::Poly2Tri::PointGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a22f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Poly2Tri::PointGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::ProBuilder::Poly2Tri::PointGenerator::__set_RNG(System::Random value)  {
::cordl_internals::setStaticField<System::Random, "RNG", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Poly2Tri::PointGenerator>::get>(std::forward<System::Random>(value));
}
 System::Random UnityEngine::ProBuilder::Poly2Tri::PointGenerator::__get_RNG()  {
return ::cordl_internals::getStaticField<System::Random, "RNG", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Poly2Tri::PointGenerator>::get>();
}
 System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> UnityEngine::ProBuilder::Poly2Tri::PointGenerator::UniformDistribution(int32_t n, double_t scale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Poly2Tri::PointGenerator>::get(),
                            "UniformDistribution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint>, false>(nullptr, ___internal_method, n, scale);
}
 System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> UnityEngine::ProBuilder::Poly2Tri::PointGenerator::UniformGrid(int32_t n, double_t scale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Poly2Tri::PointGenerator>::get(),
                            "UniformGrid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint>, false>(nullptr, ___internal_method, n, scale);
}
 UnityEngine::ProBuilder::Poly2Tri::PointGenerator UnityEngine::ProBuilder::Poly2Tri::PointGenerator::New_ctor()  {
UnityEngine::ProBuilder::Poly2Tri::PointGenerator o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ProBuilder::Poly2Tri::PointGenerator>())};
return o;
}
 void UnityEngine::ProBuilder::Poly2Tri::PointGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Poly2Tri::PointGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
