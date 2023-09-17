#pragma once
namespace {
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__PolygonGenerator_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__Polygon_def.hpp"
#include "System/zzzz__Random_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator.RandomCircleSweep
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::Polygon (*)(double_t, int32_t)>(&::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::RandomCircleSweep)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x29a2374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator>::get(),
                            "RandomCircleSweep",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator.RandomCircleSweep2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::Polygon (*)(double_t, int32_t)>(&::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::RandomCircleSweep2)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x29a2664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator>::get(),
                            "RandomCircleSweep2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a28c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::__set_RNG(::System::Random value)  {
::cordl_internals::setStaticField<::System::Random, "RNG", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator>::get>(std::forward<::System::Random>(value));
}
 ::System::Random ::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::__get_RNG()  {
return ::cordl_internals::getStaticField<::System::Random, "RNG", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator>::get>();
}
 void ::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::__set_PI_2(double_t value)  {
::cordl_internals::setStaticField<double_t, "PI_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator>::get>(std::forward<double_t>(value));
}
 double_t ::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::__get_PI_2()  {
return ::cordl_internals::getStaticField<double_t, "PI_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator>::get>();
}
 ::UnityEngine::ProBuilder::Poly2Tri::Polygon ::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::RandomCircleSweep(double_t scale, int32_t vertexCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator>::get(),
                            "RandomCircleSweep",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::Polygon, false>(nullptr, ___internal_method, scale, vertexCount);
}
 ::UnityEngine::ProBuilder::Poly2Tri::Polygon ::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::RandomCircleSweep2(double_t scale, int32_t vertexCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator>::get(),
                            "RandomCircleSweep2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::Polygon, false>(nullptr, ___internal_method, scale, vertexCount);
}
// Ctor Parameters []
 ::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::PolygonGenerator()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PolygonGenerator>())) {}
 void ::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
