#pragma once
#include "System/zzzz__NotImplementedException_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__PointOnEdgeException_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::*)(::StringW, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint)>(&UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x299fa9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::__set_A(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint value)  {
::cordl_internals::setInstanceField<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint>(value));
}
constexpr UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::__get_A() const {
return ::cordl_internals::getInstanceField<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::__set_B(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint value)  {
::cordl_internals::setInstanceField<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint>(value));
}
constexpr UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::__get_B() const {
return ::cordl_internals::getInstanceField<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::__set_C(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint value)  {
::cordl_internals::setInstanceField<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint>(value));
}
constexpr UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::__get_C() const {
return ::cordl_internals::getInstanceField<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::New_ctor(::StringW message, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint a, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint b, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint c)  {
UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException>(message, a, b, c))};
return o;
}
 void UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::_ctor(::StringW message, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint a, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint b, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message, a, b, c);
}
