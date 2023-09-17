#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/Playables/zzzz__PlayableTraversalMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Playables::PlayableTraversalMode::PlayableTraversalMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::Playables::PlayableTraversalMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Playables::PlayableTraversalMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::Playables::PlayableTraversalMode  ::UnityEngine::Playables::PlayableTraversalMode::Mix{0};
constexpr ::UnityEngine::Playables::PlayableTraversalMode  ::UnityEngine::Playables::PlayableTraversalMode::Passthrough{1};
} // end anonymous namespace
