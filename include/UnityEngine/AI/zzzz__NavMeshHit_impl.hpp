#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/AI/zzzz__NavMeshHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: UnityEngine::AI::NavMeshHit.get_position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::AI::NavMeshHit::*)()>(&UnityEngine::AI::NavMeshHit::get_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b07b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AI::NavMeshHit>::get(),
                            "get_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_Position", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Normal", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Distance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Mask", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Hit", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::AI::NavMeshHit::NavMeshHit(UnityEngine::Vector3 m_Position, UnityEngine::Vector3 m_Normal, float_t m_Distance, int32_t m_Mask, int32_t m_Hit) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Position = m_Position;
this->m_Normal = m_Normal;
this->m_Distance = m_Distance;
this->m_Mask = m_Mask;
this->m_Hit = m_Hit;
}
constexpr void UnityEngine::AI::NavMeshHit::__set_m_Position(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x0>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::AI::NavMeshHit::__get_m_Position() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x0>(this->__instance);
}
constexpr void UnityEngine::AI::NavMeshHit::__set_m_Normal(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xc>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::AI::NavMeshHit::__get_m_Normal() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xc>(this->__instance);
}
constexpr void UnityEngine::AI::NavMeshHit::__set_m_Distance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::AI::NavMeshHit::__get_m_Distance() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->__instance);
}
constexpr void UnityEngine::AI::NavMeshHit::__set_m_Mask(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::AI::NavMeshHit::__get_m_Mask() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->__instance);
}
constexpr void UnityEngine::AI::NavMeshHit::__set_m_Hit(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::AI::NavMeshHit::__get_m_Hit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->__instance);
}
 UnityEngine::Vector3 UnityEngine::AI::NavMeshHit::get_position()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AI::NavMeshHit>::get(),
                            "get_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
