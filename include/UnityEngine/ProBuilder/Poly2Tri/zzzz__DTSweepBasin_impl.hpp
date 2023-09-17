#pragma once
namespace {
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DTSweepBasin_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__AdvancingFrontNode_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a0a08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::__set_leftNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode>(value));
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode ::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::__get_leftNode() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::__set_bottomNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode>(value));
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode ::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::__get_bottomNode() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::__set_rightNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode>(value));
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode ::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::__get_rightNode() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::__set_width(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t ::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::__get_width() const {
return ::cordl_internals::getInstanceField<double_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::__set_leftHighest(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::__get_leftHighest() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::DTSweepBasin()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DTSweepBasin>())) {}
 void ::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
