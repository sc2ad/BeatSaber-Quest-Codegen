#pragma once
#include "UnityEngine/zzzz__AnimationEvent_def.hpp"
#include "UnityEngine/zzzz__AnimatorStateInfo_def.hpp"
#include "UnityEngine/zzzz__AnimatorClipInfo_def.hpp"
#include "UnityEngine/zzzz__AnimationState_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationEventSource_def.hpp"
//  Writing Method size for method: UnityEngine::AnimationEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimationEvent::*)()>(&UnityEngine::AnimationEvent::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b1aa98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AnimationEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::AnimationEvent::__set_m_Time(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::AnimationEvent::__get_m_Time() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AnimationEvent::__set_m_FunctionName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::AnimationEvent::__get_m_FunctionName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AnimationEvent::__set_m_StringParameter(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::AnimationEvent::__get_m_StringParameter() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AnimationEvent::__set_m_ObjectReferenceParameter(UnityEngine::Object value)  {
::cordl_internals::setInstanceField<UnityEngine::Object, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Object>(value));
}
constexpr UnityEngine::Object UnityEngine::AnimationEvent::__get_m_ObjectReferenceParameter() const {
return ::cordl_internals::getInstanceField<UnityEngine::Object, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AnimationEvent::__set_m_FloatParameter(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::AnimationEvent::__get_m_FloatParameter() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AnimationEvent::__set_m_IntParameter(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::AnimationEvent::__get_m_IntParameter() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AnimationEvent::__set_m_MessageOptions(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::AnimationEvent::__get_m_MessageOptions() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AnimationEvent::__set_m_Source(UnityEngine::AnimationEventSource value)  {
::cordl_internals::setInstanceField<UnityEngine::AnimationEventSource, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AnimationEventSource>(value));
}
constexpr UnityEngine::AnimationEventSource UnityEngine::AnimationEvent::__get_m_Source() const {
return ::cordl_internals::getInstanceField<UnityEngine::AnimationEventSource, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AnimationEvent::__set_m_StateSender(UnityEngine::AnimationState value)  {
::cordl_internals::setInstanceField<UnityEngine::AnimationState, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AnimationState>(value));
}
constexpr UnityEngine::AnimationState UnityEngine::AnimationEvent::__get_m_StateSender() const {
return ::cordl_internals::getInstanceField<UnityEngine::AnimationState, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AnimationEvent::__set_m_AnimatorStateInfo(UnityEngine::AnimatorStateInfo value)  {
::cordl_internals::setInstanceField<UnityEngine::AnimatorStateInfo, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AnimatorStateInfo>(value));
}
constexpr UnityEngine::AnimatorStateInfo UnityEngine::AnimationEvent::__get_m_AnimatorStateInfo() const {
return ::cordl_internals::getInstanceField<UnityEngine::AnimatorStateInfo, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AnimationEvent::__set_m_AnimatorClipInfo(UnityEngine::AnimatorClipInfo value)  {
::cordl_internals::setInstanceField<UnityEngine::AnimatorClipInfo, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AnimatorClipInfo>(value));
}
constexpr UnityEngine::AnimatorClipInfo UnityEngine::AnimationEvent::__get_m_AnimatorClipInfo() const {
return ::cordl_internals::getInstanceField<UnityEngine::AnimatorClipInfo, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 UnityEngine::AnimationEvent::AnimationEvent()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<AnimationEvent>())) {}
 void UnityEngine::AnimationEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AnimationEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
