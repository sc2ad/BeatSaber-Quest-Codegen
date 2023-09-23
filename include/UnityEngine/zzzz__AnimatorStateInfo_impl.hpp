#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__AnimatorStateInfo_def.hpp"
//  Writing Method size for method: UnityEngine::AnimatorStateInfo.get_normalizedTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::AnimatorStateInfo::*)()>(&UnityEngine::AnimatorStateInfo::get_normalizedTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b1abe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AnimatorStateInfo>::get(),
                            "get_normalizedTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_Name", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Path", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FullPath", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NormalizedTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Length", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Speed", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SpeedMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Tag", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Loop", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::AnimatorStateInfo::AnimatorStateInfo(int32_t m_Name, int32_t m_Path, int32_t m_FullPath, float_t m_NormalizedTime, float_t m_Length, float_t m_Speed, float_t m_SpeedMultiplier, int32_t m_Tag, int32_t m_Loop) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Name = m_Name;
this->m_Path = m_Path;
this->m_FullPath = m_FullPath;
this->m_NormalizedTime = m_NormalizedTime;
this->m_Length = m_Length;
this->m_Speed = m_Speed;
this->m_SpeedMultiplier = m_SpeedMultiplier;
this->m_Tag = m_Tag;
this->m_Loop = m_Loop;
}
constexpr void UnityEngine::AnimatorStateInfo::__set_m_Name(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::AnimatorStateInfo::__get_m_Name() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::AnimatorStateInfo::__set_m_Path(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::AnimatorStateInfo::__get_m_Path() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void UnityEngine::AnimatorStateInfo::__set_m_FullPath(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::AnimatorStateInfo::__get_m_FullPath() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void UnityEngine::AnimatorStateInfo::__set_m_NormalizedTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::AnimatorStateInfo::__get_m_NormalizedTime() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->__instance);
}
constexpr void UnityEngine::AnimatorStateInfo::__set_m_Length(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::AnimatorStateInfo::__get_m_Length() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->__instance);
}
constexpr void UnityEngine::AnimatorStateInfo::__set_m_Speed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::AnimatorStateInfo::__get_m_Speed() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->__instance);
}
constexpr void UnityEngine::AnimatorStateInfo::__set_m_SpeedMultiplier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::AnimatorStateInfo::__get_m_SpeedMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->__instance);
}
constexpr void UnityEngine::AnimatorStateInfo::__set_m_Tag(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::AnimatorStateInfo::__get_m_Tag() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->__instance);
}
constexpr void UnityEngine::AnimatorStateInfo::__set_m_Loop(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::AnimatorStateInfo::__get_m_Loop() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->__instance);
}
 float_t UnityEngine::AnimatorStateInfo::get_normalizedTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AnimatorStateInfo>::get(),
                            "get_normalizedTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
