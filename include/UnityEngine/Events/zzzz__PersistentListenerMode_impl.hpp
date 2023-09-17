#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/Events/zzzz__PersistentListenerMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Events::PersistentListenerMode::PersistentListenerMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::Events::PersistentListenerMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Events::PersistentListenerMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::Events::PersistentListenerMode  ::UnityEngine::Events::PersistentListenerMode::EventDefined{0};
constexpr ::UnityEngine::Events::PersistentListenerMode  ::UnityEngine::Events::PersistentListenerMode::Void{1};
constexpr ::UnityEngine::Events::PersistentListenerMode  ::UnityEngine::Events::PersistentListenerMode::Object{2};
constexpr ::UnityEngine::Events::PersistentListenerMode  ::UnityEngine::Events::PersistentListenerMode::Int{3};
constexpr ::UnityEngine::Events::PersistentListenerMode  ::UnityEngine::Events::PersistentListenerMode::Float{4};
constexpr ::UnityEngine::Events::PersistentListenerMode  ::UnityEngine::Events::PersistentListenerMode::String{5};
constexpr ::UnityEngine::Events::PersistentListenerMode  ::UnityEngine::Events::PersistentListenerMode::Bool{6};
} // end anonymous namespace
