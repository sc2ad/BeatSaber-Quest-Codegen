#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystemInternal_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystem_def.hpp"
// Ctor Parameters [CppParam { name: "type", ty: "::System::Type", modifiers: "", def_value: Some("csnull") }, CppParam { name: "updateDelegate", ty: "::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction", modifiers: "", def_value: Some("csnull") }, CppParam { name: "updateFunction", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "loopConditionFunction", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "numSubSystems", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LowLevel::PlayerLoopSystemInternal::PlayerLoopSystemInternal(::System::Type type, ::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction updateDelegate, ::cordl_internals::intptr_t updateFunction, ::cordl_internals::intptr_t loopConditionFunction, int32_t numSubSystems) noexcept : ::bs_hook::ValueTypeWrapper() {this->type = type;
this->updateDelegate = updateDelegate;
this->updateFunction = updateFunction;
this->loopConditionFunction = loopConditionFunction;
this->numSubSystems = numSubSystems;
}
constexpr void ::UnityEngine::LowLevel::PlayerLoopSystemInternal::__set_type(::System::Type value)  {
::cordl_internals::setInstanceField<::System::Type, 0x0>(this->__instance, std::forward<::System::Type>(value));
}
constexpr ::System::Type ::UnityEngine::LowLevel::PlayerLoopSystemInternal::__get_type() const {
return ::cordl_internals::getInstanceField<::System::Type, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::LowLevel::PlayerLoopSystemInternal::__set_updateDelegate(::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction value)  {
::cordl_internals::setInstanceField<::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction, 0x8>(this->__instance, std::forward<::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction>(value));
}
constexpr ::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction ::UnityEngine::LowLevel::PlayerLoopSystemInternal::__get_updateDelegate() const {
return ::cordl_internals::getInstanceField<::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::LowLevel::PlayerLoopSystemInternal::__set_updateFunction(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x10>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::UnityEngine::LowLevel::PlayerLoopSystemInternal::__get_updateFunction() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::LowLevel::PlayerLoopSystemInternal::__set_loopConditionFunction(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x18>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::UnityEngine::LowLevel::PlayerLoopSystemInternal::__get_loopConditionFunction() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this->__instance);
}
constexpr void ::UnityEngine::LowLevel::PlayerLoopSystemInternal::__set_numSubSystems(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::LowLevel::PlayerLoopSystemInternal::__get_numSubSystems() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->__instance);
}
} // end anonymous namespace
