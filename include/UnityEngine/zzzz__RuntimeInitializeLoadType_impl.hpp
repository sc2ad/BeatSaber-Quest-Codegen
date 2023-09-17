#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__RuntimeInitializeLoadType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RuntimeInitializeLoadType::RuntimeInitializeLoadType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::RuntimeInitializeLoadType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::RuntimeInitializeLoadType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::RuntimeInitializeLoadType  ::UnityEngine::RuntimeInitializeLoadType::AfterSceneLoad{0};
constexpr ::UnityEngine::RuntimeInitializeLoadType  ::UnityEngine::RuntimeInitializeLoadType::BeforeSceneLoad{1};
constexpr ::UnityEngine::RuntimeInitializeLoadType  ::UnityEngine::RuntimeInitializeLoadType::AfterAssembliesLoaded{2};
constexpr ::UnityEngine::RuntimeInitializeLoadType  ::UnityEngine::RuntimeInitializeLoadType::BeforeSplashScreen{3};
constexpr ::UnityEngine::RuntimeInitializeLoadType  ::UnityEngine::RuntimeInitializeLoadType::SubsystemRegistration{4};
} // end anonymous namespace
