#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__HumanPose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: UnityEngine::HumanPose.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::HumanPose::*)()>(&UnityEngine::HumanPose::Init)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2b20800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::HumanPose>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "bodyPosition", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "bodyRotation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "muscles", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::HumanPose::HumanPose(UnityEngine::Vector3 bodyPosition, UnityEngine::Quaternion bodyRotation, ::ArrayW<float_t> muscles) noexcept : ::bs_hook::ValueTypeWrapper() {this->bodyPosition = bodyPosition;
this->bodyRotation = bodyRotation;
this->muscles = muscles;
}
constexpr void UnityEngine::HumanPose::__set_bodyPosition(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x0>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::HumanPose::__get_bodyPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x0>(this->__instance);
}
constexpr void UnityEngine::HumanPose::__set_bodyRotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0xc>(this->__instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion UnityEngine::HumanPose::__get_bodyRotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0xc>(this->__instance);
}
constexpr void UnityEngine::HumanPose::__set_muscles(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x20>(this->__instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> UnityEngine::HumanPose::__get_muscles() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x20>(this->__instance);
}
 void UnityEngine::HumanPose::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::HumanPose>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
