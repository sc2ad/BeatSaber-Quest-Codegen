#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__StereoTargetEyeMask_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::StereoTargetEyeMask::StereoTargetEyeMask(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::StereoTargetEyeMask::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::StereoTargetEyeMask::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::StereoTargetEyeMask  ::UnityEngine::StereoTargetEyeMask::None{0};
constexpr ::UnityEngine::StereoTargetEyeMask  ::UnityEngine::StereoTargetEyeMask::Left{1};
constexpr ::UnityEngine::StereoTargetEyeMask  ::UnityEngine::StereoTargetEyeMask::Right{2};
constexpr ::UnityEngine::StereoTargetEyeMask  ::UnityEngine::StereoTargetEyeMask::Both{3};
} // end anonymous namespace
