#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProviderBehaviourFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags::ProviderBehaviourFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags  ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags::None{0};
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags  ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags::CanProvideWithFailedDependencies{1};
} // end anonymous namespace
