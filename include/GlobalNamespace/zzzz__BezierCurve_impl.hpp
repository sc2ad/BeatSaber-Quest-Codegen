#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__BezierCurve_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: GlobalNamespace::BezierCurve._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierCurve::*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3)>(&GlobalNamespace::BezierCurve::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x20ab564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierCurve>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "p0", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "p1", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "p2", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "p3", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::BezierCurve::BezierCurve(UnityEngine::Vector3 p0, UnityEngine::Vector3 p1, UnityEngine::Vector3 p2, UnityEngine::Vector3 p3) noexcept : ::bs_hook::ValueTypeWrapper() {this->p0 = p0;
this->p1 = p1;
this->p2 = p2;
this->p3 = p3;
}
constexpr void GlobalNamespace::BezierCurve::__set_p0(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x0>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::BezierCurve::__get_p0() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::BezierCurve::__set_p1(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xc>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::BezierCurve::__get_p1() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xc>(this->__instance);
}
constexpr void GlobalNamespace::BezierCurve::__set_p2(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x18>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::BezierCurve::__get_p2() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x18>(this->__instance);
}
constexpr void GlobalNamespace::BezierCurve::__set_p3(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x24>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::BezierCurve::__get_p3() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x24>(this->__instance);
}
 void GlobalNamespace::BezierCurve::_ctor(UnityEngine::Vector3 p0, UnityEngine::Vector3 p1, UnityEngine::Vector3 p2, UnityEngine::Vector3 p3)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierCurve>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, p0, p1, p2, p3);
}
