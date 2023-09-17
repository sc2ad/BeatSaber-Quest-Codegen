#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/Animations/zzzz__AnimationStream_def.hpp"
// Ctor Parameters [CppParam { name: "m_AnimatorBindingsVersion", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "constant", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "input", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "output", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "workspace", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "inputStreamAccessor", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "animationHandleBinder", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Animations::AnimationStream::AnimationStream(uint32_t m_AnimatorBindingsVersion, ::cordl_internals::intptr_t constant, ::cordl_internals::intptr_t input, ::cordl_internals::intptr_t output, ::cordl_internals::intptr_t workspace, ::cordl_internals::intptr_t inputStreamAccessor, ::cordl_internals::intptr_t animationHandleBinder) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_AnimatorBindingsVersion = m_AnimatorBindingsVersion;
this->constant = constant;
this->input = input;
this->output = output;
this->workspace = workspace;
this->inputStreamAccessor = inputStreamAccessor;
this->animationHandleBinder = animationHandleBinder;
}
constexpr void ::UnityEngine::Animations::AnimationStream::__set_m_AnimatorBindingsVersion(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::Animations::AnimationStream::__get_m_AnimatorBindingsVersion() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::Animations::AnimationStream::__set_constant(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::UnityEngine::Animations::AnimationStream::__get_constant() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::Animations::AnimationStream::__set_input(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x10>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::UnityEngine::Animations::AnimationStream::__get_input() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::Animations::AnimationStream::__set_output(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x18>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::UnityEngine::Animations::AnimationStream::__get_output() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this->__instance);
}
constexpr void ::UnityEngine::Animations::AnimationStream::__set_workspace(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x20>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::UnityEngine::Animations::AnimationStream::__get_workspace() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x20>(this->__instance);
}
constexpr void ::UnityEngine::Animations::AnimationStream::__set_inputStreamAccessor(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x28>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::UnityEngine::Animations::AnimationStream::__get_inputStreamAccessor() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x28>(this->__instance);
}
constexpr void ::UnityEngine::Animations::AnimationStream::__set_animationHandleBinder(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x30>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::UnityEngine::Animations::AnimationStream::__get_animationHandleBinder() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x30>(this->__instance);
}
} // end anonymous namespace
