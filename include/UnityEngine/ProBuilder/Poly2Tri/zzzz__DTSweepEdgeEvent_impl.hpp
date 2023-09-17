#pragma once
namespace {
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DTSweepEdgeEvent_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DTSweepConstraint_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a0b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::__set_ConstrainedEdge(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint>(value));
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint ::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::__get_ConstrainedEdge() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::__set_Right(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::__get_Right() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::DTSweepEdgeEvent()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DTSweepEdgeEvent>())) {}
 void ::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
