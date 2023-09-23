#pragma once
#include "UnityEngine/ProBuilder/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: UnityEngine::ProBuilder::RaycastHit._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::RaycastHit::*)(float_t, UnityEngine::Vector3, UnityEngine::Vector3, int32_t)>(&UnityEngine::ProBuilder::RaycastHit::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x29cf058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::RaycastHit>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ProBuilder::RaycastHit::__set_distance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::ProBuilder::RaycastHit::__get_distance() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::RaycastHit::__set_point(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::ProBuilder::RaycastHit::__get_point() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::RaycastHit::__set_normal(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::ProBuilder::RaycastHit::__get_normal() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::RaycastHit::__set_face(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ProBuilder::RaycastHit::__get_face() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "point", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "normal", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "face", ty: "int32_t", modifiers: "", def_value: None }]
 UnityEngine::ProBuilder::RaycastHit::RaycastHit(float_t distance, UnityEngine::Vector3 point, UnityEngine::Vector3 normal, int32_t face)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<RaycastHit>(distance, point, normal, face))) {}
 void UnityEngine::ProBuilder::RaycastHit::_ctor(float_t distance, UnityEngine::Vector3 point, UnityEngine::Vector3 normal, int32_t face)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::RaycastHit>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, distance, point, normal, face);
}
