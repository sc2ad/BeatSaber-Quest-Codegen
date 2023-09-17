#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/Playables/zzzz__DirectorWrapMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Playables::DirectorWrapMode::DirectorWrapMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::Playables::DirectorWrapMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Playables::DirectorWrapMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::Playables::DirectorWrapMode  ::UnityEngine::Playables::DirectorWrapMode::Hold{0};
constexpr ::UnityEngine::Playables::DirectorWrapMode  ::UnityEngine::Playables::DirectorWrapMode::Loop{1};
constexpr ::UnityEngine::Playables::DirectorWrapMode  ::UnityEngine::Playables::DirectorWrapMode::None{2};
} // end anonymous namespace
